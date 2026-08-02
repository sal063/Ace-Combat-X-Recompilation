#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804128  0x08804128..0x08804234  268 bytes, source=sweep */
void func_08804128(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804128u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x02070000u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    c->r[4] = c->r[3] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x0880414cu; c->r[16] = c->r[5] + 0u; hle_dispatch_stub(c, ram, 0x08a247acu); /* sceKernelSetCompiledSdkVersion */ }
    c->r[2] = 0x00030000u;
    { c->r[31] = 0x08804158u; c->r[4] = c->r[2] | 0x0306u; hle_dispatch_stub(c, ram, 0x08a247c4u); /* sceKernelSetCompilerVersion */ }
    c->r[4] = 0x00000000u;
    c->r[2] = c->r[4] + 0x00000000u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_08804228; }
L_08804168:
    c->r[6] = 0x00000000u;
    c->r[7] = c->r[6] + 0x00000000u;
    { int _c = (c->r[7] == 0u); c->r[3] = 0x08a50000u; if (_c) goto L_08804214; }
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
L_0880417c:
    c->r[3] = 0x00000000u;
    c->r[9] = c->r[3] + 0x00000000u;
    if (c->r[9] == 0u) { c->r[3] = 0x08a50000u; goto L_08804200; }
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
L_08804190:
    c->r[7] = c->r[2] << 10;
L_08804194:
    c->r[3] = 0x00000000u;
    c->r[11] = c->r[3] + 0x00000000u;
    { int _c = (c->r[11] == 0u); c->r[12] = 0x80000000u; if (_c) goto L_088041e4; }
    c->r[13] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[8] = c->r[13] | c->r[12];
L_088041ac:
    c->r[24] = 0x08800000u;
    c->r[5] = c->r[24] + 0x00004234u;
    { c->r[31] = 0x088041bcu; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x088041ccu; c->r[6] = c->r[16] + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_088041e4:
    c->r[3] = 0x00000000u;
    c->r[14] = c->r[3] + 0x00000000u;
    { int _c = (c->r[14] == 0u); c->r[8] = 0x80000000u; if (_c) goto L_088041ac; }
    c->r[15] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[8] = c->r[15] | c->r[8]; goto L_088041ac; }
L_08804200:
    c->r[10] = c->r[3] + 0x00001e90u;
    { int _c = (c->r[10] == 0u); c->r[7] = 0x00040000u; if (_c) goto L_08804194; }
    { c->r[2] = mem_r32(ram, c->r[3] + 0x00001e90u); goto L_08804190; }
L_08804214:
    c->r[8] = c->r[3] + 0x00001e88u;
    { int _c = (c->r[8] == 0u); c->r[6] = 0u + 0x00000020u; if (_c) goto L_0880417c; }
    { c->r[6] = mem_r32(ram, c->r[3] + 0x00001e88u); goto L_0880417c; }
L_08804228:
    c->r[5] = 0x08a40000u;
    { c->r[4] = c->r[5] + 0xffffe5f8u; goto L_08804168; }
    return; /* fell out of func_08804128 */
}

/* func_08806a1c  0x08806a1c..0x08806a6c  80 bytes, source=sweep */
void func_08806a1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806a1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08806a38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08806a48u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08806a58u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806a1c */
}

/* func_0880755c  0x0880755c..0x0880757c  32 bytes, source=sweep */
void func_0880755c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880755cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880755c */
}

/* func_088083cc  0x088083cc..0x0880843c  112 bytes, source=fde */
void func_088083cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088083ccu);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[10]);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[11]);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[2] = c->r[2] + 0xffffffe4u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880841cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1f410(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08808428u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a2479cu); /* sceKernelPrintf */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_088083cc */
}

/* func_0880b1a0  0x0880b1a0..0x0880b1dc  60 bytes, source=fde */
void func_0880b1a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b1a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0880b1c8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8d54(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880b1a0 */
}

/* func_0880d5b0  0x0880d5b0..0x0880d5d0  32 bytes, source=sweep */
void func_0880d5b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d5b0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0880d5b0 */
}

/* func_0880f03c  0x0880f03c..0x0880f094  88 bytes, source=fde */
void func_0880f03c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880f03cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0880f074u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880f03c */
}

/* func_08812508  0x08812508..0x088125ac  164 bytes, source=fde */
void func_08812508(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812508u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812528u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812538u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff128u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08812550u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812558u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812564u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812574u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff138u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0881258cu; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812594u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08812508 */
}

/* func_088151c4  0x088151c4..0x088153d8  532 bytes, source=fde */
void func_088151c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088151c4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088152a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881525cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000002cu);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08815284u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[3] + 0x00000043u, c->r[2]); goto L_088152ac; }
L_088152a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000043u, c->r[2]);
L_088152ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088152ccu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088153c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088152e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08814784(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088152f4u; c->r[5] = 0u + 0x00000002u; func_08814994(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003d55u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003d54u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2ccu);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003d50u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003d48u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00003d56u, c->r[2]);
    c->r[2] = 0u + 0x00000017u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00003d4cu, c->r[2]);
    c->r[2] = 0u + 0x000000cdu;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00003d4eu, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00003d58u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08815378u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d38u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff2bcu;
    { c->r[31] = 0x08815390u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000050u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088153bcu; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
L_088153c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088151c4 */
}

/* func_08819ba8  0x08819ba8..0x08819bec  68 bytes, source=sweep */
void func_08819ba8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819ba8u);
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
    { c->r[31] = 0x08819bd8u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819ba8 */
}

/* func_0881fa6c  0x0881fa6c..0x0881fc98  556 bytes, source=fde */
void func_0881fa6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881fa6cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881fac0; }
    { goto L_0881fc84; }
L_0881fac0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000018au;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881fad8u; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000141u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fb00u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881fb94; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fb18u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881fb94; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fb30u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881fb44u; c->r[6] = 0u + 0x00000003u; func_08820ea4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881fb94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000023u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_0881fb94:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fba0u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881fc3c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fbb8u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881fc24; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fbd4u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881fc24; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fbf0u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881fc24; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881fc0cu; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881fc24; }
    { goto L_0881fc3c; }
L_0881fc24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0881fc3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881fc54; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0881fc54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0881fc64u; c->r[6] = 0u + 0x00000002u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0881fc74u; c->r[6] = 0u + 0x00000002u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000f00u;
    { c->r[31] = 0x0881fc84u; c->r[6] = 0u + 0x00000002u; func_08930208(c, ram); }
L_0881fc84:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0881fa6c */
}

/* func_08824b9c  0x08824b9c..0x08824c38  156 bytes, source=sweep */
void func_08824b9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824b9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[3]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824bd4; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08824bd4:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824bf0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e46u);
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[2]);
L_08824bf0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000210cu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08824b9c */
}

/* func_08826d24  0x08826d24..0x08826d4c  40 bytes, source=sweep */
void func_08826d24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826d24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b90u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826d24 */
}

/* func_08829e00  0x08829e00..0x08829fb0  432 bytes, source=fde */
void func_08829e00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08829e00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829e2c; }
    { goto L_08829f9c; }
L_08829e2c:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829ee8; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08829e4cu; c->r[4] = c->r[4] + 0x00001658u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00003f24u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x0000161cu;
    { c->r[31] = 0x08829e70u; c->r[8] = 0u + 0x00001585u; func_089cdef8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x08829ea4u; c->r[6] = c->r[6] + 0x00003f24u; func_089da230(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x08829ebcu; c->r[6] = c->r[6] + 0x00003fa4u; func_089da274(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000011u;
    c->r[7] = 0x08a80000u;
    { c->r[31] = 0x08829ed8u; c->r[7] = c->r[7] + 0x00003fdcu; func_089da2b8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    { c->r[31] = 0x08829ee8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d9ec8(c, ram); }
L_08829ee8:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08829f90; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08829f08u; c->r[4] = c->r[4] + 0x00000a40u; func_089da31c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829f60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829f30; }
    { goto L_08829f4c; }
L_08829f30:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829f44u; c->r[5] = c->r[5] + 0xffff9fb0u; func_0880f03c(c, ram); }
    { goto L_08829f60; }
L_08829f4c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829f60u; c->r[5] = c->r[5] + 0xffff9d28u; func_0880f03c(c, ram); }
L_08829f60:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ee8u);
    c->r[2] = 0x08830000u;
    c->r[2] = c->r[2] + 0xffff9fb0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829f90; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003fa4u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00003fdcu;
    { c->r[31] = 0x08829f90u; c->r[6] = 0u + 0x00000022u; func_08a19db8(c, ram); }
L_08829f90:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08829f9cu; c->r[5] = 0u + 0u; func_0882adfc(c, ram); }
L_08829f9c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08829e00 */
}

/* func_0882ea84  0x0882ea84..0x0882eaac  40 bytes, source=sweep */
void func_0882ea84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882ea84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000012cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882ea84 */
}

/* func_08831578  0x08831578..0x08831690  280 bytes, source=fde */
void func_08831578(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831578u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883167c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088315d4; }
    { c->r[31] = 0x088315d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0883138c(c, ram); }
L_088315d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088315ec; }
    { c->r[31] = 0x088315ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088313c8(c, ram); }
L_088315ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08831604; }
    { c->r[31] = 0x08831604u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08831418(c, ram); }
L_08831604:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883161c; }
    { c->r[31] = 0x0883161cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08831454(c, ram); }
L_0883161c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08831634; }
    { c->r[31] = 0x08831634u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08831490(c, ram); }
L_08831634:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883164c; }
    { c->r[31] = 0x0883164cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088314b0(c, ram); }
L_0883164c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08831664; }
    { c->r[31] = 0x08831664u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088314ec(c, ram); }
L_08831664:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883167c; }
    { c->r[31] = 0x0883167cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0883153c(c, ram); }
L_0883167c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08831578 */
}

/* func_088335e0  0x088335e0..0x08833760  384 bytes, source=fde */
void func_088335e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088335e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
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
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833640u; c->r[5] = 0u + 0x00000007u; func_08937a50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000002du, 0u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x000046a5u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x000046a4u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001958u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x000046a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833684u; c->r[5] = 0u + 0u; func_0882fb00(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004698u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x000046a6u, c->r[2]);
    c->r[2] = 0u + 0x00000017u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x0000469cu, c->r[2]);
    c->r[2] = 0u + 0x000000cdu;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x0000469eu, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x000046a8u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004688u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088336d0u; c->r[5] = c->r[5] + 0x0000194cu; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004698u);
    c->r[2] = c->r[2] + 0xffffde9au;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000050u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088336fcu; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08833720u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000004cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883373cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088335e0 */
}

/* func_088359a0  0x088359a0..0x08835a68  200 bytes, source=fde */
void func_088359a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088359a0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088359c8u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    { c->r[31] = 0x088359d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08831578(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088359dcu; c->r[5] = 0u + 0u; func_0882f778(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088359ecu; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088359fcu; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08835a0cu; c->r[4] = c->r[2] + 0u; func_089383f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08835a24u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08835a2cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08835a38u; c->r[4] = c->r[2] + 0u; func_0893a590(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x08835a54u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088359a0 */
}

/* func_0883a7a8  0x0883a7a8..0x0883a838  144 bytes, source=fde */
void func_0883a7a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a7a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0883a7bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883a7d4; }
    { goto L_0883a824; }
L_0883a7d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000048b4u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000048c8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x0883a814u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0883a7bc; }
L_0883a824:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883a7a8 */
}

/* func_0883c880  0x0883c880..0x0883cb08  648 bytes, source=fde */
void func_0883c880(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c880u);
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
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883ca1c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c8ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c914; }
    { goto L_0883caf0; }
L_0883c8ec:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883caf0; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883caa8; }
    { goto L_0883caf0; }
L_0883c914:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0883c934u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000002u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0883c954u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c9d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c98c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000003u);
    mem_w8(ram, c->r[2] + 0x00000002u, c->r[3]);
L_0883c98c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c9b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
L_0883c9b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c9d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000007u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
L_0883c9d4:
    { c->r[31] = 0x0883c9dcu; func_0880f27c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883c9f0u; c->r[5] = c->r[5] + 0xffffcb08u; func_0880f094(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883c9fcu; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff52cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004e30u, c->r[2]); goto L_0883caf0; }
L_0883ca1c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883ca28u; c->r[4] = c->r[4] + 0x00004e10u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883caf0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e38u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883ca64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883ca5cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0883caf0; }
L_0883ca64:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0883ca78u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883caa0u; c->r[6] = c->r[3] + 0u; func_08813280(c, ram); }
    { goto L_0883caf0; }
L_0883caa8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001d80u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0883cac0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x0883cac8u; func_08902ea0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    { c->r[31] = 0x0883cad8u; c->r[5] = 0u + 0x00000001u; func_08901e54(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883cae4u; c->r[4] = c->r[4] + 0x00004e10u; func_0880f188(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0883caf0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0883caf0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0883c880 */
}

/* func_088461a4  0x088461a4..0x088461e0  60 bytes, source=sweep */
void func_088461a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088461a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000344u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000344u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088461a4 */
}

/* func_0884a144  0x0884a144..0x0884b8f0  6060 bytes, source=fde */
void func_0884a144(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884a144u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0884a180u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0884a1a0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = (c->r[3] < 0x00000024u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b8d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002534u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0884a1f8u: goto L_0884a1f8; case 0x0884a960u: goto L_0884a960; case 0x0884b0e8u: goto L_0884b0e8; case 0x0884b198u: goto L_0884b198; case 0x0884b838u: goto L_0884b838; case 0x0884b8d8u: goto L_0884b8d8; default: recomp_trap_unknown_indirect(c, ram, 0x0884a1f0u, _t); return; } }
L_0884a1f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884a6b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f8u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884a260; }
    { goto L_0884a2b8; }
L_0884a260:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[1] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[1]); goto L_0884a2c4; }
L_0884a2b8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
L_0884a2c4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f8u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884a324; }
    { goto L_0884a37c; }
L_0884a324:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[1] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[1]); goto L_0884a388; }
L_0884a37c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
L_0884a388:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f8u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884a3e8; }
    { goto L_0884a440; }
L_0884a3e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024f8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[1] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[1]); goto L_0884a44c; }
L_0884a440:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
L_0884a44c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002504u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002508u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000250cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002510u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884a4b4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    { mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]); goto L_0884a4b8; }
L_0884a4b4:
    mem_w32(ram, c->r[30] + 0x000000e4u, 0u);
L_0884a4b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[1]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884a4f4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000024fcu);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
L_0884a4f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884a528; }
    { goto L_0884a534; }
L_0884a528:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]); goto L_0884a538; }
L_0884a534:
    mem_w32(ram, c->r[30] + 0x000000f0u, 0u);
L_0884a538:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884a558; }
    { goto L_0884a564; }
L_0884a558:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    { mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[1]); goto L_0884a568; }
L_0884a564:
    mem_w32(ram, c->r[30] + 0x000000f4u, 0u);
L_0884a568:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884a588; }
    { goto L_0884a594; }
L_0884a588:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    { mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]); goto L_0884a598; }
L_0884a594:
    mem_w32(ram, c->r[30] + 0x000000f8u, 0u);
L_0884a598:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[15] = u2f(0u);
    c->f[16] = mem_rf32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x0884a5c0u; c->f[17] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_089b5ce8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f24u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a658; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884a620; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8930u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0884a618u; c->r[7] = 0u + 0u; func_0884d994(c, ram); }
    { goto L_0884a658; }
L_0884a620:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002514u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8930u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0884a658u; c->r[7] = 0u + 0u; func_0884d994(c, ram); }
L_0884a658:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884a6cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]);
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884a6cc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x31000000u;
    c->r[5] = c->r[5] | 0x004cu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0884a6acu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_0884a6cc; }
L_0884a6b4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002514u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0884a6ccu; c->r[5] = 0u + 0u; func_089b80a8(c, ram); }
L_0884a6cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884a84c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884a71c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
L_0884a71c:
    { c->r[31] = 0x0884a724u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0007u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a84c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002518u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000251cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0884a798u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002518u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000251cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0884a7c4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0884a7f0u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884a804u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002520u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0884a824u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x00000056u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0884a84cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
L_0884a84c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b8d8; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000023a4u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000023a8u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000023acu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000023b0u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000023b4u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_0884a8a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a8c4; }
    { goto L_0884b8d8; }
L_0884a8c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884a8e0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a950; }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0884a900u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x0884a92cu; func_0884c4f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884a938u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000064u); func_089b9be8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u);
    { c->r[31] = 0x0884a950u; c->r[6] = c->r[2] + 0u; func_0884c314(c, ram); }
L_0884a950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_0884a8a0; }
L_0884a960:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a978; }
    { goto L_0884b8d8; }
L_0884a978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007740u;
    c->r[2] = c->r[2] + 0xffffff90u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0884a9bcu; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884aacc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884aacc; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0884a9f8u; c->r[4] = c->r[4] + 0x000023b8u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884aa0cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000184u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002524u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000180u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x0884aa60u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884aa70u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884aa84u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000060u); func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_0884aacc:
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x0884aad8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884aaecu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u);
    { c->r[31] = 0x0884ab04u; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0884ab10u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884ab24u; c->r[5] = c->r[3] + 0u; func_0884ce9c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    mem_wf32(ram, c->r[2] + 0x0000004cu, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0884ab68u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000050u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002528u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0884aba0u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884af38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884abc4u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884abd8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884abe8u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884abfcu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884ac10u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ac20u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0300u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884af38; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002528u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884ac60; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002514u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
L_0884ac60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884accc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffbffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0884accc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884ad04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    { c->r[31] = 0x0884ad04u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u); func_089b46d4(c, ram); }
L_0884ad04:
    mem_w32(ram, c->r[30] + 0x000000d0u, 0u);
L_0884ad08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884ad24; }
    { goto L_0884ad58; }
L_0884ad24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x0884ad48u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u); func_089b5804(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]); goto L_0884ad08; }
L_0884ad58:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884ada4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884ad7cu; c->r[5] = c->r[5] + 0x000023c8u; func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x0884ada4u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u); func_089b5804(c, ram); }
L_0884ada4:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884adfc; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884adfc; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884adfc; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884adfc; }
    { goto L_0884ae8c; }
L_0884adfc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884ae0cu; c->r[5] = c->r[5] + 0x000023d0u; func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884ae1cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000d0u); func_089b9be8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884ae5c; }
    { goto L_0884ae64; }
L_0884ae5c:
    { mem_w32(ram, c->r[30] + 0x00000108u, 0u); goto L_0884ae70; }
L_0884ae64:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002514u);
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
L_0884ae70:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_0884ae8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884aee4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884aec8; }
    { goto L_0884aee4; }
L_0884aec8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000252cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_0884aee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884af38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884af1c; }
    { goto L_0884af38; }
L_0884af1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000252cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_0884af38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884aff8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0884af64u; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffff8540u;
    { c->r[31] = 0x0884af78u; c->r[6] = 0u + 0u; func_08878994(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d0u, 0u);
L_0884af7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884af94; }
    { goto L_0884aff8; }
L_0884af94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff85a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0884afbcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884afe8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w8(ram, c->r[2] + 0x000000c9u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884afe8u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000d4u); func_0884cc18(c, ram); }
L_0884afe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]); goto L_0884af7c; }
L_0884aff8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b074; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = (c->r[2] < 0x000000fbu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b03c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x000000c8u, c->r[2]); goto L_0884b048; }
L_0884b03c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000c8u, c->r[2]);
L_0884b048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884b074; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
L_0884b074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b8d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b0b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    { mem_w8(ram, c->r[3] + 0x000000c8u, c->r[2]); goto L_0884b0bc; }
L_0884b0b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c8u, 0u);
L_0884b0bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b8d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b0e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b8d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0884b114u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[16] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002530u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884b13cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884b158u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002500u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0884b184u; c->r[7] = 0u + 0x0000000bu; func_089c510c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0884b190u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0884b8d8; }
L_0884b198:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b1a8u; c->r[5] = c->r[5] + 0x000023d8u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b258; }
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    mem_w32(ram, c->r[30] + 0x000000b4u, 0u);
    mem_w32(ram, c->r[30] + 0x000000b8u, 0u);
    mem_w32(ram, c->r[30] + 0x000000bcu, 0u);
    mem_w32(ram, c->r[30] + 0x000000c0u, 0u);
    mem_w32(ram, c->r[30] + 0x000000c4u, 0u);
    mem_w32(ram, c->r[30] + 0x000000c8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002528u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000250cu);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0u + 0x0000004bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b250u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b258:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b268u; c->r[5] = c->r[5] + 0x000023e4u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b2a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c8u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b2a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b2b8u; c->r[5] = c->r[5] + 0x000023f0u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b2fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000c8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b2fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b30cu; c->r[5] = c->r[5] + 0x000023fcu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b338; }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b330u; c->r[9] = 0u + 0x00000003u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b338:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b348u; c->r[5] = c->r[5] + 0x00002408u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b374; }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b36cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b374:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b384u; c->r[5] = c->r[5] + 0x00002414u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b3b0; }
    c->r[4] = 0u + 0x00000052u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b3a8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b3b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b3c0u; c->r[5] = c->r[5] + 0x00002420u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b408; }
    c->r[4] = 0u + 0x00000053u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b3e4u; c->r[9] = 0u + 0x00000001u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b8d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007b20u);
    { mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]); goto L_0884b8d8; }
L_0884b408:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b418u; c->r[5] = c->r[5] + 0x0000242cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b444; }
    c->r[4] = 0u + 0x00000058u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b43cu; c->r[9] = 0u + 0x00000002u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b444:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b454u; c->r[5] = c->r[5] + 0x00002434u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b490; }
    c->r[4] = 0u + 0x00000058u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b478u; c->r[9] = 0u + 0x00000003u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000013cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0884b8d8; }
L_0884b490:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b4a0u; c->r[5] = c->r[5] + 0x0000243cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b4d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000013cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b8d8; }
    { c->r[31] = 0x0884b4ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000d4u); func_08957f9c(c, ram); }
    { goto L_0884b8d8; }
L_0884b4d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b4e4u; c->r[5] = c->r[5] + 0x00002448u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b508; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_0884b8d8; }
L_0884b508:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b518u; c->r[5] = c->r[5] + 0x00002454u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b544; }
    c->r[4] = 0u + 0x00000052u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b53cu; c->r[9] = 0u + 0x00000003u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b544:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b554u; c->r[5] = c->r[5] + 0x00002460u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b580; }
    c->r[4] = 0u + 0x00000052u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b578u; c->r[9] = 0u + 0x00000002u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b580:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b590u; c->r[5] = c->r[5] + 0x0000246cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b5bc; }
    c->r[4] = 0u + 0x00000050u;
    c->r[5] = 0u + 0x00000449u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b5b4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_0884b8d8; }
L_0884b5bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b5ccu; c->r[5] = c->r[5] + 0x0000247cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b5ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b5e4u; c->r[5] = c->r[5] + 0x00002488u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b654; }
L_0884b5ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b5fcu; c->r[5] = c->r[5] + 0x0000247cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b624; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x31000000u;
    c->r[5] = c->r[5] | 0x0046u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0884b624u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_0884b624:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffdffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0100u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b654:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b664u; c->r[5] = c->r[5] + 0x00002494u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b684; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b67cu; c->r[5] = c->r[5] + 0x000024a0u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b6d8; }
L_0884b684:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b694u; c->r[5] = c->r[5] + 0x00002494u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b6a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000078u;
    mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]);
L_0884b6a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffeffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0600u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b6d8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b6e8u; c->r[5] = c->r[5] + 0x000024acu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884b708; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b700u; c->r[5] = c->r[5] + 0x000024b8u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b738; }
L_0884b708:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0xfffffdffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0500u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b738:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b748u; c->r[5] = c->r[5] + 0x000024c4u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b768; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0800u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b768:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b778u; c->r[5] = c->r[5] + 0x000024d0u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b7b0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b7a8u; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
    { goto L_0884b8d8; }
L_0884b7b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b7c0u; c->r[5] = c->r[5] + 0x000024d8u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b7f4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884b7ecu; c->r[5] = 0u + 0x00000020u; func_0884d1ec(c, ram); }
    { goto L_0884b8d8; }
L_0884b7f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b804u; c->r[5] = c->r[5] + 0x000024e4u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b8d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000cau);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[3] + 0x000000cau, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0010u;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_0884b8d8; }
L_0884b838:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884b854u; c->r[5] = c->r[5] + 0x000024ecu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b8d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x0884b884u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a191d4(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x0884b8a0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a191d4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884b8c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x0884b8bcu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a191d4(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_0884b8cc; }
L_0884b8c4:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000110u, c->r[2]);
L_0884b8cc:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000110u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
L_0884b8d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_0884a144 */
}

/* func_0884d178  0x0884d178..0x0884d1b0  56 bytes, source=sweep */
void func_0884d178(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d178u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    { c->r[31] = 0x0884d19cu; c->r[4] = c->r[2] + 0u; func_0884d314(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d178 */
}

/* func_0884fb18  0x0884fb18..0x0884fcb4  412 bytes, source=fde */
void func_0884fb18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884fb18u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884fb64; }
    c->r[2] = 0u + 0x00000017u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0884fb64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884fc18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000c4u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb6c0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000c6u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb6c4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884fc18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884fc18; }
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u);
    { c->r[31] = 0x0884fc04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u); func_08a1af70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884fc18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000064u); func_08a1af70(c, ram); }
L_0884fc18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884fc34; }
    c->r[2] = 0u + 0x0000001au;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0884fc34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884fca0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    { c->r[31] = 0x0884fc58u; c->r[5] = c->r[2] + 0u; func_0885a908(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    { c->r[31] = 0x0884fc6cu; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0884fc90; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884fc90u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0885a864(c, ram); }
L_0884fc90:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    { c->r[31] = 0x0884fca0u; c->r[5] = 0u + 0x00000002u; func_0885ab78(c, ram); }
L_0884fca0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0884fb18 */
}

/* func_08854d5c  0x08854d5c..0x0885525c  1280 bytes, source=fde */
void func_08854d5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854d5cu);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08854eac; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff90c8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854de0; }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff90ccu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08854de0; }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff90d0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08854de0; }
    { goto L_08854e60; }
L_08854de0:
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08854decu; mem_w32(ram, c->r[1] + 0xffff90c8u, 0u); func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854e0c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a48u);
    { mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]); goto L_08854e18; }
L_08854e0c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a4cu);
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
L_08854e18:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08854e28u; mem_wf32(ram, c->r[1] + 0xffff90ccu, c->f[0]); func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854e48; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a50u);
    { mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]); goto L_08854e54; }
L_08854e48:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a54u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
L_08854e54:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90d0u, c->f[0]);
L_08854e60:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08854e6cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08886934(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff90c4u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08854e98; }
    { goto L_08854fd8; }
L_08854e98:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a58u);
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffff90ccu, c->f[0]); goto L_08854fd8; }
L_08854eac:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08854ed0; }
    { goto L_08854fd8; }
L_08854ed0:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a5cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08854ef0u; mem_wf32(ram, c->r[1] + 0xffff8c74u, c->f[0]); func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854f10; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a48u);
    { mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]); goto L_08854f1c; }
L_08854f10:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a4cu);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
L_08854f1c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90ccu, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff90d0u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a60u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08854f54; }
    { goto L_08854f98; }
L_08854f54:
    { c->r[31] = 0x08854f5cu; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854f7c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a50u);
    { mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]); goto L_08854f88; }
L_08854f7c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a54u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
L_08854f88:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffff90d0u, c->f[0]); goto L_08854fd8; }
L_08854f98:
    { c->r[31] = 0x08854fa0u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854fc0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a64u);
    { mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]); goto L_08854fcc; }
L_08854fc0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a68u);
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
L_08854fcc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90d0u, c->f[0]);
L_08854fd8:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08854fe4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[1] = 0x08a90000u;
    c->f[12] = mem_rf32(ram, c->r[1] + 0xffff90d0u);
    c->r[1] = 0x08a90000u;
    c->f[13] = mem_rf32(ram, c->r[1] + 0xffff90ccu);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08855008u; func_0885a0b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x08855014u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08855028u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08855040u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a6cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08855070u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08855088u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff90d0u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a60u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088550b4; }
    { goto L_088550c4; }
L_088550b4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a70u);
    { mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]); goto L_088550d0; }
L_088550c4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a74u);
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
L_088550d0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088550f0u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf40u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf44u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf48u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf4cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf50u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf54u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf58u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a78u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08855214; }
    { c->r[31] = 0x0885520cu; func_08857bac(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]); goto L_08855220; }
L_08855214:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a7cu);
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
L_08855220:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002a80u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[12] = c->f[0];
    { c->r[31] = 0x08855244u; c->r[4] = 0u + 0u; func_08857860(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_08854d5c */
}

/* func_08859c70  0x08859c70..0x08859d48  216 bytes, source=fde */
void func_08859c70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859c70u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859cb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859cb4; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08859cb4u; c->r[4] = c->r[4] + 0xffff8ca0u; func_08808240(c, ram); }
L_08859cb4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859ce0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859ce0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08859ce0u; c->r[4] = c->r[4] + 0xffff8cb0u; func_08808240(c, ram); }
L_08859ce0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859d0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859d0c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08859d0cu; c->r[4] = c->r[4] + 0xffff8ce0u; func_0884d0f8(c, ram); }
L_08859d0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859d34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08859d34; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08859d34u; c->r[4] = c->r[4] + 0xffff8ce0u; func_0884d178(c, ram); }
L_08859d34:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859c70 */
}

/* func_0885a9a0  0x0885a9a0..0x0885a9ec  76 bytes, source=sweep */
void func_0885a9a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a9a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a9a0 */
}

/* func_0885d15c  0x0885d15c..0x0885d1fc  160 bytes, source=fde */
void func_0885d15c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885d15cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000063au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000014b0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885d190u; c->r[6] = 0u + 0x00000808u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000146cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001cb8u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885d1b0u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00001480u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001cccu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885d1d0u; c->r[6] = 0u + 0x0000000au; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000030u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885d15c */
}

/* func_08861c24  0x08861c24..0x08861c68  68 bytes, source=sweep */
void func_08861c24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861c24u);
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
    { c->r[31] = 0x08861c54u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861c24 */
}

/* func_08862c8c  0x08862c8c..0x08862cb4  40 bytes, source=sweep */
void func_08862c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862c8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862c8c */
}

/* func_08867774  0x08867774..0x08867798  36 bytes, source=sweep */
void func_08867774(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08867774u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb950u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08867774 */
}

/* func_0886eee4  0x0886eee4..0x0886f0c0  476 bytes, source=fde */
void func_0886eee4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886eee4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886ef18u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { c->r[31] = 0x0886ef20u; c->r[4] = c->r[2] + 0u; func_088bf688(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886ef30u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886ef40u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x0886ef4cu; c->r[5] = c->r[2] + 0u; func_088bf6ec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0886ef54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886ef6c; }
    { goto L_0886efc0; }
L_0886ef6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe54u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886ef94u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886efb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0886efb0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0886efb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0886ef54; }
L_0886efc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886f008; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886f008; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886f008; }
    { goto L_0886f0a8; }
L_0886f008:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x00000043u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886f028u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886f058; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886f048u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbe54u, c->r[2]);
L_0886f058:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x00000043u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886f078u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886f0a8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886f098u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbe58u, c->r[2]);
L_0886f0a8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0886eee4 */
}

/* func_08873bb4  0x08873bb4..0x0887415c  1448 bytes, source=fde */
void func_08873bb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08873bb4u);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003774u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08873c3c; }
L_08873c0c:
    { c->r[31] = 0x08873c14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08873c0c; }
L_08873c3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003778u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873c6c; }
    { goto L_08873cc4; }
L_08873c6c:
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003778u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08873ca0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_08873d04; }
L_08873cc4:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08873ce4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08873d04:
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08873d24u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000005cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x08873d84u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000080u, 0u);
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_08873d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08873da4; }
    { goto L_08874010; }
L_08873da4:
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08873db0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08873dc8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[4] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08873de8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003774u);
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08873e00u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08873e14u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003778u);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08873e78; }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873e70u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    { goto L_08873e98; }
L_08873e78:
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[5] = c->r[30] + 0x000000b0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08873e98u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
L_08873e98:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003778u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003774u);
    mem_wf32(ram, c->r[30] + 0x00000118u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08873f14u; c->r[4] = c->r[2] + 0u; func_089c88c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08874000; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08873fdc; }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873f48u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000377cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000130u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873f84; }
    { goto L_08874000; }
L_08873f84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] & 0x0020u;
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000130u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000118u);
    { mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); goto L_08874000; }
L_08873fdc:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000003eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a4u, 0u);
L_08874000:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_08873d8c; }
L_08874010:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003780u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08874034; }
    { goto L_08874144; }
L_08874034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08874144; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000080u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088740a0; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08874084; }
    { goto L_08874144; }
L_08874084:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_08874144; }
L_088740a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088740acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08874144; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000c0u, 0u);
    c->r[2] = 0u + 0x00000003u;
    mem_w16(ram, c->r[30] + 0x000000beu, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    mem_w16(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088740ecu; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088740fcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_0884bff4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887412c; }
    { goto L_08874144; }
L_0887412c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_08874144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_08873bb4 */
}

/* func_0887d560  0x0887d560..0x0887d60c  172 bytes, source=indirect */
void func_0887d560(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887d560u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d5fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887d5ac; }
    { goto L_0887d5fc; }
L_0887d5ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0887d5d4; }
    { goto L_0887d5e4; }
L_0887d5d4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)fabsf(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_0887d5f0; }
L_0887d5e4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003968u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_0887d5f0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x000000f8u, c->f[0]);
L_0887d5fc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887d560 */
}

/* func_088819b0  0x088819b0..0x08881a90  224 bytes, source=fde */
void func_088819b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088819b0u);
    c->r[29] = c->r[29] + 0xfffffde0u;
    mem_w32(ram, c->r[29] + 0x00000214u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000210u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbee0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088819dcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088819f4; }
    { goto L_08881a7c; }
L_088819f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00003a80u;
    { c->r[31] = 0x08881a28u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08881a34u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00003a90u;
    { c->r[31] = 0x08881a54u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08881a5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089b7544(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08881a7cu; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
L_08881a7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000214u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000210u);
    { c->r[29] = c->r[29] + 0x00000220u; return; }
    return; /* fell out of func_088819b0 */
}

/* func_08885b34  0x08885b34..0x08885ba0  108 bytes, source=fde */
void func_08885b34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08885b34u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[4] = 0u + 0x0000002cu;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08885b84u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08885b34 */
}

/* func_0888bb68  0x0888bb68..0x0888bc60  248 bytes, source=sweep */
void func_0888bb68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888bb68u);
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
    { c->r[31] = 0x0888bbe4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
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
    { c->r[31] = 0x0888bc18u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bc44u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    { c->r[31] = 0x0888bc4cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0888bc60(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888bb68 */
}

/* func_0888c714  0x0888c714..0x0888c850  316 bytes, source=sweep */
void func_0888c714(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c714u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888c76c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c76cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
L_0888c76c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888c7c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c79cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c7c0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
L_0888c7c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888c814; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c7f0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c814u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
L_0888c814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c83cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888c714 */
}

/* func_0888d494  0x0888d494..0x0888d4c4  48 bytes, source=sweep */
void func_0888d494(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d494u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0888d4b0u; c->r[5] = 0u | 0xffffu; func_0888b5e0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0888d494 */
}

/* func_08890404  0x08890404..0x088904ac  168 bytes, source=sweep */
void func_08890404(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08890404u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = 0u | 0xd840u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x0889044cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088953ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889046c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + 0x00000010u;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
L_0889046c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08890494; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08890494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08890404 */
}

/* func_088953ac  0x088953ac..0x08895400  84 bytes, source=sweep */
void func_088953ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088953acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088953ac */
}

/* func_08899c88  0x08899c88..0x08899d58  208 bytes, source=sweep */
void func_08899c88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899c88u);
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
    return; /* fell out of func_08899c88 */
}

/* func_0889aab4  0x0889aab4..0x0889d9d0  12060 bytes, source=fde */
void func_0889aab4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889aab4u);
L_0889aab4:
    c->r[29] = c->r[29] + 0xfffffcf0u;
    mem_w32(ram, c->r[29] + 0x000002f8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002f4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000002f0u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000300u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000002e8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002e8u);
    c->r[2] = (c->r[3] < 0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889d9b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002e8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000430cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0889aab4u: goto L_0889aab4; case 0x0889ab20u: goto L_0889ab20; case 0x0889adf4u: goto L_0889adf4; case 0x0889c074u: goto L_0889c074; case 0x0889c090u: goto L_0889c090; case 0x0889c88cu: goto L_0889c88c; case 0x0889d9b4u: goto L_0889d9b4; default: recomp_trap_unknown_indirect(c, ram, 0x0889ab18u, _t); return; } }
L_0889ab20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffeda0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ab44u; c->r[5] = 0u + 0x00000004u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ab50u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00080000u;
    { c->r[31] = 0x0889ab60u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0889ab74u; c->r[5] = c->r[5] + 0x000042b0u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889ac58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006898u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006790u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000691cu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006814u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000069a0u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000069d0u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000069d8u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff880u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000069e0u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a28u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a40u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff884u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a58u;
    { mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_0889ade8; }
L_0889ac58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000010cu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000190u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000214u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000244u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000024cu;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000254u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000258u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000634u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000064cu;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000694u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000069cu;
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000664u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000067cu;
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x000006a4u;
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x000006acu;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x000006b4u;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000bd8u;
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000c00u;
    mem_w32(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb640u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb644u, c->f[0]);
L_0889ade8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x0000005cu, 0u); goto L_0889d9b4; }
L_0889adf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889ae1c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889ae1c; }
    { goto L_0889d9b4; }
L_0889ae1c:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0889ae20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889ae38; }
    { goto L_0889b0dc; }
L_0889ae38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff380u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[7] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[6] + 0u;
    c->f[12] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889aef0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff430u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[7] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[6] + 0u;
    c->f[12] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889af84u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff4e0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[7] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[6] + 0u;
    c->f[12] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b018u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff590u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[7] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[6] + 0u;
    c->f[12] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b0acu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0889ae20; }
L_0889b0dc:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b120u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7bcu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b194u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7dcu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[5] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b208u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7acu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[5] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b27cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7ccu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b2f0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7ecu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b364u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff7fcu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b3d8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff800u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff804u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff808u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff80cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b44cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff810u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff814u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff818u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff81cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b4c0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff830u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff834u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff838u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff83cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b534u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff840u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff844u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff848u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff84cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b5a8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff850u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff854u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff858u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff85cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889b61cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff860u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff864u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff868u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xfffff86cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000005du, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889b658:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889b670; }
    { goto L_0889b6c4; }
L_0889b670:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889b6c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000005du, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889b658; }
L_0889b6c4:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889b6c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889b6e0; }
    { goto L_0889b8a4; }
L_0889b6e0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042ccu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0889b71cu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    { c->r[31] = 0x0889b784u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006738u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x0889b7c8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000044u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006738u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x0889b804u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[16] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006738u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x0889b834u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000044u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006738u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006738u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889b6c8; }
L_0889b8a4:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889b8a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889b8c0; }
    { goto L_0889ba9c; }
L_0889b8c0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042ccu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0889b8fcu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    { c->r[31] = 0x0889b968u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[3] = 0u + 0x00000019u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000673cu);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889b9b0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[3] = 0u + 0x00000019u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000673cu);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889b9f0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[16] + 0x0000000cu, c->f[0]);
    c->r[3] = 0u + 0x00000019u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000673cu);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889ba24u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000010u, c->f[0]);
    c->r[3] = 0u + 0x00000019u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000673cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = 0u + 0x00000019u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000673cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889b8a8; }
L_0889ba9c:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889baa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889bab8; }
    { goto L_0889beb8; }
L_0889bab8:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0889babc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889bad4; }
    { goto L_0889bea8; }
L_0889bad4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042ccu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0889bb10u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000024u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    { c->r[31] = 0x0889bbf8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    { c->r[31] = 0x0889bc04u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889bc54u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000004cu); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889bc9cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[16] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889bcd8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000004cu); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x0889bd24u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000004cu); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x0889bd70u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[16] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x0889bdb0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000004cu); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0889babc; }
L_0889bea8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889baa0; }
L_0889beb8:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889bebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889bed4; }
    { goto L_0889bf7c; }
L_0889bed4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006760u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006760u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006760u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006760u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889bebc; }
L_0889bf7c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0889bfb4u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000058u, c->f[0]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0889bff4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0889c000u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0889c014u; c->r[5] = c->r[5] + 0x000042b8u; func_089c35a0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0x00001890u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff890u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = f2u(c->f[1]);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[9] = f2u(c->f[0]);
    { c->r[31] = 0x0889c064u; func_0889fe8c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000005cu, c->r[2]); goto L_0889d9b4; }
L_0889c074:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffeda0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889d9b4; }
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffeda0u, 0u); goto L_0889d9b4; }
L_0889c090:
    { c->r[31] = 0x0889c098u; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c10c; }
    { goto L_0889c118; }
L_0889c10c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    { mem_wf32(ram, c->r[30] + 0x00000280u, c->f[0]); goto L_0889c120; }
L_0889c118:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    mem_wf32(ram, c->r[30] + 0x00000280u, c->f[1]);
L_0889c120:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000280u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c148; }
    { goto L_0889c154; }
L_0889c148:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    { mem_wf32(ram, c->r[30] + 0x00000284u, c->f[0]); goto L_0889c15c; }
L_0889c154:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    mem_wf32(ram, c->r[30] + 0x00000284u, c->f[1]);
L_0889c15c:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000284u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    mem_wf32(ram, c->r[2] + 0x00000054u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889c1a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889c1b8; }
    { goto L_0889c258; }
L_0889c1b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff640u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff380u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff430u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0889c200u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_088a0088(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff6f0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff4e0u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff590u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0889c248u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_088a0088(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889c1a0; }
L_0889c258:
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffedf4u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000288u, c->r[2]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff640u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000028cu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e0u);
    mem_wf32(ram, c->r[30] + 0x00000294u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000028cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000294u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c2b8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000028cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000290u, c->f[0]); goto L_0889c2dc; }
L_0889c2b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000028cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000294u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000290u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000290u, c->r[3]);
L_0889c2dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000288u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000298u, c->r[2]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff644u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000029cu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e0u);
    mem_wf32(ram, c->r[30] + 0x000002a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000029cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002a4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c340; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000029cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002a0u, c->f[0]); goto L_0889c364; }
L_0889c340:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000029cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002a4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002a0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002a0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002a0u, c->r[3]);
L_0889c364:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000298u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000002a8u, c->r[2]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff648u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002acu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e0u);
    mem_wf32(ram, c->r[30] + 0x000002b4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002acu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002b4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c3c8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002acu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002b0u, c->f[0]); goto L_0889c3ec; }
L_0889c3c8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002acu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002b4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002b0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[3]);
L_0889c3ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002a8u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889c414u; c->r[4] = c->r[4] + 0xfffff790u; func_0888d9b8(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffeffcu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0889c424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889c43c; }
    { goto L_0889c6a0; }
L_0889c43c:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0889c440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889c458; }
    { goto L_0889c690; }
L_0889c458:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffedf4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0889c4b0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff6f0u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff640u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0889c4e8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_088a0088(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x000002b8u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002bcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e0u);
    mem_wf32(ram, c->r[30] + 0x000002c4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002bcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002c4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c538; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002c0u, c->f[0]); goto L_0889c55c; }
L_0889c538:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002bcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002c4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002c0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002c0u, c->r[3]);
L_0889c55c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b8u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000002c8u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002ccu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e0u);
    mem_wf32(ram, c->r[30] + 0x000002d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002ccu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002d4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c5bc; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002ccu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002d0u, c->f[0]); goto L_0889c5e0; }
L_0889c5bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002ccu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002d4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002d0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002d0u, c->r[3]);
L_0889c5e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002d0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002c8u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000002d8u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042dcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002dcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e0u);
    mem_wf32(ram, c->r[30] + 0x000002e4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002dcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002e4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889c640; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002dcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002e0u, c->f[0]); goto L_0889c664; }
L_0889c640:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002dcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002e4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002e0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002e0u, c->r[3]);
L_0889c664:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002e0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002d8u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0889c440; }
L_0889c690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889c424; }
L_0889c6a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    { c->r[31] = 0x0889c6b0u; c->r[4] = c->r[2] + 0u; func_0889d9d0(c, ram); }
    { c->r[31] = 0x0889c6b8u; func_08867774(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000028u);
    { c->r[31] = 0x0889c6d0u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000020u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    { c->r[31] = 0x0889c700u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_08859e90(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042e8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0889c78cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0889c798u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff7a0u;
    c->r[6] = 0x08a90000u;
    c->r[6] = c->r[6] + 0xfffff7b0u;
    { c->r[31] = 0x0889c7b8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_088a0088(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff7c0u;
    c->r[6] = 0x08a90000u;
    c->r[6] = c->r[6] + 0xfffff7d0u;
    { c->r[31] = 0x0889c7d8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_088a0088(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb660u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0889c7f8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000058u); func_088a0088(c, ram); }
    c->r[2] = 0x08a70000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb660u);
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb650u, c->r[2]);
    c->r[2] = 0x08a70000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb664u);
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb654u, c->r[2]);
    c->r[2] = 0x08a70000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb668u);
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb658u, c->r[2]);
    c->r[2] = 0x08a70000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb66cu);
    c->r[1] = 0x08a70000u;
    { c->r[31] = 0x0889c83cu; mem_w32(ram, c->r[1] + 0xffffb65cu, c->r[2]); func_08847534(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889d9b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb640u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a70000u;
    { mem_wf32(ram, c->r[1] + 0xffffb644u, c->f[0]); goto L_0889d9b4; }
L_0889c88c:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0889c898u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0889c8a4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff7f0u;
    c->r[6] = 0x08a90000u;
    c->r[6] = c->r[6] + 0xfffff7e0u;
    { c->r[31] = 0x0889c8c8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000054u); func_088a0088(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff810u;
    c->r[6] = 0x08a90000u;
    c->r[6] = c->r[6] + 0xfffff800u;
    { c->r[31] = 0x0889c8ecu; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000054u); func_088a0088(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0889c8f8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    { c->r[31] = 0x0889c9a0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000005cu); func_08a0f5bc(c, ram); }
    c->f[20] = c->f[0];
    { c->r[31] = 0x0889c9acu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08a0f5bc(c, ram); }
    c->f[0] = c->f[20] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    { c->r[31] = 0x0889c9bcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    { c->r[31] = 0x0889c9c8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000005cu); func_08a0f760(c, ram); }
    c->f[20] = c->f[0];
    { c->r[31] = 0x0889c9d4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08a0f5bc(c, ram); }
    c->f[0] = -c->f[0];
    c->f[0] = c->f[20] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889c9f8u; c->r[5] = c->r[3] + 0u; func_0888d4c4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0889ca18u; c->r[6] = c->r[3] + 0u; func_089e6684(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889cbdc; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0889ca40u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x0889ca4cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff840u;
    c->r[6] = 0x08a90000u;
    c->r[6] = c->r[6] + 0xfffff830u;
    { c->r[31] = 0x0889ca70u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000054u); func_088a0088(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xfffff860u;
    c->r[6] = 0x08a90000u;
    c->r[6] = c->r[6] + 0xfffff850u;
    { c->r[31] = 0x0889ca94u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000054u); func_088a0088(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x0889caa0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    { c->r[31] = 0x0889cb48u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u); func_08a0f5bc(c, ram); }
    c->f[20] = c->f[0];
    { c->r[31] = 0x0889cb54u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_08a0f5bc(c, ram); }
    c->f[0] = c->f[20] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    { c->r[31] = 0x0889cb64u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    { c->r[31] = 0x0889cb70u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u); func_08a0f760(c, ram); }
    c->f[20] = c->f[0];
    { c->r[31] = 0x0889cb7cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_08a0f5bc(c, ram); }
    c->f[0] = -c->f[0];
    c->f[0] = c->f[20] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x000000acu, 0u);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889cba0u; c->r[5] = c->r[3] + 0u; func_0888d4c4(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0889cbc0u; c->r[6] = c->r[3] + 0u; func_089e68e0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0889cbd4u; c->r[6] = 0u + 0x00000001u; func_0889fe08(c, ram); }
    { goto L_0889cbf0; }
L_0889cbdc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0889cbf0u; c->r[6] = 0u + 0x00000001u; func_0889fe08(c, ram); }
L_0889cbf0:
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x0889cbfcu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    { c->r[31] = 0x0889cc08u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    { c->r[31] = 0x0889cc14u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x0889cc20u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000001b0u;
    { c->r[31] = 0x0889cc2cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c4u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0889cc50u; mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]); func_08820f58(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042ecu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889cc84; }
    { goto L_0889cc90; }
L_0889cc84:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    { mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]); goto L_0889ccc0; }
L_0889cc90:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042f0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889ccb4; }
    { goto L_0889ccc0; }
L_0889ccb4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042f0u);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
L_0889ccc0:
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x0889ccd8u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000054u); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x000001b0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x0889ccf0u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000054u); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x000001f0u;
    { c->r[31] = 0x0889ccfcu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000058u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042f4u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889cd24; }
    { goto L_0889cd38; }
L_0889cd24:
    { c->r[31] = 0x0889cd2cu; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    { mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]); goto L_0889cd64; }
L_0889cd38:
    { c->r[31] = 0x0889cd40u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000058u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_0889cd64:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0889cd98u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0889cdacu; c->r[5] = c->r[5] + 0xffffbf60u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889cdd0; }
    { goto L_0889ce4c; }
L_0889cdd0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889cdf4; }
    { goto L_0889ce4c; }
L_0889cdf4:
    { c->r[31] = 0x0889cdfcu; func_08820f58(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042fcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889ce20; }
    { goto L_0889ce4c; }
L_0889ce20:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042c8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004300u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_0889ce4c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004304u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = c->r[30] + 0x000001f0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    { c->r[31] = 0x0889ce88u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000054u); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000230u;
    { c->r[31] = 0x0889ce94u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000230u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0889ceb4u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000054u); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0889ced4u; func_0880d140(c, ram); }
    { c->r[31] = 0x0889cedcu; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = -c->f[0];
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0889cf04u; func_0880d140(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004308u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889cf28; }
    { goto L_0889cf34; }
L_0889cf28:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004308u);
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
L_0889cf34:
    c->r[3] = c->r[30] + 0x00000270u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042d0u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0889cf6cu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000270u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889cf84u; c->r[5] = c->r[3] + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x00000270u;
    c->r[6] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889cf9cu; c->r[5] = c->r[3] + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[3] = c->r[30] + 0x00000270u;
    c->r[6] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889cfb4u; c->r[5] = c->r[3] + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000270u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffedb0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0889cfd0u; c->r[6] = c->r[3] + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889cfe8u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[6] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889d000u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[3] = c->r[30] + 0x000001f0u;
    c->r[6] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889d018u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889d038; }
    { goto L_0889d06c; }
L_0889d038:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000042f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889d05c; }
    { goto L_0889d06c; }
L_0889d05c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000164u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000164u, c->f[0]);
L_0889d06c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d0b4u; c->r[5] = 0u + 0x00000007u; func_0889e9a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d0fcu; c->r[5] = 0u + 0x0000000au; func_0889e9a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d144u; c->r[5] = 0u + 0x00000001u; func_0889eabc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d18cu; c->r[5] = 0u + 0x00000001u; func_0889e8f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d1d4u; c->r[5] = 0u + 0x00000001u; func_0889e930(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d21cu; c->r[5] = 0u + 0x00000009u; func_0889e968(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000010u;
    c->r[9] = 0x08a50000u;
    { c->r[31] = 0x0889d278u; c->r[9] = c->r[9] + 0x00006770u; func_0889e8a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d2ccu; c->r[8] = 0u + 0u; func_0889eb0c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889d31cu; c->r[6] = c->r[3] + 0u; func_0889e9e0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000673cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x00000032u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0889d38cu; c->r[10] = mem_r32(ram, c->r[2] + 0x00000000u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889d3dcu; c->r[6] = c->r[3] + 0u; func_0889e9e0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x0000001au;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0x08a50000u;
    { c->r[31] = 0x0889d43cu; c->r[10] = mem_r32(ram, c->r[10] + 0x00006738u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x00000032u;
    c->r[8] = c->r[2] + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0x08a50000u;
    { c->r[31] = 0x0889d4a8u; c->r[10] = mem_r32(ram, c->r[10] + 0x00006740u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889d4f8u; c->r[6] = c->r[3] + 0u; func_0889e9e0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x0000001au;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0x08a50000u;
    { c->r[31] = 0x0889d558u; c->r[10] = mem_r32(ram, c->r[10] + 0x0000673cu); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[2] = 0u + 0x00000008u;
    c->r[8] = c->r[2] - c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006740u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x00000032u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0889d5d4u; c->r[10] = mem_r32(ram, c->r[2] + 0x00000000u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d61cu; c->r[5] = 0u + 0u; func_0889eabc(c, ram); }
    { c->r[31] = 0x0889d624u; func_088a0618(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0x00001890u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0889d644u; c->f[12] = c->f[0]; func_0889ff5c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d68cu; c->r[5] = 0u + 0x00000007u; func_0889e968(c, ram); }
    c->r[5] = 0x08b90000u;
    c->r[5] = c->r[5] + 0x0000070cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000710u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000704u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000704u, c->r[2]);
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000704u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[4];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffedf0u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889d764u; c->r[6] = c->r[3] + 0u; func_0889e9e0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000673cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x00000032u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0889d7d4u; c->r[10] = mem_r32(ram, c->r[2] + 0x00000000u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889d824u; c->r[6] = c->r[3] + 0u; func_0889e9e0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005du);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x00000032u;
    c->r[8] = c->r[2] + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0x08a50000u;
    { c->r[31] = 0x0889d890u; c->r[10] = mem_r32(ram, c->r[10] + 0x00006740u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889d8e0u; c->r[6] = c->r[3] + 0u; func_0889e9e0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x0000019eu;
    c->r[7] = 0u + 0x00000032u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0x08a50000u;
    { c->r[31] = 0x0889d940u; c->r[10] = mem_r32(ram, c->r[10] + 0x00006760u); func_0889e840(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889d984u; c->r[4] = c->r[2] + 0u; func_0889e80c(c, ram); }
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
L_0889d9b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002f8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002f4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000002f0u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000300u);
    { c->r[29] = c->r[29] + 0x00000310u; return; }
    return; /* fell out of func_0889aab4 */
}

/* func_0889f75c  0x0889f75c..0x0889f7a0  68 bytes, source=sweep */
void func_0889f75c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f75cu);
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
    { c->r[31] = 0x0889f78cu; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f75c */
}

/* func_088a3428  0x088a3428..0x088a3470  72 bytes, source=sweep */
void func_088a3428(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3428u);
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
    { c->r[31] = 0x088a345cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088a3950(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a3428 */
}

/* func_088a44f0  0x088a44f0..0x088a4554  100 bytes, source=sweep */
void func_088a44f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a44f0u);
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
    { c->r[31] = 0x088a4540u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a44f0 */
}

/* func_088add78  0x088add78..0x088addbc  68 bytes, source=sweep */
void func_088add78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088add78u);
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
    { c->r[31] = 0x088adda8u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088add78 */
}

/* func_088b222c  0x088b222c..0x088b2264  56 bytes, source=sweep */
void func_088b222c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b222cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x9b000000u;
    { c->r[31] = 0x088b2250u; c->r[5] = c->r[5] | 0x0001u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b222c */
}

/* func_088b43c4  0x088b43c4..0x088b44b0  236 bytes, source=sweep */
void func_088b43c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b43c4u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[15]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088b43f4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088b440cu; c->f[14] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088b4418u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088b4430u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u); func_0885a0b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b4448u; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf30u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf34u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf38u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088b43c4 */
}

/* func_088baa74  0x088baa74..0x088baacc  88 bytes, source=fde */
void func_088baa74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088baa74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088baab8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088baab8; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088baab8u; c->r[4] = c->r[4] + 0xffff9370u; func_088baacc(c, ram); }
L_088baab8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088baa74 */
}

/* func_088bebe8  0x088bebe8..0x088bec2c  68 bytes, source=sweep */
void func_088bebe8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bebe8u);
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
    { c->r[31] = 0x088bec18u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bebe8 */
}

/* func_088bf8b0  0x088bf8b0..0x088bf96c  188 bytes, source=fde */
void func_088bf8b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf8b0u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088bf8cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bf8e8; }
    { goto L_088bf928; }
L_088bf8e8:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004cc8u;
    { c->r[31] = 0x088bf90cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088bf918u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088bf8cc; }
L_088bf928:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf934u; c->r[4] = c->r[4] + 0x00004cd0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf940u; c->r[4] = c->r[4] + 0x00004cd8u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf94cu; c->r[4] = c->r[4] + 0x00004cf8u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf958u; c->r[4] = c->r[4] + 0x00004d00u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_088bf8b0 */
}

/* func_088c2c84  0x088c2c84..0x088c2dd8  340 bytes, source=fde */
void func_088c2c84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2c84u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c2cb8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x088c2cdcu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = c->f[1] / c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004eccu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ed0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] / c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ed0u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ed0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088c2d84u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0u + 0x00000041u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c2dc4u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088c2c84 */
}

/* func_088c8e04  0x088c8e04..0x088c8e48  68 bytes, source=sweep */
void func_088c8e04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8e04u);
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
    { c->r[31] = 0x088c8e34u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8e04 */
}

/* func_088cad00  0x088cad00..0x088cafe0  736 bytes, source=fde */
void func_088cad00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cad00u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x088cad28u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005064u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088cad4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cad68; }
    { goto L_088cafc8; }
L_088cad68:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088cad74u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088cad90u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820ca4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088cadacu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005068u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cadd8; }
    { goto L_088cae48; }
L_088cadd8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005064u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    { c->r[31] = 0x088cae14u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_08a0f82c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cae40; }
    { goto L_088cae48; }
L_088cae40:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_088cae48:
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088cae54u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088caef8; }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088cae6cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cae80u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000506cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088caea8u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088caef0u; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    { goto L_088caf20; }
L_088caef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
L_088caf20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[0] = c->f[0] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005070u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088caf5cu; c->f[13] = c->f[1]; func_088ca600(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088caf80u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088caf9cu; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cafb8u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088cad4c; }
L_088cafc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088cad00 */
}

/* func_088d26fc  0x088d26fc..0x088d276c  112 bytes, source=sweep */
void func_088d26fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d26fcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d2754; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088d2758; }
L_088d2754:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d2758:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d26fc */
}

/* func_088d6ab8  0x088d6ab8..0x088d6b98  224 bytes, source=sweep */
void func_088d6ab8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6ab8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d6adcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6b08; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6b08; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088d6b80; }
L_088d6b08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d6b20; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d6b80; }
L_088d6b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6b40; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d6b80; }
L_088d6b40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6b60; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d6b80; }
L_088d6b60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000098u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d6b7c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d6b80; }
L_088d6b7c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088d6b80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d6ab8 */
}

/* func_088dadf8  0x088dadf8..0x088dae40  72 bytes, source=sweep */
void func_088dadf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dadf8u);
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ac8u);
    mem_wf32(ram, c->r[2] + 0x00000240u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dadf8 */
}

/* func_088deaa4  0x088deaa4..0x088debd4  304 bytes, source=sweep */
void func_088deaa4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088deaa4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088deacc; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_088debc0; }
L_088deacc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088deafc; }
    { goto L_088deb08; }
L_088deafc:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088debc0; }
L_088deb08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088deb38; }
    { goto L_088deb44; }
L_088deb38:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088debc0; }
L_088deb44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088deb74; }
    { goto L_088deb80; }
L_088deb74:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088debc0; }
L_088deb80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088debb0; }
    { goto L_088debbc; }
L_088debb0:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088debc0; }
L_088debbc:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088debc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088deaa4 */
}

/* func_088e0b34  0x088e0b34..0x088e0b5c  40 bytes, source=sweep */
void func_088e0b34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0b34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000014fu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e0b34 */
}

/* func_088e691c  0x088e691c..0x088e6af4  472 bytes, source=fde */
void func_088e691c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e691cu);
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a5u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088e6ae0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e6980; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6a1c; }
    { goto L_088e6ae0; }
L_088e6980:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e69d4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]); goto L_088e6ae0; }
L_088e69d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005de0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005de4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005de8u);
    c->f[0] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000b4u, c->f[0]); goto L_088e6ae0; }
L_088e6a1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e6a30u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d7000(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6aa8; }
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
    { c->r[31] = 0x088e6a74u; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
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
    { c->r[31] = 0x088e6aa8u; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
L_088e6aa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e6accu; c->f[12] = c->f[0]; func_088ef870(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6ae0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e6ae0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088e6ae0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088e691c */
}

/* func_088ec234  0x088ec234..0x088ec368  308 bytes, source=sweep */
void func_088ec234(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ec234u);
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
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec29c; }
    { goto L_088ec2a8; }
L_088ec29c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088ec2a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec2d0; }
    { goto L_088ec2e0; }
L_088ec2d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088ec2e0:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ec304u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
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
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ec354u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088ec234 */
}

/* func_088f2408  0x088f2408..0x088f2524  284 bytes, source=fde */
void func_088f2408(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f2408u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2460; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f244cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f2458u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f1fac(c, ram); }
    { goto L_088f2510; }
L_088f2460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f249c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f2488u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f2494u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f21e8(c, ram); }
    { goto L_088f2510; }
L_088f249c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088f24f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f24dc; }
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f24dc; }
    { goto L_088f24f0; }
L_088f24dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f24e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f1954(c, ram); }
    { goto L_088f2510; }
L_088f24f0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f2504u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f2510u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f1020(c, ram); }
L_088f2510:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f2408 */
}

/* func_088f6d1c  0x088f6d1c..0x088f6de0  196 bytes, source=sweep */
void func_088f6d1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f6d1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f6dd0; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f6d68; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00004988u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088f6d68:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f6d88; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000497au);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088f6d88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000e0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e0u);
    c->r[2] = 0u + 0x00000078u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f6dd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000e0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = 0u + 0xffffffbfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
L_088f6dd0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f6d1c */
}

/* func_088fb0a0  0x088fb0a0..0x088fb1ac  268 bytes, source=fde */
void func_088fb0a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fb0a0u);
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
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088fb14c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb108; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb130; }
    { goto L_088fb198; }
L_088fb108:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088fb180; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088fb190; }
    { goto L_088fb198; }
L_088fb130:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x088fb144u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa06c(c, ram); }
    { goto L_088fb198; }
L_088fb14c:
    { c->r[31] = 0x088fb154u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa180(c, ram); }
    { c->r[31] = 0x088fb15cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb198; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x088fb178u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_088fb198; }
L_088fb180:
    { c->r[31] = 0x088fb188u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa43c(c, ram); }
    { goto L_088fb198; }
L_088fb190:
    { c->r[31] = 0x088fb198u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa45c(c, ram); }
L_088fb198:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088fb0a0 */
}

/* func_08900f0c  0x08900f0c..0x08901098  396 bytes, source=fde */
void func_08900f0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900f0cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08900f24u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890107c; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000064c0u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000064c4u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000064c8u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000064ccu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000064d0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08900f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08900f84; }
    { goto L_08901070; }
L_08900f84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08900fa0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff500u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff514u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901060; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff500u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff514u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff500u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff514u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x08901060u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
L_08901060:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08900f6c; }
L_08901070:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08901080; }
L_0890107c:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08901080:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08900f0c */
}

/* func_089037d4  0x089037d4..0x08903aac  728 bytes, source=fde */
void func_089037d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089037d4u);
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
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08903a98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890383c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08903854; }
    { goto L_08903a98; }
L_0890383c:
    c->r[2] = 0u + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08903880; }
    { goto L_08903a98; }
L_08903854:
    { c->r[31] = 0x0890385cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089046f4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0890386cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xfffff570u, c->r[2]); goto L_08903a98; }
L_08903880:
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000704u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[4];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089038d8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08903934u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000008u); func_08920944(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08903950u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890399cu; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089039a8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_0890352c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089039b8u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089039c8u; c->r[5] = 0u + 0u; func_089dfeb4(c, ram); }
    { c->r[31] = 0x089039d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08922900(c, ram); }
    { c->r[31] = 0x089039d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0891d1fc(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089039e8u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089039f8u; c->r[5] = 0u + 0x00000001u; func_089dfeb4(c, ram); }
    { c->r[31] = 0x08903a00u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08904958(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08903a10; }
    { c->r[31] = 0x08903a10u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089054f0(c, ram); }
L_08903a10:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08903a1cu; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08903a20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08903a34; }
    { goto L_08903a98; }
L_08903a34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08903a80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08903a78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08903a78; }
    { goto L_08903a80; }
L_08903a78:
    { c->r[31] = 0x08903a80u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089219f0(c, ram); }
L_08903a80:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08903a90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08903a20; }
L_08903a98:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089037d4 */
}

/* func_0890a2ac  0x0890a2ac..0x0890a8c0  1556 bytes, source=fde */
void func_0890a2ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890a2acu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890a2e0; }
    { goto L_0890a8ac; }
L_0890a2e0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890a324; }
    { c->r[31] = 0x0890a30cu; c->r[4] = 0u + 0u; func_08867a3c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006708u);
    c->f[0] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_0890a340; }
L_0890a324:
    { c->r[31] = 0x0890a32cu; c->r[4] = 0u + 0x00000001u; func_08867a3c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006708u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_0890a340:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890a8ac; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000670cu);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000670cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000012u;
    { c->r[31] = 0x0890a38cu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0890a3c8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000eu);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[5] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
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
    { c->r[31] = 0x0890a514u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890a570u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890a5bcu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0890a5e4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890a5fc; }
    { goto L_0890a8ac; }
L_0890a5fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000670cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890a62c; }
    { goto L_0890a638; }
L_0890a62c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000670cu);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_0890a638:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x0890a64cu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000670cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006710u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006714u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0890a698u; func_0880d140(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0890a6a4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890a804u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890a860u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890a8acu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0890a8ac:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0890a2ac */
}

/* func_08914b40  0x08914b40..0x08916e64  8996 bytes, source=fde */
void func_08914b40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08914b40u);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[15]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000689cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068a0u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068a4u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068a8u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006980u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006988u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006990u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006998u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x08914c88u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08914c94u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08914ca4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000d0u;
    { c->r[31] = 0x08914cb0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08914d1cu; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x000000d0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08914d34u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000044u); func_0884c8f0(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[6] = c->r[30] + 0x000000d0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08914d4cu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = c->r[30] + 0x000000d0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08914db0u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[6] = c->r[30] + 0x000000d0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08914dc8u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000003bu;
    { c->r[31] = 0x08914ddcu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08914e14; }
    { goto L_08914e28; }
L_08914e14:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069a0u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
L_08914e28:
    { c->r[31] = 0x08914e30u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000114u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000118u, c->f[0]);
    { c->r[31] = 0x08914e3cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000114u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[16] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08914e60u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08913848(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08914e78u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08914f20u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069acu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069acu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000140u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000148u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000014cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000150u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000144u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000154u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000208u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069b0u);
    mem_wf32(ram, c->r[30] + 0x0000020cu, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000208u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000020cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915028; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000208u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000204u, c->f[1]); goto L_0891504c; }
L_08915028:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000208u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000020cu);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000204u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000204u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000204u, c->r[3]);
L_0891504c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000204u);
    mem_w16(ram, c->r[30] + 0x0000015cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000214u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069b0u);
    mem_wf32(ram, c->r[30] + 0x00000218u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000214u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000218u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915094; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000214u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000210u, c->f[1]); goto L_089150b8; }
L_08915094:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000214u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000218u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000210u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[3]);
L_089150b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[30] + 0x0000015eu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089150d4u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089156cc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089150e8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w32(ram, c->r[30] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000021cu);
    c->r[2] = c->r[5] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089157f4; }
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000021cu);
    c->r[2] = c->r[6] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000069e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08915128u: goto L_08915128; case 0x08915284u: goto L_08915284; case 0x08915564u: goto L_08915564; case 0x08915604u: goto L_08915604; case 0x089157f4u: goto L_089157f4; default: recomp_trap_unknown_indirect(c, ram, 0x08915120u, _t); return; } }
L_08915128:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089157f4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08915148u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089157f4; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089157f4; }
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x08915170u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069b4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089151a0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000180u);
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    mem_w32(ram, c->r[30] + 0x00000178u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000018cu);
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000160u, 0u);
L_089151c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000022u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089151dc; }
    { goto L_089157f4; }
L_089151dc:
    c->r[4] = c->r[30] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff5e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000170u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff5e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x08915234u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000138u); func_0880d140(c, ram); }
    c->r[4] = c->r[30] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff5e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[6] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x00000090u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[8] = 0x7f200000u;
    { c->r[31] = 0x08915274u; c->r[8] = c->r[8] | 0x3000u; func_089147d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]); goto L_089151c4; }
L_08915284:
    { c->r[31] = 0x0891528cu; func_0895b514(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089152d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000038u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089152b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000164u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000190u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000190u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069b8u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
L_089152d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089152f4; }
    { goto L_089157f4; }
L_089152f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915338u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089157f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = 0xb60b0000u;
    c->r[2] = c->r[2] | 0x60b7u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
    c->r[2] = 0u + 0x0000005au;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000194u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000194u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069bcu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000198u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000198u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089153d4; }
    { goto L_089153e0; }
L_089153d4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    mem_wf32(ram, c->r[30] + 0x00000198u, c->f[0]);
L_089153e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000198u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915400; }
    { goto L_08915404; }
L_08915400:
    mem_w32(ram, c->r[30] + 0x00000198u, 0u);
L_08915404:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000194u);
    c->r[2] = 0u + 0x0000005au;
    c->r[2] = c->r[2] - c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069bcu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000019cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891544c; }
    { goto L_0891545c; }
L_0891544c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    { mem_wf32(ram, c->r[30] + 0x0000019cu, c->f[0]); goto L_08915480; }
L_0891545c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891547c; }
    { goto L_08915480; }
L_0891547c:
    mem_w32(ram, c->r[30] + 0x0000019cu, 0u);
L_08915480:
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000028u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x089154a4u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000138u); func_0880d140(c, ram); }
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[2] | 0x0060u;
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001a0u);
    { c->r[31] = 0x089154bcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000198u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089154ccu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08915520; }
    c->r[2] = c->r[30] + 0x00000180u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069c0u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[6] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08915518u; c->r[8] = mem_r32(ram, c->r[30] + 0x000001a0u); func_089147d4(c, ram); }
    { goto L_089157f4; }
L_08915520:
    c->r[2] = c->r[30] + 0x00000180u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069c4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[6] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0891555cu; c->r[8] = mem_r32(ram, c->r[30] + 0x000001a0u); func_089147d4(c, ram); }
    { goto L_089157f4; }
L_08915564:
    mem_w32(ram, c->r[30] + 0x00000160u, 0u);
L_08915568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915580; }
    { goto L_089157f4; }
L_08915580:
    { c->r[31] = 0x08915588u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000160u); func_0895b460(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089155f4; }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000028u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x089155bcu; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000138u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069c8u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[6] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[8] = 0x7f200000u;
    { c->r[31] = 0x089155f4u; c->r[8] = c->r[8] | 0x3000u; func_089147d4(c, ram); }
L_089155f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]); goto L_08915568; }
L_08915604:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08915620; }
    { goto L_089157f4; }
L_08915620:
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069b4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08915650u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069ccu);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000188u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069d0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x0891568cu; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000138u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069c4u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[6] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[8] = 0x7f200000u;
    { c->r[31] = 0x089156c4u; c->r[8] = c->r[8] | 0x3000u; func_089147d4(c, ram); }
    { goto L_089157f4; }
L_089156cc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089156d8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089157f4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089156f4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08915728; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08915710u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08915728; }
    { goto L_089157f4; }
L_08915728:
    c->r[2] = c->r[30] + 0x00000180u;
    { c->r[31] = 0x08915734u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000180u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000188u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000018cu, 0u);
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069b4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0891578cu; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089157a0u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000188u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x089157bcu; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000138u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069d4u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[6] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[8] = 0x7f200000u;
    { c->r[31] = 0x089157f4u; c->r[8] = c->r[8] | 0x3000u; func_089147d4(c, ram); }
L_089157f4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08915800u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915828; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08915818u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08920abc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915828; }
    { goto L_08915898; }
L_08915828:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08915834u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08915860; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08915850u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08915890; }
L_08915860:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915890; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08915880u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915890; }
    { goto L_08915898; }
L_08915890:
    { c->r[31] = 0x08915898u; func_089144e8(c, ram); }
L_08915898:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08916ab8; }
L_089158ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089158c0; }
    { goto L_08916ab8; }
L_089158c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08915908; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[2] | 0x0001u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915908; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[2] | 0x020eu;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915920; }
L_08915908:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915918u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1400u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915960; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915960; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915958u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915960:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089159a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089159a4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0891599cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_089159a4:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089159b0u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08920abc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089159e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089159e4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089159dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_089159e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915a9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915a9c; }
    c->r[2] = c->r[30] + 0x00000180u;
    { c->r[31] = 0x08915a1cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001a0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001a0u);
    { c->r[31] = 0x08915a2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_0891b59c(c, ram); }
    c->r[4] = c->r[30] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08915a50u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
    c->r[2] = c->r[30] + 0x00000180u;
    { c->r[31] = 0x08915a60u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069c8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915a84; }
    { goto L_08915a9c; }
L_08915a84:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915a94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915a9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915b14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000140u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915b14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000144u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915b14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000148u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08915b14; }
    { goto L_08915c48; }
L_08915b14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915b58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915b58; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915b50u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915b58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915b84; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915b7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915c30; }
    mem_w32(ram, c->r[30] + 0x000001a0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915bbc; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]); goto L_08915bd8; }
L_08915bbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915bd8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
L_08915bd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08915bf4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_0891b59c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000012cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000011cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x000001a4u);
    c->r[8] = f2u(c->f[1]);
    c->r[9] = f2u(c->f[0]);
    { c->r[31] = 0x08915c30u; func_089221bc(c, ram); }
L_08915c30:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915c40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915c48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08915c84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915c84; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08915c7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08915c84:
    c->r[2] = c->r[30] + 0x000001b0u;
    { c->r[31] = 0x08915c90u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000138u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08915cdcu; func_088a00e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001a4u, 0u);
    mem_w32(ram, c->r[30] + 0x000001a0u, 0u);
    mem_w32(ram, c->r[30] + 0x000001f0u, 0u);
    mem_w32(ram, c->r[30] + 0x000001f4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915dd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915d1c; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
L_08915d1c:
    c->r[2] = c->r[30] + 0x000001b0u;
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08915d34u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08915d58u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[6] = c->r[30] + 0x000001b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08915d70u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[6] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08915dd0u; c->r[9] = 0u + 0u; func_08919c68(c, ram); }
    { goto L_08916aa0; }
L_08915dd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[2] | 0x0020u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915ecc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915e10; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
L_08915e10:
    c->r[2] = c->r[30] + 0x000001b0u;
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08915e28u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08915e4cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[6] = c->r[30] + 0x000001b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08915e64u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[6] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08915ec4u; c->r[9] = 0u + 0u; func_0891a240(c, ram); }
    { goto L_08916aa0; }
L_08915ecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915f1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08916aa0; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[7] = c->r[30] + 0x000001b0u;
    c->r[8] = c->r[30] + 0x00000090u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08915f14u; c->r[6] = c->r[3] + 0u; func_08912ea4(c, ram); }
    { goto L_08916aa0; }
L_08915f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915f38; }
    { goto L_08915f40; }
L_08915f38:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
L_08915f40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915f70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08915f70; }
    { goto L_08915fb0; }
L_08915f70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915f90; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]); goto L_08915fcc; }
L_08915f90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915fcc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]); goto L_08915fcc; }
L_08915fb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08915fcc; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
L_08915fcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08915fe8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_0891b59c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001f8u, c->r[2]);
    c->r[2] = c->r[30] + 0x000001b0u;
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08916004u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08916028u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[6] = c->r[30] + 0x000001b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08916040u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069d8u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000019cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089160b4; }
    { c->r[31] = 0x08916084u; func_088df560(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089160b4; }
    c->r[16] = 0x08a80000u;
    { c->r[31] = 0x08916098u; c->r[16] = mem_r32(ram, c->r[16] + 0x00002ed8u); func_088df670(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069d8u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000044u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000019cu, c->f[0]);
L_089160b4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089160d4; }
    { goto L_089160e8; }
L_089160d4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000069a0u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000019cu, c->f[0]);
L_089160e8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000019cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069a0u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000069dcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x000001fcu, c->r[2]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08916120u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    { c->r[31] = 0x0891612cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000080u); func_0891c3d4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089161f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000070u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000efu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000ffu;
    { mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_089163e4; }
L_089161f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089162cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000040u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
    { mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_089163e4; }
L_089162cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
L_089163e4:
    { c->r[31] = 0x089163ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x000001f8u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916448u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089164a4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089164f0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089164fcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916864; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08916538; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08916530u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08916538:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089165b4; }
    { c->r[31] = 0x08916554u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916670; }
    { c->r[31] = 0x0891656cu; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916594; }
    c->r[2] = 0x7f170000u;
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = c->r[3] | 0x177fu;
    { mem_w32(ram, c->r[30] + 0x00000220u, c->r[3]); goto L_089165a8; }
L_08916594:
    c->r[4] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[5] = c->r[5] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[5]);
L_089165a8:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000220u);
    { mem_w32(ram, c->r[30] + 0x000001f8u, c->r[6]); goto L_08916670; }
L_089165b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08916658; }
    { c->r[31] = 0x089165d0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08916608; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916608; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08916600u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08916608:
    { c->r[31] = 0x08916610u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916638; }
    c->r[7] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x00000224u, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[2] = c->r[2] | 0x1000u;
    { mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]); goto L_0891664c; }
L_08916638:
    c->r[3] = 0x7f170000u;
    mem_w32(ram, c->r[30] + 0x00000224u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[4] = c->r[4] | 0x177fu;
    mem_w32(ram, c->r[30] + 0x00000224u, c->r[4]);
L_0891664c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000224u);
    { mem_w32(ram, c->r[30] + 0x000001f8u, c->r[5]); goto L_08916670; }
L_08916658:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08916668u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08916670:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001f8u);
    { c->r[31] = 0x0891667cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_0891b59c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001f8u, c->r[2]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891668cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    { c->r[31] = 0x08916758u; c->r[4] = mem_r32(ram, c->r[30] + 0x000001f8u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089167b4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916810u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891685cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { goto L_08916aa0; }
L_08916864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08916aa0; }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08916884u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000015eu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891695c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000c0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000d0u;
    { mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_08916994; }
L_0891695c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
L_08916994:
    { c->r[31] = 0x0891699cu; c->r[4] = mem_r32(ram, c->r[30] + 0x000001f8u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089169f8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916a54u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08916aa0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_08916aa0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08916ab0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_089158ac; }
L_08916ab8:
    c->r[4] = 0xff800000u;
    { c->r[31] = 0x08916ac4u; c->r[4] = c->r[4] | 0xc000u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08916ad0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    mem_w32(ram, c->r[30] + 0x000001fcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000029u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000dbu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000039u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000ebu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916ba8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916c04u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08916c50u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08916c5cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916e4c; }
    { c->r[31] = 0x08916c74u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08916e4c; }
    { c->r[31] = 0x08916c8cu; func_0896dc4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08916cac; }
    c->r[2] = 0x7f170000u;
    mem_w32(ram, c->r[30] + 0x00000228u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000228u);
    c->r[3] = c->r[3] | 0x177fu;
    { mem_w32(ram, c->r[30] + 0x00000228u, c->r[3]); goto L_08916cc0; }
L_08916cac:
    c->r[4] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x00000228u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000228u);
    c->r[5] = c->r[5] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000228u, c->r[5]);
L_08916cc0:
    { c->r[31] = 0x08916cc8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000228u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08916cd4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000029u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000dbu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000039u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000ebu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916da4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08916e00u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08916e4cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_08916e4c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_08914b40 */
}

/* func_0891ec18  0x0891ec18..0x0891f3ec  2004 bytes, source=fde */
void func_0891ec18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891ec18u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
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
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891ec60; }
    { goto L_0891f3d8; }
L_0891ec60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891ec80; }
    { goto L_0891f3d8; }
L_0891ec80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x000000f0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000088u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000055u;
    { c->r[31] = 0x0891ecbcu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0u + 0x00000050u;
    { c->r[31] = 0x0891ecccu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891ef34u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891ef90u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891efecu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891f038u; c->r[5] = c->r[5] | 0x0008u; func_089207f8(c, ram); }
    { c->r[31] = 0x0891f040u; func_088cd108(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891f3d8; }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000056u;
    { c->r[31] = 0x0891f05cu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0u + 0x00000050u;
    { c->r[31] = 0x0891f06cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffbcu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000032u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000046u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891f2d4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891f330u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891f38cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891f3d8u; c->r[5] = c->r[5] | 0x0008u; func_089207f8(c, ram); }
L_0891f3d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0891ec18 */
}

/* func_08921584  0x08921584..0x089215c8  68 bytes, source=sweep */
void func_08921584(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921584u);
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
    { c->r[31] = 0x089215b4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921584 */
}

/* func_08922900  0x08922900..0x08923018  1816 bytes, source=fde */
void func_08922900(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08922900u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006de0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006de4u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006de8u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006decu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006df0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892297c; }
    c->r[2] = 0u + 0x00000025u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089229a0; }
L_0892297c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089229a0; }
    c->r[2] = 0u + 0x00000021u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089229a0:
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00007bb4u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089229f8; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00007bb4u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089229e8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c4u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    { mem_w8(ram, c->r[1] + 0xfffff9c4u, c->r[2]); goto L_08922b78; }
L_089229e8:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    { mem_w8(ram, c->r[1] + 0x00007bb4u, c->r[2]); goto L_08922b78; }
L_089229f8:
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00007bb5u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922a50; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00007bb5u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c5u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922a40; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c5u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    { mem_w8(ram, c->r[1] + 0xfffff9c5u, c->r[2]); goto L_08922b78; }
L_08922a40:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    { mem_w8(ram, c->r[1] + 0x00007bb5u, c->r[2]); goto L_08922b78; }
L_08922a50:
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00007bb6u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922aa8; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00007bb6u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c6u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922a98; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c6u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    { mem_w8(ram, c->r[1] + 0xfffff9c6u, c->r[2]); goto L_08922b78; }
L_08922a98:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    { mem_w8(ram, c->r[1] + 0x00007bb6u, c->r[2]); goto L_08922b78; }
L_08922aa8:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922b10; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08922ac8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08922b10; }
    { c->r[31] = 0x08922ae0u; func_0896db94(c, ram); }
    { c->r[31] = 0x08922ae8u; c->r[4] = c->r[2] + 0u; func_08970efc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922b04; }
    c->r[2] = 0u + 0x00000012u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08922b78; }
L_08922b04:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08922b78; }
L_08922b10:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00200000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922b34; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08922b78; }
L_08922b34:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00100000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922b58; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08922b78; }
L_08922b58:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x01000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922b78; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08922b78:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922b98; }
    c->r[2] = 0u + 0x00000028u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08922c70; }
L_08922b98:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00800000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922bc4; }
    c->r[2] = 0u + 0x00000023u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08922c70; }
L_08922bc4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922bec; }
    c->r[2] = 0u + 0x00000024u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08922c70; }
L_08922bec:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00080000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922c18; }
    c->r[2] = 0u + 0x00000022u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08922c70; }
L_08922c18:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00400000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922c50; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08922c50; }
    c->r[2] = 0u + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08922c70; }
L_08922c50:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbd8u);
    c->r[3] = 0x40000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922c70; }
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08922c70:
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00007bb0u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922cc4; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00007bb0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922cb8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff9c0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    { mem_w8(ram, c->r[1] + 0xfffff9c0u, c->r[2]); goto L_08922cc4; }
L_08922cb8:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    mem_w8(ram, c->r[1] + 0x00007bb0u, c->r[2]);
L_08922cc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08922e40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922d30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922d30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922d30; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08922d30; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08922d20u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08922d30; }
    { goto L_08922e74; }
L_08922d30:
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x08922d44u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000c0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000040u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[2] | 0x00ffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[2] | 0x00ffu;
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000062u;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000100u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000072u;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08922e38u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000038u); func_08923018(c, ram); }
    { goto L_08922e74; }
L_08922e40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922e74; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922e74; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000020u;
    { c->r[31] = 0x08922e74u; c->r[6] = 0u + 0u; func_089ce0d0(c, ram); }
L_08922e74:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x04000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922e94; }
    c->r[2] = 0u + 0x0000002cu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08922e94:
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_08922e98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08922eb0; }
    { goto L_08922fac; }
L_08922eb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922f40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922f40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922f40; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08922f40; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08922f30u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08922f40; }
    { goto L_08922f9c; }
L_08922f40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08922f9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08922f78u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08922f9cu; c->r[6] = 0u + 0u; func_089ce0d0(c, ram); }
L_08922f9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_08922e98; }
L_08922fac:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08922fb8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08923004; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08923004; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08922ff0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000027u;
    { c->r[31] = 0x08923004u; c->r[6] = 0u + 0u; func_089ce0d0(c, ram); }
L_08923004:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08922900 */
}

/* func_08925b34  0x08925b34..0x08925d54  544 bytes, source=sweep */
void func_08925b34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925b34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08925d40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006ea0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08925b80u: goto L_08925b80; case 0x08925b94u: goto L_08925b94; case 0x08925ba8u: goto L_08925ba8; case 0x08925bbcu: goto L_08925bbc; case 0x08925bd0u: goto L_08925bd0; case 0x08925be4u: goto L_08925be4; case 0x08925bf8u: goto L_08925bf8; case 0x08925c0cu: goto L_08925c0c; case 0x08925c20u: goto L_08925c20; case 0x08925c34u: goto L_08925c34; case 0x08925c48u: goto L_08925c48; case 0x08925c5cu: goto L_08925c5c; case 0x08925c70u: goto L_08925c70; case 0x08925c84u: goto L_08925c84; case 0x08925c9cu: goto L_08925c9c; case 0x08925cb4u: goto L_08925cb4; case 0x08925cccu: goto L_08925ccc; case 0x08925ce4u: goto L_08925ce4; case 0x08925cf8u: goto L_08925cf8; case 0x08925d0cu: goto L_08925d0c; case 0x08925d20u: goto L_08925d20; case 0x08925d34u: goto L_08925d34; default: recomp_trap_unknown_indirect(c, ram, 0x08925b78u, _t); return; } }
L_08925b80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925b8cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925d54(c, ram); }
    { goto L_08925d40; }
L_08925b94:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925ba0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925d98(c, ram); }
    { goto L_08925d40; }
L_08925ba8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925bb4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926320(c, ram); }
    { goto L_08925d40; }
L_08925bbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925bc8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925ddc(c, ram); }
    { goto L_08925d40; }
L_08925bd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925bdcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925e20(c, ram); }
    { goto L_08925d40; }
L_08925be4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925bf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925e64(c, ram); }
    { goto L_08925d40; }
L_08925bf8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925ea8(c, ram); }
    { goto L_08925d40; }
L_08925c0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925eec(c, ram); }
    { goto L_08925d40; }
L_08925c20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925f30(c, ram); }
    { goto L_08925d40; }
L_08925c34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925f74(c, ram); }
    { goto L_08925d40; }
L_08925c48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925fb8(c, ram); }
    { goto L_08925d40; }
L_08925c5c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c68u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08925ffc(c, ram); }
    { goto L_08925d40; }
L_08925c70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925c7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926040(c, ram); }
    { goto L_08925d40; }
L_08925c84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08925c94u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926084(c, ram); }
    { goto L_08925d40; }
L_08925c9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08925cacu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926084(c, ram); }
    { goto L_08925d40; }
L_08925cb4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08925cc4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926084(c, ram); }
    { goto L_08925d40; }
L_08925ccc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08925cdcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926084(c, ram); }
    { goto L_08925d40; }
L_08925ce4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925cf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089260d4(c, ram); }
    { goto L_08925d40; }
L_08925cf8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925d04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08926118(c, ram); }
    { goto L_08925d40; }
L_08925d0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925d18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0892615c(c, ram); }
    { goto L_08925d40; }
L_08925d20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925d2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089261a0(c, ram); }
    { goto L_08925d40; }
L_08925d34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925d40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089263cc(c, ram); }
L_08925d40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925b34 */
}

/* func_089276f8  0x089276f8..0x089280b4  2492 bytes, source=fde */
void func_089276f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089276f8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[2] = c->r[4] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa30u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffffa30u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa30u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0892775c; }
    { goto L_08927764; }
L_0892775c:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa30u, 0u);
L_08927764:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08927784; }
    { goto L_089277ac; }
L_08927784:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa28u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa24u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa20u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa2cu, 0u);
L_089277ac:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa28u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892780c; }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa20u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffffa20u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa20u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08927800; }
    { goto L_0892780c; }
L_08927800:
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa28u, c->r[2]);
L_0892780c:
    { c->r[31] = 0x08927814u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08927828u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa28u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08927890; }
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa2cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffffa2cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa2cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08927890; }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa28u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa2cu, 0u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0892809c; }
L_08927890:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa28u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089278f0; }
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa2cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffffa2cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa2cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089278f0; }
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa28u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa2cu, 0u);
L_089278f0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa28u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08927958; }
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa2cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffffa2cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa2cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08927958; }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa28u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa2cu, 0u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0892809c; }
L_08927958:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0892795c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08927974; }
    { goto L_08928098; }
L_08927974:
    c->r[2] = 0u + 0x00000012u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892799c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0892799c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089279c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089279c0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08927ed8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa28u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08927b58; }
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa2cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0xc8120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927a20u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x10120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927a44u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x7f160000u;
    c->r[4] = c->r[4] | 0x0303u;
    { c->r[31] = 0x08927a68u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x32ff0000u;
    c->r[4] = c->r[4] | 0x7f40u;
    { c->r[31] = 0x08927a8cu; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08927a9cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08927aacu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08927abcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08927accu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa20u);
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
    c->r[4] = c->r[4] - c->r[2];
    c->f[0] = u2f(c->r[4]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08927b50u; c->f[12] = c->f[0]; func_08927580(c, ram); }
    { goto L_08928088; }
L_08927b58:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa28u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08927c40; }
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa2cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fccu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927b98u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927bacu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x7f160000u;
    c->r[4] = c->r[4] | 0x0303u;
    { c->r[31] = 0x08927bc0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x32ff0000u;
    c->r[4] = c->r[4] | 0x7f40u;
    { c->r[31] = 0x08927bd4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08927be4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08927bf4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08927c04u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08927c14u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08927c38u; func_08927580(c, ram); }
    { goto L_08928088; }
L_08927c40:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa28u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08927d68; }
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa2cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927c90u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927cb4u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x7f160000u;
    c->r[4] = c->r[4] | 0x0303u;
    { c->r[31] = 0x08927cd8u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x32ff0000u;
    c->r[4] = c->r[4] | 0x7f40u;
    { c->r[31] = 0x08927cfcu; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08927d0cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08927d1cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08927d2cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08927d3cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08927d60u; func_08927580(c, ram); }
    { goto L_08928088; }
L_08927d68:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa28u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08927e50; }
    c->r[4] = 0xc8120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927d88u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = 0x10120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927d9cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x7f160000u;
    c->r[4] = c->r[4] | 0x0303u;
    { c->r[31] = 0x08927db0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x32ff0000u;
    c->r[4] = c->r[4] | 0x7f40u;
    { c->r[31] = 0x08927dc4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa20u);
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
    c->r[4] = c->r[4] - c->r[2];
    c->f[0] = u2f(c->r[4]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08927e48u; c->f[12] = c->f[0]; func_08927580(c, ram); }
    { goto L_08928088; }
L_08927e50:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa28u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08928088; }
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927e70u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927e84u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x7f160000u;
    c->r[4] = c->r[4] | 0x0303u;
    { c->r[31] = 0x08927e98u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x32ff0000u;
    c->r[4] = c->r[4] | 0x7f40u;
    { c->r[31] = 0x08927eacu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08927ed0u; func_08927580(c, ram); }
    { goto L_08928088; }
L_08927ed8:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa28u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08927f3c; }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa20u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08927f14; }
    { goto L_08927f24; }
L_08927f14:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08927f3c; }
L_08927f24:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa20u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc4u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_08927f3c:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0xc0120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927f5cu; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x40120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927f80u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x7f160000u;
    c->r[4] = c->r[4] | 0x0303u;
    { c->r[31] = 0x08927fa4u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = 0x32ff0000u;
    c->r[4] = c->r[4] | 0x7f40u;
    { c->r[31] = 0x08927fc8u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08927fd8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08927fe8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08927ff8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08928008u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa30u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = 0xb60b0000u;
    c->r[2] = c->r[2] | 0x60b7u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 9);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
    c->r[2] = 0u + 0x000002d0u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc0u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fc8u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08928088u; c->f[12] = c->f[0]; func_08927580(c, ram); }
L_08928088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0892795c; }
L_08928098:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0892809c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089276f8 */
}

/* func_0892c7c8  0x0892c7c8..0x0892ca78  688 bytes, source=fde */
void func_0892c7c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892c7c8u);
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
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = 0u + 0x00000001u;
    { c->r[31] = 0x0892c818u; c->r[9] = c->r[2] + 0u; func_0892a044(c, ram); }
    { c->r[31] = 0x0892c820u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892c834u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c860; }
    c->r[2] = 0xff0c0000u;
    c->r[2] = c->r[2] | 0x094cu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0892c860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c8a4; }
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
L_0892c8a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c910; }
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
L_0892c910:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892c930u; c->r[5] = c->r[3] + 0u; func_08933804(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
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
    c->r[2] = c->r[2] + 0xfffffffbu;
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0892c98c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892c9ac; }
    { goto L_0892ca64; }
L_0892c9ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0892ca40; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892ca00u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
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
    { c->r[31] = 0x0892ca40u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_0892ca40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0892c98c; }
L_0892ca64:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0892c7c8 */
}

/* func_08932178  0x08932178..0x08932330  440 bytes, source=fde */
void func_08932178(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932178u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089321a8u; c->r[4] = c->r[4] + 0x000071d4u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089321c8u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089321e8; }
    { mem_w32(ram, c->r[30] + 0x00000024u, 0u); goto L_089321f0; }
L_089321e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_089321f0:
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893228c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893231c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    { mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]); goto L_0893231c; }
L_0893228c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893231c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893231c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_0893231c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08932178 */
}

/* func_089336d8  0x089336d8..0x08933798  192 bytes, source=residue */
void func_089336d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089336d8u);
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
    return; /* fell out of func_089336d8 */
}

/* func_08935ef0  0x08935ef0..0x08935f8c  156 bytes, source=sweep */
void func_08935ef0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935ef0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08935f14; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08935f78; }
L_08935f14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935f2c; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08935f78; }
L_08935f2c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935f44; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08935f78; }
L_08935f44:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffffa94u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000034u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935f70; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08935f78; }
L_08935f70:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08935f78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935ef0 */
}

/* func_0893c0cc  0x0893c0cc..0x0893c18c  192 bytes, source=residue */
void func_0893c0cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c0ccu);
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
    return; /* fell out of func_0893c0cc */
}

/* func_0893d610  0x0893d610..0x0893d6d0  192 bytes, source=residue */
void func_0893d610(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d610u);
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
    return; /* fell out of func_0893d610 */
}

/* func_0893e95c  0x0893e95c..0x0893e97c  32 bytes, source=residue */
void func_0893e95c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e95cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893e95c */
}

/* func_089406ec  0x089406ec..0x0894075c  112 bytes, source=sweep */
void func_089406ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089406ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940720; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_08940728; }
L_08940720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_08940728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x08940748u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_0894075c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089406ec */
}

/* func_08945d24  0x08945d24..0x08945e18  244 bytes, source=sweep */
void func_08945d24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945d24u);
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
    return; /* fell out of func_08945d24 */
}

/* func_0894b6e4  0x0894b6e4..0x0894b71c  56 bytes, source=sweep */
void func_0894b6e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894b6e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894b708u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0894b8b0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894b6e4 */
}

/* func_0894c524  0x0894c524..0x0894c5d4  176 bytes, source=sweep */
void func_0894c524(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c524u);
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
    { c->r[31] = 0x0894c56cu; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c590u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c59cu; c->r[5] = 0x15000000u; func_0894b6a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c5c0u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0894c524 */
}

/* func_08953a44  0x08953a44..0x089547dc  3480 bytes, source=fde */
void func_08953a44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08953a44u);
    c->r[29] = c->r[29] + 0xfffffe80u;
    mem_w32(ram, c->r[29] + 0x00000178u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000174u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000170u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000160u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08953c18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08953ab0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08953ac8; }
    { goto L_089547c4; }
L_08953ab0:
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000160u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895402c; }
    { goto L_089547c4; }
L_08953ac8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003e24u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08953bec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08953ae8u; c->r[5] = c->r[5] + 0x00007e64u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003e24u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08953af4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08953b0c; }
    { goto L_08953bec; }
L_08953b0c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e70u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e74u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e70u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e78u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08953b6cu; c->f[13] = c->f[1]; func_08a0fd88(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e78u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000118u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00003e28u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e80u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e80u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08953bdcu; c->r[5] = 0u + 0x0000000cu; func_089547dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08953af4; }
L_08953bec:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08953bf8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08953c08u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_089547c4; }
L_08953c18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08953c30u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08953d48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08953d48; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08953c70u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e84u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953cb0; }
    { goto L_08953ccc; }
L_08953cb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e84u);
    c->f[1] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000154u, c->f[1]); goto L_08953cd8; }
L_08953ccc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    mem_wf32(ram, c->r[30] + 0x00000154u, c->f[0]);
L_08953cd8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000154u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
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
    { mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_08953e10; }
L_08953d48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e88u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953d9c; }
    { goto L_08953dac; }
L_08953d9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    { mem_wf32(ram, c->r[30] + 0x0000015cu, c->f[0]); goto L_08953db0; }
L_08953dac:
    mem_w32(ram, c->r[30] + 0x0000015cu, 0u);
L_08953db0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000158u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r8(ram, c->r[3] + 0x0000003cu);
    c->r[2] = c->r[4] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[4] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08953e10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953e04; }
    { goto L_08953e10; }
L_08953e04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08953e10u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08953e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08953e30u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08953e50u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08953e60u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08953e7cu; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e8cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e90u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x0000002cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e94u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e98u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08953f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08953f38; }
    { goto L_089547c4; }
L_08953f38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953f6c; }
    { goto L_08953fa8; }
L_08953f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_08953fa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953fe0; }
    { goto L_0895401c; }
L_08953fe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_0895401c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08953f20; }
L_0895402c:
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08954050u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08954064u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08954074u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08954088u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003e24u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089540a4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089540ecu; c->r[5] = 0u + 0x00000006u; func_08955110(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0895414cu; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089541acu; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089541f8u; c->r[5] = c->r[5] | 0x439du; func_08954fd0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] + 0x00003e28u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08954258u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08954264u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08954280u; c->r[6] = c->r[3] + 0u; func_0885a194(c, ram); }
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[3] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089542d8u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089542ecu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x089542f8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895430cu; c->r[5] = c->r[3] + 0u; func_0884c988(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002f90u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002f90u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002f90u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000d0u;
    { c->r[31] = 0x0895436cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x000000d0u;
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007e9cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007ea0u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007ea4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    { c->r[31] = 0x089543b4u; c->f[14] = c->f[0]; func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x089543c0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007ea8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007eacu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007ea4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    { c->r[31] = 0x08954408u; c->f[14] = c->f[0]; func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000d0u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08954420u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08954438u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08954488u; c->r[6] = c->r[3] + 0u; func_08955094(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089544d8u; c->r[6] = c->r[3] + 0u; func_08955094(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089544dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089544f4; }
    { goto L_089546b4; }
L_089544f4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[3] + 0x00003e28u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08954554u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089545bc; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007eb0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x089545bcu; c->f[13] = c->f[1]; func_08955014(c, ram); }
L_089545bc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00000028u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000002cu;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x0895462cu; c->f[13] = mem_rf32(ram, c->r[2] + 0x00000000u); func_08955054(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08954630:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08954648; }
    { goto L_089546a4; }
L_08954648:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08954694u; c->r[5] = c->r[5] | 0x000eu; func_08954fd0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08954630; }
L_089546a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089544dc; }
L_089546b4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007e7cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08954710u; c->f[13] = c->f[1]; func_08955014(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08954760u; func_08955054(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089547a8u; c->r[5] = 0u + 0x00000006u; func_089550d4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089547b8u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089547c4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089547c4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000178u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000174u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000170u);
    { c->r[29] = c->r[29] + 0x00000180u; return; }
    return; /* fell out of func_08953a44 */
}

/* func_08955adc  0x08955adc..0x08955b40  100 bytes, source=sweep */
void func_08955adc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955adcu);
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
    { c->r[31] = 0x08955b2cu; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955adc */
}

/* func_089588b4  0x089588b4..0x08958964  176 bytes, source=sweep */
void func_089588b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089588b4u);
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
    { c->r[31] = 0x089588fcu; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958920u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895892cu; c->r[5] = 0x15000000u; func_08957fc8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958950u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089588b4 */
}

/* func_0895b5d4  0x0895b5d4..0x0895b62c  88 bytes, source=sweep */
void func_0895b5d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b5d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895b5f0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b610; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000497eu);
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0895b614; }
L_0895b610:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0895b614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b5d4 */
}

/* func_0895f850  0x0895f850..0x0895fbe0  912 bytes, source=fde */
void func_0895f850(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895f850u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004960u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005200u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0895f87c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f89c; }
    { goto L_0895f920; }
L_0895f89c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f910; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f910; }
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
    { c->r[31] = 0x0895f910u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d2c90(c, ram); }
L_0895f910:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0895f87c; }
L_0895f920:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0895f924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f944; }
    { goto L_0895f9b0; }
L_0895f944:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f9a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895f9a0u; c->r[6] = 0u + 0u; func_0895ee18(c, ram); }
L_0895f9a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0895f924; }
L_0895f9b0:
    c->r[4] = 0u + 0x00000006u;
    { c->r[31] = 0x0895f9bcu; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
    c->r[4] = 0x30000000u;
    { c->r[31] = 0x0895f9c8u; c->r[4] = c->r[4] | 0x0014u; func_08881760(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f9d4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895fa00; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f9e8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895fa00; }
    { goto L_0895fa3c; }
L_0895fa00:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895fa0cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x0895fa14u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0895fa24u; c->r[5] = 0u + 0u; func_089691fc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0895fa3c; }
    { c->r[31] = 0x0895fa3cu; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
L_0895fa3c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    c->r[2] = c->r[2] + 0x0000002cu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0895fa70; }
    { goto L_0895fb68; }
L_0895fa70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895fa94; }
    { goto L_0895fb68; }
L_0895fa94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0895fab8; }
    { goto L_0895fb68; }
L_0895fab8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895fae4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8290u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8290u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895fb14u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895fb28u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000018u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895fb54u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895fb68u; c->r[5] = c->r[3] + 0u; func_0887a1b8(c, ram); }
L_0895fb68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895fb88u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895fbcc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895fbcc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0895fbcc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0895f850 */
}

/* func_08961ee8  0x08961ee8..0x08961ffc  276 bytes, source=sweep */
void func_08961ee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08961ee8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961f50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004au);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08961f2c; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08961fe8; }
L_08961f2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961f48; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08961fe8; }
L_08961f48:
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08961fe8; }
L_08961f50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08961f68; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08961fe8; }
L_08961f68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961f98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08961f98; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08961fe8; }
L_08961f98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961fc8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961fc8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08961fe8; }
L_08961fc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961fe4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08961fe8; }
L_08961fe4:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08961fe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08961ee8 */
}

/* func_08964b18  0x08964b18..0x08964c04  236 bytes, source=fde */
void func_08964b18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964b18u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08964b38u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08964b64; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08964b4cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08964b64; }
    { goto L_08964bf0; }
L_08964b64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08964bd8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08964ba4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08964bbc; }
    { goto L_08964bf0; }
L_08964ba4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08964be8; }
    { goto L_08964bf0; }
L_08964bbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08964bd0u; c->r[5] = 0u + 0xffffffffu; func_0880aed0(c, ram); }
    { goto L_08964bf0; }
L_08964bd8:
    { c->r[31] = 0x08964be0u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    { goto L_08964bf0; }
L_08964be8:
    { c->r[31] = 0x08964bf0u; c->r[4] = 0u + 0x0000003cu; func_0880b09c(c, ram); }
L_08964bf0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08964b18 */
}

/* func_08967acc  0x08967acc..0x08967b7c  176 bytes, source=sweep */
void func_08967acc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08967accu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08967ae0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967af8; }
    { goto L_08967b60; }
L_08967af8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967b50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967b34; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08967b68; }
L_08967b34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08967b68; }
L_08967b50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08967ae0; }
L_08967b60:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08967b68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08967acc */
}

/* func_08969964  0x08969964..0x0896998c  40 bytes, source=sweep */
void func_08969964(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969964u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000126u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08969964 */
}

/* func_0896a508  0x0896a508..0x0896a7b8  688 bytes, source=fde */
void func_0896a508(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a508u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896a618; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896a560u; c->r[5] = 0u + 0x00000006u; func_0896df68(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0896a564:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896a57c; }
    { goto L_0896a58c; }
L_0896a57c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0896a564; }
L_0896a58c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896a59cu; c->r[6] = 0u + 0x0000005cu; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896a5acu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896a5c8u; c->r[5] = 0u + 0x00000002u; func_0880d2bc(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0896a5d8u; c->r[5] = 0u + 0x00000003u; func_089d7208(c, ram); }
    { c->r[31] = 0x0896a5e0u; c->r[4] = 0u + 0u; func_0880b0d4(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x0896a5ecu; c->r[4] = c->r[4] + 0xffff85b8u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0896a5fcu; c->r[5] = 0u + 0x00000004u; func_089d7194(c, ram); }
    { c->r[31] = 0x0896a604u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0896a610u; c->r[5] = 0u + 0x00000001u; func_0896e344(c, ram); }
    { goto L_0896a674; }
L_0896a618:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a65c; }
    { c->r[31] = 0x0896a630u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a86c(c, ram); }
    { c->r[31] = 0x0896a638u; func_0896a284(c, ram); }
    { c->r[31] = 0x0896a640u; c->r[4] = c->r[2] + 0u; func_0896c670(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    { mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]); goto L_0896a674; }
L_0896a65c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a674; }
    { goto L_0896a7a4; }
L_0896a674:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9cc8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x0896a6a4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x0896a69cu, _t); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a744; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a708; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896a744; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000027f0u);
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f0u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896a744; }
L_0896a708:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896a744; }
    { c->r[31] = 0x0896a720u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a9cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a744; }
    { c->r[31] = 0x0896a73cu; func_0896a284(c, ram); }
    { c->r[31] = 0x0896a744u; c->r[4] = c->r[2] + 0u; func_0896ca98(c, ram); }
L_0896a744:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a768; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896a760u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0896a78c; }
L_0896a768:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a78c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000033u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0896a78c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a7a4; }
    { c->r[31] = 0x0896a7a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896aac8(c, ram); }
L_0896a7a4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896a508 */
}

/* func_0896db94  0x0896db94..0x0896dbc0  44 bytes, source=sweep */
void func_0896db94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896db94u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896dbacu; func_0896a3e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896db94 */
}

/* func_0896e69c  0x0896e69c..0x0896e6d0  52 bytes, source=sweep */
void func_0896e69c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e69cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[3] + 0x000009c5u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e69c */
}

/* func_0896f648  0x0896f648..0x0896f680  56 bytes, source=sweep */
void func_0896f648(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f648u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068c4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f648 */
}

/* func_08971764  0x08971764..0x08971924  448 bytes, source=fde */
void func_08971764(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08971764u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08971784u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08971788:
    { c->r[31] = 0x08971790u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089717ac; }
    { goto L_08971910; }
L_089717ac:
    { c->r[31] = 0x089717b4u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089717cc; }
    { goto L_08971900; }
L_089717cc:
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00002665u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089717e8; }
    { goto L_08971910; }
L_089717e8:
    { c->r[31] = 0x089717f0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08971828u; c->r[6] = 0u + 0x0000000eu; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_08971830:
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002665u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08971850; }
    { goto L_089718b4; }
L_08971850:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[30] + 0u;
    { c->r[31] = 0x08971864u; c->r[6] = 0u + 0x00000008u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089718a4; }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000025b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08971890u; c->r[6] = 0u + 0x0000000eu; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089718a4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089718b4; }
L_089718a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_08971830; }
L_089718b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08971900; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002665u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000025b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089718ecu; c->r[6] = 0u + 0x0000000eu; func_08a19db8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002665u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00002665u, c->r[2]);
L_08971900:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08971788; }
L_08971910:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08971764 */
}

/* func_08975564  0x08975564..0x089755a8  68 bytes, source=sweep */
void func_08975564(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975564u);
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
    return; /* fell out of func_08975564 */
}

/* func_08978a0c  0x08978a0c..0x08978a8c  128 bytes, source=sweep */
void func_08978a0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978a0cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08978a50; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08978a50; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08978a50u; c->r[4] = c->r[4] + 0x00006ea8u; func_08978c04(c, ram); }
L_08978a50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08978a78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08978a78; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08978a78u; c->r[4] = c->r[4] + 0x00006ea8u; func_08978c30(c, ram); }
L_08978a78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08978a0c */
}

/* func_0897c448  0x0897c448..0x0897de00  6584 bytes, source=fde */
void func_0897c448(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897c448u);
L_0897c448:
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897c4a8; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897dc3c; }
    { goto L_0897dde4; }
L_0897c4a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897dde4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8d04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897c448u: goto L_0897c448; case 0x0897c4e4u: goto L_0897c4e4; case 0x0897c5a4u: goto L_0897c5a4; case 0x0897c5d8u: goto L_0897c5d8; case 0x0897cb58u: goto L_0897cb58; case 0x0897d16cu: goto L_0897d16c; case 0x0897d4f8u: goto L_0897d4f8; case 0x0897d83cu: goto L_0897d83c; case 0x0897dbd4u: goto L_0897dbd4; case 0x0897dc08u: goto L_0897dc08; case 0x0897dc90u: goto L_0897dc90; case 0x0897dcf0u: goto L_0897dcf0; case 0x0897dd50u: goto L_0897dd50; case 0x0897dd74u: goto L_0897dd74; case 0x0897dd98u: goto L_0897dd98; case 0x0897ddbcu: goto L_0897ddbc; case 0x0897ddd8u: goto L_0897ddd8; case 0x0897dde4u: goto L_0897dde4; default: recomp_trap_unknown_indirect(c, ram, 0x0897c4dcu, _t); return; } }
L_0897c4e4:
    { c->r[31] = 0x0897c4ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897c504; }
    { c->r[31] = 0x0897c504u; c->r[4] = 0u + 0xffffffffu; func_089796dc(c, ram); }
L_0897c504:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c53cu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c558; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897c558u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_0897c558:
    { c->r[31] = 0x0897c560u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897c56cu; mem_w8(ram, c->r[2] + 0x00000011u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000080u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897c584u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0897c58cu; func_0896a284(c, ram); }
    { c->r[31] = 0x0897c594u; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897c5a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897c5b8u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c5c8; }
    { goto L_0897dde4; }
L_0897c5c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897c5d8:
    { c->r[31] = 0x0897c5e0u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897cad0; }
    { c->r[31] = 0x0897c5f8u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897c698; }
    { c->r[31] = 0x0897c614u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c64cu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c678; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897c668u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897c678u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_0897c678:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0897c688u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897c698:
    { c->r[31] = 0x0897c6a0u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897c8b4; }
    { c->r[31] = 0x0897c6bcu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9114u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897c6d8u; c->r[6] = 0u + 0x0000000fu; func_08a19db8(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897c6e8u; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9122u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c720u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c74c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897c73cu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897c74cu; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_0897c74c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa268u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c790u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c808; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0897c7acu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897c7c8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c808; }
    { c->r[31] = 0x0897c7e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x0897c7ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897c808u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0897c808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000006eu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c834u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c8a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000018u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897c85cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8cfcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897c87cu; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa274u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897c8a4u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_0897c8a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897c8b4:
    { c->r[31] = 0x0897c8bcu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897dde4; }
    { c->r[31] = 0x0897c8d8u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9114u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897c8f4u; c->r[6] = 0u + 0x0000000fu; func_08a19db8(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897c904u; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9122u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c93cu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c968; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897c958u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897c968u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_0897c968:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa268u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897c9acu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ca24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897c9c8u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897c9e4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ca24; }
    { c->r[31] = 0x0897c9fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x0897ca08u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897ca24u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0897ca24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000006eu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897ca50u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897cac0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000018u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897ca78u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8cfcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897ca98u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa274u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897cac0u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_0897cac0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897cad0:
    { c->r[31] = 0x0897cad8u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897dde4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897cafcu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897cb10u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897cb24u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897cb38u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897cb50u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0897dde4; }
L_0897cb58:
    { c->r[31] = 0x0897cb60u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897d0e4; }
    { c->r[31] = 0x0897cb78u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897cddc; }
    { c->r[31] = 0x0897cb94u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9114u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897cbb0u; c->r[6] = 0u + 0x0000000fu; func_08a19db8(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897cbc0u; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897cbd0u; c->r[4] = c->r[2] + 0u; func_08979c78(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9122u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897cc08u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897cc34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897cc24u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897cc34u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_0897cc34:
    { c->r[31] = 0x0897cc3cu; func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9114u);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa268u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897cc90u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897cd24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897ccacu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    { c->r[31] = 0x0897ccb4u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897ccc8u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897cce4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897cd24; }
    { c->r[31] = 0x0897ccfcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x0897cd08u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897cd24u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0897cd24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000006eu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897cd50u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897cdc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000018u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897cd78u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8cfcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897cd98u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa274u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897cdc0u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_0897cdc0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897cdccu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]); goto L_0897dde4; }
L_0897cddc:
    { c->r[31] = 0x0897cde4u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897ce50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897ce0cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897ce20u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x0897ce28u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897ce50:
    { c->r[31] = 0x0897ce58u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897dde4; }
    { c->r[31] = 0x0897ce74u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9078u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897ce90u; c->r[6] = 0u + 0x00000013u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0897ce98u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    { c->r[31] = 0x0897cea4u; c->r[4] = c->r[2] + 0u; func_08979948(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897ceb4u; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9122u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897ceecu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897cf18; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897cf08u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897cf18u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_0897cf18:
    { c->r[31] = 0x0897cf20u; func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9114u);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa268u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897cf74u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d008; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897cf90u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    { c->r[31] = 0x0897cf98u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897cfacu; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897cfc8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d008; }
    { c->r[31] = 0x0897cfe0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x0897cfecu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897d008u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0897d008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000006eu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897d034u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d0a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000018u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897d05cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8cfcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897d07cu; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa274u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897d0a4u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_0897d0a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d0b8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x0897d0c0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0897d0ccu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897d0e4:
    { c->r[31] = 0x0897d0ecu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897dde4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d110u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d124u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d138u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d14cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897d164u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0897dde4; }
L_0897d16c:
    { c->r[31] = 0x0897d174u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0897d188u; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0897d194u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9078u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897d1b0u; c->r[6] = 0u + 0x00000013u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0897d1b8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    { c->r[31] = 0x0897d1c4u; c->r[4] = c->r[2] + 0u; func_08979948(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897d1d4u; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_0897d2d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0897d20c; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897d224; }
    { goto L_0897dde4; }
L_0897d20c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897d290; }
    { goto L_0897dde4; }
L_0897d224:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897d23cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d250u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d264u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d278u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d288u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0897dde4; }
L_0897d290:
    { c->r[31] = 0x0897d298u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897d2b0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d2ccu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0897dde4; }
L_0897d2d4:
    { c->r[31] = 0x0897d2dcu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d334; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d30cu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0897d314u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897d32cu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { goto L_0897dde4; }
L_0897d334:
    { c->r[31] = 0x0897d33cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d354; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897d354:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897d3c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { c->r[31] = 0x0897d398u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897d3b0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d3c0u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0897dde4; }
L_0897d3c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000258u;
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
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = 0u + 0x00000168u;
    c->r[8] = 0u + 0x000000c0u;
    { c->r[31] = 0x0897d424u; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897d440u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897d460u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897dde4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897dde4; }
    { c->r[31] = 0x0897d484u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x0897d490u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    { c->r[31] = 0x0897d49cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b30(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    { c->r[31] = 0x0897d4a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000048u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000004cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897d4f0u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
    { goto L_0897dde4; }
L_0897d4f8:
    { c->r[31] = 0x0897d500u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0897d514u; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_0897d618; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0897d550; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897d568; }
    { goto L_0897dde4; }
L_0897d550:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897d5d4; }
    { goto L_0897dde4; }
L_0897d568:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897d580u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d594u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d5a8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897d5bcu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d5ccu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0897dde4; }
L_0897d5d4:
    { c->r[31] = 0x0897d5dcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897d5f4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d610u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0897dde4; }
L_0897d618:
    { c->r[31] = 0x0897d620u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d678; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d650u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0897d658u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897d670u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { goto L_0897dde4; }
L_0897d678:
    { c->r[31] = 0x0897d680u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d698; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897d698:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897d70c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { c->r[31] = 0x0897d6dcu; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897d6f4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0897d704u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0897dde4; }
L_0897d70c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000258u;
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
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[7] = 0u + 0x00000168u;
    c->r[8] = 0u + 0x000000c0u;
    { c->r[31] = 0x0897d768u; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897d784u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897d7a4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897dde4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897dde4; }
    { c->r[31] = 0x0897d7c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    { c->r[31] = 0x0897d7d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    { c->r[31] = 0x0897d7e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08932b30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0897d7ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897d834u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
    { goto L_0897dde4; }
L_0897d83c:
    { c->r[31] = 0x0897d844u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0897d858u; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    { c->r[31] = 0x0897d864u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9078u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897d880u; c->r[6] = 0u + 0x00000013u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0897d888u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    { c->r[31] = 0x0897d894u; c->r[4] = c->r[2] + 0u; func_08979948(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897d8a4u; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897d8fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897d8e4; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897db78; }
    { goto L_0897dde4; }
L_0897d8e4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897db48; }
    { goto L_0897dde4; }
L_0897d8fc:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9114u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897d91cu; c->r[4] = c->r[2] + 0u; func_08979c78(c, ram); }
    { c->r[31] = 0x0897d924u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0897d930u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff9079u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897d958; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897d950u; c->r[5] = 0u + 0x00000014u; func_0896a7b8(c, ram); }
    { goto L_0897db04; }
L_0897d958:
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_0897d95c:
    { c->r[31] = 0x0897d964u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897d980; }
    { goto L_0897da24; }
L_0897d980:
    { c->r[31] = 0x0897d988u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897da14; }
    { c->r[31] = 0x0897d9b0u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0x0000003fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    { c->r[31] = 0x0897d9e8u; mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0897da14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_0897d95c; }
L_0897da24:
    { c->r[31] = 0x0897da2cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
L_0897da34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897da4c; }
    { goto L_0897dad0; }
L_0897da4c:
    { c->r[31] = 0x0897da54u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0x0000003fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    { c->r[31] = 0x0897da8cu; mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_0897da34; }
L_0897dad0:
    { c->r[31] = 0x0897dad8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897daf8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897daf0u; c->r[5] = 0u + 0x00000018u; func_0896a7b8(c, ram); }
    { goto L_0897db04; }
L_0897daf8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897db04u; c->r[5] = 0u + 0x00000016u; func_0896a7b8(c, ram); }
L_0897db04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897db18u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897db2cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897db40u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_0897dde4; }
L_0897db48:
    { c->r[31] = 0x0897db50u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897db68u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897db78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897db90u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897dba4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897dbb8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897dbccu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_0897dde4; }
L_0897dbd4:
    { c->r[31] = 0x0897dbdcu; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897dde4; }
    { c->r[31] = 0x0897dbf8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897dde4; }
L_0897dc08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897dc1cu; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897dc2c; }
    { goto L_0897dde4; }
L_0897dc2c:
    { c->r[31] = 0x0897dc34u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_0897dde4; }
L_0897dc3c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8d00u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897dc54u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = (c->r[3] < 0x00000017u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ddd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8db4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897c448u: goto L_0897c448; case 0x0897c4e4u: goto L_0897c4e4; case 0x0897c5a4u: goto L_0897c5a4; case 0x0897c5d8u: goto L_0897c5d8; case 0x0897cb58u: goto L_0897cb58; case 0x0897d16cu: goto L_0897d16c; case 0x0897d4f8u: goto L_0897d4f8; case 0x0897d83cu: goto L_0897d83c; case 0x0897dbd4u: goto L_0897dbd4; case 0x0897dc08u: goto L_0897dc08; case 0x0897dc90u: goto L_0897dc90; case 0x0897dcf0u: goto L_0897dcf0; case 0x0897dd50u: goto L_0897dd50; case 0x0897dd74u: goto L_0897dd74; case 0x0897dd98u: goto L_0897dd98; case 0x0897ddbcu: goto L_0897ddbc; case 0x0897ddd8u: goto L_0897ddd8; case 0x0897dde4u: goto L_0897dde4; default: recomp_trap_unknown_indirect(c, ram, 0x0897dc88u, _t); return; } }
L_0897dc90:
    { c->r[31] = 0x0897dc98u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    { c->r[31] = 0x0897dca0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0897a6cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0897dccc; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { c->r[31] = 0x0897dcc4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897dce0; }
L_0897dccc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897dce0u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_0897dce0:
    { c->r[31] = 0x0897dce8u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_0897ddd8; }
L_0897dcf0:
    { c->r[31] = 0x0897dcf8u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    { c->r[31] = 0x0897dd00u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0897a73c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0897dd2c; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { c->r[31] = 0x0897dd24u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897dd40; }
L_0897dd2c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897dd40u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_0897dd40:
    { c->r[31] = 0x0897dd48u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_0897ddd8; }
L_0897dd50:
    { c->r[31] = 0x0897dd58u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001707u;
    { c->r[31] = 0x0897dd6cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897ddd8; }
L_0897dd74:
    { c->r[31] = 0x0897dd7cu; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001708u;
    { c->r[31] = 0x0897dd90u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897ddd8; }
L_0897dd98:
    { c->r[31] = 0x0897dda0u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001706u;
    { c->r[31] = 0x0897ddb4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897ddd8; }
L_0897ddbc:
    { c->r[31] = 0x0897ddc4u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001705u;
    { c->r[31] = 0x0897ddd8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_0897ddd8:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897dde4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0897dde4:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0897c448 */
}

/* func_08986008  0x08986008..0x08986048  64 bytes, source=fde */
void func_08986008(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08986008u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08986020u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08986008 */
}

/* func_08992174  0x08992174..0x08992944  2000 bytes, source=fde */
void func_08992174(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08992174u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089921a8u; c->r[5] = 0u + 0x000000a6u; func_089c9d8c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089922a4; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089921b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089921d0; }
    { goto L_08992228; }
L_089921d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002340u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000233cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089921b8; }
L_08992228:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0899222c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992244; }
    { goto L_08992284; }
L_08992244:
    { c->r[31] = 0x0899224cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896f5d8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x08992264u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896f610(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0899222c; }
L_08992284:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089922a4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089922a4u; c->r[5] = 0u + 0x000000a6u; func_089ca128(c, ram); }
L_089922a4:
    { c->r[31] = 0x089922acu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899248c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9dccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089922e4u: goto L_089922e4; case 0x0899232cu: goto L_0899232c; case 0x08992374u: goto L_08992374; case 0x089923bcu: goto L_089923bc; case 0x08992404u: goto L_08992404; case 0x0899244cu: goto L_0899244c; case 0x08992680u: goto L_08992680; case 0x089926c4u: goto L_089926c4; case 0x08992708u: goto L_08992708; case 0x08992790u: goto L_08992790; case 0x0899281cu: goto L_0899281c; case 0x089928acu: goto L_089928ac; default: recomp_trap_unknown_indirect(c, ram, 0x089922dcu, _t); return; } }
L_089922e4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089922f4u; c->r[5] = 0u + 0x000000a5u; func_089ca128(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000022d8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899248c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992324u; c->r[5] = 0u + 0x000000abu; func_089ca128(c, ram); }
    { goto L_0899248c; }
L_0899232c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899233cu; c->r[5] = 0u + 0x000000c6u; func_089ca128(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000022e8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899248c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899236cu; c->r[5] = 0u + 0x000000d8u; func_089ca128(c, ram); }
    { goto L_0899248c; }
L_08992374:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992384u; c->r[5] = 0u + 0x000000d1u; func_089ca128(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000022f8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899248c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089923b4u; c->r[5] = 0u + 0x000000c7u; func_089ca128(c, ram); }
    { goto L_0899248c; }
L_089923bc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089923ccu; c->r[5] = 0u + 0x000000b6u; func_089ca128(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002308u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899248c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089923fcu; c->r[5] = 0u + 0x000000dau; func_089ca128(c, ram); }
    { goto L_0899248c; }
L_08992404:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992414u; c->r[5] = 0u + 0x000000b7u; func_089ca128(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002318u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899248c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992444u; c->r[5] = 0u + 0x000000b5u; func_089ca128(c, ram); }
    { goto L_0899248c; }
L_0899244c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899245cu; c->r[5] = 0u + 0x000000c0u; func_089ca128(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002328u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899248c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899248cu; c->r[5] = 0u + 0x000000c2u; func_089ca128(c, ram); }
L_0899248c:
    { c->r[31] = 0x08992494u; mem_w32(ram, c->r[30] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089924e8; }
    { c->r[31] = 0x089924a8u; func_08998dcc(c, ram); }
    { c->r[31] = 0x089924b0u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899252c; }
    { c->r[31] = 0x089924ccu; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899252c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0899252c; }
L_089924e8:
    { c->r[31] = 0x089924f0u; func_08998dcc(c, ram); }
    { c->r[31] = 0x089924f8u; c->r[16] = c->r[2] + 0u; func_0896dc4c(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899252c; }
    { c->r[31] = 0x08992514u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899252c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0899252c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08992534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899254c; }
    { goto L_08992580; }
L_0899254c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08992534; }
L_08992580:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000032u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089925b0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089925b0u; c->r[5] = 0u + 0x000000f0u; func_089ca128(c, ram); }
L_089925b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089925d0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089925d0u; c->r[5] = 0u + 0x000000efu; func_089ca128(c, ram); }
L_089925d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089925f0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089925f0u; c->r[5] = 0u + 0x000000eeu; func_089ca128(c, ram); }
L_089925f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992640; }
    { c->r[31] = 0x08992608u; func_089715e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00002665u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992640; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992640u; c->r[5] = 0u + 0x000000f3u; func_089ca128(c, ram); }
L_08992640:
    { c->r[31] = 0x08992648u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899292c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9de4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089922e4u: goto L_089922e4; case 0x0899232cu: goto L_0899232c; case 0x08992374u: goto L_08992374; case 0x089923bcu: goto L_089923bc; case 0x08992404u: goto L_08992404; case 0x0899244cu: goto L_0899244c; case 0x08992680u: goto L_08992680; case 0x089926c4u: goto L_089926c4; case 0x08992708u: goto L_08992708; case 0x08992790u: goto L_08992790; case 0x0899281cu: goto L_0899281c; case 0x089928acu: goto L_089928ac; default: recomp_trap_unknown_indirect(c, ram, 0x08992678u, _t); return; } }
L_08992680:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000022dcu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899292c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089926bcu; c->r[5] = 0u + 0x000000f1u; func_089ca128(c, ram); }
    { goto L_0899292c; }
L_089926c4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000022ecu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899292c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992700u; c->r[5] = 0u + 0x000000f2u; func_089ca128(c, ram); }
    { goto L_0899292c; }
L_08992708:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266au);
    { c->r[31] = 0x08992718u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_08998e74(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992748; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992748u; c->r[5] = 0u + 0x000000f6u; func_089ca128(c, ram); }
L_08992748:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992768; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992768u; c->r[5] = 0u + 0x000000f5u; func_089ca128(c, ram); }
L_08992768:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899292c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992788u; c->r[5] = 0u + 0x000000f4u; func_089ca128(c, ram); }
    { goto L_0899292c; }
L_08992790:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00002668u);
    { c->r[31] = 0x089927a0u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_08998ef4(c, ram); }
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000708u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089927d4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089927d4u; c->r[5] = 0u + 0x000000f9u; func_089ca128(c, ram); }
L_089927d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000384u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089927f4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089927f4u; c->r[5] = 0u + 0x000000f8u; func_089ca128(c, ram); }
L_089927f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000012cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899292c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992814u; c->r[5] = 0u + 0x000000f7u; func_089ca128(c, ram); }
    { goto L_0899292c; }
L_0899281c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266bu);
    { c->r[31] = 0x0899282cu; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x08992834u; c->r[4] = c->r[2] + 0u; func_08999048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992864; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992864u; c->r[5] = 0u + 0x000000fcu; func_089ca128(c, ram); }
L_08992864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992884; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08992884u; c->r[5] = 0u + 0x000000fbu; func_089ca128(c, ram); }
L_08992884:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899292c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089928a4u; c->r[5] = 0u + 0x000000fau; func_089ca128(c, ram); }
    { goto L_0899292c; }
L_089928ac:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266cu);
    { c->r[31] = 0x089928bcu; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_08998d1c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089928ec; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089928ecu; c->r[5] = 0u + 0x000000ffu; func_089ca128(c, ram); }
L_089928ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899290c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899290cu; c->r[5] = 0u + 0x000000feu; func_089ca128(c, ram); }
L_0899290c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899292c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899292cu; c->r[5] = 0u + 0x000000fdu; func_089ca128(c, ram); }
L_0899292c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08992174 */
}

/* func_08998abc  0x08998abc..0x08998b48  140 bytes, source=sweep */
void func_08998abc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998abcu);
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
    c->r[2] = 0u + 0xfffffff7u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998b38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08998b38:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998abc */
}

/* func_08999204  0x08999204..0x08999234  48 bytes, source=sweep */
void func_08999204(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999204u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002aaau, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08999204 */
}

/* func_0899e214  0x0899e214..0x0899e5dc  968 bytes, source=fde */
void func_0899e214(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899e214u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899e240u; c->r[6] = 0u + 0x000000a0u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000b8u, 0u);
L_0899e274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e28c; }
    { goto L_0899e4bc; }
L_0899e28c:
    { c->r[31] = 0x0899e294u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899e2a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000b8u); func_08998840(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899e2b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000c0u); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899e4ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffffea90u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e2f4; }
    { goto L_0899e4ac; }
L_0899e2f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899e314; }
    { goto L_0899e4ac; }
L_0899e314:
    mem_w32(ram, c->r[30] + 0x000000c8u, 0u);
    mem_w32(ram, c->r[30] + 0x000000ccu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000b8u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899e398; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
L_0899e398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899e464; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e3fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
L_0899e3fc:
    mem_w32(ram, c->r[30] + 0x000000dcu, 0u);
L_0899e400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e420; }
    { goto L_0899e464; }
L_0899e420:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]); goto L_0899e400; }
L_0899e464:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x000000c8u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899e4acu; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
L_0899e4ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]); goto L_0899e274; }
L_0899e4bc:
    { c->r[31] = 0x0899e4c4u; func_0896a4a4(c, ram); }
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = c->r[2] + 0x0000004cu;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ccu, 0u);
L_0899e4f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e510; }
    { goto L_0899e5a0; }
L_0899e510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = c->r[2] - c->r[3];
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899e530; }
    { goto L_0899e5a0; }
L_0899e530:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { c->r[31] = 0x0899e548u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]); goto L_0899e4f8; }
L_0899e5a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000d0u);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0899e5c8u; c->r[6] = 0u + 0x000000a0u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_0899e214 */
}

/* func_089a1b88  0x089a1b88..0x089a1bc8  64 bytes, source=sweep */
void func_089a1b88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1b88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000130u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000134u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000138u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000013cu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1b88 */
}

/* func_089a64a0  0x089a64a0..0x089a6564  196 bytes, source=fde */
void func_089a64a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a64a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002e50u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x089a64c4u; c->r[6] = 0u + 0x00000028u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08a60000u;
    mem_w16(ram, c->r[1] + 0xffffa75cu, 0u);
    c->r[1] = 0x08a60000u;
    mem_w16(ram, c->r[1] + 0xffffa75eu, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e7cu, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e7du, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e80u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e81u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e84u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e85u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e90u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e91u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e88u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a652cu; mem_w32(ram, c->r[1] + 0x00002e8cu, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a6550; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e88u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e8cu, 0u);
L_089a6550:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089a64a0 */
}

/* func_089ac4cc  0x089ac4cc..0x089ac564  152 bytes, source=sweep */
void func_089ac4cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac4ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafb4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000018u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafb4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafb4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac4cc */
}

/* func_089b2810  0x089b2810..0x089b2848  56 bytes, source=sweep */
void func_089b2810(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2810u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b2834u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089b29d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2810 */
}

/* func_089b357c  0x089b357c..0x089b3680  260 bytes, source=sweep */
void func_089b357c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b357cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b3670; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1c8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b35cc; }
    { goto L_089b35f4; }
L_089b35cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1c8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
L_089b35f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1c8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b3648; }
    { goto L_089b3658; }
L_089b3648:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_089b3664; }
L_089b3658:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1c8u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_089b3664:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_089b3670:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b357c */
}

/* func_089b65dc  0x089b65dc..0x089b6710  308 bytes, source=sweep */
void func_089b65dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b65dcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b6674; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089b66fc; }
L_089b6674:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b66a0; }
    { goto L_089b66e4; }
L_089b66a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b66d8; }
    { goto L_089b66e4; }
L_089b66d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089b66fc; }
L_089b66e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089b6674; }
L_089b66fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b65dc */
}

/* func_089b7d14  0x089b7d14..0x089b7d6c  88 bytes, source=fde */
void func_089b7d14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7d14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000acu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7d48u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c356c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b7d58u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089b7d6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b7d14 */
}

/* func_089b9814  0x089b9814..0x089b9864  80 bytes, source=residue */
void func_089b9814(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9814u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089b9830u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c6b50(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9840; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_089b984c; }
L_089b9840:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000005cu);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_089b984c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b9814 */
}

/* func_089c35d4  0x089c35d4..0x089c3618  68 bytes, source=fde */
void func_089c35d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c35d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089c3604u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c35d4 */
}

/* func_089c6b1c  0x089c6b1c..0x089c6b50  52 bytes, source=sweep */
void func_089c6b1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6b1cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c6b1c */
}

/* func_089c90c0  0x089c90c0..0x089c9114  84 bytes, source=fde */
void func_089c90c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c90c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    mem_w8(ram, c->r[3] + 0x0000014au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000001d8u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c90f4u; c->r[5] = c->r[2] + 0u; func_089c965c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c9100u; c->r[5] = 0u + 0u; func_0880d3a8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c90c0 */
}

/* func_089cb420  0x089cb420..0x089cb49c  124 bytes, source=fde */
void func_089cb420(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb420u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089cb444:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cb45c; }
    { goto L_089cb488; }
L_089cb45c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x089cb478u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); recomp_call_indirect(c, ram, 0x089cb470u, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089cb444; }
L_089cb488:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb420 */
}

/* func_089cffc4  0x089cffc4..0x089d004c  136 bytes, source=sweep */
void func_089cffc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cffc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc74u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cffc4 */
}

/* func_089d28e0  0x089d28e0..0x089d29d8  248 bytes, source=sweep */
void func_089d28e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d28e0u);
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
    { c->r[31] = 0x089d295cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
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
    { c->r[31] = 0x089d2990u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d29bcu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    { c->r[31] = 0x089d29c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d29d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d28e0 */
}

/* func_089d38ec  0x089d38ec..0x089d3a80  404 bytes, source=fde */
void func_089d38ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d38ecu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    c->r[2] = 0x08b90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xfffffd30u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d3958; }
    { c->r[31] = 0x089d3924u; c->r[4] = 0u + 0x00007800u; hle_dispatch_stub(c, ram, 0x08a24bccu); /* sceNetAdhocMatchingInit */ }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d394c; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffb7d0u;
    { c->r[31] = 0x089d3944u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a1a4c0(c, ram); }
    { goto L_089d3a6c; }
L_089d394c:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b90000u;
    mem_w8(ram, c->r[1] + 0xfffffd30u, c->r[2]);
L_089d3958:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb7c0u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb7c4u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb7c8u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb7ccu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000800u;
    c->r[8] = 0x000f0000u;
    c->r[8] = c->r[8] | 0x4240u;
    c->r[9] = 0x002d0000u;
    c->r[9] = c->r[9] | 0xc6c0u;
    c->r[10] = 0u + 0x00000003u;
    c->r[11] = 0x00070000u;
    { c->r[31] = 0x089d39e8u; c->r[11] = c->r[11] | 0xa120u; hle_dispatch_stub(c, ram, 0x08a24c14u); /* sceNetAdhocMatchingCreate */ }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d3a10; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffb800u;
    { c->r[31] = 0x089d3a08u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a1a4c0(c, ram); }
    { goto L_089d3a6c; }
L_089d3a10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[5] = 0u + 0x00000029u;
    c->r[6] = 0u + 0x00002c00u;
    c->r[7] = 0u + 0x00000029u;
    c->r[8] = 0u + 0x00002000u;
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089d3a40u; c->r[10] = mem_r32(ram, c->r[30] + 0x0000001cu); hle_dispatch_stub(c, ram, 0x08a24bf4u); /* sceNetAdhocMatchingStart */ }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d3a6c; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffb834u;
    { c->r[31] = 0x089d3a60u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a1a4c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089d3a6cu; c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu); hle_dispatch_stub(c, ram, 0x08a24c1cu); /* sceNetAdhocMatchingDelete */ }
L_089d3a6c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089d38ec */
}

/* func_089d54e0  0x089d54e0..0x089d5640  352 bytes, source=fde */
void func_089d54e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d54e0u);
L_089d54e0:
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
    c->r[2] = (c->r[2] < 0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d562c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb954u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089d54e0u: goto L_089d54e0; case 0x089d5534u: goto L_089d5534; case 0x089d5554u: goto L_089d5554; case 0x089d5574u: goto L_089d5574; case 0x089d5594u: goto L_089d5594; case 0x089d55b4u: goto L_089d55b4; case 0x089d55d4u: goto L_089d55d4; case 0x089d55f4u: goto L_089d55f4; case 0x089d5614u: goto L_089d5614; case 0x089d562cu: goto L_089d562c; default: recomp_trap_unknown_indirect(c, ram, 0x089d552cu, _t); return; } }
L_089d5534:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d554cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5974(c, ram); }
    { goto L_089d562c; }
L_089d5554:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d556cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d59dc(c, ram); }
    { goto L_089d562c; }
L_089d5574:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d558cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5a2c(c, ram); }
    { goto L_089d562c; }
L_089d5594:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d55acu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5a7c(c, ram); }
    { goto L_089d562c; }
L_089d55b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d55ccu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5acc(c, ram); }
    { goto L_089d562c; }
L_089d55d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d55ecu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5b1c(c, ram); }
    { goto L_089d562c; }
L_089d55f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d560cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5b6c(c, ram); }
    { goto L_089d562c; }
L_089d5614:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d562cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5bbc(c, ram); }
L_089d562c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d54e0 */
}

/* func_089d6910  0x089d6910..0x089d6a6c  348 bytes, source=fde */
void func_089d6910(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d6910u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffff0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060d4u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6a04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000060d4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000060d8u);
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6a04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x2e460000u;
    c->r[2] = c->r[2] | 0x4544u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d69e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089d69d8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u); func_089d6a6c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d6a54; }
L_089d69e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d69fcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a19db8(c, ram); }
    { goto L_089d6a54; }
L_089d6a04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x2e460000u;
    c->r[2] = c->r[2] | 0x4544u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d6a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000060d4u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d6a30u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x000060d4u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089d6a4cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u); func_089d6a6c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089d6a54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d6910 */
}

/* func_089d7fe4  0x089d7fe4..0x089d8008  36 bytes, source=sweep */
void func_089d7fe4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7fe4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7fe4 */
}

/* func_089d9844  0x089d9844..0x089d987c  56 bytes, source=sweep */
void func_089d9844(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9844u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000020u;
    c->r[2] = alx_min(c->r[3], c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000044u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9844 */
}

/* func_089da7e0  0x089da7e0..0x089da844  100 bytes, source=sweep */
void func_089da7e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da7e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089da7e0 */
}

/* func_089dbf78  0x089dbf78..0x089dbfbc  68 bytes, source=sweep */
void func_089dbf78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dbf78u);
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
    { c->r[31] = 0x089dbfa8u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dbf78 */
}

/* func_089dda84  0x089dda84..0x089ddbc0  316 bytes, source=fde */
void func_089dda84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dda84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc1a8u;
    { c->r[31] = 0x089ddab4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1a4c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc16cu;
    { c->r[31] = 0x089ddac8u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ddb08; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc174u;
    { c->r[31] = 0x089ddae4u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ddb08; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc17cu;
    { c->r[31] = 0x089ddb00u; c->r[6] = 0u + 0x00000004u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddb84; }
L_089ddb08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc174u;
    { c->r[31] = 0x089ddb1cu; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddb40; }
    { c->r[31] = 0x089ddb2cu; hle_dispatch_stub(c, ram, 0x08a24d54u); /* sceUmdGetDriveStat */ }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddb40; }
    { goto L_089ddb64; }
L_089ddb40:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089ddb54u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24714u); /* sceIoOpen */ }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089ddb9c; }
L_089ddb64:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089ddb70u; c->r[4] = c->r[4] + 0xffffc1b8u; func_08a1a4c0(c, ram); }
    c->r[4] = 0x000f0000u;
    { c->r[31] = 0x089ddb7cu; c->r[4] = c->r[4] | 0x4240u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { goto L_089ddb08; }
L_089ddb84:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089ddb90u; c->r[4] = c->r[4] + 0xffffc184u; func_08a1a4c0(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089ddba4; }
L_089ddb9c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089ddba4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dda84 */
}

/* func_089dfd60  0x089dfd60..0x089dfe30  208 bytes, source=sweep */
void func_089dfd60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dfd60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dfdd4; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089dfdccu; c->r[5] = 0u + 0x00000007u; func_089e2288(c, ram); }
    { goto L_089dfe1c; }
L_089dfdd4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089dfe1cu; c->r[5] = 0u + 0x00000007u; func_089e22c4(c, ram); }
L_089dfe1c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dfd60 */
}

/* func_089e1e28  0x089e1e28..0x089e1e68  64 bytes, source=sweep */
void func_089e1e28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1e28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e1e54u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e3694(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1e28 */
}

/* func_089e2a3c  0x089e2a3c..0x089e2bcc  400 bytes, source=sweep */
void func_089e2a3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2a3cu);
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
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[11]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e2a88; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089e2a8c; }
L_089e2a88:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089e2a8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xb2000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2ab0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xb3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2adcu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xeb000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2b00u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xb4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2b24u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xb5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2b50u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xec000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2b74u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xee000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2ba0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0xea000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2bb8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089e2a3c */
}

/* func_089e3cd4  0x089e3cd4..0x089e3d84  176 bytes, source=sweep */
void func_089e3cd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3cd4u);
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
    { c->r[31] = 0x089e3d1cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3d40u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3d4cu; c->r[5] = 0x15000000u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3d70u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e3cd4 */
}

/* func_089e4e34  0x089e4e34..0x089e4e64  48 bytes, source=sweep */
void func_089e4e34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4e34u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x089e4e50u; c->r[5] = 0u | 0xffffu; func_089e17dc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089e4e34 */
}

/* func_089ea3c0  0x089ea3c0..0x089ea42c  108 bytes, source=sweep */
void func_089ea3c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea3c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[3] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000070u);
    { c->r[31] = 0x089ea408u; c->r[6] = mem_r32(ram, c->r[3] + 0x0000006cu); func_089ea628(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089ea418u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089ea67c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea3c0 */
}

/* func_089eb228  0x089eb228..0x089eb2d4  172 bytes, source=sweep */
void func_089eb228(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb228u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089eb288; }
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
    { c->r[31] = 0x089eb280u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089eb344(c, ram); }
    { goto L_089eb2c0; }
L_089eb288:
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
    { c->r[31] = 0x089eb2c0u; c->r[8] = c->r[2] + 0u; func_089eb344(c, ram); }
L_089eb2c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb228 */
}

/* func_089ef4bc  0x089ef4bc..0x089ef5ac  240 bytes, source=fde */
void func_089ef4bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef4bcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef4e8u; c->r[5] = 0u + 0x00000040u; func_089ef5ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000016u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ef550; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089ef550:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = 0u | 0xe8a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = 0u | 0xe8a0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ef4bc */
}

/* func_089f0e74  0x089f0e74..0x089f0eb8  68 bytes, source=sweep */
void func_089f0e74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0e74u);
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
    { c->r[31] = 0x089f0ea4u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0e74 */
}

/* func_089f4c50  0x089f4c50..0x089f4c70  32 bytes, source=sweep */
void func_089f4c50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f4c50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f4c50 */
}

/* func_089f5f2c  0x089f5f2c..0x089f60cc  416 bytes, source=fde */
void func_089f5f2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5f2cu);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[9]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f5f78; }
    { c->r[31] = 0x089f5f70u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8068(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]); goto L_089f5f80; }
L_089f5f78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
L_089f5f80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f60ac; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f5fa4u; c->r[4] = c->r[2] + 0u; func_089f85a0(c, ram); }
    c->r[4] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00003fffu;
    c->r[5] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[8] = c->r[30] + 0x00000020u;
    c->f[12] = c->f[0];
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089f5fe0u; c->r[7] = c->r[3] + 0u; func_089f9428(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f60ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f603c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f6034u; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000c8u, 0u); goto L_089f60b4; }
L_089f603c:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f6050u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f7d84(c, ram); }
    c->r[2] = c->r[2] & 0x8000u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f608c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
L_089f608c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { c->r[31] = 0x089f60a4u; c->r[7] = c->r[2] + 0u; func_089f8108(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]); goto L_089f60b4; }
L_089f60ac:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
L_089f60b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_089f5f2c */
}

/* func_089f8998  0x089f8998..0x089f8a40  168 bytes, source=fde */
void func_089f8998(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8998u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f89c0u; c->r[5] = 0u + 0u; func_089f8b84(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f89e0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f89d8u; c->r[6] = 0u + 0u; func_089f8920(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089f8a28; }
L_089f89e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001au;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd124u;
    { c->r[31] = 0x089f89fcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f8a0cu; c->r[6] = 0u + 0u; func_089fe2b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x089f8a18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8bf8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
L_089f8a28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f8998 */
}

/* func_089f9658  0x089f9658..0x089f9704  172 bytes, source=residue */
void func_089f9658(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9658u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seb(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    { c->r[31] = 0x089f9688u; c->r[17] = c->r[5] & 0xffffu; func_089facc8(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[3] = c->r[3] | 0x0010u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[11] = c->r[3] + 0u; if (_c) goto L_089f96e4; }
    { c->r[31] = 0x089f96a4u; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[11] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    c->r[8] = c->r[19] + 0u;
    c->r[10] = c->r[18] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { int _c = (c->r[2] == 0u); c->r[11] = c->r[11] | 0x0011u; if (_c) goto L_089f96e4; }
    c->r[2] = 0x08a50000u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd14cu);
    { c->r[31] = 0x089f96e0u; c->f[13] = c->f[12]; func_089fd034(c, ram); }
    c->r[11] = c->r[2] + 0u;
L_089f96e4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[11] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f9658 */
}

/* func_089fa308  0x089fa308..0x089fa32c  36 bytes, source=sweep */
void func_089fa308(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa308u);
    c->r[2] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fa320u; func_089f9b8c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa308 */
}

/* func_089fabd4  0x089fabd4..0x089fac20  76 bytes, source=sweep */
void func_089fabd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fabd4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[16] + 0x00006590u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fabf0u; func_089fa6f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00006590u);
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_089fac10; }
    mem_w32(ram, c->r[16] + 0x00006590u, 0u);
L_089fac00:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fac10:
    { c->r[31] = 0x089fac18u; func_08a0d214(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00006590u, 0u); goto L_089fac00; }
    return; /* fell out of func_089fabd4 */
}

/* func_089fb424  0x089fb424..0x089fb430  12 bytes, source=sweep */
void func_089fb424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb424u);
    c->r[2] = 0x08b90000u;
    { c->r[2] = c->r[2] + 0x00007e94u; return; }
    return; /* fell out of func_089fb424 */
}

/* func_089fc0f0  0x089fc0f0..0x089fc10c  28 bytes, source=sweep */
void func_089fc0f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc0f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc100u; func_089fc56c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc0f0 */
}

/* func_089fd874  0x089fd874..0x089fd89c  40 bytes, source=residue */
void func_089fd874(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd874u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[10]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[11]);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fd874 */
}

/* func_089fe64c  0x089fe64c..0x089fe6cc  128 bytes, source=sweep */
void func_089fe64c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe64cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[4] == c->r[2]); c->r[3] = c->r[4] << 3; if (_c) goto L_089fe694; }
    c->r[3] = c->r[3] - c->r[4];
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[3] = c->r[3] << 5;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r16(ram, c->r[3] + 0x00000010u);
    c->r[5] = 0x80000000u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[4] != c->r[2]); c->r[5] = c->r[5] | 0x000cu; if (_c) goto L_089fe68c; }
    c->r[2] = 0u + 0x00000003u;
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[5] = 0u + 0u;
L_089fe68c:
    { c->r[2] = c->r[5] + 0u; return; }
L_089fe694:
    c->r[2] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000016cu);
    { int _c = ((s32)c->r[3] <= 0); c->r[5] = 0u + 0u; if (_c) goto L_089fe68c; }
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0u + 0x00000003u;
L_089fe6b4:
    c->r[3] = c->r[3] + 0xffffffffu;
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[4]);
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[2] + 0x000000e0u; if (_c) goto L_089fe6b4; }
    { c->r[5] = 0u + 0u; goto L_089fe68c; }
    return; /* fell out of func_089fe64c */
}

/* func_089ff600  0x089ff600..0x089ff72c  300 bytes, source=sweep */
void func_089ff600(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff600u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[2] + 0x0000008cu;
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000084u);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    { int _c = (c->r[3] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_089ff6d8; }
L_089ff62c:
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000084u);
L_089ff630:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = 0u + 0x00000001u; if (_c) goto L_089ff648; }
    c->r[2] = mem_r16(ram, c->r[17] + 0x00000010u);
    { int _c = (c->r[2] == 0u); c->r[8] = 0u + 0u; if (_c) goto L_089ff668; }
L_089ff648:
    { c->r[31] = 0x089ff650u; c->r[4] = 0u + 0u; func_089ff7e0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089ff668:
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000070u);
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000068u);
    mem_w32(ram, c->r[17] + 0x000000ccu, c->r[16]);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089ff680u; c->r[7] = (u32)((s32)c->r[2] >> 31); func_08a02fcc(c, ram); }
    c->r[3] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[3] + 0xffffd2bcu);
    c->r[4] = 0u + 0x00000004u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[17] + 0x00000064u, c->r[4]);
    mem_w16(ram, c->r[17] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[17] + 0x000000a4u, c->r[2]);
    mem_wf32(ram, c->r[17] + 0x000000bcu, c->f[0]);
    mem_w32(ram, c->r[17] + 0x000000d0u, 0u);
    mem_w32(ram, c->r[17] + 0x00000074u, 0u);
    mem_w32(ram, c->r[17] + 0x00000054u, 0u);
    mem_w32(ram, c->r[17] + 0x00000060u, 0u);
    mem_w32(ram, c->r[17] + 0x00000058u, 0u);
    mem_w32(ram, c->r[17] + 0x0000005cu, 0u);
    mem_w32(ram, c->r[17] + 0x00000078u, 0u);
    mem_w32(ram, c->r[17] + 0x00000080u, 0u);
    mem_w32(ram, c->r[17] + 0x00000084u, 0u);
    mem_w32(ram, c->r[17] + 0x00000020u, 0u);
    mem_w32(ram, c->r[17] + 0x0000008cu, 0u);
    mem_w32(ram, c->r[17] + 0x00000088u, 0u);
    { mem_w32(ram, c->r[17] + 0x000000c8u, 0u); goto L_089ff648; }
L_089ff6d8:
    { c->r[31] = 0x089ff6e0u; c->r[5] = mem_r32(ram, c->r[17] + 0x00000034u); func_089fed50(c, ram); }
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000020u);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089ff6f0u; c->r[16] = c->r[2] + 0u; func_089fed50(c, ram); }
    c->r[16] = c->r[16] - c->r[2];
    c->r[16] = ((s32)c->r[16] < (s32)0x0000157cu) ? 1u : 0u;
    if (c->r[16] == 0u) { c->r[2] = mem_r32(ram, c->r[17] + 0x00000084u); goto L_089ff630; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000078u);
    c->r[4] = 0u + 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = 0u + 0x000003e8u; if (_c) goto L_089ff62c; }
    { c->r[31] = 0x089ff718u; func_089fe6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000084u);
    mem_w32(ram, c->r[17] + 0x000000ccu, 0u);
    c->r[3] = c->r[3] + 0x00000001u;
    { mem_w32(ram, c->r[17] + 0x00000084u, c->r[3]); goto L_089ff62c; }
    return; /* fell out of func_089ff600 */
}

/* func_08a01fa4  0x08a01fa4..0x08a020b8  276 bytes, source=fde */
void func_08a01fa4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01fa4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    c->r[23] = 0x08ba0000u;
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
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    { c->r[31] = 0x08a01ff4u; c->r[17] = c->r[5] & 0xffffu; func_089fad6c(c, ram); }
    c->r[5] = c->r[20] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a02038; }
L_08a02008:
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
L_08a02038:
    { c->r[31] = 0x08a02040u; c->r[4] = mem_r32(ram, c->r[23] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd34cu);
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
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a02008; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x08a02084u; c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd350u); func_089fd034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[23] + 0xffff9af0u);
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    c->r[8] = c->r[22] + 0u;
    { c->r[31] = 0x08a0209cu; c->r[5] = c->r[19] + 0u; func_08a02a28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[23] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[19] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a020b0u; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a02008; }
    return; /* fell out of func_08a01fa4 */
}

/* func_08a03050  0x08a03050..0x08a03074  36 bytes, source=residue */
void func_08a03050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03050u);
    c->r[5] = c->r[4] + 0u;
    c->r[4] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a03068u; c->r[4] = c->r[4] + 0xffff9af8u; func_08a02f90(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a03050 */
}

/* func_08a03d14  0x08a03d14..0x08a03e6c  344 bytes, source=residue */
void func_08a03d14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03d14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = 0x80440000u;
    c->r[8] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[3] = c->r[2] | 0x0005u;
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[6] + 0u;
    { int _c = (c->r[8] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]); if (_c) goto L_08a03dfc; }
    c->r[3] = 0x01800000u;
    c->r[5] = (c->r[3] < c->r[6]) ? 1u : 0u;
    c->r[6] = 0x80440000u;
    { int _c = (c->r[5] != 0u); c->r[3] = c->r[6] | 0x0007u; if (_c) goto L_08a03dfc; }
    { c->r[31] = 0x08a03d68u; func_08a04124(c, ram); }
    c->r[4] = 0x80440000u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[4] | 0x0009u; if (_c) goto L_08a03dfc; }
    c->r[7] = c->r[19] & 0x0400u;
    { int _c = (c->r[7] != 0u); c->r[15] = 0x80440000u; if (_c) goto L_08a03e1c; }
    c->r[8] = 0x80440000u;
    { int _c = (c->r[18] == 0u); c->r[3] = c->r[8] | 0x0006u; if (_c) goto L_08a03dfc; }
    c->r[9] = 0x80440000u;
    { int _c = (c->r[16] == 0u); c->r[3] = c->r[9] | 0x0007u; if (_c) goto L_08a03dfc; }
    c->r[14] = 0u + 0x0000004cu;
    alx_mult(c, c->r[17], c->r[14]);
    c->r[13] = 0x08ba0000u;
    c->r[12] = c->r[13] + 0xffffaa78u;
    c->r[4] = 0u + 0x00001000u;
    c->r[10] = 0u + 0x00000070u;
    c->r[11] = c->lo;
    c->r[3] = c->r[11] + c->r[12];
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[18]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[16]);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[19]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[4]);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000040u, 0u);
L_08a03dd0:
    mem_w32(ram, c->r[3] + 0x00000020u, 0u);
    mem_w32(ram, c->r[3] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[4]);
    mem_w32(ram, c->r[3] + 0x00000030u, 0u);
    mem_w32(ram, c->r[3] + 0x00000034u, 0u);
    mem_w32(ram, c->r[3] + 0x00000028u, 0u);
    mem_w32(ram, c->r[3] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[3] + 0x00000024u, 0u);
    mem_w32(ram, c->r[3] + 0x00000010u, 0u);
    mem_w32(ram, c->r[3] + 0x00000014u, 0u);
    c->r[3] = 0u + 0u;
L_08a03dfc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a03e1c:
    { int _c = (c->r[18] != 0u); c->r[3] = c->r[15] | 0x0006u; if (_c) goto L_08a03dfc; }
    c->r[18] = 0x80440000u;
    { int _c = (c->r[16] != 0u); c->r[3] = c->r[18] | 0x0007u; if (_c) goto L_08a03dfc; }
    c->r[2] = 0u + 0x0000004cu;
    alx_mult(c, c->r[17], c->r[2]);
    c->r[25] = 0x08ba0000u;
    c->r[24] = c->r[25] + 0xffffaa78u;
    c->r[4] = 0u + 0x00001000u;
    c->r[16] = 0u + 0x00000070u;
    c->r[17] = c->lo;
    c->r[3] = c->r[17] + c->r[24];
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[19]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[4]);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[16]);
    mem_w32(ram, c->r[3] + 0x00000040u, 0u);
    mem_w32(ram, c->r[3] + 0x00000000u, 0u);
    { mem_w32(ram, c->r[3] + 0x00000004u, 0u); goto L_08a03dd0; }
    return; /* fell out of func_08a03d14 */
}

/* func_08a059d4  0x08a059d4..0x08a05ad4  256 bytes, source=sweep */
void func_08a059d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a059d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = 0x08ba0000u;
    c->r[2] = 0x80420000u;
    c->r[6] = mem_r32(ram, c->r[17] + 0xffffaf80u);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[5] = c->r[4] + 0u;
    c->r[3] = c->r[2] | 0x0101u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    { int _c = (c->r[6] != 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a05a5c; }
    c->r[18] = 0x08ba0000u;
    c->r[4] = c->r[18] + 0xffffafc0u;
    c->r[6] = 0u + 0x00000020u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a05a1cu; c->r[8] = 0u | 0xac44u; hle_dispatch_stub(c, ram, 0x08a24c94u); /* __sceSasInit */ }
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a05a5c; }
    c->r[16] = 0u + 0u;
    c->r[19] = c->r[17] + 0u;
    c->r[3] = mem_r32(ram, c->r[17] + 0xffffaf80u);
L_08a05a30:
    c->r[5] = c->r[16] + 0u;
    c->r[4] = c->r[18] + 0xffffafc0u;
    { int _c = (c->r[3] != 0u); c->r[6] = 0u + 0x00001000u; if (_c) goto L_08a05a7c; }
L_08a05a40:
    c->r[16] = c->r[16] + 0x00000001u;
    c->r[4] = ((s32)c->r[16] < (s32)0x00000020u) ? 1u : 0u;
L_08a05a48:
    { int _c = (c->r[4] != 0u); c->r[3] = mem_r32(ram, c->r[17] + 0xffffaf80u); if (_c) goto L_08a05a30; }
    c->r[5] = 0u + 0x00000001u;
    mem_w32(ram, c->r[17] + 0xffffaf80u, c->r[5]);
    c->r[3] = 0u + 0u;
L_08a05a5c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a05a7c:
    { c->r[31] = 0x08a05a84u; hle_dispatch_stub(c, ram, 0x08a24cf4u); /* __sceSasSetPitch */ }
    c->r[8] = mem_r32(ram, c->r[17] + 0xffffaf80u);
    c->r[5] = c->r[16] + 0u;
    c->r[4] = c->r[18] + 0xffffafc0u;
    c->r[6] = 0u + 0x0000000fu;
    { int _c = (c->r[8] == 0u); c->r[7] = 0u + 0x00005fc0u; if (_c) goto L_08a05a40; }
    { c->r[31] = 0x08a05aa4u; hle_dispatch_stub(c, ram, 0x08a24d04u); /* __sceSasSetSimpleADSR */ }
    c->r[10] = mem_r32(ram, c->r[19] + 0xffffaf80u);
    c->r[5] = c->r[16] + 0u;
    c->r[4] = c->r[18] + 0xffffafc0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { int _c = (c->r[10] == 0u); c->r[9] = 0u + 0u; if (_c) goto L_08a05a40; }
    { c->r[31] = 0x08a05accu; c->r[16] = c->r[16] + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24c9cu); /* __sceSasSetVolume */ }
    { c->r[4] = ((s32)c->r[16] < (s32)0x00000020u) ? 1u : 0u; goto L_08a05a48; }
    return; /* fell out of func_08a059d4 */
}

/* func_08a06930  0x08a06930..0x08a06a28  248 bytes, source=residue */
void func_08a06930(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06930u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    c->r[5] = (c->r[5] < 0x00000002u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[3] = 0u + 0u;
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    { int _c = (c->r[5] != 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[6]); if (_c) goto L_08a06a00; }
    c->r[17] = c->r[17] + 0xfffffffeu;
    c->r[20] = 0x08ba0000u;
    c->r[19] = 0x08ba0000u;
    c->r[21] = 0u + 0xffffffffu;
L_08a0697c:
    { c->r[31] = 0x08a06984u; c->r[4] = c->r[29] + 0x00000014u; func_08a0635c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[9] = mem_r32(ram, c->r[19] + 0xffffbe0cu); if (_c) goto L_08a069f8; }
    c->r[8] = c->r[2] << 1;
    c->r[7] = mem_r32(ram, c->r[20] + 0xffffbe08u);
    c->r[6] = c->r[8] + c->r[9];
    c->r[5] = mem_r16(ram, c->r[6] + 0x00000000u);
    c->r[4] = c->r[29] + 0x00000010u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[29]);
    { c->r[31] = 0x08a069acu; if (c->r[5] == 0u) c->r[5] = c->r[7]; func_08a061b0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[4] = c->r[3] - c->r[29];
    c->r[3] = (u32)((s32)c->r[4] >> 1);
    c->r[4] = c->r[3] << 1;
    c->r[5] = (c->r[17] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[5] != 0u); c->r[3] = c->r[3] + 0xffffffffu; if (_c) goto L_08a069f8; }
    c->r[17] = c->r[17] - c->r[4];
    { int _c = (c->r[3] == c->r[21]); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a069f0; }
    c->r[5] = 0u + 0xffffffffu;
L_08a069d8:
    c->r[10] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + 0xffffffffu;
    c->r[4] = c->r[4] + 0x00000002u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[10]);
    { int _c = (c->r[3] != c->r[5]); c->r[16] = c->r[16] + 0x00000002u; if (_c) goto L_08a069d8; }
L_08a069f0:
    { c->r[18] = c->r[18] + 0x00000001u; goto L_08a0697c; }
L_08a069f8:
    mem_w16(ram, c->r[16] + 0x00000000u, 0u);
    c->r[3] = c->r[18] + 0u;
L_08a06a00:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08a06930 */
}

/* func_08a0b0f4  0x08a0b0f4..0x08a0b148  84 bytes, source=residue */
void func_08a0b0f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0b0f4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0b0f4 */
}

/* func_08a0df74  0x08a0df74..0x08a0e028  180 bytes, source=fde */
void func_08a0df74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0df74u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[2] = 0u + 0x00000001u;
    c->r[16] = c->r[4] + 0u;
    if (c->r[4] == 0u) c->r[16] = c->r[2];
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { c->r[31] = 0x08a0df98u; mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]); func_08a19564(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a0dfb0; }
L_08a0dfa0:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0dfb0:
    c->r[17] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[17] + 0xfffffe40u);
L_08a0dfb8:
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0dfe0; }
    { u32 _t = c->r[2]; c->r[31] = 0x08a0dfc8u; recomp_call_indirect(c, ram, 0x08a0dfc0u, _t); }
    { c->r[31] = 0x08a0dfd0u; c->r[4] = c->r[16] + 0u; func_08a19564(c, ram); }
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[17] + 0xfffffe40u); goto L_08a0dfb8; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a0dfa0; }
L_08a0dfe0:
    { c->r[31] = 0x08a0dfe8u; c->r[4] = 0u + 0x00000004u; func_08a0e028(c, ram); }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x00000568u;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[5] = 0x08a50000u;
    c->r[6] = 0x08a10000u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[5] + 0x00000578u;
    { c->r[31] = 0x08a0e00cu; c->r[6] = c->r[6] + 0xffffe4fcu; func_08a0de80(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_08a0e020; }
    { c->r[31] = 0x08a0e020u; func_08a163b0(c, ram); }
L_08a0e020:
    { c->r[31] = 0x08a0e028u; func_08a0dca0(c, ram); }
    return; /* fell out of func_08a0df74 */
}

/* func_08a0e6bc  0x08a0e6bc..0x08a0e6c4  8 bytes, source=indirect */
void func_08a0e6bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e6bcu);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_08a0e6bc */
}

/* func_08a0fc44  0x08a0fc44..0x08a0fd88  324 bytes, source=sweep */
void func_08a0fc44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0fc44u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000048u, c->f[22]);
    mem_wf32(ram, c->r[29] + 0x00000044u, c->f[21]);
    c->f[21] = c->f[12];
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    { c->r[31] = 0x08a0fc68u; c->f[20] = c->f[13]; func_08a10f28(c, ram); }
    c->r[2] = 0x08a50000u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000fa8u);
    c->r[3] = 0u + 0xffffffffu;
    { int _c = (c->r[16] == c->r[3]); c->f[22] = c->f[0]; if (_c) goto L_08a0fc8c; }
    { c->r[31] = 0x08a0fc84u; c->f[12] = c->f[20]; func_08a13038(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0fcac; }
L_08a0fc8c:
    c->f[0] = c->f[22];
L_08a0fc90:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
L_08a0fc94:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[22] = mem_rf32(ram, c->r[29] + 0x00000048u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000044u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a0fcac:
    { c->r[31] = 0x08a0fcb4u; c->f[12] = c->f[21]; func_08a13038(c, ram); }
    { int _c = (c->r[2] != 0u); c->f[0] = c->f[22]; if (_c) goto L_08a0fc90; }
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[20], c->f[0]);
    if ((c->fcr31 & FCR31_C) == 0u) { c->f[0] = c->f[22]; goto L_08a0fc90; }
    alx_c_cond_s(c, 2, c->f[21], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[0] = c->f[22]; if (_c) goto L_08a0fc90; }
    { c->r[31] = 0x08a0fce8u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    { c->r[31] = 0x08a0fcf8u; c->f[12] = c->f[20]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0u;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000798u;
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    { int _c = (c->r[16] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000020u, 0u); if (_c) goto L_08a0fd74; }
    { c->r[31] = 0x08a0fd38u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0fd74; }
L_08a0fd40:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0fd60; }
L_08a0fd4c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    { c->r[31] = 0x08a0fd58u; c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu); func_08a14588(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u); goto L_08a0fc94; }
L_08a0fd60:
    { c->r[31] = 0x08a0fd68u; func_08a19214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0fd4c; }
L_08a0fd74:
    { c->r[31] = 0x08a0fd7cu; func_08a19214(c, ram); }
    c->r[3] = 0u + 0x00000021u;
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0fd40; }
    return; /* fell out of func_08a0fc44 */
}

/* func_08a14104  0x08a14104..0x08a1418c  136 bytes, source=sweep */
void func_08a14104(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14104u);
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
    { c->r[31] = 0x08a14138u; c->r[16] = c->r[29] + 0x00000020u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000050u;
    { c->r[31] = 0x08a14144u; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x00000001u; if (_c) goto L_08a14168; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[5] = c->r[16] + 0u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a1417c; }
L_08a14168:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000070u; return; }
L_08a1417c:
    { c->r[31] = 0x08a14184u; func_08a18778(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a14168; }
    return; /* fell out of func_08a14104 */
}

/* func_08a16224  0x08a16224..0x08a163b0  396 bytes, source=fde */
void func_08a16224(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16224u);
    c->r[29] = c->r[29] + 0xfffff8a0u;
    mem_w32(ram, c->r[29] + 0x000006f8u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x000006f4u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x000006f0u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x000006e0u, c->r[4]);
    c->r[4] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x000006e4u, c->r[5]);
    c->r[5] = c->r[29] + 0x00000760u;
    mem_w32(ram, c->r[29] + 0x000006e8u, c->r[6]);
    c->r[6] = c->r[31] + 0u;
    mem_w32(ram, c->r[29] + 0x000006fcu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000724u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000720u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000071cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000718u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000714u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000710u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000070cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000708u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000704u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000700u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x0000075cu, c->f[31]);
    mem_wf32(ram, c->r[29] + 0x00000758u, c->f[30]);
    mem_wf32(ram, c->r[29] + 0x00000754u, c->f[29]);
    mem_wf32(ram, c->r[29] + 0x00000750u, c->f[28]);
    mem_wf32(ram, c->r[29] + 0x0000074cu, c->f[27]);
    mem_wf32(ram, c->r[29] + 0x00000748u, c->f[26]);
    mem_wf32(ram, c->r[29] + 0x00000744u, c->f[25]);
    mem_wf32(ram, c->r[29] + 0x00000740u, c->f[24]);
    mem_wf32(ram, c->r[29] + 0x0000073cu, c->f[23]);
    mem_wf32(ram, c->r[29] + 0x00000738u, c->f[22]);
    mem_wf32(ram, c->r[29] + 0x00000734u, c->f[21]);
    { c->r[31] = 0x08a162acu; mem_wf32(ram, c->r[29] + 0x00000730u, c->f[20]); func_08a1593c(c, ram); }
    c->r[7] = c->r[29] + 0x00000370u;
    c->r[6] = c->r[29] + 0u;
    c->r[8] = c->r[29] + 0x00000360u;
L_08a162b8:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a162b8; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000006e0u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x000006e4u);
    c->r[8] = mem_r32(ram, c->r[29] + 0x000006e8u);
    c->r[4] = c->r[2] + 0u;
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[3]);
    mem_w32(ram, c->r[2] + 0x00000010u, c->r[8]);
    c->r[9] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[9]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a16314u; c->r[5] = c->r[29] + 0x00000370u; func_08a16108(c, ram); }
    c->r[4] = 0u + 0x00000007u;
    { int _c = (c->r[2] == c->r[4]); c->r[3] = 0u + 0u; if (_c) goto L_08a16394; }
L_08a16320:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000724u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000720u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000071cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000718u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000714u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000710u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000070cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000708u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000704u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000700u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x000006fcu);
    c->r[6] = mem_r32(ram, c->r[29] + 0x000006f8u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x000006f4u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x000006f0u);
    c->f[31] = mem_rf32(ram, c->r[29] + 0x0000075cu);
    c->f[30] = mem_rf32(ram, c->r[29] + 0x00000758u);
    c->f[29] = mem_rf32(ram, c->r[29] + 0x00000754u);
    c->f[28] = mem_rf32(ram, c->r[29] + 0x00000750u);
    c->f[27] = mem_rf32(ram, c->r[29] + 0x0000074cu);
    c->f[26] = mem_rf32(ram, c->r[29] + 0x00000748u);
    c->f[25] = mem_rf32(ram, c->r[29] + 0x00000744u);
    c->f[24] = mem_rf32(ram, c->r[29] + 0x00000740u);
    c->f[23] = mem_rf32(ram, c->r[29] + 0x0000073cu);
    c->f[22] = mem_rf32(ram, c->r[29] + 0x00000738u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000734u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000730u);
    c->r[3] = c->r[3] + 0x00000760u;
    { c->r[29] = c->r[29] + c->r[3]; return; }
L_08a16394:
    c->r[4] = c->r[29] + 0u;
    { c->r[31] = 0x08a163a0u; c->r[5] = c->r[29] + 0x00000370u; func_08a159e0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000006c0u);
    c->r[3] = c->r[2] + 0u;
    { mem_w32(ram, c->r[29] + 0x00000724u, c->r[4]); goto L_08a16320; }
    return; /* fell out of func_08a16224 */
}

/* func_08a17a98  0x08a17a98..0x08a17d58  704 bytes, source=fde */
void func_08a17a98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17a98u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[20] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[4] + 0u; if (_c) goto L_08a17d38; }
L_08a17ad4:
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = alx_ext(c->r[3], 1u, 0u); if (_c) goto L_08a17cdc; }
    c->r[2] = alx_ext(c->r[3], 2u, 0u);
    { int _c = (c->r[2] == 0u); c->r[2] = alx_ext(c->r[3], 3u, 7u); if (_c) goto L_08a17bd4; }
    c->r[23] = mem_r32(ram, c->r[17] + 0x0000000cu);
    c->r[21] = mem_r32(ram, c->r[23] + 0x00000004u);
    { int _c = (c->r[21] != 0u); c->r[22] = 0u + 0u; if (_c) goto L_08a17b34; }
L_08a17afc:
    c->r[2] = 0u + 0u;
L_08a17b00:
    c->r[4] = c->r[2] + 0u;
L_08a17b04:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a17b34:
    c->r[3] = c->r[22] + c->r[21];
L_08a17b38:
    c->r[19] = c->r[3] >> 1;
    c->r[2] = c->r[19] << 2;
    c->r[2] = c->r[2] + c->r[23];
    c->r[18] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000004u);
    c->r[4] = c->r[18] - c->r[4];
    { c->r[31] = 0x08a17b58u; c->r[4] = c->r[4] + 0x00000004u; func_08a17160(c, ram); }
    c->r[16] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a17b68u; c->r[5] = c->r[17] + 0u; func_08a170ec(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[4] = c->r[16] + 0u;
    c->r[6] = c->r[18] + 0x00000008u;
    { c->r[31] = 0x08a17b7cu; c->r[7] = c->r[29] + 0u; func_08a16cd0(c, ram); }
    c->r[16] = c->r[16] & 0x000fu;
    c->r[4] = c->r[16] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a17b94u; c->r[7] = c->r[29] + 0x00000004u; func_08a16cd0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = (c->r[20] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u); if (_c) goto L_08a17bbc; }
    c->r[21] = c->r[19] + 0u;
L_08a17ba8:
    c->r[2] = (c->r[22] < c->r[21]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = c->r[22] + c->r[21]; goto L_08a17b38; }
    { c->r[2] = 0u + 0u; goto L_08a17b00; }
L_08a17bbc:
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[20] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[22] = c->r[19] + 0x00000001u; if (_c) goto L_08a17ba8; }
    { c->r[2] = c->r[18] + 0u; goto L_08a17b00; }
L_08a17bd4:
    if (c->r[2] != 0u) { c->r[22] = mem_r32(ram, c->r[17] + 0x0000000cu); goto L_08a17c40; }
    c->r[5] = mem_r32(ram, c->r[17] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[5] + 0x00000004u);
    { int _c = (c->r[8] == 0u); c->r[9] = 0u + 0u; if (_c) goto L_08a17afc; }
    c->r[3] = c->r[9] + c->r[8];
L_08a17bf0:
    c->r[7] = c->r[3] >> 1;
    c->r[2] = c->r[7] << 2;
    c->r[2] = c->r[2] + c->r[5];
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x0000000cu);
    c->r[4] = (c->r[20] < c->r[3]) ? 1u : 0u;
    c->r[3] = c->r[3] + c->r[2];
    { int _c = (c->r[4] == 0u); c->r[2] = (c->r[20] < c->r[3]) ? 1u : 0u; if (_c) goto L_08a17c30; }
    c->r[8] = c->r[7] + 0u;
L_08a17c1c:
    c->r[2] = (c->r[9] < c->r[8]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = c->r[9] + c->r[8]; goto L_08a17bf0; }
    { c->r[2] = 0u + 0u; goto L_08a17b00; }
L_08a17c30:
    { int _c = (c->r[2] == 0u); c->r[9] = c->r[7] + 0x00000001u; if (_c) goto L_08a17c1c; }
    { c->r[2] = c->r[6] + 0u; goto L_08a17b00; }
L_08a17c40:
    c->r[18] = c->r[2] & 0x00ffu;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x08a17c50u; c->r[4] = c->r[18] + 0u; func_08a170ec(c, ram); }
    c->r[17] = mem_r32(ram, c->r[22] + 0x00000004u);
    c->r[23] = c->r[2] + 0u;
    { int _c = (c->r[17] == 0u); c->r[21] = 0u + 0u; if (_c) goto L_08a17afc; }
    c->r[3] = c->r[21] + c->r[17];
L_08a17c64:
    c->r[16] = c->r[3] >> 1;
    c->r[2] = c->r[16] << 2;
    c->r[2] = c->r[2] + c->r[22];
    c->r[19] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[6] = c->r[19] + 0x00000008u;
    { c->r[31] = 0x08a17c88u; c->r[7] = c->r[29] + 0x00000008u; func_08a16cd0(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[18] & 0x000fu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a17c9cu; c->r[7] = c->r[29] + 0x0000000cu; func_08a16cd0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[2] = (c->r[20] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu); if (_c) goto L_08a17cc4; }
    c->r[17] = c->r[16] + 0u;
L_08a17cb0:
    c->r[2] = (c->r[21] < c->r[17]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = c->r[21] + c->r[17]; goto L_08a17c64; }
    { c->r[2] = 0u + 0u; goto L_08a17b00; }
L_08a17cc4:
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[20] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[21] = c->r[16] + 0x00000001u; if (_c) goto L_08a17cb0; }
    { c->r[2] = c->r[19] + 0u; goto L_08a17b00; }
L_08a17cdc:
    if (c->r[2] == 0u) { c->r[5] = mem_r32(ram, c->r[17] + 0x0000000cu); goto L_08a17d24; }
    c->r[16] = mem_r32(ram, c->r[17] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    if (c->r[2] == 0u) { c->r[4] = 0u + 0u; goto L_08a17b04; }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
L_08a17cf8:
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x08a17d04u; c->r[6] = c->r[20] + 0u; func_08a17914(c, ram); }
    c->r[16] = c->r[16] + 0x00000004u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a17b04; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    if (c->r[2] != 0u) { c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a17cf8; }
    { c->r[4] = 0u + 0u; goto L_08a17b04; }
L_08a17d24:
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x08a17d30u; c->r[6] = c->r[20] + 0u; func_08a17914(c, ram); }
    { c->r[4] = c->r[2] + 0u; goto L_08a17b04; }
L_08a17d38:
    { c->r[31] = 0x08a17d40u; func_08a17ee8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000000u);
    c->r[2] = (c->r[20] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a17b04; }
    { c->r[3] = mem_r32(ram, c->r[17] + 0x00000010u); goto L_08a17ad4; }
    return; /* fell out of func_08a17a98 */
}

/* func_08a19048  0x08a19048..0x08a19064  28 bytes, source=residue */
void func_08a19048(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19048u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a19058u; hle_dispatch_stub(c, ram, 0x08a248d4u); /* sceKernelLibcGettimeofday */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a19048 */
}

/* func_08a1a548  0x08a1a548..0x08a1a5d8  144 bytes, source=sweep */
void func_08a1a548(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a548u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a1a558u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); func_08a19374(c, ram); }
    { c->r[31] = 0x08a1a560u; c->r[16] = c->r[2] + 0u; func_08a19374(c, ram); }
    c->r[6] = mem_r32(ram, c->r[2] + 0x000000a8u);
    c->r[7] = mem_r32(ram, c->r[2] + 0x000000acu);
    c->r[4] = 0x4c950000u;
    c->r[4] = c->r[4] | 0x7f2du;
    c->r[5] = 0x58510000u;
    c->r[5] = c->r[5] | 0xf42du;
    alx_mult(c, c->r[6], c->r[5]);
    c->r[8] = c->lo;
    alx_multu(c, c->r[6], c->r[4]);
    c->r[3] = c->hi;
    c->r[2] = c->lo;
    alx_mult(c, c->r[7], c->r[4]);
    c->r[8] = c->r[8] + c->r[3];
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[6] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[4] = c->lo;
    c->r[3] = c->r[8] + c->r[4];
    c->r[3] = c->r[3] + c->r[6];
    mem_w32(ram, c->r[16] + 0x000000a8u, c->r[2]);
    mem_w32(ram, c->r[16] + 0x000000acu, c->r[3]);
    { c->r[31] = 0x08a1a5b8u; func_08a19374(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a8u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] >> 0;
    c->r[2] = alx_ins(c->r[2], 0u, 31u, 31u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1a548 */
}

/* func_08a1c4f4  0x08a1c4f4..0x08a1c540  76 bytes, source=sweep */
void func_08a1c4f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c4f4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000008u);
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[5] + 0u; if (_c) goto L_08a1c528; }
    mem_w32(ram, c->r[5] + 0x00000004u, 0u);
L_08a1c514:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1c528:
    { c->r[31] = 0x08a1c530u; func_08a21a48(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
    c->r[3] = c->r[2] + 0u;
    { mem_w32(ram, c->r[16] + 0x00000008u, 0u); goto L_08a1c514; }
    return; /* fell out of func_08a1c4f4 */
}

/* func_08a21fc4  0x08a21fc4..0x08a21fd0  12 bytes, source=residue */
void func_08a21fc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21fc4u);
    c->r[3] = 0x08a60000u;
    { c->r[2] = mem_r32(ram, c->r[3] + 0x000051f8u); return; }
    return; /* fell out of func_08a21fc4 */
}

/* func_08a23d6c  0x08a23d6c..0x08a23e28  188 bytes, source=sweep */
void func_08a23d6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23d6cu);
    alx_mult(c, c->r[5], c->r[6]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[5] = c->lo;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a23d88u; func_08a197ec(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { int _c = (c->r[16] == 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a23e08; }
    c->r[2] = mem_r32(ram, c->r[16] + 0xfffffffcu);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[3] = c->r[2] + 0xfffffffcu;
    c->r[2] = (c->r[3] < 0x00000025u) ? 1u : 0u;
    c->r[7] = c->r[16] + 0u;
    c->r[6] = c->r[3] + 0u;
    { int _c = (c->r[2] == 0u); c->r[8] = (c->r[3] < 0x00000014u) ? 1u : 0u; if (_c) goto L_08a23e18; }
    { int _c = (c->r[8] != 0u); c->r[4] = (c->r[3] < 0x0000001cu) ? 1u : 0u; if (_c) goto L_08a23df4; }
    c->r[2] = (c->r[3] < 0x00000024u) ? 1u : 0u;
    mem_w32(ram, c->r[16] + 0x00000000u, 0u);
    c->r[7] = c->r[16] + 0x00000008u;
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[16] + 0x00000004u, 0u); if (_c) goto L_08a23df4; }
    mem_w32(ram, c->r[16] + 0x00000008u, 0u);
    c->r[7] = c->r[16] + 0x00000010u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[16] + 0x0000000cu, 0u); if (_c) goto L_08a23df4; }
    mem_w32(ram, c->r[16] + 0x00000010u, 0u);
    c->r[7] = c->r[16] + 0x00000018u;
    mem_w32(ram, c->r[16] + 0x00000014u, 0u);
L_08a23df4:
    mem_w32(ram, c->r[7] + 0x00000000u, 0u);
    c->r[7] = c->r[7] + 0x00000004u;
    mem_w32(ram, c->r[7] + 0x00000004u, 0u);
    mem_w32(ram, c->r[7] + 0x00000000u, 0u);
    c->r[2] = c->r[16] + 0u;
L_08a23e08:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23e18:
    { c->r[31] = 0x08a23e20u; func_08a19ec4(c, ram); }
    { c->r[2] = c->r[16] + 0u; goto L_08a23e08; }
    return; /* fell out of func_08a23d6c */
}
