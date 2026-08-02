#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_088040c8  0x088040c8..0x08804128  96 bytes, source=sweep */
void func_088040c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088040c8u);
    c->r[2] = 0x08a10000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = 0x08a20000u;
    c->r[5] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x00006e84u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[4] = c->r[4] + 0x0000573cu;
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[5] + 0x00005244u; if (_c) goto L_088040f4; }
    { c->r[31] = 0x088040f4u; func_08a16e84(c, ram); }
L_088040f4:
    c->r[2] = 0x08a20000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00005738u);
    { int _c = (c->r[3] == 0u); c->r[4] = c->r[2] + 0x00005738u; if (_c) goto L_0880411c; }
    c->r[2] = 0x00000000u;
    c->r[2] = c->r[2] + 0x00000000u;
    { int _c = (c->r[2] == 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08804120; }
    { c->r[31] = 0x0880411cu; recomp_call_indirect(c, ram, 0x08804114u, 0x00000000u); }
L_0880411c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08804120:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088040c8 */
}

/* func_088069c4  0x088069c4..0x08806a1c  88 bytes, source=sweep */
void func_088069c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088069c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x088069e8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x088069f8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x08806a08u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088069c4 */
}

/* func_0880753c  0x0880753c..0x0880755c  32 bytes, source=sweep */
void func_0880753c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880753cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880753c */
}

/* func_08808338  0x08808338..0x088083cc  148 bytes, source=fde */
void func_08808338(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808338u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[10]);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[11]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088083b8; }
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[2] = c->r[2] + 0xffffffe8u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08808394u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1f410(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088083a0u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a2479cu); /* sceKernelPrintf */ }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffe6f0u;
    c->r[5] = 0u + 0x00000012u;
    c->r[6] = 0x08a40000u;
    { c->r[31] = 0x088083b8u; c->r[6] = c->r[6] + 0xffffe704u; func_08a1909c(c, ram); }
L_088083b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_08808338 */
}

/* func_0880b118  0x0880b118..0x0880b1a0  136 bytes, source=fde */
void func_0880b118(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b118u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001f24u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0880b150u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001f24u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0880b170u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089c6f64(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0880b18cu; c->r[7] = mem_r32(ram, c->r[3] + 0x00000014u); func_089f8cbc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880b118 */
}

/* func_0880d57c  0x0880d57c..0x0880d5b0  52 bytes, source=sweep */
void func_0880d57c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d57cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000145u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d57c */
}

/* func_0880ef80  0x0880ef80..0x0880f03c  188 bytes, source=sweep */
void func_0880ef80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ef80u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880efa8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0880efd4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880efd4; }
    { goto L_0880efdc; }
L_0880efd4:
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0880f024; }
L_0880efdc:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0880f024:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0880ef80 */
}

/* func_088124d4  0x088124d4..0x08812508  52 bytes, source=fde */
void func_088124d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088124d4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x088124ecu; func_0895c21c(c, ram); }
    { c->r[31] = 0x088124f4u; c->r[4] = 0u + 0x00000005u; func_0880b0d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088124d4 */
}

/* func_08814e78  0x08814e78..0x088151c4  844 bytes, source=fde */
void func_08814e78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08814e78u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08814e9cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08815148; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08814eb8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08814784(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881507c; }
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814fa4; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08814f80u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08815048; }
L_08814fa4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[3];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08815028u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08815048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    { mem_wf32(ram, c->r[4] + 0x0000003cu, c->f[0]); goto L_08815124; }
L_0881507c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[3];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088150e4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b8u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
L_08815124:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]);
L_08815148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w16(ram, c->r[3] + 0x0000004eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088151b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x0000004eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088151a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0881519cu; c->r[5] = 0u + 0x00000001u; func_08814994(c, ram); }
    { goto L_088151b0; }
L_088151a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088151b0u; c->r[5] = 0u + 0x00000003u; func_08814994(c, ram); }
L_088151b0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08814e78 */
}

/* func_08819b64  0x08819b64..0x08819ba8  68 bytes, source=sweep */
void func_08819b64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819b64u);
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
    { c->r[31] = 0x08819b94u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819b64 */
}

/* func_0881f914  0x0881f914..0x0881fa6c  344 bytes, source=fde */
void func_0881f914(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881f914u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881f970u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f9dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000018au;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881f998u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x000001a6u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881f9b4u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x000001a7u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881f9d0u; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0881f9dcu; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
L_0881f9dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881f9f8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881fa24; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0881fa24u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_0881fa24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881fa40u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881fa58u; c->r[6] = c->r[2] + 0u; func_0881fa6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0881f914 */
}

/* func_08824b78  0x08824b78..0x08824b9c  36 bytes, source=sweep */
void func_08824b78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824b78u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e70u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08824b78 */
}

/* func_08826cf0  0x08826cf0..0x08826d24  52 bytes, source=sweep */
void func_08826cf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826cf0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b8fu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826cf0 */
}

/* func_08829d28  0x08829d28..0x08829e00  216 bytes, source=fde */
void func_08829d28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08829d28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829d68; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x00001560u;
    { c->r[31] = 0x08829d60u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08829dec; }
L_08829d68:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829d98; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ec8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829d98; }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003ec8u, c->r[2]);
L_08829d98:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08829da4u; c->r[5] = 0u + 0u; func_0882adfc(c, ram); }
    { c->r[31] = 0x08829dacu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829dc8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829dc8u; c->r[5] = c->r[5] + 0xffff9e00u; func_0880f03c(c, ram); }
L_08829dc8:
    { c->r[31] = 0x08829dd0u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829dec; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829decu; c->r[5] = c->r[5] + 0xffffad6cu; func_0880f03c(c, ram); }
L_08829dec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08829d28 */
}

/* func_0882ea5c  0x0882ea5c..0x0882ea84  40 bytes, source=sweep */
void func_0882ea5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882ea5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000128u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882ea5c */
}

/* func_0883153c  0x0883153c..0x08831578  60 bytes, source=fde */
void func_0883153c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883153cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000du;
    c->r[6] = 0u + 0x0000000du;
    { c->r[31] = 0x08831564u; c->r[7] = 0u + 0x00000003u; func_08831230(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883153c */
}

/* func_0883353c  0x0883353c..0x088335e0  164 bytes, source=fde */
void func_0883353c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883353cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833564u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833578u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08833584u; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08833594u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088335a4u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x088335bcu; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x088335c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882f418(c, ram); }
    { c->r[31] = 0x088335ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883353c */
}

/* func_08835898  0x08835898..0x088359a0  264 bytes, source=fde */
void func_08835898(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835898u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f0cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088358f8; }
    { c->r[31] = 0x088358f8u; c->r[4] = 0u + 0x0000001eu; func_0880b09c(c, ram); }
L_088358f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883596c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835920u; c->r[5] = 0u + 0x00000013u; func_08937a50(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883592cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088307d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08835948u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883596c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0883596cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0883596c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000029u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08835898 */
}

/* func_0883a6b4  0x0883a6b4..0x0883a7a8  244 bytes, source=fde */
void func_0883a6b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a6b4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x0883a6d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0883a6e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883a6f8; }
    { goto L_0883a734; }
L_0883a6f8:
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
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0883a6e0; }
L_0883a734:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0883a738:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883a750; }
    { goto L_0883a78c; }
L_0883a750:
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
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0883a738; }
L_0883a78c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883a6b4 */
}

/* func_0883c7e0  0x0883c7e0..0x0883c880  160 bytes, source=fde */
void func_0883c7e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c7e0u);
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
    { c->r[31] = 0x0883c824u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9d14(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883c844; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0883c868; }
L_0883c844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003fu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883c860; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0883c868; }
L_0883c860:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0883c868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883c7e0 */
}

/* func_0884613c  0x0884613c..0x088461a4  104 bytes, source=sweep */
void func_0884613c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884613cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000344u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000344u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000344u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08846194; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x00000344u, c->r[2]);
L_08846194:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884613c */
}

/* func_08849de0  0x08849de0..0x0884a144  868 bytes, source=fde */
void func_08849de0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08849de0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849e10u; c->r[5] = c->r[5] + 0x000022ecu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849e20; }
    c->r[2] = 0u + 0x00000047u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849e20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849e30u; c->r[5] = c->r[5] + 0x000022f4u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849e40; }
    c->r[2] = 0u + 0x00000056u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849e40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849e50u; c->r[5] = c->r[5] + 0x000022fcu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849e60; }
    c->r[2] = 0u + 0x00000057u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849e60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849e70u; c->r[5] = c->r[5] + 0x00002304u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849e80; }
    c->r[2] = 0u + 0x00000058u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849e80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849e90u; c->r[5] = c->r[5] + 0x0000230cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849ea0; }
    c->r[2] = 0u + 0x00000059u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849ea0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849eb0u; c->r[5] = c->r[5] + 0x00002314u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849ec0; }
    c->r[2] = 0u + 0x0000005au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849ec0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849ed0u; c->r[5] = c->r[5] + 0x0000231cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849ee0; }
    c->r[2] = 0u + 0x0000005bu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849ee0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849ef0u; c->r[5] = c->r[5] + 0x00002324u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849f00; }
    c->r[2] = 0u + 0x0000005cu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849f00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849f10u; c->r[5] = c->r[5] + 0x0000232cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849f20; }
    c->r[2] = 0u + 0x0000005du;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849f20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849f30u; c->r[5] = c->r[5] + 0x00002334u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849f40; }
    c->r[2] = 0u + 0x0000005eu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849f40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849f50u; c->r[5] = c->r[5] + 0x0000233cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849f60; }
    c->r[2] = 0u + 0x0000005fu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849f60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849f70u; c->r[5] = c->r[5] + 0x00002344u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849f80; }
    c->r[2] = 0u + 0x00000060u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849f80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849f90u; c->r[5] = c->r[5] + 0x0000234cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849fa0; }
    c->r[2] = 0u + 0x00000061u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849fa0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849fb0u; c->r[5] = c->r[5] + 0x00002354u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849fc0; }
    c->r[2] = 0u + 0x00000062u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849fc0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849fd0u; c->r[5] = c->r[5] + 0x0000235cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849fe0; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08849fe0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08849ff0u; c->r[5] = c->r[5] + 0x00002364u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a000; }
    c->r[2] = 0u + 0x00000064u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884a000:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884a010u; c->r[5] = c->r[5] + 0x0000236cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a020; }
    c->r[2] = 0u + 0x00000065u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884a020:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884a030u; c->r[5] = c->r[5] + 0x00002374u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a040; }
    c->r[2] = 0u + 0x00000066u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884a040:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884a050u; c->r[5] = c->r[5] + 0x0000237cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a060; }
    c->r[2] = 0u + 0x00000067u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884a060:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884a070u; c->r[5] = c->r[5] + 0x00002384u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a080; }
    c->r[2] = 0u + 0x00000068u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884a080:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884a090u; c->r[5] = c->r[5] + 0x0000238cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884a0a0; }
    c->r[2] = 0u + 0x00000069u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884a0a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000061u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884a120; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000062u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884a108; }
    c->r[2] = 0u + 0x00000058u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884a120; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000059u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884a0f0; }
    { goto L_0884a12c; }
L_0884a0f0:
    c->r[2] = 0u + 0x0000005bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884a120; }
    { goto L_0884a12c; }
L_0884a108:
    c->r[2] = 0u + 0x00000065u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884a120; }
    { goto L_0884a12c; }
L_0884a120:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0884a12c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08849de0 */
}

/* func_0884d0f8  0x0884d0f8..0x0884d178  128 bytes, source=sweep */
void func_0884d0f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d0f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0884d114u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d2b4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884d124u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x0884d134u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884d144u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    { c->r[31] = 0x0884d154u; c->r[4] = c->r[2] + 0u; func_0884d2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0884d164u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d0f8 */
}

/* func_0884f9d0  0x0884f9d0..0x0884fb18  328 bytes, source=fde */
void func_0884f9d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884f9d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    { c->r[31] = 0x0884f9f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884eff0(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884fa14; }
    { goto L_0884fb04; }
L_0884fa14:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884fac0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884fa80; }
    c->r[2] = 0u + 0x00000017u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884faa8; }
    { goto L_0884fb04; }
L_0884fa80:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884fad8; }
    c->r[2] = 0u + 0x0000001au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884faf0; }
    { goto L_0884fb04; }
L_0884faa8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w16(ram, c->r[3] + 0x0000003eu, c->r[2]); goto L_0884fb04; }
L_0884fac0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w16(ram, c->r[3] + 0x0000003eu, c->r[2]); goto L_0884fb04; }
L_0884fad8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w16(ram, c->r[3] + 0x0000003eu, c->r[2]); goto L_0884fb04; }
L_0884faf0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w16(ram, c->r[3] + 0x0000003eu, c->r[2]);
L_0884fb04:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0884f9d0 */
}

/* func_08854c94  0x08854c94..0x08854d5c  200 bytes, source=sweep */
void func_08854c94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854c94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854d08; }
    { c->r[31] = 0x08854cbcu; func_08854c28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08854ce8; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08854cf0; }
    { goto L_08854cfc; }
L_08854ce8:
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08854d44; }
L_08854cf0:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08854d44; }
L_08854cfc:
    c->r[3] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[3]); goto L_08854d44; }
L_08854d08:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854d14u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854d34; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854d2cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08854d3c; }
L_08854d34:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08854d3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[3]);
L_08854d44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08854c94 */
}

/* func_08859b40  0x08859b40..0x08859c70  304 bytes, source=fde */
void func_08859b40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859b40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000055u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859c20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000053u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859c20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000045u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859c20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000002eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859c20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9974u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08859bd0u; c->r[6] = 0u + 0x00000018u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff998cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08859bf0u; c->r[6] = 0u + 0x000000a8u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a8u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08859c10u; c->r[6] = 0u + 0x00000020u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08859c5c; }
L_08859c20:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9974u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x08859c34u; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff998cu;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x08859c48u; c->r[6] = 0u + 0x000000a8u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x08859c5cu; c->r[6] = 0u + 0x00000020u; func_08a19ec4(c, ram); }
L_08859c5c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859b40 */
}

/* func_0885a954  0x0885a954..0x0885a9a0  76 bytes, source=sweep */
void func_0885a954(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a954u);
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
    return; /* fell out of func_0885a954 */
}

/* func_0885cf70  0x0885cf70..0x0885d15c  492 bytes, source=fde */
void func_0885cf70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885cf70u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
L_0885cf88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885cfa8; }
    { goto L_0885d148; }
L_0885cfa8:
    { c->r[31] = 0x0885cfb0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885ccd8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885cf88; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[5] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885d118; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
L_0885d020:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885d040; }
    { goto L_0885d050; }
L_0885d040:
    { c->r[31] = 0x0885d048u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885ccd8(c, ram); }
    { goto L_0885d020; }
L_0885d050:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000008u);
    { c->r[31] = 0x0885d084u; c->r[6] = mem_r32(ram, c->r[6] + 0x00000024u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000024u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000024u);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[5] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffb400u, c->r[2]); goto L_0885d148; }
L_0885d118:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb400u, c->r[2]);
L_0885d148:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885cf70 */
}

/* func_08861a04  0x08861a04..0x08861c24  544 bytes, source=sweep */
void func_08861a04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861a04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08861c10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00003008u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08861a50u: goto L_08861a50; case 0x08861a64u: goto L_08861a64; case 0x08861a78u: goto L_08861a78; case 0x08861a8cu: goto L_08861a8c; case 0x08861aa0u: goto L_08861aa0; case 0x08861ab4u: goto L_08861ab4; case 0x08861ac8u: goto L_08861ac8; case 0x08861adcu: goto L_08861adc; case 0x08861af0u: goto L_08861af0; case 0x08861b04u: goto L_08861b04; case 0x08861b18u: goto L_08861b18; case 0x08861b2cu: goto L_08861b2c; case 0x08861b40u: goto L_08861b40; case 0x08861b54u: goto L_08861b54; case 0x08861b6cu: goto L_08861b6c; case 0x08861b84u: goto L_08861b84; case 0x08861b9cu: goto L_08861b9c; case 0x08861bb4u: goto L_08861bb4; case 0x08861bc8u: goto L_08861bc8; case 0x08861bdcu: goto L_08861bdc; case 0x08861bf0u: goto L_08861bf0; case 0x08861c04u: goto L_08861c04; default: recomp_trap_unknown_indirect(c, ram, 0x08861a48u, _t); return; } }
L_08861a50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861a5cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861c24(c, ram); }
    { goto L_08861c10; }
L_08861a64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861a70u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861c68(c, ram); }
    { goto L_08861c10; }
L_08861a78:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861a84u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088620b4(c, ram); }
    { goto L_08861c10; }
L_08861a8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861a98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861cac(c, ram); }
    { goto L_08861c10; }
L_08861aa0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861aacu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861cf0(c, ram); }
    { goto L_08861c10; }
L_08861ab4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861ac0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861d34(c, ram); }
    { goto L_08861c10; }
L_08861ac8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861ad4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861d78(c, ram); }
    { goto L_08861c10; }
L_08861adc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861ae8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861dbc(c, ram); }
    { goto L_08861c10; }
L_08861af0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861afcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861e00(c, ram); }
    { goto L_08861c10; }
L_08861b04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861b10u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861e44(c, ram); }
    { goto L_08861c10; }
L_08861b18:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861b24u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861e88(c, ram); }
    { goto L_08861c10; }
L_08861b2c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861b38u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861ecc(c, ram); }
    { goto L_08861c10; }
L_08861b40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861b4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861f10(c, ram); }
    { goto L_08861c10; }
L_08861b54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08861b64u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861f54(c, ram); }
    { goto L_08861c10; }
L_08861b6c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08861b7cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861f54(c, ram); }
    { goto L_08861c10; }
L_08861b84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08861b94u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861f54(c, ram); }
    { goto L_08861c10; }
L_08861b9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08861bacu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861f54(c, ram); }
    { goto L_08861c10; }
L_08861bb4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861bc0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861fa4(c, ram); }
    { goto L_08861c10; }
L_08861bc8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861bd4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08861fe8(c, ram); }
    { goto L_08861c10; }
L_08861bdc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861be8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0886202c(c, ram); }
    { goto L_08861c10; }
L_08861bf0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861bfcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08862070(c, ram); }
    { goto L_08861c10; }
L_08861c04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861c10u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08862160(c, ram); }
L_08861c10:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861a04 */
}

/* func_08862c64  0x08862c64..0x08862c8c  40 bytes, source=sweep */
void func_08862c64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862c64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000539u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862c64 */
}

/* func_08866da0  0x08866da0..0x08867774  2516 bytes, source=fde */
void func_08866da0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866da0u);
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
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08867088; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866e10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866e38; }
    { goto L_08867758; }
L_08866e10:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08867730; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088674a8; }
    { goto L_08867758; }
L_08866e38:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08866e44u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08866e68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08866e94u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08866ea8u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb940u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866ec4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000019u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08866ed4u; c->r[4] = c->r[4] + 0x000031a8u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866ee4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb944u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002680u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08866f1cu; c->r[5] = 0u + 0u; func_088663bc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08866f28u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08865910(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08866f34u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08865f60(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08866f54u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031b8u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08866facu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[17] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031b8u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08866fd4u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x08866fe8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002f90u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08867068u; c->r[5] = 0u + 0x00000001u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08867074u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031bcu);
    { mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]); goto L_08867758; }
L_08867088:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08867094u; c->r[4] = c->r[2] + 0u; func_08866378(c, ram); }
    { c->r[31] = 0x0886709cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08866c50(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbd8u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088670c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031c0u);
    { mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]); goto L_088670d4; }
L_088670c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031bcu);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
L_088670d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08867470; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08867100u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001au);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08867110u; c->r[4] = c->r[4] + 0xffffb34cu; func_08867978(c, ram); }
    c->r[16] = c->r[16] & c->r[2];
    c->f[0] = u2f(c->r[16]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08867138u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001bu);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08867148u; c->r[4] = c->r[4] + 0xffffb34cu; func_08867978(c, ram); }
    c->r[16] = c->r[16] & c->r[2];
    c->f[0] = u2f(c->r[16]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031c4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031c8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ccu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088671a4; }
    { goto L_088671b0; }
L_088671a4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ccu);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
L_088671b0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031b8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088671d4; }
    { goto L_088671e0; }
L_088671d4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031b8u);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
L_088671e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ccu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08867204; }
    { goto L_08867210; }
L_08867204:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ccu);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
L_08867210:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031b8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08867234; }
    { goto L_08867240; }
L_08867234:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031b8u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
L_08867240:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08867254u; c->r[4] = c->r[2] + 0u; func_08886934(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886727cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088672f4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031d4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031d8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088672d0; }
    { goto L_088672f4; }
L_088672d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088672f0; }
    { goto L_088672f4; }
L_088672f0:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088672f4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08867300u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08867360; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08867330; }
    { goto L_08867348; }
L_08867330:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031d0u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]); goto L_0886734c; }
L_08867348:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_0886734c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031dcu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
L_08867360:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886736cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088673ec; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031d4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031d8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088673c8; }
    { goto L_088673ec; }
L_088673c8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088673e8; }
    { goto L_088673ec; }
L_088673e8:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088673ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031e0u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x0000001cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031e0u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000020u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    { c->r[31] = 0x08867454u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08863098(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08867498; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000020u, 0u); goto L_08867498; }
L_08867470:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[4] + 0x00000014u, c->r[2]);
L_08867498:
    { c->r[31] = 0x088674a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    { goto L_08867758; }
L_088674a8:
    { c->r[31] = 0x088674b0u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088674f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886770c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088674dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08865910(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088674e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08865f60(c, ram); }
    { goto L_0886770c; }
L_088674f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08867504u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_0886755c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886751cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000019u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886752cu; c->r[4] = c->r[4] + 0x000031a8u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886753cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb944u, c->r[2]);
L_0886755c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08867568u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08865910(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08867574u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08865f60(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08867580u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886770c; }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba74u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088675b0; }
    { goto L_0886764c; }
L_088675b0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031e4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031e8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088675ccu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031e4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031e8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08867600u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031e4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031e8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08867634u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]);
L_0886764c:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba74u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08867670; }
    { goto L_0886770c; }
L_08867670:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ecu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031f0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0886768cu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ecu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031f0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088676c0u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000031ecu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000031f0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088676f4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]);
L_0886770c:
    { c->r[31] = 0x08867714u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08862ee0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w16(ram, c->r[4] + 0x00000014u, c->r[2]); goto L_08867758; }
L_08867730:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0886773cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08867748u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089b73e0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb940u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002f90u, 0u);
L_08867758:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08866da0 */
}

/* func_0886ec48  0x0886ec48..0x0886eee4  668 bytes, source=fde */
void func_0886ec48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886ec48u);
    c->r[29] = c->r[29] + 0xfffffe90u;
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0886eca0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0886ecacu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0886ecb8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x0886ecc4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0886ecd0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0886ecdcu; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0886ecf4u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003508u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ed24; }
    { goto L_0886ed30; }
L_0886ed24:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003508u);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
L_0886ed30:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000350cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ed54; }
    { goto L_0886ed60; }
L_0886ed54:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000350cu);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
L_0886ed60:
    { c->r[31] = 0x0886ed68u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000100u); func_08a0fb24(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x0886ed7cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000138u); func_08a0fc44(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886eda0u; c->f[12] = c->f[0]; func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886edb8u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886edd4u; c->f[12] = c->f[0]; func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886edecu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000110u);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003508u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ee18; }
    { goto L_0886ee24; }
L_0886ee18:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003508u);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
L_0886ee24:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000350cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ee48; }
    { goto L_0886ee54; }
L_0886ee48:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000350cu);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
L_0886ee54:
    { c->r[31] = 0x0886ee5cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000100u); func_08a0fa04(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ee84; }
    { goto L_0886ee98; }
L_0886ee84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = -c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_0886ee98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000170u; return; }
    return; /* fell out of func_0886ec48 */
}

/* func_08873988  0x08873988..0x08873bb4  556 bytes, source=fde */
void func_08873988(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08873988u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003768u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000376cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088739e0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08873a18u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873a2cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08873a38u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003768u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x08873a54u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08873a68u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e0u, 0u);
    c->r[2] = c->r[30] + 0x000000f0u;
    { c->r[31] = 0x08873a78u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000100u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003770u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873accu; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003770u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003768u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x08873b38u; c->r[4] = c->r[2] + 0u; func_089c88c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08873b88; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000104u);
    c->r[2] = c->r[2] & 0x0020u;
    mem_w8(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08873b88:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08873b9c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08873b9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_08873988 */
}

/* func_0887cc30  0x0887cc30..0x0887d560  2352 bytes, source=fde */
void func_0887cc30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887cc30u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887cc6cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000395cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001bu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000395cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003960u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887cce0; }
    { goto L_0887ccf4; }
L_0887cce0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003960u);
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_0887cd2c; }
L_0887ccf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003964u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887cd1c; }
    { goto L_0887cd2c; }
L_0887cd1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003964u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0887cd2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003960u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887cd54; }
    { goto L_0887cd68; }
L_0887cd54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003960u);
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_0887cda0; }
L_0887cd68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003964u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887cd90; }
    { goto L_0887cda0; }
L_0887cd90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003964u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0887cda0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ce04; }
    { goto L_0887ce14; }
L_0887ce04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887ce44; }
L_0887ce14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ce38; }
    { goto L_0887ce44; }
L_0887ce38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887ce44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ce68; }
    { goto L_0887ce78; }
L_0887ce68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887cea8; }
L_0887ce78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ce9c; }
    { goto L_0887cea8; }
L_0887ce9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887cea8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887cec0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887ced0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cefc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0010u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887cf4c; }
L_0887cefc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887cf14u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887cf24u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cf4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887cf4c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887cf64u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887cf74u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cfa0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0040u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887cff0; }
L_0887cfa0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887cfb8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887cfc8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cff0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0080u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887cff0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d008u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d018u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887d054; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d048u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d054u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
L_0887d054:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d06cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d07cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d0e4; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d0acu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d0bcu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d0e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0100u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887d180; }
L_0887d0e4:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d0fcu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d10cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d134; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0200u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887d180; }
L_0887d134:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d14cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d15cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d180; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0400u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d180:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d198u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d1a8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d1d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d1d0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d1e8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d1f8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d21c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d21c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d234u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d244u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d268; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d268:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d280u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d290u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d2b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d2b4:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887d2ccu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887d2dcu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d300; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d300:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0887d304:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887d31c; }
    { goto L_0887d3f0; }
L_0887d31c:
    { c->r[31] = 0x0887d324u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0887e654(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d394; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00400000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d3e0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887d364u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887d3e0; }
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & c->r[3];
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0887d3e0; }
L_0887d394:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887d3a8u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887d3e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d3e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0887d3e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0887d304; }
L_0887d3f0:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0887d3f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887d410; }
    { goto L_0887d544; }
L_0887d410:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887d424u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887d43c; }
    { goto L_0887d534; }
L_0887d43c:
    { c->r[31] = 0x0887d444u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0887e654(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_0887d44c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887d464; }
    { goto L_0887d534; }
L_0887d464:
    { c->r[31] = 0x0887d46cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_0887e654(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887d524; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887d494u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887d4acu; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_0887d524; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887d4f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887d4f4; }
    { goto L_0887d524; }
L_0887d4f4:
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0887d524:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0887d44c; }
L_0887d534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0887d3f8; }
L_0887d544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0887cc30 */
}

/* func_08881934  0x08881934..0x088819b0  124 bytes, source=fde */
void func_08881934(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08881934u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08881950u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]); func_08862cb4(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888197c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08881974u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_089b9940(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08881998; }
L_0888197c:
    { c->r[31] = 0x08881984u; func_0888208c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08881994u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_089b9940(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08881998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08881934 */
}

/* func_08885aa8  0x08885aa8..0x08885b34  140 bytes, source=sweep */
void func_08885aa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08885aa8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08885ae8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000006au);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08885ae8; }
    { goto L_08885af0; }
L_08885ae8:
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08885b20; }
L_08885af0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08885b18; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08885b20; }
L_08885b18:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08885b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08885aa8 */
}

/* func_0888bad0  0x0888bad0..0x0888bb68  152 bytes, source=sweep */
void func_0888bad0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888bad0u);
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
    { c->r[31] = 0x0888bb28u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bb4cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    { c->r[31] = 0x0888bb54u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0888bc60(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888bad0 */
}

/* func_0888c6d0  0x0888c6d0..0x0888c714  68 bytes, source=sweep */
void func_0888c6d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c6d0u);
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
    { c->r[31] = 0x0888c700u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c6d0 */
}

/* func_0888d3e4  0x0888d3e4..0x0888d494  176 bytes, source=sweep */
void func_0888d3e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d3e4u);
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
    { c->r[31] = 0x0888d42cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d450u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d45cu; c->r[5] = 0x15000000u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d480u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888d3e4 */
}

/* func_088903c4  0x088903c4..0x08890404  64 bytes, source=sweep */
void func_088903c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088903c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x088903e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088903f0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088903c4 */
}

/* func_088951dc  0x088951dc..0x088953ac  464 bytes, source=sweep */
void func_088951dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088951dcu);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08895210u; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000114u, 0u);
L_08895230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08895254; }
    { goto L_08895388; }
L_08895254:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000114u);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x0889527cu; mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); func_0888c134(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088952bcu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088952e0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08895318; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x08895318u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
L_08895318:
    mem_w32(ram, c->r[30] + 0x0000011cu, 0u);
L_0889531c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889533c; }
    { goto L_08895360; }
L_0889533c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x04050000u;
    { c->r[31] = 0x08895350u; c->r[5] = c->r[5] | 0x0004u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]); goto L_0889531c; }
L_08895360:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0889536cu; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000030u;
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08895230; }
L_08895388:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08895394u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_088951dc */
}

/* func_08899b88  0x08899b88..0x08899c88  256 bytes, source=sweep */
void func_08899b88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899b88u);
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
    return; /* fell out of func_08899b88 */
}

/* func_0889aa90  0x0889aa90..0x0889aab4  36 bytes, source=residue */
void func_0889aa90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889aa90u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffedb0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0889aa90 */
}

/* func_0889f718  0x0889f718..0x0889f75c  68 bytes, source=sweep */
void func_0889f718(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f718u);
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
    { c->r[31] = 0x0889f748u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f718 */
}

/* func_088a33a0  0x088a33a0..0x088a3428  136 bytes, source=sweep */
void func_088a33a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a33a0u);
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
    { c->r[31] = 0x088a3414u; c->r[11] = mem_r32(ram, c->r[30] + 0x0000002cu); func_088a37c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088a33a0 */
}

/* func_088a4480  0x088a4480..0x088a44f0  112 bytes, source=sweep */
void func_088a4480(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4480u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a44b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_088a44bc; }
L_088a44b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_088a44bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x088a44dcu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_088a44f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4480 */
}

/* func_088add34  0x088add34..0x088add78  68 bytes, source=sweep */
void func_088add34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088add34u);
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
    { c->r[31] = 0x088add64u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088add34 */
}

/* func_088b21c0  0x088b21c0..0x088b222c  108 bytes, source=sweep */
void func_088b21c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b21c0u);
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
    { c->r[31] = 0x088b21fcu; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2218u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b21c0 */
}

/* func_088b35a4  0x088b35a4..0x088b43c4  3616 bytes, source=fde */
void func_088b35a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b35a4u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000118u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b36e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3610; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3638; }
    { goto L_088b43ac; }
L_088b3610:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b39a0; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b39d0; }
    { goto L_088b43ac; }
L_088b3638:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b3658u; func_0880d140(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3694; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088b3694:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x088b36c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808280(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_088b43ac; }
L_088b36e0:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b3700u; func_0880d140(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b373c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088b373c:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b3758u; c->r[5] = c->r[3] + 0u; func_08820bb0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b389c; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088b376cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b3788u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b379cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088b37b0u; c->r[5] = c->r[5] + 0xffffbf50u; func_0885a018(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b37d4; }
    { goto L_088b3874; }
L_088b37d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a80000u;
    { c->r[31] = 0x088b37f8u; c->r[7] = c->r[7] + 0xffffbf50u; func_088b5adc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088b3808u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c668(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x088b381cu; c->r[6] = c->r[6] + 0xffffbf90u; func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
L_088b3874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088b389c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b38e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006bf0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048dcu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->f[12] = c->f[0];
    c->r[6] = 0u + 0xffffffffu;
    { c->r[31] = 0x088b38e4u; c->r[7] = 0u + 0xffffffffu; func_089f6a38(c, ram); }
L_088b38e4:
    { c->r[31] = 0x088b38ecu; func_0895b110(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3974; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088b3900u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u); func_08854c94(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_088b3974; }
    { c->r[31] = 0x088b3910u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08854c94(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000059u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b393c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b393cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000054u); func_089f73a0(c, ram); }
L_088b393c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x006du;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088b3970u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
L_088b3974:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048e0u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088b398cu; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000050u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]); goto L_088b43ac; }
L_088b39a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b43ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b39c8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000054u); func_089f73a0(c, ram); }
    { goto L_088b43ac; }
L_088b39d0:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b39f0u; func_0880d140(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3a2c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088b3a2c:
    { c->r[31] = 0x088b3a34u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_088b5950(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b3a58; }
    { goto L_088b43a4; }
L_088b3a58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088b3a7cu; func_089f1210(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088b3adcu; c->r[5] = c->r[2] + 0u; func_088b59ec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088b3b3cu; c->r[5] = c->r[2] + 0u; func_088b59ec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b3b8cu; c->r[7] = 0u + 0u; func_088b5a30(c, ram); }
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb640u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf30u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf34u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf38u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf3cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf40u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf44u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf48u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf4cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf50u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf54u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf58u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf5cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf70u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf8cu);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b3c5cu; c->r[5] = 0u + 0x00000001u; func_089dfd60(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048e4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048e8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x088b3c80u; c->f[13] = c->f[1]; func_089dfcb8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088b3c94u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b3ca4u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b3cb4u; c->r[5] = 0u + 0u; func_089dff38(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b3cd4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b3d2cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b3d84u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf50u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf54u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf58u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf5cu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048ecu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048ecu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048f0u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    { c->r[31] = 0x088b3df4u; c->r[5] = 0u + 0u; func_089f1d70(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf30u;
    { c->r[31] = 0x088b3e0cu; c->r[6] = 0u + 0x00000001u; func_089e08f0(c, ram); }
    { c->r[31] = 0x088b3e14u; c->r[4] = 0u + 0x00000002u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b3e28u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048f4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048f8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048fcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004900u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x088b3e80u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x088b3e9cu; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000030u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000084u);
    { c->r[31] = 0x088b3eb8u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000084u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[7] = c->r[30] + 0x000000a0u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b3ed8u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3fc4; }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004904u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004908u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffff8c74u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b3f58; }
    { goto L_088b3f74; }
L_088b3f58:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffff8c74u, c->f[0]);
L_088b3f74:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000490cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bfcu);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006bfcu, c->f[0]);
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b3fbcu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00006bfcu); func_08859e90(c, ram); }
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006bfcu, c->f[0]);
L_088b3fc4:
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b3fd0u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00006bfcu); func_08a0f5bc(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004910u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004910u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b3ffcu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00006bfcu); func_08a0f760(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004910u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004910u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x088b4028u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[14] = c->f[0];
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b4050u; c->f[15] = mem_rf32(ram, c->r[1] + 0x00006bfcu); func_088b43c4(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088b4068u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0x00006bf4u;
    c->r[6] = 0x08aa0000u;
    c->r[6] = c->r[6] + 0xffff8c70u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x088b408cu; c->r[7] = 0u + 0x00000004u; func_088b44b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b4178; }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004904u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004914u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8c7cu);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffff8c7cu, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c7cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b410c; }
    { goto L_088b4128; }
L_088b410c:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8c7cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048d8u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffff8c7cu, c->f[0]);
L_088b4128:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004918u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006c08u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006c08u, c->f[0]);
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b4170u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00006c08u); func_08859e90(c, ram); }
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006c08u, c->f[0]);
L_088b4178:
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b4184u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00006c08u); func_08a0f5bc(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000491cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000491cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b41b0u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00006c08u); func_08a0f760(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000491cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000491cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x088b41dcu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[14] = c->f[0];
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x088b4204u; c->f[15] = mem_rf32(ram, c->r[1] + 0x00006c08u); func_088b43c4(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088b421cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0x00006c00u;
    c->r[6] = 0x08aa0000u;
    c->r[6] = c->r[6] + 0xffff8c78u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x088b4240u; c->r[7] = 0u + 0x00000004u; func_088b44b0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b4250u; c->r[5] = 0u + 0x00000001u; func_089dfd60(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x088b4264u; c->f[13] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_089dfcb8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b4274u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b4284u; c->r[5] = 0u + 0x00000001u; func_089dff38(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf50u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf54u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf58u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf5cu, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    { c->r[31] = 0x088b4330u; c->r[5] = 0u + 0u; func_089f1d70(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf30u;
    { c->r[31] = 0x088b4348u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000064u); func_089e08f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b4398u; c->r[7] = 0u + 0x00000002u; func_088b5a30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088b43a4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088b43a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000058u, 0u);
L_088b43ac:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000118u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_088b35a4 */
}

/* func_088ba7f8  0x088ba7f8..0x088baa74  636 bytes, source=fde */
void func_088ba7f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba7f8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088ba814u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ca0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ba83c; }
    { c->r[31] = 0x088ba82cu; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ba83c; }
    { goto L_088ba890; }
L_088ba83c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088ba848u; c->r[4] = c->r[4] + 0x00003c30u; func_089b3824(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ba890; }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffffbf30u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ba890; }
    { c->r[31] = 0x088ba870u; func_08820f58(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ba890; }
    { c->r[31] = 0x088ba880u; func_08858a84(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ba890; }
    { goto L_088ba8b4; }
L_088ba890:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a84u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088baa60; }
    { c->r[31] = 0x088ba8a8u; func_088b7820(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffff9a84u, 0u); goto L_088baa60; }
L_088ba8b4:
    { c->r[31] = 0x088ba8bcu; c->r[4] = c->r[30] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ba8c8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ba8e8u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088ba8fcu; c->r[5] = c->r[5] + 0xffffbf40u; func_0884c1d8(c, ram); }
    { c->r[31] = 0x088ba904u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[8] = 0x08a80000u;
    { c->r[31] = 0x088ba92cu; c->r[8] = c->r[8] + 0xffffbf50u; func_089f5c8c(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a84u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ba990; }
    { c->r[31] = 0x088ba944u; func_088b7470(c, ram); }
    { c->r[31] = 0x088ba94cu; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ba964; }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffff9a84u, c->r[2]); goto L_088baa60; }
L_088ba964:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088ba970u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ca0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088baa60; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffff9a84u, c->r[2]); goto L_088baa60; }
L_088ba990:
    { c->r[31] = 0x088ba998u; func_0895b110(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ba9b8; }
    { c->r[31] = 0x088ba9a8u; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ba9b8; }
    { goto L_088ba9e0; }
L_088ba9b8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a84u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ba9e0; }
    { c->r[31] = 0x088ba9d0u; func_088b7bb0(c, ram); }
    { c->r[31] = 0x088ba9d8u; func_088b8710(c, ram); }
    { c->r[31] = 0x088ba9e0u; func_088b9d6c(c, ram); }
L_088ba9e0:
    { c->r[31] = 0x088ba9e8u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088baa28; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a84u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088baa14; }
    { c->r[31] = 0x088baa0cu; func_088b7820(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff9a84u, 0u);
L_088baa14:
    { c->r[31] = 0x088baa1cu; func_08854c28(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffff9a40u, c->r[2]); goto L_088baa60; }
L_088baa28:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a84u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088baa4c; }
    { c->r[31] = 0x088baa44u; func_088b7820(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff9a84u, 0u);
L_088baa4c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088baa58u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff9a40u, c->r[2]);
L_088baa60:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ba7f8 */
}

/* func_088beba4  0x088beba4..0x088bebe8  68 bytes, source=sweep */
void func_088beba4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088beba4u);
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
    { c->r[31] = 0x088bebd4u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088beba4 */
}

/* func_088bf7a4  0x088bf7a4..0x088bf8b0  268 bytes, source=fde */
void func_088bf7a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf7a4u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000118u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bf7c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { c->r[31] = 0x088bf7ccu; c->r[4] = c->r[2] + 0u; func_088bf688(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bf7dcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bf7ecu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x088bf7f8u; c->r[5] = c->r[2] + 0u; func_088bf6ec(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004cc8u;
    { c->r[31] = 0x088bf81cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088bf828u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088bf85c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004cc8u;
    { c->r[31] = 0x088bf850u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088bf85cu; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
L_088bf85c:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf868u; c->r[4] = c->r[4] + 0x00004cd0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf874u; c->r[4] = c->r[4] + 0x00004cd8u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf880u; c->r[4] = c->r[4] + 0x00004ce0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf88cu; c->r[4] = c->r[4] + 0x00004ce8u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf898u; c->r[4] = c->r[4] + 0x00004cf0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000118u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_088bf7a4 */
}

/* func_088c2b30  0x088c2b30..0x088c2c84  340 bytes, source=fde */
void func_088c2b30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2b30u);
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
    { c->r[31] = 0x088c2b64u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x088c2b88u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[2] = c->f[1] / c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ec4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ec8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] / c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ec8u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ec8u);
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
    { c->r[31] = 0x088c2c30u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0u + 0x00000041u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c2c70u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088c2b30 */
}

/* func_088c8dc0  0x088c8dc0..0x088c8e04  68 bytes, source=sweep */
void func_088c8dc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8dc0u);
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
    { c->r[31] = 0x088c8df0u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8dc0 */
}

/* func_088cab18  0x088cab18..0x088cad00  488 bytes, source=fde */
void func_088cab18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cab18u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005050u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088cab50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cab6c; }
    { goto L_088cace8; }
L_088cab6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
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
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005054u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005058u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cabe8; }
    { goto L_088cabf8; }
L_088cabe8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005058u);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_088cac28; }
L_088cabf8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000505cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cac1c; }
    { goto L_088cac28; }
L_088cac1c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000505cu);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088cac28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005060u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[8] + 0x00000050u);
    { c->r[31] = 0x088cac7cu; c->f[13] = c->f[0]; func_088ca600(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088caca0u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cacbcu; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cacd8u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088cab50; }
L_088cace8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088cab18 */
}

/* func_088d2654  0x088d2654..0x088d26fc  168 bytes, source=sweep */
void func_088d2654(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d2654u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088d2668:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d2688; }
    { goto L_088d26e4; }
L_088d2688:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d26d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000017u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d26e8; }
L_088d26d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088d2668; }
L_088d26e4:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088d26e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d2654 */
}

/* func_088d6970  0x088d6970..0x088d6ab8  328 bytes, source=fde */
void func_088d6970(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6970u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d6994u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d69a4; }
    { goto L_088d6aa4; }
L_088d69a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d6aa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088d69ccu; c->r[4] = c->r[2] + 0u; func_0896280c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d6a3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x088d6a3cu; c->r[5] = c->r[5] + 0x00005200u; func_089624cc(c, ram); }
L_088d6a3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6a78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d6a78; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049a8u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a8u, c->r[2]);
L_088d6a78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x000000a8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000a6u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d6a94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d4264(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d6aa4u; c->r[6] = 0u + 0x00000001u; func_088d6270(c, ram); }
L_088d6aa4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d6970 */
}

/* func_088dad7c  0x088dad7c..0x088dadf8  124 bytes, source=sweep */
void func_088dad7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dad7cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dade4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dade4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005aacu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005aacu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffebd0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088dade4u; func_0880d140(c, ram); }
L_088dade4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dad7c */
}

/* func_088de9d0  0x088de9d0..0x088deaa4  212 bytes, source=sweep */
void func_088de9d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de9d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dea00; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088dea90; }
L_088dea00:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dea18; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088dea90; }
L_088dea18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dea88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088dea88; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088dea88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088dea90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088de9d0 */
}

/* func_088e0a98  0x088e0a98..0x088e0b34  156 bytes, source=sweep */
void func_088e0a98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0a98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bf8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
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
    return; /* fell out of func_088e0a98 */
}

/* func_088e6640  0x088e6640..0x088e691c  732 bytes, source=fde */
void func_088e6640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e6640u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e66cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e66a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e66bc; }
    { goto L_088e6904; }
L_088e66a4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e678c; }
    { goto L_088e6904; }
L_088e66bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a0u, c->r[3]);
L_088e66cc:
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
    { c->r[31] = 0x088e6730u; func_0880d140(c, ram); }
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
    { c->r[31] = 0x088e6774u; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[3] + 0x000000b0u, c->f[0]); goto L_088e6904; }
L_088e678c:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e6798u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e67b8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e67c4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e67ec; }
    { goto L_088e6810; }
L_088e67ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e6808u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e2e10(c, ram); }
    { goto L_088e6838; }
L_088e6810:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e6838u; c->r[7] = c->r[2] + 0u; func_088d7000(c, ram); }
L_088e6838:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e686c; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e68b0; }
    { goto L_088e6904; }
L_088e686c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e6904; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e68a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    { goto L_088e6904; }
L_088e68b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088e68d4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_088d3a1c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6904; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e6904u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088e6904:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e6640 */
}

/* func_088ebf34  0x088ebf34..0x088ec234  768 bytes, source=sweep */
void func_088ebf34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ebf34u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
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
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebf9c; }
    { goto L_088ebfa8; }
L_088ebf9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088ebfa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebfd0; }
    { goto L_088ebfe0; }
L_088ebfd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088ebfe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088ec004; }
    { goto L_088ec088; }
L_088ec004:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ea4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec048; }
    { goto L_088ec058; }
L_088ec048:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ea8u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_088ec088; }
L_088ec058:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec07c; }
    { goto L_088ec088; }
L_088ec07c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005eacu);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088ec088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ec0a8u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
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
    { c->r[31] = 0x088ec0f8u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000030u);
    { c->r[31] = 0x088ec124u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0885a0b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec220; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005eb0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec160; }
    { goto L_088ec218; }
L_088ec160:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005eb4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000c0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005eb8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec1a4; }
    { goto L_088ec1b4; }
L_088ec1a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005eb8u);
    mem_wf32(ram, c->r[2] + 0x000000c0u, c->f[0]);
L_088ec1b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000c0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000bcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ebcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec1f8; }
    { goto L_088ec220; }
L_088ec1f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ec0u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000bcu, c->f[0]); goto L_088ec220; }
L_088ec218:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000bcu, 0u);
L_088ec220:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ebf34 */
}

/* func_088f21e8  0x088f21e8..0x088f2408  544 bytes, source=fde */
void func_088f21e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f21e8u);
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
    { c->r[31] = 0x088f2224u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006168u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000616cu);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006170u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f2288:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f22a0; }
    { goto L_088f2390; }
L_088f22a0:
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
    { c->r[31] = 0x088f22e0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f760(c, ram); }
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
    { c->r[31] = 0x088f2330u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f5bc(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006174u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f237c; }
    { goto L_088f2380; }
L_088f237c:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088f2380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f2288; }
L_088f2390:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088f23ecu; c->r[10] = mem_r32(ram, c->r[30] + 0x00000010u); func_088f4268(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088f21e8 */
}

/* func_088f6ad0  0x088f6ad0..0x088f6d1c  588 bytes, source=fde */
void func_088f6ad0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f6ad0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f6d08; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088f6b08u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f6b14u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e0u);
    c->r[2] = 0u + 0x00000077u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f6d08; }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088f6b34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f6b54; }
    { goto L_088f6c34; }
L_088f6b54:
    { c->r[31] = 0x088f6b5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f6b6c; }
    { goto L_088f6c24; }
L_088f6b6c:
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
    { c->r[31] = 0x088f6ba0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f6bb0; }
    { goto L_088f6c24; }
L_088f6bb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000055u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f6c24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_088f6c34; }
L_088f6c24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f6b34; }
L_088f6c34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f6c68; }
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
L_088f6c68:
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
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006250u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006254u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x000du;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f6ce4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x000004b0u;
    c->r[8] = 0u + 0x00000062u;
    { c->r[31] = 0x088f6d08u; c->r[9] = 0u + 0x00000001u; func_088c00b0(c, ram); }
L_088f6d08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088f6ad0 */
}

/* func_088fb070  0x088fb070..0x088fb0a0  48 bytes, source=sweep */
void func_088fb070(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fb070u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088fb08cu; c->r[5] = 0u | 0xffffu; func_088faed8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088fb070 */
}

/* func_08900e7c  0x08900e7c..0x08900f0c  144 bytes, source=fde */
void func_08900e7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900e7cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08900e90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08900ea8; }
    { goto L_08900ef8; }
L_08900ea8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff500u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff514u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x08900ee8u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08900e90; }
L_08900ef8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08900e7c */
}

/* func_08903640  0x08903640..0x089037d4  404 bytes, source=sweep */
void func_08903640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903640u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08903668u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffe8u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b28u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b2au;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000007u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000007u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b28u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001fu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b2au;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000du;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    { c->r[31] = 0x08903764u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089037c0u; c->r[9] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0892083c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08903640 */
}

/* func_08909d90  0x08909d90..0x0890a2ac  1308 bytes, source=fde */
void func_08909d90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08909d90u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909dec; }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000001du;
    { c->r[31] = 0x08909de4u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    { goto L_08909e00; }
L_08909dec:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000001eu;
    { c->r[31] = 0x08909e00u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
L_08909e00:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000001fu;
    { c->r[31] = 0x08909e14u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000001cu;
    { c->r[31] = 0x08909e28u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006704u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffbbe4u);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d2u);
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d3u);
    mem_w16(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909eb4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08909eb4:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0x00000064u;
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000026u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_08909ec8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08909ee0; }
    { goto L_0890a298; }
L_08909ee0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08909f14; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08909f1c; }
L_08909f14:
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08909f1c:
L_08909f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909f38; }
    { goto L_08909f6c; }
L_08909f38:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08909f20; }
L_08909f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08909fe4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909fa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909fc0; }
    { goto L_0890a018; }
L_08909fa8:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890a000; }
    { goto L_0890a018; }
L_08909fc0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08909fccu; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890a018; }
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0890a018; }
L_08909fe4:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000022u);
    c->r[2] = 0u + 0x0000007fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890a018; }
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0890a018; }
L_0890a000:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x0000007fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890a018; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0890a018:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000024u;
    { c->r[31] = 0x0890a02cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890a050u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_0890a068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890a084; }
    { goto L_0890a17c; }
L_0890a084:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003cu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003cu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000007u;
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_0890a068; }
L_0890a17c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890a1d8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890a234u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x04060000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890a288u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08909ec8; }
L_0890a298:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08909d90 */
}

/* func_089147d4  0x089147d4..0x08914b40  876 bytes, source=fde */
void func_089147d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089147d4u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[8]);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[3]);
    { c->r[31] = 0x08914814u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08914820u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08914830u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0891483cu; c->r[4] = c->r[2] + 0u; func_0895b864(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08914864u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08914870u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089148bcu; func_088a00e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000082u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0891490cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000697cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08914930u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08914948u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000082u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000082u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000168u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x000000a8u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000001e8u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08914a84u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08914ae0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08914b2cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_089147d4 */
}

/* func_0891e894  0x0891e894..0x0891ec18  900 bytes, source=fde */
void func_0891e894(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891e894u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
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
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891e8e0; }
    { goto L_0891ec00; }
L_0891e8e0:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x0891e8f0u; c->r[5] = 0u + 0x00000057u; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006be4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0891e91cu; func_0880d140(c, ram); }
    { c->r[31] = 0x0891e924u; func_08867ab8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891e93cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0891e95cu; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891e97cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0891e990u; c->r[16] = c->r[30] + 0x00000030u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891e9a8u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
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
    { c->r[31] = 0x0891e9dcu; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891ec00; }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_0891e9e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891ea04; }
    { goto L_0891eae8; }
L_0891ea04:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000057u;
    { c->r[31] = 0x0891ea18u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffeeu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffeeu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000012u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000012u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_0891e9e8; }
L_0891eae8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891eaf4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891eb50u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891ebacu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891ec00u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_0891ec00:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0891e894 */
}

/* func_08921540  0x08921540..0x08921584  68 bytes, source=sweep */
void func_08921540(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921540u);
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
    { c->r[31] = 0x08921570u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921540 */
}

/* func_0892288c  0x0892288c..0x08922900  116 bytes, source=fde */
void func_0892288c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892288cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    mem_w8(ram, c->r[1] + 0x00007bb0u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    mem_w8(ram, c->r[1] + 0x00007bb1u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff9c0u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff9c1u, 0u);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0x00007bb4u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x089228d8u; c->r[6] = 0u + 0x00000003u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9c4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089228ecu; c->r[6] = 0u + 0x00000003u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0892288c */
}

/* func_08925adc  0x08925adc..0x08925b34  88 bytes, source=sweep */
void func_08925adc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925adcu);
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
    { c->r[31] = 0x08925b20u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089261e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08925adc */
}

/* func_08927580  0x08927580..0x089276f8  376 bytes, source=fde */
void func_08927580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08927580u);
    c->r[29] = c->r[29] + 0xffffff30u;
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[8]);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffeeu;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0x00006f40u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089275d0u; c->r[6] = 0u + 0x00000080u; func_08a19db8(c, ram); }
    { c->r[31] = 0x089275d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[11] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[7] = 0u + 0x00000001u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08927640u; c->r[10] = 0u + 0u; func_089ce998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[11] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[7] = 0u + 0x00000002u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08927690u; c->r[10] = 0u + 0u; func_089ce998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[10] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[11] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x089276e4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_089cf1f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000c0u);
    { c->r[29] = c->r[29] + 0x000000d0u; return; }
    return; /* fell out of func_08927580 */
}

/* func_0892c51c  0x0892c51c..0x0892c7c8  684 bytes, source=fde */
void func_0892c51c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892c51cu);
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
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0892c56cu; c->r[9] = c->r[2] + 0u; func_0892a044(c, ram); }
    { c->r[31] = 0x0892c574u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892c588u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c5b4; }
    c->r[2] = 0xff0c0000u;
    c->r[2] = c->r[2] | 0x094cu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0892c5b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c5f8; }
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
L_0892c5f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c664; }
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
L_0892c664:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892c684u; c->r[5] = c->r[3] + 0u; func_08933804(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000014u;
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
L_0892c6dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892c6fc; }
    { goto L_0892c7b4; }
L_0892c6fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0892c790; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892c750u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
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
    { c->r[31] = 0x0892c790u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_0892c790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0892c6dc; }
L_0892c7b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0892c51c */
}

/* func_08931b04  0x08931b04..0x08932178  1652 bytes, source=fde */
void func_08931b04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08931b04u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000098u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931b88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931b88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931b88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931b88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931b88; }
    { goto L_08932160; }
L_08931b88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931c4c; }
    { c->r[31] = 0x08931bc0u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08931bd4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0xc8120000u;
    { c->r[31] = 0x08931bf4u; c->r[5] = c->r[5] | 0x0800u; func_08933888(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08931c38u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08931c4c:
    mem_w16(ram, c->r[30] + 0x00000018u, 0u);
    mem_w16(ram, c->r[30] + 0x0000001au, 0u);
    mem_w16(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08931c5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931c7c; }
    { goto L_08931df4; }
L_08931c7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08931de4; }
    { c->r[31] = 0x08931cb0u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08931cc4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08931cecu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0xc8120000u;
    { c->r[31] = 0x08931d10u; c->r[5] = c->r[5] | 0x0800u; func_08933888(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    c->r[5] = c->r[2] & 0x00ffu;
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[9] = c->r[2] + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08931d60u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08931d88u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071d0u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08931dacu; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    c->r[2] = c->r[2] + 0x00000012u;
    mem_w16(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931dd0; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000024u);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08931dd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
L_08931de4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08931c5c; }
L_08931df4:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08931df8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931e18; }
    { goto L_08931f20; }
L_08931e18:
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
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
    { c->r[31] = 0x08931e54u; c->r[7] = 0u + 0u; func_08932598(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_08931e58:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000048u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931e74; }
    { goto L_08931f10; }
L_08931e74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08931f00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08931ec0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000049u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071d0u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08931ee0u; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931f00; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000064u);
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08931f00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_08931e58; }
L_08931f10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08931df8; }
L_08931f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931f58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931f58; }
    { goto L_08931f68; }
L_08931f58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[2]);
L_08931f68:
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_08931f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931f8c; }
    { goto L_08932160; }
L_08931f8c:
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
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
    { c->r[31] = 0x08931fc8u; c->r[7] = 0u + 0u; func_08932598(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931fe8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000048u);
    { mem_w8(ram, c->r[30] + 0x0000006au, c->r[2]); goto L_08931ff4; }
L_08931fe8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffffa48u);
    mem_w8(ram, c->r[30] + 0x0000006au, c->r[2]);
L_08931ff4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000006au);
    mem_w8(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893201c; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893201c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893204c; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08932044u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    { mem_w8(ram, c->r[30] + 0x0000006bu, c->r[2]); goto L_08932054; }
L_0893204c:
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x0000006bu, c->r[2]);
L_08932054:
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000006bu);
    mem_w8(ram, c->r[30] + 0x00000069u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000049u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000069u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000088u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089320fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089320fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089320fc; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
L_089320fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000080u);
    { c->r[31] = 0x0893213cu; c->r[11] = mem_r32(ram, c->r[30] + 0x00000084u); func_08930cd0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_08931f6c; }
L_08932160:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000098u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_08931b04 */
}

/* func_089336a0  0x089336a0..0x089336d8  56 bytes, source=sweep */
void func_089336a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089336a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089336c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08933798(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089336a0 */
}

/* func_08935e50  0x08935e50..0x08935ef0  160 bytes, source=sweep */
void func_08935e50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935e50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935e78; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08935edc; }
L_08935e78:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08935e7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935e94; }
    { goto L_08935ed8; }
L_08935e94:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935ec8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08935edc; }
L_08935ec8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08935e7c; }
L_08935ed8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08935edc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935e50 */
}

/* func_0893c090  0x0893c090..0x0893c0cc  60 bytes, source=sweep */
void func_0893c090(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c090u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0893c0b8u; c->r[6] = 0u + 0u; func_0893c334(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c090 */
}

/* func_0893d5e0  0x0893d5e0..0x0893d610  48 bytes, source=sweep */
void func_0893d5e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d5e0u);
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
    return; /* fell out of func_0893d5e0 */
}

/* func_0893e4fc  0x0893e4fc..0x0893e95c  1120 bytes, source=fde */
void func_0893e4fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e4fcu);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893e530; }
    { mem_w32(ram, c->r[30] + 0x00000068u, 0u); goto L_0893e944; }
L_0893e530:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e8a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e570; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e588; }
    { goto L_0893e93c; }
L_0893e570:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e8b8; }
    { goto L_0893e93c; }
L_0893e588:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0893e5a8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893e604; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075e8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0893e5e0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0893e640; }
L_0893e604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0893e640u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
L_0893e640:
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x0893e64cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x0893e654u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_08a0fa04(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0893e664u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000028u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e6ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e6ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e6f8; }
    { goto L_0893e790; }
L_0893e6ac:
    c->r[2] = 0u + 0x0000000bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e6e0; }
    c->r[2] = 0u + 0x0000000eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e6d4; }
    { goto L_0893e790; }
L_0893e6d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_0893e6e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_0893e6ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_0893e6f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = 0u + 0x00000004u;
    mem_w16(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e74c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893e74c; }
    mem_w16(ram, c->r[30] + 0x00000060u, 0u);
L_0893e74c:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[9] = c->r[30] + 0x00000050u;
    c->r[4] = 0u + 0x0000005du;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0893e774u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000000u); func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0893e93c; }
L_0893e790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8130u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0893e7ccu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e89c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u);
    { c->r[31] = 0x0893e7ecu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u); func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u);
    { c->r[31] = 0x0893e7fcu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_089c77b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8130u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0893e93c; }
L_0893e89c:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_0893e93c; }
L_0893e8a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0893e93c; }
L_0893e8b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e930; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e900; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e918; }
    { goto L_0893e93c; }
L_0893e900:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893e938; }
    { goto L_0893e93c; }
L_0893e918:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893e924u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0893e93c; }
L_0893e930:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_0893e93c; }
L_0893e938:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0893e93c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_0893e944:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_0893e4fc */
}

/* func_08940640  0x08940640..0x089406ec  172 bytes, source=sweep */
void func_08940640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940640u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089406a0; }
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
    { c->r[31] = 0x08940698u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089407c0(c, ram); }
    { goto L_089406d8; }
L_089406a0:
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
    { c->r[31] = 0x089406d8u; c->r[8] = c->r[2] + 0u; func_089407c0(c, ram); }
L_089406d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08940640 */
}

/* func_08945c94  0x08945c94..0x08945d24  144 bytes, source=sweep */
void func_08945c94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945c94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xb0000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945cd4u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xb1000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945cf8u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xc4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945d10u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08945c94 */
}

/* func_0894b6a0  0x0894b6a0..0x0894b6e4  68 bytes, source=sweep */
void func_0894b6a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894b6a0u);
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
    return; /* fell out of func_0894b6a0 */
}

/* func_0894c4c0  0x0894c4c0..0x0894c524  100 bytes, source=sweep */
void func_0894c4c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c4c0u);
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
    { c->r[31] = 0x0894c510u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c4c0 */
}

/* func_089539ac  0x089539ac..0x08953a44  152 bytes, source=sweep */
void func_089539ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089539acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = c->r[2] & 0xffffu;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e4cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e50u);
    c->f[1] = c->f[1] + c->f[0];
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
    c->f[0] = c->f[1];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089539ac */
}

/* func_08955a6c  0x08955a6c..0x08955adc  112 bytes, source=sweep */
void func_08955a6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955a6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08955aa0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_08955aa8; }
L_08955aa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_08955aa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x08955ac8u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_08955adc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955a6c */
}

/* func_08958850  0x08958850..0x089588b4  100 bytes, source=sweep */
void func_08958850(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958850u);
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
    { c->r[31] = 0x089588a0u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958850 */
}

/* func_0895b58c  0x0895b58c..0x0895b5d4  72 bytes, source=sweep */
void func_0895b58c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b58cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004961u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895b5b0; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0895b5c0; }
L_0895b5b0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x3f00u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0895b5c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b58c */
}

/* func_0895f76c  0x0895f76c..0x0895f850  228 bytes, source=fde */
void func_0895f76c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895f76cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f788u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895f794u; c->r[5] = 0u + 0x00000001u; func_08969240(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0895f7b8; }
    { c->r[31] = 0x0895f7acu; func_0893443c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895f838; }
L_0895f7b8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049ccu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f7e4; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff828cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0895f7e4u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_0895f7e4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049ccu);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895f800; }
    { c->r[31] = 0x0895f800u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0895ce34(c, ram); }
L_0895f800:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049ccu);
    c->r[2] = 0u + 0x00000021u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895f820; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895f838; }
L_0895f820:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049ccu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049ccu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0895f838:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895f76c */
}

/* func_089616d4  0x089616d4..0x08961ee8  2068 bytes, source=fde */
void func_089616d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089616d4u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[3]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004960u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005200u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08961718u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = (c->r[3] < 0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08961ed4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8294u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08961750u: goto L_08961750; case 0x0896179cu: goto L_0896179c; case 0x089617d0u: goto L_089617d0; case 0x089617f8u: goto L_089617f8; case 0x0896182cu: goto L_0896182c; case 0x0896185cu: goto L_0896185c; case 0x089618e8u: goto L_089618e8; case 0x08961924u: goto L_08961924; case 0x08961960u: goto L_08961960; case 0x08961990u: goto L_08961990; case 0x089619c0u: goto L_089619c0; case 0x089619fcu: goto L_089619fc; case 0x08961a38u: goto L_08961a38; case 0x08961a74u: goto L_08961a74; case 0x08961aa4u: goto L_08961aa4; case 0x08961ad4u: goto L_08961ad4; case 0x08961b04u: goto L_08961b04; case 0x08961b68u: goto L_08961b68; case 0x08961be0u: goto L_08961be0; case 0x08961c50u: goto L_08961c50; case 0x08961cbcu: goto L_08961cbc; case 0x08961ce4u: goto L_08961ce4; case 0x08961d0cu: goto L_08961d0c; case 0x08961d34u: goto L_08961d34; case 0x08961d5cu: goto L_08961d5c; case 0x08961d84u: goto L_08961d84; case 0x08961dacu: goto L_08961dac; case 0x08961dd4u: goto L_08961dd4; case 0x08961e08u: goto L_08961e08; case 0x08961e30u: goto L_08961e30; case 0x08961e64u: goto L_08961e64; case 0x08961e8cu: goto L_08961e8c; case 0x08961eb4u: goto L_08961eb4; default: recomp_trap_unknown_indirect(c, ram, 0x08961748u, _t); return; } }
L_08961750:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000034u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08961794u; c->r[7] = c->r[2] + 0u; func_0895fbe0(c, ram); }
    { goto L_08961ed4; }
L_0896179c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000038u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x089617c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_0895fc5c(c, ram); }
    { goto L_08961ed4; }
L_089617d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000003cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x089617f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_0895fd38(c, ram); }
    { goto L_08961ed4; }
L_089617f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000040u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    { c->r[31] = 0x08961824u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_0895fdf0(c, ram); }
    { goto L_08961ed4; }
L_0896182c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08961854u; c->r[4] = c->r[2] + 0u; func_089604f0(c, ram); }
    { goto L_08961ed4; }
L_0896185c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000048u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089618a0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089618e0u; c->r[6] = c->r[3] + 0u; func_08960044(c, ram); }
    { goto L_08961ed4; }
L_089618e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000004cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0896191cu; c->r[5] = c->r[2] + 0u; func_089607b0(c, ram); }
    { goto L_08961ed4; }
L_08961924:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000050u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08961958u; c->r[5] = c->r[2] + 0u; func_08960280(c, ram); }
    { goto L_08961ed4; }
L_08961960:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000054u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08961988u; c->r[4] = c->r[2] + 0u; func_089603b0(c, ram); }
    { goto L_08961ed4; }
L_08961990:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000058u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089619b8u; c->r[4] = c->r[2] + 0u; func_089605e4(c, ram); }
    { goto L_08961ed4; }
L_089619c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000005cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089619f4u; c->r[5] = c->r[2] + 0u; func_089606d4(c, ram); }
    { goto L_08961ed4; }
L_089619fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08961a30u; c->r[5] = c->r[2] + 0u; func_08960928(c, ram); }
    { goto L_08961ed4; }
L_08961a38:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000064u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08961a6cu; c->r[5] = c->r[2] + 0u; func_089609a8(c, ram); }
    { goto L_08961ed4; }
L_08961a74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000068u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08961a9cu; c->r[4] = c->r[2] + 0u; func_08960a0c(c, ram); }
    { goto L_08961ed4; }
L_08961aa4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000006cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08961accu; c->r[4] = c->r[2] + 0u; func_08960a5c(c, ram); }
    { goto L_08961ed4; }
L_08961ad4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000070u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08961afcu; c->r[4] = c->r[2] + 0u; func_08960ab0(c, ram); }
    { goto L_08961ed4; }
L_08961b04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000074u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[6] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[8] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[9] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x08961b60u; c->r[10] = c->r[2] + 0u; func_08960b1c(c, ram); }
    { goto L_08961ed4; }
L_08961b68:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000078u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[6] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[7] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[8] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[10] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08961bd8u; c->r[11] = c->r[2] + 0u; func_08960bdc(c, ram); }
    { goto L_08961ed4; }
L_08961be0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000007cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[7] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[8] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->f[12] = mem_rf32(ram, c->r[6] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08961c48u; c->r[9] = c->r[2] + 0u; func_08960cac(c, ram); }
    { goto L_08961ed4; }
L_08961c50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000080u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[6] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[7] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[8] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[10] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08961cb4u; c->r[11] = c->r[2] + 0u; func_08960de8(c, ram); }
    { goto L_08961ed4; }
L_08961cbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000084u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    { c->r[31] = 0x08961cdcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u); func_08960f2c(c, ram); }
    { goto L_08961ed4; }
L_08961ce4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000088u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    { c->r[31] = 0x08961d04u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u); func_08960fbc(c, ram); }
    { goto L_08961ed4; }
L_08961d0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000008cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    { c->r[31] = 0x08961d2cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000078u); func_08961050(c, ram); }
    { goto L_08961ed4; }
L_08961d34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000090u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    { c->r[31] = 0x08961d54u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000007cu); func_0896110c(c, ram); }
    { goto L_08961ed4; }
L_08961d5c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000094u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    { c->r[31] = 0x08961d7cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000080u); func_089611ec(c, ram); }
    { goto L_08961ed4; }
L_08961d84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000098u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    { c->r[31] = 0x08961da4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000084u); func_0896132c(c, ram); }
    { goto L_08961ed4; }
L_08961dac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000009cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    { c->r[31] = 0x08961dccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000088u); func_089613b4(c, ram); }
    { goto L_08961ed4; }
L_08961dd4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000a0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    { c->r[31] = 0x08961e00u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000008cu); func_08961440(c, ram); }
    { goto L_08961ed4; }
L_08961e08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000a4u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    { c->r[31] = 0x08961e28u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000090u); func_08961554(c, ram); }
    { goto L_08961ed4; }
L_08961e30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000a8u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    { c->r[31] = 0x08961e5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u); func_0896491c(c, ram); }
    { goto L_08961ed4; }
L_08961e64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000acu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    { c->r[31] = 0x08961e84u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000098u); func_08964a64(c, ram); }
    { goto L_08961ed4; }
L_08961e8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000b0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    { c->r[31] = 0x08961eacu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000009cu); func_08964b18(c, ram); }
    { goto L_08961ed4; }
L_08961eb4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000b4u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    { c->r[31] = 0x08961ed4u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a0u); func_08961630(c, ram); }
L_08961ed4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_089616d4 */
}

/* func_08964a64  0x08964a64..0x08964b18  180 bytes, source=sweep */
void func_08964a64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964a64u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000049c8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08964acc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08964accu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08964714(c, ram); }
L_08964acc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08964ae4u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08964b04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08964b04u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08964714(c, ram); }
L_08964b04:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08964a64 */
}

/* func_08967a48  0x08967a48..0x08967acc  132 bytes, source=sweep */
void func_08967a48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08967a48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08967a5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967a74; }
    { goto L_08967ab4; }
L_08967a74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967aa4; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08967ab8; }
L_08967aa4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08967a5c; }
L_08967ab4:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08967ab8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08967a48 */
}

/* func_0896990c  0x0896990c..0x08969964  88 bytes, source=sweep */
void func_0896990c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896990cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08969950; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08969950:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896990c */
}

/* func_0896a4d4  0x0896a4d4..0x0896a508  52 bytes, source=sweep */
void func_0896a4d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a4d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a4d4 */
}

/* func_0896db64  0x0896db64..0x0896db94  48 bytes, source=sweep */
void func_0896db64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896db64u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896db7cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896db64 */
}

/* func_0896e668  0x0896e668..0x0896e69c  52 bytes, source=sweep */
void func_0896e668(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e668u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[3] + 0x000009c5u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e668 */
}

/* func_0896f610  0x0896f610..0x0896f648  56 bytes, source=sweep */
void func_0896f610(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f610u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f610 */
}

/* func_089715e4  0x089715e4..0x08971764  384 bytes, source=fde */
void func_089715e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089715e4u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897160cu; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08971610:
    { c->r[31] = 0x08971618u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08971634; }
    { goto L_0897174c; }
L_08971634:
    { c->r[31] = 0x0897163cu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08971654; }
    { goto L_0897173c; }
L_08971654:
    { c->r[31] = 0x0897165cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08971694u; c->r[6] = 0u + 0x0000000eu; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_0897169c:
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002665u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089716bc; }
    { goto L_08971724; }
L_089716bc:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089716d4u; c->r[6] = 0u + 0x00000008u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971714; }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000025b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08971700u; c->r[6] = 0u + 0x0000000eu; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08971714; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08971724; }
L_08971714:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_0897169c; }
L_08971724:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897173c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897173c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08971610; }
L_0897174c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089715e4 */
}

/* func_089754e4  0x089754e4..0x08975564  128 bytes, source=sweep */
void func_089754e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089754e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08975528; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08975528; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08975528u; c->r[4] = c->r[4] + 0x00006d54u; func_088112e8(c, ram); }
L_08975528:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08975550; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975550; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08975550u; c->r[4] = c->r[4] + 0x00006d54u; func_08811320(c, ram); }
L_08975550:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089754e4 */
}

/* func_08978880  0x08978880..0x08978a0c  396 bytes, source=fde */
void func_08978880(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978880u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089788dc; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089789bc; }
    { goto L_089789f4; }
L_089788dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897895c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978920; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978938; }
    { goto L_089789f4; }
L_08978920:
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978980; }
    { goto L_089789f4; }
L_08978938:
    { c->r[31] = 0x08978940u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0897894cu; c->r[4] = c->r[4] + 0x000027dcu; func_089d3a80(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089789f4; }
L_0897895c:
    { c->r[31] = 0x08978964u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089789f4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08978978u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_089789f4; }
L_08978980:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897899cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089789ac; }
    { goto L_089789f4; }
L_089789ac:
    { c->r[31] = 0x089789b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089789f4; }
L_089789bc:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8b30u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089789d4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001513u;
    { c->r[31] = 0x089789e8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089789f4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089789f4:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08978880 */
}

/* func_0897b63c  0x0897b63c..0x0897c448  3596 bytes, source=fde */
void func_0897b63c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897b63cu);
L_0897b63c:
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
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897c280; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897b6ac; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897b6c4; }
    { goto L_0897c42c; }
L_0897b6ac:
    c->r[2] = 0u + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897c3d4; }
    { goto L_0897c42c; }
L_0897b6c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c42c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8bf8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897b63cu: goto L_0897b63c; case 0x0897b700u: goto L_0897b700; case 0x0897b7f8u: goto L_0897b7f8; case 0x0897b82cu: goto L_0897b82c; case 0x0897ba70u: goto L_0897ba70; case 0x0897bcd4u: goto L_0897bcd4; case 0x0897bdb4u: goto L_0897bdb4; case 0x0897be38u: goto L_0897be38; case 0x0897c1ecu: goto L_0897c1ec; case 0x0897c24cu: goto L_0897c24c; case 0x0897c2d4u: goto L_0897c2d4; case 0x0897c324u: goto L_0897c324; case 0x0897c374u: goto L_0897c374; case 0x0897c390u: goto L_0897c390; case 0x0897c3acu: goto L_0897c3ac; case 0x0897c3c0u: goto L_0897c3c0; case 0x0897c42cu: goto L_0897c42c; default: recomp_trap_unknown_indirect(c, ram, 0x0897b6f8u, _t); return; } }
L_0897b700:
    { c->r[31] = 0x0897b708u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b720; }
    { c->r[31] = 0x0897b720u; c->r[4] = 0u + 0xffffffffu; func_089796dc(c, ram); }
L_0897b720:
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
    { c->r[31] = 0x0897b758u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897b780; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897b774u; c->r[5] = 0x40000000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897b780u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
L_0897b780:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0897b784:
    { c->r[31] = 0x0897b78cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b7a8; }
    { goto L_0897b7b8; }
L_0897b7a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897b784; }
L_0897b7b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897b7c4u; mem_w8(ram, c->r[2] + 0x00000011u, 0u); func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0897b7e8u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897c42c; }
L_0897b7f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897b80cu; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897b81c; }
    { goto L_0897c42c; }
L_0897b81c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897c42c; }
L_0897b82c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897b840u; c->r[5] = 0u + 0x0000004bu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897ba40; }
    { c->r[31] = 0x0897b860u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897b874u; c->r[5] = 0u + 0x0000004bu; func_088145a8(c, ram); }
    { c->r[31] = 0x0897b87cu; mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x0897b88cu; mem_w8(ram, c->r[1] + 0xffff9122u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897b8ac; }
    { c->r[31] = 0x0897b8a4u; func_0897ac74(c, ram); }
    { goto L_0897b944; }
L_0897b8ac:
    { c->r[31] = 0x0897b8b4u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b8e8; }
    { c->r[31] = 0x0897b8d4u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897b8e0u; c->r[4] = c->r[2] + 0u; func_089796dc(c, ram); }
    { goto L_0897b92c; }
L_0897b8e8:
    { c->r[31] = 0x0897b8f0u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b8f8u; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0xffff908cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897b92cu; c->r[6] = 0u + 0x00000013u; func_08a19db8(c, ram); }
L_0897b92c:
    { c->r[31] = 0x0897b934u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b93cu; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[16] + 0x0000000eu, c->r[2]);
L_0897b944:
    { c->r[31] = 0x0897b94cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    { c->r[31] = 0x0897b958u; c->r[4] = c->r[2] + 0u; func_08979948(c, ram); }
    { c->r[31] = 0x0897b960u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    { c->r[31] = 0x0897b96cu; c->r[4] = c->r[2] + 0u; func_08979fb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897b978u; mem_w8(ram, c->r[2] + 0x00000040u, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa268u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897b9bcu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ba34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0897b9d8u; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897b9f4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ba34; }
    { c->r[31] = 0x0897ba0cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x0897ba18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897ba34u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0897ba34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897ba40:
    { c->r[31] = 0x0897ba48u; func_0896a284(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + 0x00000011u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0897ba68u; c->r[8] = c->r[3] + 0u; func_0896cc50(c, ram); }
    { goto L_0897c42c; }
L_0897ba70:
    { c->r[31] = 0x0897ba78u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    { c->r[31] = 0x0897ba84u; c->r[4] = c->r[2] + 0u; func_0897a374(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897baa0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897bb00; }
    { c->r[31] = 0x0897bab8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa268u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897bafcu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0897bb00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897bb34; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897bb18u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089324c0(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897bb28u; c->r[5] = 0x01000000u; func_0892ffa8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897bb34u; c->r[5] = 0x04000000u; func_0892ffa8(c, ram); }
L_0897bb34:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9114u);
    { c->r[31] = 0x0897bb44u; c->r[4] = c->r[2] + 0u; func_08979c78(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000006eu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897bb70u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897bbbc; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8bf0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0897bb94u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa274u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0897bbbcu; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_0897bbbc:
    { c->r[31] = 0x0897bbc4u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897bc1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897bbe8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897bc04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897bc04u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_0897bc04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897bca0; }
L_0897bc1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897bca0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897bc4cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9122u);
    { c->r[31] = 0x0897bc78u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_0896a284(c, ram); }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x0000000fu;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897bc98u; c->r[8] = c->r[8] + 0xffff9114u; func_0896cc50(c, ram); }
    { goto L_0897c42c; }
L_0897bca0:
    { c->r[31] = 0x0897bca8u; func_0896a284(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000011u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x0000000fu;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897bcccu; c->r[8] = c->r[8] + 0xffff9114u; func_0896cc50(c, ram); }
    { goto L_0897c42c; }
L_0897bcd4:
    { c->r[31] = 0x0897bcdcu; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0897bd00u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897bd18u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897bd44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897bd34u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897bd44; }
    { goto L_0897bd4c; }
L_0897bd44:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
L_0897bd4c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000021u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897bd60; }
    { goto L_0897c42c; }
L_0897bd60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897bd7cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897bd8cu; c->r[5] = 0x00010000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897bd98u; c->r[5] = 0x40000000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897bda4u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897c42c; }
L_0897bdb4:
    { c->r[31] = 0x0897bdbcu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897be18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897bdd0u; mem_w8(ram, c->r[2] + 0x00000040u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0897bddcu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x0897bde4u; func_0897b424(c, ram); }
    { c->r[31] = 0x0897bdecu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0x00000013u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897be08u; c->r[8] = c->r[8] + 0xffff9078u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897c42c; }
L_0897be18:
    { c->r[31] = 0x0897be20u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c42c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897c42c; }
L_0897be38:
    { c->r[31] = 0x0897be40u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0897be54u; c->r[7] = 0u + 0x00000004u; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897bf30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897be98; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897beb0; }
    { goto L_0897c1dc; }
L_0897be98:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897c1a4; }
    { goto L_0897c1dc; }
L_0897beb0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897bec8u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897bedcu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897bef0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897bf04u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x0897bf0cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0x00000013u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897bf28u; c->r[8] = c->r[8] + 0xffff9078u; func_0896cc50(c, ram); }
    { goto L_0897c1dc; }
L_0897bf30:
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff9079u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897bf58; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897bf50u; c->r[5] = 0u + 0x00000013u; func_0896a7b8(c, ram); }
    { goto L_0897c104; }
L_0897bf58:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0897bf5c:
    { c->r[31] = 0x0897bf64u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897bf80; }
    { goto L_0897c024; }
L_0897bf80:
    { c->r[31] = 0x0897bf88u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897c014; }
    { c->r[31] = 0x0897bfb0u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0x0000003fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    { c->r[31] = 0x0897bfe8u; mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0897c014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0897bf5c; }
L_0897c024:
    { c->r[31] = 0x0897c02cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0897c034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897c04c; }
    { goto L_0897c0d0; }
L_0897c04c:
    { c->r[31] = 0x0897c054u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0x0000003fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    { c->r[31] = 0x0897c08cu; mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0897c034; }
L_0897c0d0:
    { c->r[31] = 0x0897c0d8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897c0f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897c0f0u; c->r[5] = 0u + 0x00000017u; func_0896a7b8(c, ram); }
    { goto L_0897c104; }
L_0897c0f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897c104u; c->r[5] = 0u + 0x00000015u; func_0896a7b8(c, ram); }
L_0897c104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897c120u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c13c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0897c13cu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_0897c13c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897c150u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897c164u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897c178u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x0897c180u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000013u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897c19cu; c->r[8] = c->r[8] + 0xffff9078u; func_0896cc50(c, ram); }
    { goto L_0897c1dc; }
L_0897c1a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000004bu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { c->r[31] = 0x0897c1c0u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0x00000013u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897c1dcu; c->r[8] = c->r[8] + 0xffff9078u; func_0896cc50(c, ram); }
L_0897c1dc:
    { c->r[31] = 0x0897c1e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_0897c42c; }
L_0897c1ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0897c234; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897c208u; mem_w8(ram, c->r[2] + 0x00000040u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000013u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897c224u; c->r[8] = c->r[8] + 0xffff9078u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897c42c; }
L_0897c234:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0897c42c; }
L_0897c24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897c260u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c270; }
    { goto L_0897c42c; }
L_0897c270:
    { c->r[31] = 0x0897c278u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_0897c42c; }
L_0897c280:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8bf4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897c298u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[3] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c3c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8ca8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897b63cu: goto L_0897b63c; case 0x0897b700u: goto L_0897b700; case 0x0897b7f8u: goto L_0897b7f8; case 0x0897b82cu: goto L_0897b82c; case 0x0897ba70u: goto L_0897ba70; case 0x0897bcd4u: goto L_0897bcd4; case 0x0897bdb4u: goto L_0897bdb4; case 0x0897be38u: goto L_0897be38; case 0x0897c1ecu: goto L_0897c1ec; case 0x0897c24cu: goto L_0897c24c; case 0x0897c2d4u: goto L_0897c2d4; case 0x0897c324u: goto L_0897c324; case 0x0897c374u: goto L_0897c374; case 0x0897c390u: goto L_0897c390; case 0x0897c3acu: goto L_0897c3ac; case 0x0897c3c0u: goto L_0897c3c0; case 0x0897c42cu: goto L_0897c42c; default: recomp_trap_unknown_indirect(c, ram, 0x0897c2ccu, _t); return; } }
L_0897c2d4:
    { c->r[31] = 0x0897c2dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0897a6cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0897c308; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897c300u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897c3c0; }
L_0897c308:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897c31cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0897c3c0; }
L_0897c324:
    { c->r[31] = 0x0897c32cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0897a73c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0897c358; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897c350u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897c3c0; }
L_0897c358:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897c36cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0897c3c0; }
L_0897c374:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001508u;
    { c->r[31] = 0x0897c388u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897c3c0; }
L_0897c390:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001505u;
    { c->r[31] = 0x0897c3a4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897c3c0; }
L_0897c3ac:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8be4u;
    c->r[5] = 0u + 0x00001506u;
    { c->r[31] = 0x0897c3c0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_0897c3c0:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897c3ccu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0897c42c; }
L_0897c3d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897c42c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897c40c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]); goto L_0897c42c; }
L_0897c40c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897c42c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
L_0897c42c:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0897b63c */
}

/* func_08985f30  0x08985f30..0x08986008  216 bytes, source=fde */
void func_08985f30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08985f30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9428u);
    { c->r[31] = 0x08985f50u; mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985ff0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff943cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08985f9cu: goto L_08985f9c; case 0x08985fa4u: goto L_08985fa4; case 0x08985fb4u: goto L_08985fb4; case 0x08985fc4u: goto L_08985fc4; case 0x08985fd4u: goto L_08985fd4; case 0x08985fe4u: goto L_08985fe4; default: recomp_trap_unknown_indirect(c, ram, 0x08985f94u, _t); return; } }
L_08985f9c:
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08985ff0; }
L_08985fa4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff942cu);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985ff0; }
L_08985fb4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9430u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985ff0; }
L_08985fc4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9428u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985ff0; }
L_08985fd4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9434u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985ff0; }
L_08985fe4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9438u);
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
L_08985ff0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08985f30 */
}

/* func_08991e38  0x08991e38..0x08992174  828 bytes, source=fde */
void func_08991e38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08991e38u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08991e74u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08991e8c; }
    { goto L_08992160; }
L_08991e8c:
    { c->r[31] = 0x08991e94u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992160; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992160; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9dc4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08991ed0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff98fcu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08991eecu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08991f38u; c->r[5] = c->r[5] | 0x0102u; func_08994450(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08991f4cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08991f7c; }
    c->r[2] = 0u + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08991f7c:
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000049u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991fc8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000049u);
    c->r[3] = c->r[2] << 27;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] - c->r[3];
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08991fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000049u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08991ffc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000049u);
    c->r[3] = c->r[2] << 27;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x87000000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08991ffc:
    { c->r[31] = 0x08992004u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e48c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899206c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 2;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
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
L_0899206c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089920b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_08994494(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9dc8u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98d8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = 0u + 0x0000011au;
    c->r[7] = 0u + 0x0000005du;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x089920e0u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08992128u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08994494(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9dc8u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98d8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0u + 0x0000011au;
    c->r[7] = 0u + 0x0000005du;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08992154u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08992160u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08992160:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08991e38 */
}

/* func_08998a30  0x08998a30..0x08998abc  140 bytes, source=sweep */
void func_08998a30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998a30u);
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
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998aac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08998aac:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998a30 */
}

/* func_089991e0  0x089991e0..0x08999204  36 bytes, source=sweep */
void func_089991e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089991e0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002aaau);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089991e0 */
}

/* func_0899dcf4  0x0899dcf4..0x0899e214  1312 bytes, source=fde */
void func_0899dcf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899dcf4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[4] = 0x08a60000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffa5e0u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0899dd20u; c->r[6] = c->r[30] + 0u; hle_dispatch_stub(c, ram, 0x08a24874u); /* sceKernelWaitSemaCB */ }
    { c->r[31] = 0x0899dd28u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_0896a4a4(c, ram); }
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x0899dd34u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); func_0896a4a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0899dd4cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa638u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899dd80u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0899dda0u; c->r[5] = c->r[2] + 0u; func_089a1bc8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0899ddc0u; c->r[5] = c->r[2] + 0u; func_089a1c24(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899ddd8u; c->r[5] = c->r[3] + 0u; func_089a1cbc(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899de00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0899de00:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899de28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0899de28:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899de50; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0899de50:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffb9fcu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0899de84; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899de84; }
    { goto L_0899de98; }
L_0899de84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0899de98:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899dec4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0899dec4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899def0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0899def0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    mem_w16(ram, c->r[3] + 0x0000002cu, c->r[2]);
    { c->r[31] = 0x0899df0cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899df14u; c->r[4] = c->r[2] + 0u; func_0896fe40(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x0899df20u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899df28u; c->r[4] = c->r[2] + 0u; func_0896f988(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000030u, c->r[2]);
    { c->r[31] = 0x0899df34u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899df3cu; c->r[4] = c->r[2] + 0u; func_0896f9c0(c, ram); }
    mem_w16(ram, c->r[16] + 0x0000002eu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0899df44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899df5c; }
    { goto L_0899e01c; }
L_0899df5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffba10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899df84u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899e00c; }
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899e00c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0899e00c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899e00c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
L_0899e00c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0899df44; }
L_0899e01c:
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffb9feu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899e078; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffb9feu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffb9feu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9feu);
    { mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]); goto L_0899e084; }
L_0899e078:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
L_0899e084:
    { c->r[31] = 0x0899e08cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899e10c; }
    { c->r[31] = 0x0899e0a4u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e0bc; }
    { c->r[31] = 0x0899e0b4u; func_089b0954(c, ram); }
    { goto L_0899e0c4; }
L_0899e0bc:
    { c->r[31] = 0x0899e0c4u; func_089b0fac(c, ram); }
L_0899e0c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000038u;
    { c->r[31] = 0x0899e0d4u; c->r[4] = 0u + 0u; func_089ac7c8(c, ram); }
    c->r[3] = c->r[16] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x0000003cu;
    { c->r[31] = 0x0899e0f8u; c->r[4] = 0u + 0x00000001u; func_089ac7c8(c, ram); }
    c->r[3] = c->r[16] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
L_0899e10c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002a91u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002f8eu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0899e158; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002a91u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002ee4u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0899e158:
    { c->r[31] = 0x0899e160u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899e1b8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0899e174u; c->r[4] = 0u + 0u; func_08998c08(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0899e188u; c->r[4] = 0u + 0x00000001u; func_08998c08(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0899e19cu; c->r[4] = 0u + 0u; func_08998cec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0899e1b0u; c->r[4] = 0u + 0x00000001u; func_08998cec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[16] + 0x0000000du, c->r[2]);
L_0899e1b8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002ee4u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0899e1ccu; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00002f8eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a91u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002a91u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffa5e0u);
    { c->r[31] = 0x0899e1f8u; c->r[5] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a2484cu); /* sceKernelSignalSema */ }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0899dcf4 */
}

/* func_089a1b58  0x089a1b58..0x089a1b88  48 bytes, source=sweep */
void func_089a1b58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1b58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000110u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1b58 */
}

/* func_089a646c  0x089a646c..0x089a64a0  52 bytes, source=sweep */
void func_089a646c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a646cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a646c */
}

/* func_089ac434  0x089ac434..0x089ac4cc  152 bytes, source=sweep */
void func_089ac434(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac434u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000010u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafb0u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafb0u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafb0u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac434 */
}

/* func_089b27cc  0x089b27cc..0x089b2810  68 bytes, source=sweep */
void func_089b27cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b27ccu);
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
    return; /* fell out of func_089b27cc */
}

/* func_089b3514  0x089b3514..0x089b357c  104 bytes, source=sweep */
void func_089b3514(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3514u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb1c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3514 */
}

/* func_089b6460  0x089b6460..0x089b65dc  380 bytes, source=sweep */
void func_089b6460(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6460u);
    c->r[29] = c->r[29] + 0xfffffdb0u;
    mem_w32(ram, c->r[29] + 0x00000244u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000240u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b6498; }
    { goto L_089b65c8; }
L_089b6498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b64b8; }
    { goto L_089b65c8; }
L_089b64b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000224u, 0u);
L_089b64c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b64dc; }
    { goto L_089b6510; }
L_089b64dc:
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
    { mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]); goto L_089b64c8; }
L_089b6510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b6574; }
    c->r[2] = c->r[30] + 0x00000230u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb238u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b6574u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
L_089b6574:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb23cu);
    mem_wf32(ram, c->r[30] + 0x0000023cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x089b65c8u; c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089b7160(c, ram); }
L_089b65c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000244u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000240u);
    { c->r[29] = c->r[29] + 0x00000250u; return; }
    return; /* fell out of func_089b6460 */
}

/* func_089b7ca4  0x089b7ca4..0x089b7d14  112 bytes, source=fde */
void func_089b7ca4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7ca4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7cccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c35a0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7cdc; }
    { goto L_089b7d00; }
L_089b7cdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000acu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7cf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c35a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b7d00u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089b7d6c(c, ram); }
L_089b7d00:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b7ca4 */
}

/* func_089b9784  0x089b9784..0x089b9814  144 bytes, source=fde */
void func_089b9784(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9784u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b97e0; }
    { c->r[31] = 0x089b97b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c6b50(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b97c4; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089b97fc; }
L_089b97c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_089b97fc; }
L_089b97e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b97ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c356c(c, ram); }
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_089b97fc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b9784 */
}

/* func_089c35a0  0x089c35a0..0x089c35d4  52 bytes, source=fde */
void func_089c35a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c35a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089c35c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c6f64(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c35a0 */
}

/* func_089c6ae4  0x089c6ae4..0x089c6b1c  56 bytes, source=sweep */
void func_089c6ae4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6ae4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c6ae4 */
}

/* func_089c9050  0x089c9050..0x089c90c0  112 bytes, source=sweep */
void func_089c9050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c9050u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089c906cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a1b88(c, ram); }
    { c->r[31] = 0x089c9074u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089ca9cc(c, ram); }
    { c->r[31] = 0x089c907cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089ca9f4(c, ram); }
    { c->r[31] = 0x089c9084u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089caa1c(c, ram); }
    { c->r[31] = 0x089c908cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089caa44(c, ram); }
    { c->r[31] = 0x089c9094u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089caa6c(c, ram); }
    { c->r[31] = 0x089c909cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089caa94(c, ram); }
    { c->r[31] = 0x089c90a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089caabc(c, ram); }
    { c->r[31] = 0x089c90acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089caae8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c9050 */
}

/* func_089cb2b4  0x089cb2b4..0x089cb420  364 bytes, source=fde */
void func_089cb2b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb2b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb344; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb40c; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cb310; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089cb310:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089cb40c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089cb33cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); recomp_call_indirect(c, ram, 0x089cb334u, _t); }
    { goto L_089cb40c; }
L_089cb344:
    { c->r[31] = 0x089cb34cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089cb350:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cb364; }
    { goto L_089cb390; }
L_089cb364:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089cb37cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb2b4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb388u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089cb350; }
L_089cb390:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cb40c; }
    { c->r[31] = 0x089cb3a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089cb3ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cb3c0; }
    { goto L_089cb40c; }
L_089cb3c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cb3f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0u + 0x00000002u;
    { u32 _t = c->r[2]; c->r[31] = 0x089cb3ecu; c->r[6] = 0u + 0u; recomp_call_indirect(c, ram, 0x089cb3e4u, _t); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb3f8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb1e4(c, ram); }
L_089cb3f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb404u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089cb3ac; }
L_089cb40c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb2b4 */
}

/* func_089cf1f8  0x089cf1f8..0x089cffc4  3532 bytes, source=fde */
void func_089cf1f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cf1f8u);
    c->r[29] = c->r[29] + 0xfffffd20u;
    mem_w32(ram, c->r[29] + 0x000002d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    c->r[3] = c->r[7] + 0u;
    c->r[4] = c->r[8] + 0u;
    c->r[5] = c->r[9] + 0u;
    c->r[6] = c->r[10] + 0u;
    c->r[7] = c->r[11] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[12]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[3]);
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[4]);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[5]);
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000023u, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cf258; }
    { goto L_089cffb0; }
L_089cf258:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002e0u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
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
    { c->r[31] = 0x089cf298u; c->r[6] = c->r[3] + 0u; func_089d0730(c, ram); }
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
    { c->r[31] = 0x089cf2e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_089d22c4(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089cf2f4u; c->r[5] = c->r[2] + 0u; func_089d00b4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cf398; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf34cu; c->r[5] = 0u + 0x00000009u; func_089d23d0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf398u; c->r[5] = c->r[5] | 0x0100u; func_089d20f0(c, ram); }
L_089cf398:
    mem_w32(ram, c->r[30] + 0x00000238u, 0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cf4bc; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf3f8u; c->r[5] = 0u + 0x00000009u; func_089d2394(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cf460; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf458u; c->r[6] = c->r[6] + 0xffffad30u; func_089d2354(c, ram); }
    { goto L_089cf4b0; }
L_089cf460:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf4b0u; c->r[6] = c->r[6] + 0xfffffcd0u; func_089d2354(c, ram); }
L_089cf4b0:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]); goto L_089cf5bc; }
L_089cf4bc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf504u; c->r[5] = 0u + 0x00000009u; func_089d2394(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cf56c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf564u; c->r[6] = c->r[6] + 0xffffacf0u; func_089d2354(c, ram); }
    { goto L_089cf5bc; }
L_089cf56c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cf5bcu; c->r[6] = c->r[6] + 0xfffffc90u; func_089d2354(c, ram); }
L_089cf5bc:
    c->r[2] = c->r[30] + 0x0000002cu;
    mem_w32(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000002e0u;
    mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]);
    c->r[2] = c->r[30] + 0x000002e4u;
    mem_w32(ram, c->r[30] + 0x00000244u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000260u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000262u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000264u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000266u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000260u);
    mem_w32(ram, c->r[30] + 0x00000250u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000264u);
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089cf670u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000270u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000270u);
    mem_w32(ram, c->r[30] + 0x00000274u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000278u, 0u);
L_089cf680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000278u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cf69c; }
    { goto L_089cfde4; }
L_089cf69c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000278u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000027cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000280u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000284u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000280u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000008u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000028cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000280u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000290u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a0u);
    mem_wf32(ram, c->r[30] + 0x00000298u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000290u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000298u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cf7b4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000290u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000294u, c->f[0]); goto L_089cf7d8; }
L_089cf7b4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000290u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000298u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000294u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000294u, c->r[3]);
L_089cf7d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000028cu);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000280u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000008u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000284u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x0000000au, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000029cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000280u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002a0u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a0u);
    mem_wf32(ram, c->r[30] + 0x000002a8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002a0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002a8u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cf8a4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002a0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002a4u, c->f[0]); goto L_089cf8c8; }
L_089cf8a4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002a0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002a8u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002a4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002a4u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002a4u, c->r[3]);
L_089cf8c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000029cu);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x000002acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000284u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002b0u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a0u);
    mem_wf32(ram, c->r[30] + 0x000002b8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002b0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002b8u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cf930; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002b0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002b4u, c->f[0]); goto L_089cf954; }
L_089cf930:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002b0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002b8u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b4u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002b4u, c->r[3]);
L_089cf954:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002acu);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000284u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x0000000au, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x000002bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000284u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002c0u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a0u);
    mem_wf32(ram, c->r[30] + 0x000002c8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002c0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002c8u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cfa08; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002c0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000002c4u, c->f[0]); goto L_089cfa2c; }
L_089cfa08:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000002c0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000002c8u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000002c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002c4u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000002c4u, c->r[3]);
L_089cfa2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002bcu);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = u2f(0u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000230u);
    c->r[2] = c->r[2] << 1;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cfaa0; }
    { goto L_089cfab4; }
L_089cfaa0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb6a4u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
L_089cfab4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cfad8; }
    { goto L_089cfaec; }
L_089cfad8:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
L_089cfaec:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000250u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[4] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000252u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[4] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000254u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[4] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000256u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000280u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000230u);
    c->r[2] = c->r[2] << 1;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cfc50; }
    { goto L_089cfc64; }
L_089cfc50:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb6a4u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
L_089cfc64:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cfc88; }
    { goto L_089cfc9c; }
L_089cfc88:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
L_089cfc9c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000288u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000250u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[4] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000252u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[4] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000254u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[4] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000256u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000288u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000280u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000238u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000278u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000278u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000274u);
    c->r[2] = c->r[2] + 0x00000040u;
    { mem_w32(ram, c->r[30] + 0x00000274u, c->r[2]); goto L_089cf680; }
L_089cfde4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cfe30u; c->r[5] = c->r[5] | 0x011eu; func_089d20f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000270u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089cfe8cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000270u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089cfee8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000027cu, 0u);
L_089cfeec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cff08; }
    { goto L_089cff64; }
L_089cff08:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cff54u; c->r[5] = c->r[5] | 0x0004u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000027cu, c->r[2]); goto L_089cfeec; }
L_089cff64:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089cffb0u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_089d22c4(c, ram); }
L_089cffb0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002d0u);
    { c->r[29] = c->r[29] + 0x000002e0u; return; }
    return; /* fell out of func_089cf1f8 */
}

/* func_089d2848  0x089d2848..0x089d28e0  152 bytes, source=sweep */
void func_089d2848(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2848u);
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
    { c->r[31] = 0x089d28a0u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d28c4u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    { c->r[31] = 0x089d28ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d29d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d2848 */
}

/* func_089d38ac  0x089d38ac..0x089d38ec  64 bytes, source=sweep */
void func_089d38ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d38acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
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
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d38ac */
}

/* func_089d53a0  0x089d53a0..0x089d54e0  320 bytes, source=fde */
void func_089d53a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d53a0u);
L_089d53a0:
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d54cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb928u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089d53a0u: goto L_089d53a0; case 0x089d53f4u: goto L_089d53f4; case 0x089d5414u: goto L_089d5414; case 0x089d5434u: goto L_089d5434; case 0x089d5454u: goto L_089d5454; case 0x089d5474u: goto L_089d5474; case 0x089d5494u: goto L_089d5494; case 0x089d54b4u: goto L_089d54b4; case 0x089d54ccu: goto L_089d54cc; default: recomp_trap_unknown_indirect(c, ram, 0x089d53ecu, _t); return; } }
L_089d53f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d540cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d572c(c, ram); }
    { goto L_089d54cc; }
L_089d5414:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d542cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d577c(c, ram); }
    { goto L_089d54cc; }
L_089d5434:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d544cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d57d4(c, ram); }
    { goto L_089d54cc; }
L_089d5454:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d546cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5824(c, ram); }
    { goto L_089d54cc; }
L_089d5474:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d548cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d587c(c, ram); }
    { goto L_089d54cc; }
L_089d5494:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d54acu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d58d4(c, ram); }
    { goto L_089d54cc; }
L_089d54b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d54ccu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d5924(c, ram); }
L_089d54cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d53a0 */
}

/* func_089d68d0  0x089d68d0..0x089d6910  64 bytes, source=residue */
void func_089d68d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d68d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d68d0 */
}

/* func_089d7f98  0x089d7f98..0x089d7fe4  76 bytes, source=fde */
void func_089d7f98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7f98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089d7fb8u; c->r[4] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a2499cu); /* sceCtrlSetSamplingMode */ }
    c->r[4] = 0u + 0x00000040u;
    { c->r[31] = 0x089d7fc4u; c->r[5] = 0u + 0x00000040u; hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    { c->r[31] = 0x089d7fccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d88f8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7f98 */
}

/* func_089d97b4  0x089d97b4..0x089d9844  144 bytes, source=fde */
void func_089d97b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d97b4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000006c4u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d9808u; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)((s32)c->r[2] >> 31);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d9830u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a1af70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d97b4 */
}

/* func_089da6b4  0x089da6b4..0x089da7e0  300 bytes, source=fde */
void func_089da6b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da6b4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089da6e4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089da7c8; }
L_089da6e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089da6f0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089de4a8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089da70c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089da704u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db180(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089da718; }
L_089da70c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089da7c8; }
L_089da718:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x089da72cu; c->r[5] = c->r[3] + 0u; func_089de398(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089da740u; c->r[5] = c->r[3] + 0u; func_089db070(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000698u);
    c->r[2] = c->r[2] << 1;
    c->r[3] = 0u - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089da798; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000698u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089da798; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089da7c8; }
L_089da798:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000698u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089da7c0; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089da7c8; }
L_089da7c0:
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089da7c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089da6b4 */
}

/* func_089dbd58  0x089dbd58..0x089dbf78  544 bytes, source=sweep */
void func_089dbd58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dbd58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dbf64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffbc18u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089dbda4u: goto L_089dbda4; case 0x089dbdb8u: goto L_089dbdb8; case 0x089dbdccu: goto L_089dbdcc; case 0x089dbde0u: goto L_089dbde0; case 0x089dbdf4u: goto L_089dbdf4; case 0x089dbe08u: goto L_089dbe08; case 0x089dbe1cu: goto L_089dbe1c; case 0x089dbe30u: goto L_089dbe30; case 0x089dbe44u: goto L_089dbe44; case 0x089dbe58u: goto L_089dbe58; case 0x089dbe6cu: goto L_089dbe6c; case 0x089dbe80u: goto L_089dbe80; case 0x089dbe94u: goto L_089dbe94; case 0x089dbea8u: goto L_089dbea8; case 0x089dbec0u: goto L_089dbec0; case 0x089dbed8u: goto L_089dbed8; case 0x089dbef0u: goto L_089dbef0; case 0x089dbf08u: goto L_089dbf08; case 0x089dbf1cu: goto L_089dbf1c; case 0x089dbf30u: goto L_089dbf30; case 0x089dbf44u: goto L_089dbf44; case 0x089dbf58u: goto L_089dbf58; default: recomp_trap_unknown_indirect(c, ram, 0x089dbd9cu, _t); return; } }
L_089dbda4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbdb0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dbf78(c, ram); }
    { goto L_089dbf64; }
L_089dbdb8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbdc4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dbfbc(c, ram); }
    { goto L_089dbf64; }
L_089dbdcc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbdd8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc408(c, ram); }
    { goto L_089dbf64; }
L_089dbde0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbdecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc000(c, ram); }
    { goto L_089dbf64; }
L_089dbdf4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc044(c, ram); }
    { goto L_089dbf64; }
L_089dbe08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc088(c, ram); }
    { goto L_089dbf64; }
L_089dbe1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe28u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc0cc(c, ram); }
    { goto L_089dbf64; }
L_089dbe30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe3cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc110(c, ram); }
    { goto L_089dbf64; }
L_089dbe44:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe50u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc154(c, ram); }
    { goto L_089dbf64; }
L_089dbe58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc198(c, ram); }
    { goto L_089dbf64; }
L_089dbe6c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc1dc(c, ram); }
    { goto L_089dbf64; }
L_089dbe80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbe8cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc220(c, ram); }
    { goto L_089dbf64; }
L_089dbe94:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbea0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc264(c, ram); }
    { goto L_089dbf64; }
L_089dbea8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089dbeb8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc2a8(c, ram); }
    { goto L_089dbf64; }
L_089dbec0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089dbed0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc2a8(c, ram); }
    { goto L_089dbf64; }
L_089dbed8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089dbee8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc2a8(c, ram); }
    { goto L_089dbf64; }
L_089dbef0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089dbf00u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc2a8(c, ram); }
    { goto L_089dbf64; }
L_089dbf08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbf14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc2f8(c, ram); }
    { goto L_089dbf64; }
L_089dbf1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbf28u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc33c(c, ram); }
    { goto L_089dbf64; }
L_089dbf30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbf3cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc380(c, ram); }
    { goto L_089dbf64; }
L_089dbf44:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbf50u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc3c4(c, ram); }
    { goto L_089dbf64; }
L_089dbf58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbf64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089dc4b4(c, ram); }
L_089dbf64:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dbd58 */
}

/* func_089dd980  0x089dd980..0x089dda84  260 bytes, source=fde */
void func_089dd980(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd980u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc16cu;
    { c->r[31] = 0x089dd9acu; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd9d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089dd9ccu; c->r[5] = c->r[5] + 0xffffc16cu; func_08a1af70(c, ram); }
    { goto L_089dda64; }
L_089dd9d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc174u;
    { c->r[31] = 0x089dd9e8u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dda10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089dda08u; c->r[5] = c->r[5] + 0xffffc174u; func_08a1af70(c, ram); }
    { goto L_089dda64; }
L_089dda10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffc17cu;
    { c->r[31] = 0x089dda24u; c->r[6] = 0u + 0x00000004u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dda4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089dda44u; c->r[5] = c->r[5] + 0xffffc17cu; func_08a1af70(c, ram); }
    { goto L_089dda64; }
L_089dda4c:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dda58u; c->r[4] = c->r[4] + 0xffffc184u; func_08a1a4c0(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089dda6c; }
L_089dda64:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089dda6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dd980 */
}

/* func_089dfcb8  0x089dfcb8..0x089dfd60  168 bytes, source=sweep */
void func_089dfcb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dfcb8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089dfcfcu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
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
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089dfd4cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089e2000(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dfcb8 */
}

/* func_089e1de8  0x089e1de8..0x089e1e28  64 bytes, source=sweep */
void func_089e1de8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1de8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e1e14u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e35dc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1de8 */
}

/* func_089e29bc  0x089e29bc..0x089e2a3c  128 bytes, source=sweep */
void func_089e29bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e29bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x9e000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e29fcu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x9f000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2a28u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e29bc */
}

/* func_089e3c90  0x089e3c90..0x089e3cd4  68 bytes, source=sweep */
void func_089e3c90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3c90u);
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
    { c->r[31] = 0x089e3cc0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3c90 */
}

/* func_089e4dc4  0x089e4dc4..0x089e4e34  112 bytes, source=sweep */
void func_089e4dc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4dc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4df8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_089e4e00; }
L_089e4df8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_089e4e00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x089e4e20u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_089e3630(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4dc4 */
}

/* func_089ea338  0x089ea338..0x089ea3c0  136 bytes, source=sweep */
void func_089ea338(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea338u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ea374; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea374u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea4c8(c, ram); }
L_089ea374:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ea390; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea390u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea534(c, ram); }
L_089ea390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ea3ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea3acu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea584(c, ram); }
L_089ea3ac:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea338 */
}

/* func_089eb1e4  0x089eb1e4..0x089eb228  68 bytes, source=sweep */
void func_089eb1e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb1e4u);
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
    { c->r[31] = 0x089eb214u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb1e4 */
}

/* func_089ef438  0x089ef438..0x089ef4bc  132 bytes, source=sweep */
void func_089ef438(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef438u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
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
    mem_w32(ram, c->r[1] + 0xffffe868u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x00010000u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffe854u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe868u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[5];
    mem_w32(ram, c->r[1] + 0xffffe86cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ef438 */
}

/* func_089f0e30  0x089f0e30..0x089f0e74  68 bytes, source=sweep */
void func_089f0e30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0e30u);
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
    { c->r[31] = 0x089f0e60u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0e30 */
}

/* func_089f491c  0x089f491c..0x089f4c50  820 bytes, source=sweep */
void func_089f491c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f491cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); if (_c) goto L_089f494c; }
    { goto L_089f4c3c; }
L_089f494c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x2e440000u;
    c->r[2] = c->r[2] | 0x4d50u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f497c; }
    c->r[2] = 0x325a0000u;
    c->r[2] = c->r[2] | 0x444du;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089f497c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x325a0000u;
    c->r[2] = c->r[2] | 0x444du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f49dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089f4a24; }
L_089f49dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089f4a24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089f4a34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f4a50; }
    { goto L_089f4ba4; }
L_089f4a50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000001cu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089f4a78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f4a90; }
    { goto L_089f4ae4; }
L_089f4a90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f4ab0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_089f4ac8; }
L_089f4ab0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089f4ac8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089f4a78; }
L_089f4ae4:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089f4ae8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f4b00; }
    { goto L_089f4b94; }
L_089f4b00:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f4b50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_089f4b50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089f4ae8; }
L_089f4b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089f4a34; }
L_089f4ba4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x325a0000u;
    c->r[2] = c->r[2] | 0x444du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f4c34; }
    { c->r[31] = 0x089f4bc0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f5620(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000014u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000018u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x0000001cu, c->r[2]);
L_089f4c34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000068u, 0u);
L_089f4c3c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089f491c */
}

/* func_089f5dcc  0x089f5dcc..0x089f5f2c  352 bytes, source=fde */
void func_089f5dcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5dccu);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f5e0c; }
    { c->r[31] = 0x089f5e04u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8068(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]); goto L_089f5e14; }
L_089f5e0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
L_089f5e14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f5f0c; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f5e38u; c->r[4] = c->r[2] + 0u; func_089f85a0(c, ram); }
    c->r[4] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00003fffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f5e58u; c->r[6] = c->r[3] + 0u; func_089f9388(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f5f0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f5eb4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f5eacu; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000c8u, 0u); goto L_089f5f14; }
L_089f5eb4:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f5ec8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f7d84(c, ram); }
    c->r[2] = c->r[2] & 0x8000u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f5eec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
L_089f5eec:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { c->r[31] = 0x089f5f04u; c->r[7] = c->r[2] + 0u; func_089f8108(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]); goto L_089f5f14; }
L_089f5f0c:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
L_089f5f14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_089f5dcc */
}

/* func_089f8920  0x089f8920..0x089f8998  120 bytes, source=fde */
void func_089f8920(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8920u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f8948u; c->r[5] = 0u + 0u; func_089f8b84(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8984; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f895cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f8a7c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001au;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd124u;
    { c->r[31] = 0x089f8978u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089f8984:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8920 */
}

/* func_089f9590  0x089f9590..0x089f9658  200 bytes, source=residue */
void func_089f9590(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9590u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = alx_seb(c->r[6]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = alx_seh(c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    { c->r[31] = 0x089f95d4u; c->f[20] = c->f[12]; func_089fad14(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = c->r[2] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_089f962c; }
    { c->r[31] = 0x089f95ecu; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[3] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] & 0xffffu;
    c->f[12] = c->f[20];
    c->r[6] = c->r[18] + 0u;
    c->r[7] = c->r[19] + 0u;
    c->r[8] = c->r[21] + 0u;
    c->r[10] = c->r[20] + 0u;
    c->r[9] = 0u + 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0011u; if (_c) goto L_089f962c; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x089f9628u; c->f[13] = mem_rf32(ram, c->r[2] + 0xffffd148u); func_089fd034(c, ram); }
    c->r[3] = c->r[2] + 0u;
L_089f962c:
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
    return; /* fell out of func_089f9590 */
}

/* func_089fa2dc  0x089fa2dc..0x089fa308  44 bytes, source=fde */
void func_089fa2dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa2dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fa2ecu; c->r[4] = 0u + 0x00000becu; func_08a0df74(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = 0x08b90000u;
    { c->r[31] = 0x089fa2fcu; mem_w32(ram, c->r[3] + 0x0000658cu, c->r[2]); func_089f9b8c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa2dc */
}

/* func_089fab98  0x089fab98..0x089fabd4  60 bytes, source=fde */
void func_089fab98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fab98u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fabb0u; c->r[4] = 0u | 0xc80cu; func_08a0df74(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[3] = 0x08b90000u;
    { c->r[31] = 0x089fabc4u; mem_w32(ram, c->r[3] + 0x00006590u, c->r[2]); func_089fa684(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fab98 */
}

/* func_089fb418  0x089fb418..0x089fb424  12 bytes, source=sweep */
void func_089fb418(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb418u);
    c->r[2] = 0x08b90000u;
    { c->r[2] = c->r[2] + 0x00007d94u; return; }
    return; /* fell out of func_089fb418 */
}

/* func_089fc0d4  0x089fc0d4..0x089fc0f0  28 bytes, source=residue */
void func_089fc0d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc0d4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc0e4u; func_089fc520(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc0d4 */
}

/* func_089fd7d4  0x089fd7d4..0x089fd874  160 bytes, source=sweep */
void func_089fd7d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd7d4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x089fd7fcu; c->r[17] = c->r[6] + 0u; func_089facc8(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[3] = c->r[3] | 0x0010u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[6] = c->r[3] + 0u; if (_c) goto L_089fd858; }
    { c->r[31] = 0x089fd818u; func_089facf0(c, ram); }
    c->r[2] = (c->r[18] < c->r[2]) ? 1u : 0u;
    c->r[6] = 0x80000000u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[18] + 0u;
    c->r[8] = c->r[17] + 0u;
    c->r[9] = 0u + 0x00000001u;
    c->r[10] = 0u + 0xffffffffu;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] | 0x0011u; if (_c) goto L_089fd858; }
    c->r[2] = 0x08a50000u;
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[17] + 0x00000014u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[17] + 0x0000001cu);
    c->f[12] = mem_rf32(ram, c->r[17] + 0x00000010u);
    { c->r[31] = 0x089fd854u; c->f[13] = mem_rf32(ram, c->r[2] + 0xffffd280u); func_089fd034(c, ram); }
    c->r[6] = 0u + 0u;
L_089fd858:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[6] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fd7d4 */
}

/* func_089fe578  0x089fe578..0x089fe64c  212 bytes, source=residue */
void func_089fe578(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe578u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[2] = 0x08ba0000u;
    c->r[3] = c->r[4] << 3;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[3] = c->r[3] - c->r[4];
    c->r[3] = c->r[3] << 5;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[17] = c->r[5] + 0u;
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[18] = c->r[6] + 0u;
    c->r[7] = mem_r32(ram, c->r[2] + 0x0000016cu);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[7] = ((s32)c->r[4] < (s32)c->r[7]) ? 1u : 0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[7] = c->r[7] ^ 0x0001u;
    c->r[2] = c->r[4] >> 31;
    c->r[7] = c->r[7] | c->r[2];
    c->r[2] = 0x80000000u;
    { int _c = (c->r[7] != 0u); c->r[2] = c->r[2] | 0x000au; if (_c) goto L_089fe61c; }
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089fe634; }
    c->r[2] = c->r[16] << 2;
L_089fe5e4:
    c->r[2] = c->r[2] + c->r[16];
    c->r[3] = 0x08ba0000u;
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + 0x00000170u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[8] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[8]);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[6] = c->r[18] + 0u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x089fe61cu; mem_w32(ram, c->r[2] + 0x00000008u, 0u); func_089ff2c8(c, ram); }
L_089fe61c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fe634:
    { c->r[31] = 0x089fe63cu; func_089fe394(c, ram); }
    { c->r[31] = 0x089fe644u; func_089ff600(c, ram); }
    { c->r[2] = c->r[16] << 2; goto L_089fe5e4; }
    return; /* fell out of func_089fe578 */
}

/* func_089ff3bc  0x089ff3bc..0x089ff600  580 bytes, source=sweep */
void func_089ff3bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff3bcu);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[2] = 0x08a50000u;
    c->r[3] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[23]);
    c->r[30] = 0x08a50000u;
    c->r[23] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[22]);
    c->r[22] = 0u + 0x00001000u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[21]);
    c->r[21] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[20]);
    c->r[20] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x0000006cu, c->r[19]);
    c->r[19] = 0u + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[18]);
    c->r[18] = c->r[3] + 0x0000008cu;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000090u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000050u, 0u);
    c->f[20] = mem_rf32(ram, c->r[2] + 0xffffd2b4u);
L_089ff41c:
    c->r[6] = 0u + 0u;
    c->r[4] = 0u + 0x0000007fu;
    { c->r[31] = 0x089ff42cu; c->r[5] = c->r[29] + 0x00000050u; func_089fe108(c, ram); }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089ff438u; c->r[5] = c->r[17] + 0u; func_089fa398(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[18] + 0x00000048u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0xffffd2b0u);
    c->r[3] = mem_r16(ram, c->r[18] + 0x0000004cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x0000002au, 0u);
    c->r[16] = c->r[2] + 0u;
    c->r[4] = c->r[3] + c->r[19];
    c->f[1] = c->f[1] / c->f[2];
    mem_w16(ram, c->r[2] + 0x00000028u, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000018u, 0u);
    c->r[6] = c->r[2] + 0u;
    mem_w8(ram, c->r[16] + 0x0000000bu, c->r[2]);
    c->r[5] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000042u);
    mem_wf32(ram, c->r[16] + 0x0000002cu, c->f[20]);
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[18] + 0x00000044u);
    mem_w8(ram, c->r[16] + 0x0000000fu, c->r[21]);
    mem_w8(ram, c->r[16] + 0x0000000du, c->r[3]);
    mem_w8(ram, c->r[16] + 0x0000000au, c->r[21]);
    mem_w16(ram, c->r[16] + 0x00000046u, c->r[4]);
    mem_wf32(ram, c->r[16] + 0x00000024u, c->f[1]);
    c->f[0] = mem_rf32(ram, c->r[18] + 0x000000bcu);
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
    mem_wf32(ram, c->r[16] + 0x00000034u, c->f[0]);
    mem_w16(ram, c->r[16] + 0x00000038u, c->r[19]);
    mem_w16(ram, c->r[16] + 0x0000003au, 0u);
    mem_w16(ram, c->r[16] + 0x0000001cu, c->r[22]);
    mem_w8(ram, c->r[16] + 0x00000009u, 0u);
    { int _c = (c->r[5] != 0u); mem_w16(ram, c->r[16] + 0x00000048u, c->r[22]); if (_c) goto L_089ff5ec; }
    mem_wf32(ram, c->r[29] + 0x00000000u, c->f[20]);
    c->f[1] = mem_rf32(ram, c->r[16] + 0x00000024u);
L_089ff4c0:
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[23] + 0xffffd2b8u);
    c->r[4] = mem_r8(ram, c->r[16] + 0x0000000au);
    c->f[0] = c->f[0] * c->f[1];
    c->r[20] = c->r[20] + 0xffffffffu;
    c->f[0] = c->f[0] * c->f[2];
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[5] = f2u(c->f[1]);
    { c->r[31] = 0x089ff4e8u; c->r[19] = c->r[19] + 0x00000080u; func_089fd918(c, ram); }
    c->r[2] = c->r[2] << 4;
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000046u);
    mem_w16(ram, c->r[16] + 0x00000044u, c->r[2]);
    c->r[5] = c->r[29] + 0x00000054u;
    { c->r[31] = 0x089ff500u; c->r[6] = c->r[29] + 0x00000058u; func_089fd94c(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000044u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000054u);
    mem_w16(ram, c->r[16] + 0x00000040u, 0u);
    alx_mult(c, c->r[5], c->r[6]);
    c->r[4] = c->r[17] + 0u;
    mem_w16(ram, c->r[16] + 0x00000042u, 0u);
    c->r[5] = c->lo;
    alx_mult(c, c->r[3], c->r[6]);
    c->r[2] = (u32)((s32)c->r[5] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[5] = c->r[5] + c->r[2];
    c->r[5] = (u32)((s32)c->r[5] >> 8);
    c->r[3] = c->lo;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[3] >> 8);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[5]);
    c->r[2] = mem_r16(ram, c->r[29] + 0x00000054u);
    c->r[3] = mem_r16(ram, c->r[29] + 0x00000058u);
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[21]);
    mem_w16(ram, c->r[16] + 0x0000003eu, c->r[3]);
    { c->r[31] = 0x089ff568u; mem_w16(ram, c->r[16] + 0x0000003cu, c->r[2]); func_089fa4ac(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[7] = c->r[17] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089ff57cu; c->r[4] = 0u + 0x0000007fu; func_089fe13c(c, ram); }
    c->r[4] = c->r[17] + 0u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x089ff58cu; c->r[6] = 0u + 0x00001fc6u; func_08a05eac(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[4] = c->r[17] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089ff5a4u; c->r[8] = 0u + 0u; func_08a05c2c(c, ram); }
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x089ff5b0u; c->r[5] = 0u + 0x00001000u; func_08a05c90(c, ram); }
    { int _c = ((s32)c->r[20] >= 0); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_089ff41c; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000007cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000070u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
L_089ff5ec:
    c->r[4] = c->r[6] + 0u;
    { c->r[31] = 0x089ff5f8u; c->r[5] = c->r[29] + 0u; func_089fb264(c, ram); }
    { c->f[1] = mem_rf32(ram, c->r[16] + 0x00000024u); goto L_089ff4c0; }
    return; /* fell out of func_089ff3bc */
}

/* func_08a01e58  0x08a01e58..0x08a01fa4  332 bytes, source=fde */
void func_08a01e58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01e58u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[11] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    c->r[23] = c->r[10] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = alx_seh(c->r[8]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seb(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000030u, c->f[20]);
    c->f[20] = c->f[12];
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    { c->r[31] = 0x08a01eb4u; c->r[22] = mem_r32(ram, c->r[29] + 0x00000040u); func_089fad14(c, ram); }
    c->r[16] = c->r[2] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a01ee0; }
    { c->r[31] = 0x08a01eccu; func_089fad6c(c, ram); }
    c->r[5] = c->r[21] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[6] = c->r[16] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a01f18; }
L_08a01ee0:
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
L_08a01f18:
    c->r[2] = 0x08ba0000u;
    { c->r[31] = 0x08a01f24u; c->r[4] = mem_r32(ram, c->r[2] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd348u);
    c->r[3] = 0x80000000u;
    c->f[12] = c->f[20];
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    c->r[10] = c->r[18] + 0u;
    c->f[13] = c->f[0];
    c->r[6] = c->r[19] + 0u;
    c->r[7] = c->r[20] + 0u;
    c->r[9] = 0u + 0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[8] = c->r[22] + 0u;
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a01ee0; }
    { c->r[31] = 0x08a01f68u; func_089fd034(c, ram); }
    c->r[2] = 0x08ba0000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff9af0u);
    c->r[6] = c->r[21] + 0u;
    c->r[7] = c->r[23] + 0u;
    c->r[5] = c->r[22] + 0u;
    { c->r[31] = 0x08a01f84u; c->r[8] = c->r[30] + 0u; func_08a02a28(c, ram); }
    c->r[2] = 0x08ba0000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[22] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a01f9cu; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a01ee0; }
    return; /* fell out of func_08a01e58 */
}

/* func_08a03024  0x08a03024..0x08a03050  44 bytes, source=fde */
void func_08a03024(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03024u);
    c->r[2] = c->r[4] + 0u;
    c->r[4] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[6] = c->r[5] + 0u;
    c->r[4] = c->r[4] + 0xffff9af8u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a03044u; c->r[5] = c->r[2] + 0u; func_08a02e80(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a03024 */
}

/* func_08a03ba4  0x08a03ba4..0x08a03d14  368 bytes, source=sweep */
void func_08a03ba4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03ba4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0x08ba0000u;
    c->r[2] = 0x80440000u;
    c->r[4] = mem_r32(ram, c->r[19] + 0xffff9bf0u);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[3] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a03cb4; }
    c->r[9] = 0x08ba0000u;
    c->r[6] = 0x08ba0000u;
    c->r[4] = 0x08ba0000u;
    c->r[3] = c->r[6] + 0xffff9c68u;
    c->r[8] = c->r[9] + 0xffff9bf8u;
    c->r[7] = 0x08ba0000u;
    c->r[5] = 0x08ba0000u;
    mem_w32(ram, c->r[4] + 0xffffaf48u, c->r[8]);
    c->r[4] = c->r[7] + 0xffffaa78u;
    mem_w32(ram, c->r[5] + 0xffffaf44u, c->r[3]);
    c->r[3] = 0u + 0u;
L_08a03bfc:
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[10] = (c->r[3] < 0x00000260u) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, 0u);
    { int _c = (c->r[10] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a03bfc; }
    c->r[11] = 0x08ba0000u;
    c->r[4] = c->r[11] + 0xffffacd8u;
    c->r[3] = 0u + 0u;
L_08a03c1c:
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[12] = (c->r[3] < 0x00000260u) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, 0u);
    { int _c = (c->r[12] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a03c1c; }
    c->r[14] = 0x08ba0000u;
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0x000001c0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a03c48u; c->r[17] = c->r[14] + 0xffffaf38u; hle_dispatch_stub(c, ram, 0x08a24964u); /* sceAudioChReserve */ }
    c->r[13] = 0x80440000u;
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]);
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[13] | 0x0001u; if (_c) goto L_08a03cb4; }
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0x00000100u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a03c6cu; c->r[16] = 0x08ba0000u; hle_dispatch_stub(c, ram, 0x08a24964u); /* sceAudioChReserve */ }
    mem_w32(ram, c->r[16] + 0xffffaf4cu, c->r[2]);
    { int _c = ((s32)c->r[2] < 0); c->r[18] = c->r[16] + 0xffffaf4cu; if (_c) goto L_08a03d0c; }
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0x00000100u;
    { c->r[31] = 0x08a03c88u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24964u); /* sceAudioChReserve */ }
    { int _c = ((s32)c->r[2] < 0); mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]); if (_c) goto L_08a03cfc; }
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0x00000100u;
    { c->r[31] = 0x08a03ca0u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24964u); /* sceAudioChReserve */ }
    { int _c = ((s32)c->r[2] < 0); mem_w32(ram, c->r[18] + 0x00000008u, c->r[2]); if (_c) goto L_08a03cd4; }
    c->r[16] = 0u + 0x00000001u;
    mem_w32(ram, c->r[19] + 0xffff9bf0u, c->r[16]);
    c->r[3] = 0u + 0u;
L_08a03cb4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a03cd4:
    { c->r[31] = 0x08a03cdcu; c->r[4] = mem_r32(ram, c->r[17] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a2496cu); /* sceAudioChRelease */ }
    { c->r[31] = 0x08a03ce4u; c->r[4] = mem_r32(ram, c->r[16] + 0xffffaf4cu); hle_dispatch_stub(c, ram, 0x08a2496cu); /* sceAudioChRelease */ }
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000004u);
L_08a03ce8:
    { c->r[31] = 0x08a03cf0u; hle_dispatch_stub(c, ram, 0x08a2496cu); /* sceAudioChRelease */ }
    c->r[15] = 0x80440000u;
    { c->r[3] = c->r[15] | 0x0001u; goto L_08a03cb4; }
L_08a03cfc:
    { c->r[31] = 0x08a03d04u; c->r[4] = mem_r32(ram, c->r[17] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a2496cu); /* sceAudioChRelease */ }
    { c->r[4] = mem_r32(ram, c->r[16] + 0xffffaf4cu); goto L_08a03ce8; }
L_08a03d0c:
    { c->r[4] = mem_r32(ram, c->r[17] + 0x00000004u); goto L_08a03ce8; }
    return; /* fell out of func_08a03ba4 */
}

/* func_08a05970  0x08a05970..0x08a059d4  100 bytes, source=residue */
void func_08a05970(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05970u);
    c->r[7] = 0x08ba0000u;
    c->r[9] = mem_r32(ram, c->r[7] + 0xffffaf80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[8] = c->r[5] + 0u;
    c->r[7] = c->r[6] + 0u;
    { int _c = (c->r[9] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a059c8; }
    c->r[5] = 0x80420000u;
    c->r[3] = c->r[4] & 0x003fu;
    { int _c = (c->r[4] == 0u); c->r[2] = c->r[5] | 0x0005u; if (_c) goto L_08a059c8; }
    c->r[2] = 0x08ba0000u;
    c->r[6] = c->r[8] + 0u;
    c->r[8] = 0x80420000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[8] | 0x0005u; if (_c) goto L_08a059c8; }
    { c->r[31] = 0x08a059c8u; hle_dispatch_stub(c, ram, 0x08a24ca4u); /* __sceSasCoreWithMix */ }
L_08a059c8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05970 */
}

/* func_08a06844  0x08a06844..0x08a06930  236 bytes, source=residue */
void func_08a06844(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06844u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[2] = 0u + 0u;
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[6]); if (_c) goto L_08a0690c; }
    c->r[17] = c->r[5] + 0xffffffffu;
    c->r[20] = 0x08ba0000u;
    c->r[19] = 0x08ba0000u;
    c->r[21] = 0u + 0xffffffffu;
L_08a06888:
    { c->r[31] = 0x08a06890u; c->r[4] = c->r[29] + 0x00000014u; func_08a0635c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[19] + 0xffffbe0cu); if (_c) goto L_08a06904; }
    c->r[5] = c->r[2] << 1;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[29]);
    c->r[4] = c->r[5] + c->r[6];
    c->r[5] = mem_r16(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[5] != 0u); c->r[2] = mem_r32(ram, c->r[20] + 0xffffbe04u); if (_c) goto L_08a068b8; }
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a06904; }
L_08a068b8:
    { c->r[31] = 0x08a068c0u; c->r[4] = c->r[29] + 0x00000010u; func_08a062a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[4] = c->r[3] - c->r[29];
    c->r[2] = (c->r[17] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[17] - c->r[4]; if (_c) goto L_08a06904; }
    c->r[4] = c->r[4] + 0xffffffffu;
    { int _c = (c->r[4] == c->r[21]); c->r[3] = c->r[29] + 0u; if (_c) goto L_08a068fc; }
    c->r[5] = 0u + 0xffffffffu;
L_08a068e4:
    c->r[7] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[4] + 0xffffffffu;
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[7]);
    { int _c = (c->r[4] != c->r[5]); c->r[16] = c->r[16] + 0x00000001u; if (_c) goto L_08a068e4; }
L_08a068fc:
    { c->r[18] = c->r[18] + 0x00000001u; goto L_08a06888; }
L_08a06904:
    mem_w8(ram, c->r[16] + 0x00000000u, 0u);
    c->r[2] = c->r[18] + 0u;
L_08a0690c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08a06844 */
}

/* func_08a0b0d0  0x08a0b0d0..0x08a0b0f4  36 bytes, source=residue */
void func_08a0b0d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0b0d0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe45cu;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0b0d0 */
}

/* func_08a0df00  0x08a0df00..0x08a0df74  116 bytes, source=fde */
void func_08a0df00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0df00u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0df14u; func_08a0e464(c, ram); }
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[16] == 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a0df4c; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000030u);
    c->r[2] = 0x432b0000u;
    c->r[2] = c->r[2] | 0x2b00u;
    if (c->r[3] == c->r[2]) { c->r[3] = mem_r32(ram, c->r[16] + 0x00000034u); goto L_08a0df54; }
    mem_w32(ram, c->r[4] + 0x00000000u, 0u);
L_08a0df38:
    c->r[16] = c->r[16] + 0x00000030u;
    { c->r[31] = 0x08a0df44u; c->r[4] = c->r[16] + 0u; func_08a16540(c, ram); }
    { c->r[31] = 0x08a0df4cu; c->r[4] = c->r[16] + 0u; func_08a0e188(c, ram); }
L_08a0df4c:
    { c->r[31] = 0x08a0df54u; func_08a0ddc4(c, ram); }
L_08a0df54:
    c->r[2] = 0x474e0000u;
    c->r[2] = c->r[2] | 0x5543u;
    if (c->r[3] != c->r[2]) { mem_w32(ram, c->r[4] + 0x00000000u, 0u); goto L_08a0df38; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000014u);
    c->r[2] = 0u - c->r[2];
    { mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]); goto L_08a0df38; }
    return; /* fell out of func_08a0df00 */
}

/* func_08a0e6b4  0x08a0e6b4..0x08a0e6bc  8 bytes, source=indirect */
void func_08a0e6b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e6b4u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_08a0e6b4 */
}

/* func_08a0fb24  0x08a0fb24..0x08a0fc44  288 bytes, source=sweep */
void func_08a0fb24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0fb24u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000044u, c->f[21]);
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    { c->r[31] = 0x08a0fb40u; c->f[20] = c->f[12]; func_08a10c40(c, ram); }
    c->r[2] = 0x08a50000u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000fa8u);
    c->r[3] = 0u + 0xffffffffu;
    { int _c = (c->r[16] == c->r[3]); c->f[21] = c->f[0]; if (_c) goto L_08a0fb64; }
    { c->r[31] = 0x08a0fb5cu; c->f[12] = c->f[20]; func_08a13038(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0fb80; }
L_08a0fb64:
    c->f[0] = c->f[21];
L_08a0fb68:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
L_08a0fb6c:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000044u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a0fb80:
    { c->r[31] = 0x08a0fb88u; c->f[12] = c->f[20]; func_08a13008(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000794u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[0] = c->f[21]; if (_c) goto L_08a0fb68; }
    c->r[2] = 0x08a50000u;
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x0000078cu;
    c->f[12] = c->f[20];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a0fbc0u; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[5]);
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_08a0fc30; }
    { c->r[31] = 0x08a0fbf4u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0fc30; }
L_08a0fbfc:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0fc1c; }
L_08a0fc08:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    { c->r[31] = 0x08a0fc14u; c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu); func_08a14588(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u); goto L_08a0fb6c; }
L_08a0fc1c:
    { c->r[31] = 0x08a0fc24u; func_08a19214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0fc08; }
L_08a0fc30:
    { c->r[31] = 0x08a0fc38u; func_08a19214(c, ram); }
    c->r[3] = 0u + 0x00000021u;
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0fbfc; }
    return; /* fell out of func_08a0fb24 */
}

/* func_08a13ee0  0x08a13ee0..0x08a14104  548 bytes, source=sweep */
void func_08a13ee0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13ee0u);
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
    { c->r[31] = 0x08a13f14u; c->r[16] = c->r[29] + 0x00000020u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000050u;
    { c->r[31] = 0x08a13f20u; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[13] = c->r[29] + 0u;
    c->r[2] = (c->r[5] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a13f78; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = (c->r[6] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a13f78; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[2] = c->r[5] ^ 0x0004u;
    c->r[3] = c->r[3] ^ c->r[4];
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]); if (_c) goto L_08a13f68; }
    c->r[2] = c->r[5] ^ 0x0002u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[6] ^ 0x0004u; if (_c) goto L_08a13f90; }
L_08a13f68:
    c->r[2] = 0x08a50000u;
    { int _c = (c->r[5] == c->r[6]); c->r[4] = c->r[2] + 0x00001088u; if (_c) goto L_08a13f78; }
    c->r[4] = c->r[29] + 0u;
L_08a13f78:
    { c->r[31] = 0x08a13f80u; func_08a183fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
L_08a13f90:
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[6] ^ 0x0002u; if (_c) goto L_08a13fb4; }
    c->r[2] = 0u + 0u;
    c->r[3] = 0u + 0u;
    c->r[4] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    { mem_w32(ram, c->r[29] + 0x00000008u, 0u); goto L_08a13f78; }
L_08a13fb4:
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a13fcc; }
    c->r[2] = 0u + 0x00000004u;
    c->r[4] = c->r[29] + 0u;
    { mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]); goto L_08a13f78; }
L_08a13fcc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[10] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[11] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[12] = (c->r[5] < c->r[11]) ? 1u : 0u;
    c->r[3] = c->r[3] - c->r[2];
    { int _c = (c->r[12] != 0u); mem_w32(ram, c->r[29] + 0x00000008u, c->r[3]); if (_c) goto L_08a140e4; }
    { int _c = (c->r[11] == c->r[5]); c->r[2] = (c->r[4] < c->r[10]) ? 1u : 0u; if (_c) goto L_08a140dc; }
L_08a13ff8:
    c->r[8] = 0u + 0x00000000u;
    c->r[9] = 0x10000000u;
    c->r[14] = 0u + 0u;
    c->r[15] = 0u + 0u;
L_08a14008:
    { int _c = (c->r[12] != 0u); c->r[2] = c->r[9] << 31; if (_c) goto L_08a14034; }
    { int _c = (c->r[11] == c->r[5]); c->r[2] = (c->r[4] < c->r[10]) ? 1u : 0u; if (_c) goto L_08a140cc; }
    c->r[2] = (c->r[4] < c->r[10]) ? 1u : 0u;
L_08a1401c:
    c->r[5] = c->r[5] - c->r[11];
    c->r[4] = c->r[4] - c->r[10];
    c->r[5] = c->r[5] - c->r[2];
    c->r[14] = c->r[14] | c->r[8];
    c->r[15] = c->r[15] | c->r[9];
    c->r[2] = c->r[9] << 31;
L_08a14034:
    c->r[8] = c->r[8] >> 1;
    c->r[7] = c->r[5] << 1;
    c->r[3] = c->r[4] >> 31;
    c->r[8] = c->r[8] | c->r[2];
    c->r[9] = c->r[9] >> 1;
    c->r[7] = c->r[7] | c->r[3];
    c->r[6] = c->r[4] << 1;
    c->r[2] = c->r[8] | c->r[9];
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    { int _c = (c->r[2] != 0u); c->r[12] = (c->r[7] < c->r[11]) ? 1u : 0u; if (_c) goto L_08a14008; }
    c->r[3] = 0u + 0x00000000u;
    c->r[2] = 0u + 0x000000ffu;
    c->r[2] = c->r[14] & c->r[2];
    c->r[4] = 0u + 0x00000080u;
    { int _c = (c->r[2] == c->r[4]); c->r[3] = c->r[15] & c->r[3]; if (_c) goto L_08a1408c; }
L_08a1407c:
    mem_w32(ram, c->r[13] + 0x00000010u, c->r[14]);
    mem_w32(ram, c->r[13] + 0x00000014u, c->r[15]);
    { c->r[4] = c->r[13] + 0u; goto L_08a13f78; }
L_08a1408c:
    { int _c = (c->r[3] != 0u); if (_c) goto L_08a1407c; }
    c->r[3] = 0u + 0x00000000u;
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[14] & c->r[2];
    c->r[3] = c->r[15] & c->r[3];
    c->r[2] = c->r[2] | c->r[3];
    if (c->r[2] != 0u) { c->r[14] = c->r[14] + 0x00000080u; goto L_08a140c0; }
    c->r[2] = c->r[6] | c->r[7];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1407c; }
    c->r[14] = c->r[14] + 0x00000080u;
L_08a140c0:
    c->r[2] = (c->r[14] < 0x00000080u) ? 1u : 0u;
    { c->r[15] = c->r[15] + c->r[2]; goto L_08a1407c; }
L_08a140cc:
    if (c->r[2] != 0u) { c->r[2] = c->r[9] << 31; goto L_08a14034; }
    { c->r[2] = (c->r[4] < c->r[10]) ? 1u : 0u; goto L_08a1401c; }
L_08a140dc:
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a13ff8; }
L_08a140e4:
    c->r[2] = c->r[3] + 0xffffffffu;
    c->r[5] = c->r[5] << 1;
    c->r[3] = c->r[4] >> 31;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    c->r[5] = c->r[5] | c->r[3];
    c->r[4] = c->r[4] << 1;
    { c->r[12] = (c->r[5] < c->r[11]) ? 1u : 0u; goto L_08a13ff8; }
    return; /* fell out of func_08a13ee0 */
}

/* func_08a16108  0x08a16108..0x08a16224  284 bytes, source=fde */
void func_08a16108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16108u);
    c->r[29] = c->r[29] + 0xfffff910u;
    mem_w32(ram, c->r[29] + 0x000006e8u, c->r[22]);
    c->r[22] = 0u + 0x00000007u;
    mem_w32(ram, c->r[29] + 0x000006e4u, c->r[21]);
    c->r[21] = 0u + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x000006d8u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x000006d4u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x000006ecu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000006e0u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x000006dcu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x000006d0u, c->r[16]);
    c->r[20] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[19] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[4] = c->r[17] + 0u;
L_08a16148:
    { c->r[31] = 0x08a16150u; c->r[5] = c->r[29] + 0u; func_08a154c8(c, ram); }
    c->r[3] = c->r[2] ^ 0x0005u;
    c->r[16] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[2] = 0u + 0x0000001au;
    if (c->r[3] == 0u) c->r[5] = c->r[2];
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[16]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[8] = c->r[18] + 0u;
    c->r[9] = c->r[17] + 0u;
    c->r[10] = c->r[19] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x00000002u; if (_c) goto L_08a161f0; }
    c->r[6] = mem_r32(ram, c->r[18] + 0x00000000u);
    { u32 _t = c->r[20]; c->r[31] = 0x08a16194u; c->r[7] = mem_r32(ram, c->r[18] + 0x00000004u); recomp_call_indirect(c, ram, 0x08a1618cu, _t); }
    c->r[8] = c->r[18] + 0u;
    c->r[9] = c->r[17] + 0u;
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x0000000au;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x00000002u; if (_c) goto L_08a161f0; }
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[16] == c->r[2]); c->r[2] = mem_r32(ram, c->r[29] + 0x000006b0u); if (_c) goto L_08a1621c; }
    if (c->r[2] == 0u) { c->r[4] = c->r[17] + 0u; goto L_08a161e0; }
    c->r[6] = mem_r32(ram, c->r[18] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a161ccu; c->r[7] = mem_r32(ram, c->r[18] + 0x00000004u); recomp_call_indirect(c, ram, 0x08a161c4u, _t); }
    { int _c = (c->r[2] == c->r[22]); c->r[16] = c->r[2] + 0u; if (_c) goto L_08a1621c; }
    { int _c = (c->r[2] != c->r[21]); c->r[3] = 0u + 0x00000002u; if (_c) goto L_08a161f0; }
    c->r[4] = c->r[17] + 0u;
L_08a161e0:
    { c->r[31] = 0x08a161e8u; c->r[5] = c->r[29] + 0u; func_08a158f0(c, ram); }
    { c->r[4] = c->r[17] + 0u; goto L_08a16148; }
L_08a161f0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x000006ecu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x000006e8u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x000006e4u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x000006e0u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x000006dcu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x000006d8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000006d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000006d0u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x000006f0u; return; }
L_08a1621c:
    { c->r[3] = c->r[16] + 0u; goto L_08a161f0; }
    return; /* fell out of func_08a16108 */
}

/* func_08a17914  0x08a17914..0x08a17a98  388 bytes, source=sweep */
void func_08a17914(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17914u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[20] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[17] = alx_ext(c->r[2], 3u, 7u);
    c->r[18] = c->r[17] & 0x00ffu;
    { c->r[31] = 0x08a17964u; c->r[4] = c->r[18] + 0u; func_08a170ec(c, ram); }
    c->r[21] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[23] = 0u + 0x00000001u; if (_c) goto L_08a17994; }
L_08a17974:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000004u);
    if (c->r[3] != 0u) { c->r[2] = mem_r32(ram, c->r[19] + 0x00000010u); goto L_08a179c8; }
L_08a17980:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
L_08a17984:
    c->r[2] = c->r[16] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[3] != 0u); c->r[16] = c->r[2] + 0x00000004u; if (_c) goto L_08a17974; }
L_08a17994:
    c->r[4] = 0u + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
L_08a1799c:
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
L_08a179c8:
    c->r[2] = alx_ext(c->r[2], 2u, 0u);
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[16] - c->r[3]; if (_c) goto L_08a17a00; }
    c->r[2] = c->r[2] + 0x00000004u;
    { int _c = (c->r[2] == c->r[20]); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a17a00; }
    { c->r[31] = 0x08a179e8u; c->r[20] = c->r[2] + 0u; func_08a17160(c, ram); }
    c->r[18] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a179fcu; c->r[17] = c->r[2] + 0u; func_08a170ec(c, ram); }
    c->r[21] = c->r[2] + 0u;
L_08a17a00:
    { int _c = (c->r[17] != 0u); c->r[6] = c->r[16] + 0x00000008u; if (_c) goto L_08a17a38; }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000008u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000000cu);
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]); if (_c) goto L_08a17980; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
L_08a17a20:
    c->r[2] = c->r[22] - c->r[4];
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a17980; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u); goto L_08a1799c; }
L_08a17a38:
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a17a48u; c->r[7] = c->r[29] + 0u; func_08a16cd0(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[4] = c->r[18] & 0x000fu;
    { c->r[31] = 0x08a17a5cu; c->r[7] = c->r[29] + 0x00000004u; func_08a16cd0(c, ram); }
    { c->r[31] = 0x08a17a64u; c->r[4] = c->r[18] + 0u; func_08a16bd4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[23] << (c->r[2] & 31u);
    c->r[3] = (c->r[5] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[5] = c->r[2] + 0xffffffffu; if (_c) goto L_08a17a80; }
    c->r[5] = 0u + 0xffffffffu;
L_08a17a80:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[4] & c->r[5];
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a17984; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a17a20; }
    return; /* fell out of func_08a17914 */
}

/* func_08a1902c  0x08a1902c..0x08a19048  28 bytes, source=residue */
void func_08a1902c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1902cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a1903cu; hle_dispatch_stub(c, ram, 0x08a248ecu); /* sceKernelLibcTime */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1902c */
}

/* func_08a1a510  0x08a1a510..0x08a1a548  56 bytes, source=sweep */
void func_08a1a510(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a510u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1a52cu; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    mem_w32(ram, c->r[2] + 0x000000a8u, c->r[16]);
    mem_w32(ram, c->r[2] + 0x000000acu, c->r[17]);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1a510 */
}

/* func_08a1c4a4  0x08a1c4a4..0x08a1c4f4  80 bytes, source=sweep */
void func_08a1c4a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c4a4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1c4c8u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[17] + 0u;
    { c->r[31] = 0x08a1c4dcu; c->r[7] = c->r[18] + 0u; func_08a1c2e0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1c4a4 */
}

/* func_08a21f30  0x08a21f30..0x08a21fc4  148 bytes, source=sweep */
void func_08a21f30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21f30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0x08a50000u;
    c->r[2] = c->r[19] + 0x00001d44u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    c->r[5] = c->r[2] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    c->r[4] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[6] + 0u;
    { int _c = (c->r[6] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]); if (_c) goto L_08a21f88; }
    { c->r[31] = 0x08a21f70u; func_08a1aefc(c, ram); }
    c->r[5] = 0x08a50000u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[5] + 0x00001d04u; if (_c) goto L_08a21fac; }
L_08a21f80:
    mem_w32(ram, c->r[17] + 0x00000034u, c->r[16]);
    mem_w32(ram, c->r[17] + 0x00000030u, c->r[18]);
L_08a21f88:
    c->r[3] = c->r[19] + 0x00001d44u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a21f90:
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a21fac:
    { c->r[31] = 0x08a21fb4u; func_08a1aefc(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a21f80; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a21f90; }
    return; /* fell out of func_08a21f30 */
}

/* func_08a23d04  0x08a23d04..0x08a23d6c  104 bytes, source=sweep */
void func_08a23d04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23d04u);
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
    { c->r[31] = 0x08a23d34u; mem_w32(ram, c->r[16] + 0x000002acu, 0u); func_08a18e30(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = mem_r32(ram, c->r[16] + 0x000002acu); if (_c) goto L_08a23d5c; }
L_08a23d44:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a23d48:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23d5c:
    if (c->r[2] != 0u) { mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_08a23d44; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a23d48; }
    return; /* fell out of func_08a23d04 */
}
