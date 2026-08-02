#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08805a0c  0x08805a0c..0x08805b24  280 bytes, source=fde */
void func_08805a0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08805a0cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffe674u;
    c->r[5] = 0x08800000u;
    c->r[5] = c->r[5] + 0x00005880u;
    { c->r[31] = 0x08805a3cu; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a247fcu); /* sceKernelCreateCallback */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x08805a48u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); hle_dispatch_stub(c, ram, 0x08a24744u); /* sceKernelRegisterExitCallback */ }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805a54u; c->r[4] = c->r[4] + 0x00000330u; func_089d9d90(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08805a70; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08805a70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08805a7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); hle_dispatch_stub(c, ram, 0x08a24a2cu); /* sceImposeSetLanguageMode */ }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffe684u;
    c->r[5] = 0x08800000u;
    c->r[5] = c->r[5] + 0x000058ccu;
    { c->r[31] = 0x08805a9cu; c->r[6] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a247fcu); /* sceKernelCreateCallback */ }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08805aacu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); hle_dispatch_stub(c, ram, 0x08a24c54u); /* scePowerRegisterCallback */ }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffe68cu;
    c->r[5] = 0x08800000u;
    c->r[5] = c->r[5] + 0x0000597cu;
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001e88u);
    c->r[7] = 0x00020000u;
    c->r[8] = 0u + 0x00004000u;
    { c->r[31] = 0x08805ad4u; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08805ae0u; mem_w32(ram, c->r[1] + 0x00002f98u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a24834u); /* sceKernelGetThreadId */ }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002f94u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002f98u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08805afcu; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    { c->r[31] = 0x08805b04u; hle_dispatch_stub(c, ram, 0x08a24894u); /* sceKernelSleepThreadCB */ }
    { c->r[31] = 0x08805b0cu; hle_dispatch_stub(c, ram, 0x08a2473cu); /* sceKernelExitGame */ }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08805a0c */
}

/* func_08807034  0x08807034..0x08807078  68 bytes, source=sweep */
void func_08807034(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08807034u);
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
    { c->r[31] = 0x08807064u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08807034 */
}

/* func_0880810c  0x0880810c..0x08808134  40 bytes, source=sweep */
void func_0880810c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880810cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000154u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880810c */
}

/* func_0880a770  0x0880a770..0x0880a814  164 bytes, source=fde */
void func_0880a770(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880a770u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880a79c; }
    { goto L_0880a800; }
L_0880a79c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880a7a8u; c->r[4] = c->r[4] + 0x00002e04u; func_088133a0(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c60u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a800; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003c60u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880a7ec; }
    c->r[2] = 0u + 0x00000011u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
    c->r[2] = 0x20000000u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c44u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c64u, 0u);
L_0880a7ec:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c60u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c60u, c->r[2]);
L_0880a800:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880a770 */
}

/* func_0880d318  0x0880d318..0x0880d34c  52 bytes, source=sweep */
void func_0880d318(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d318u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000150u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d318 */
}

/* func_0880e048  0x0880e048..0x0880e198  336 bytes, source=fde */
void func_0880e048(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e048u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e088; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x0000158du;
    { c->r[31] = 0x0880e080u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880e184; }
L_0880e088:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ca0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e0c4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0880e0acu; c->r[5] = 0u + 0x00000005u; func_089d9844(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0x08a40000u;
    { c->r[31] = 0x0880e0c4u; c->r[6] = c->r[6] + 0xffffeee4u; func_089d8bdc(c, ram); }
L_0880e0c4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ca0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e184; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e0e4u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e144; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e10c; }
    { goto L_0880e128; }
L_0880e10c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e120u; c->r[5] = c->r[5] + 0xffffe198u; func_0880f03c(c, ram); }
    { goto L_0880e144; }
L_0880e128:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    c->r[5] = c->r[5] + 0xffffee64u;
    c->r[6] = 0x08810000u;
    { c->r[31] = 0x0880e144u; c->r[6] = c->r[6] + 0xffffec78u; func_0880f1d4(c, ram); }
L_0880e144:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003cd4u);
    c->r[2] = 0x08810000u;
    c->r[2] = c->r[2] + 0xffffe198u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e184; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e168u; c->r[4] = c->r[4] + 0x00000330u; func_089d9a14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e184; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e184u; c->r[5] = c->r[5] + 0xffffe9d4u; func_0880f03c(c, ram); }
L_0880e184:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880e048 */
}

/* func_088112b8  0x088112b8..0x088112e8  48 bytes, source=sweep */
void func_088112b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088112b8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088112d4u; c->r[5] = 0u | 0xffffu; func_08811120(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088112b8 */
}

/* func_08813c28  0x08813c28..0x08813c50  40 bytes, source=sweep */
void func_08813c28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08813c28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000014bu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08813c28 */
}

/* func_08819280  0x08819280..0x088192bc  60 bytes, source=sweep */
void func_08819280(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819280u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088192a8u; c->r[6] = 0u + 0u; func_08819834(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819280 */
}

/* func_0881a2a4  0x0881a2a4..0x0881a2cc  40 bytes, source=sweep */
void func_0881a2a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881a2a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000149u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881a2a4 */
}

/* func_08820df8  0x08820df8..0x08820e5c  100 bytes, source=sweep */
void func_08820df8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820df8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000350u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000002u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820df8 */
}

/* func_08826aa0  0x08826aa0..0x08826ac8  40 bytes, source=sweep */
void func_08826aa0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826aa0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b8cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826aa0 */
}

/* func_08828610  0x08828610..0x0882879c  396 bytes, source=fde */
void func_08828610(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08828610u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08828628u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08828780; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc18u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc1cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc20u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc24u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc28u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08828670:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08828688; }
    { goto L_08828774; }
L_08828688:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088286a4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003ef4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003f08u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08828764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003ef4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003f08u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003ef4u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003f08u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x08828764u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
L_08828764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08828670; }
L_08828774:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08828784; }
L_08828780:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08828784:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08828610 */
}

/* func_0882b8cc  0x0882b8cc..0x0882bbf4  808 bytes, source=fde */
void func_0882b8cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882b8ccu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882ba78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882b934; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882b95c; }
    { goto L_0882bbe0; }
L_0882b934:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882bbe0; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882bbd8; }
    { goto L_0882bbe0; }
L_0882b95c:
    { c->r[31] = 0x0882b964u; func_0880b360(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882b970u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882b99c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882b984u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882b99c; }
    { goto L_0882b9b4; }
L_0882b99c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882b9a8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882b9b4u; c->r[5] = 0u + 0u; func_0880b24c(c, ram); }
L_0882b9b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882b9ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]); goto L_0882ba00; }
L_0882b9ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
L_0882ba00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0882ba0cu; mem_w16(ram, c->r[2] + 0x00000000u, 0u); func_088c4f00(c, ram); }
    c->r[4] = 0u + 0x0000002au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0882ba28u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882ba38u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000025u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ba60; }
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0882ba58u; c->r[6] = 0u + 0u; func_08850614(c, ram); }
    { goto L_0882bbe0; }
L_0882ba60:
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0882ba70u; c->r[6] = 0u + 0u; func_08850614(c, ram); }
    { goto L_0882bbe0; }
L_0882ba78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000001c2u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882bab8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882bab8; }
    { c->r[31] = 0x0882bab8u; c->r[4] = 0u + 0x0000003cu; func_0880b09c(c, ram); }
L_0882bab8:
    { c->r[31] = 0x0882bac0u; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882bbe0; }
    { c->r[31] = 0x0882badcu; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0882baecu; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x0882baf4u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x0882bafcu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000016c0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0882bb18u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882bbb4; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882bb40u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882bb4cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882bb58u; c->r[5] = 0u + 0x00000001u; func_0896955c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0882bb98; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000016u;
    { c->r[31] = 0x0882bb90u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_0882bbe0; }
L_0882bb98:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000013u;
    { c->r[31] = 0x0882bbacu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0882bbe0; }
L_0882bbb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882bbd0u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0882bbe0; }
L_0882bbd8:
    { c->r[31] = 0x0882bbe0u; func_088513dc(c, ram); }
L_0882bbe0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0882b8cc */
}

/* func_08830940  0x08830940..0x08830cec  940 bytes, source=fde */
void func_08830940(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08830940u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08830978; }
    { goto L_08830cd4; }
L_08830978:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x08830998u; c->r[6] = c->r[2] + 0u; func_08968bc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08830a40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088309d4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088309f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088309f8u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_088309f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830a14u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08830bdc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08830a38u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    { goto L_08830bdc; }
L_08830a40:
    { c->r[31] = 0x08830a48u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08969804(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830a68u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08830acc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08830a88u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830aa0u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830ab8u; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08830ac4u; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
    { goto L_08830b10; }
L_08830acc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000003cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08830af4u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830b04u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08830b10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830b2cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08830b98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830b54u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830b6cu; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830b84u; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08830b90u; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
    { goto L_08830bdc; }
L_08830b98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08830bc0u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830bd0u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08830bdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830bf8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08830cd4; }
    { c->r[31] = 0x08830c10u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089697a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08830c28; }
    { goto L_08830cd4; }
L_08830c28:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x000000f5u;
    { c->r[31] = 0x08830c38u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08830c48u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x000000f6u;
    { c->r[31] = 0x08830c58u; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830c70u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830c88u; c->r[6] = 0u + 0x00000004u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x000000f7u;
    { c->r[31] = 0x08830c98u; c->r[6] = 0u + 0x00000005u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830cb0u; c->r[6] = 0u + 0x00000006u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08830cc8u; c->r[6] = 0u + 0x00000007u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08830cd4u; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
L_08830cd4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08830940 */
}

/* func_08832ab8  0x08832ab8..0x08832b20  104 bytes, source=fde */
void func_08832ab8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832ab8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000bu;
    c->r[6] = 0u + 0x0000000eu;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0xffffffffu;
    { c->r[31] = 0x08832ae8u; c->r[9] = 0u + 0x0000003cu; func_08831aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832b00; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08832b08; }
L_08832b00:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08832b08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832ab8 */
}

/* func_08834ac8  0x08834ac8..0x08834b64  156 bytes, source=fde */
void func_08834ac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08834ac8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834af0u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834b04u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08834b10u; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08834b20u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08834b30u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08834b48u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08834b50u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08834ac8 */
}

/* func_08838018  0x08838018..0x088382d4  700 bytes, source=fde */
void func_08838018(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08838018u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08838040u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08838054u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08838058:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08838070; }
    { goto L_08838268; }
L_08838070:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08838268; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08838268; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088381bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08838188; }
    { goto L_08838268; }
L_08838188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088381c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088381c4; }
L_088381bc:
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_088381c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = 0xff000000u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08838210u; c->r[11] = 0u + 0x00000005u; func_08938f94(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = 0xff0e0000u;
    c->r[7] = c->r[7] | 0x4a7bu;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08838258u; c->r[11] = 0u + 0x00000005u; func_08938f94(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08838058; }
L_08838268:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08838278u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08838288u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x088382a0u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088382c0u; c->r[6] = 0u + 0u; func_0893b2d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08838018 */
}

/* func_0883bbb4  0x0883bbb4..0x0883bc5c  168 bytes, source=fde */
void func_0883bbb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883bbb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bbf4; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x00001593u;
    { c->r[31] = 0x0883bbecu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883bc48; }
L_0883bbf4:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000048dcu, c->r[2]);
    { c->r[31] = 0x0883bc08u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bc24; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bc24u; c->r[5] = c->r[5] + 0xffffbda0u; func_0880f03c(c, ram); }
L_0883bc24:
    { c->r[31] = 0x0883bc2cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bc48; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bc48u; c->r[5] = c->r[5] + 0xffffbd04u; func_0880f03c(c, ram); }
L_0883bc48:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883bbb4 */
}

/* func_08844fb8  0x08844fb8..0x0884543c  1156 bytes, source=fde */
void func_08844fb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08844fb8u);
    c->r[29] = c->r[29] + 0xfffffea0u;
    mem_w32(ram, c->r[29] + 0x00000158u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000154u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000150u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000012u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08845004; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]); goto L_08845424; }
L_08845004:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08845020; }
    { goto L_0884514c; }
L_08845020:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088450fc; }
    { c->r[31] = 0x08845038u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088450fc; }
    mem_w8(ram, c->r[30] + 0x00000009u, 0u);
L_08845044:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884505c; }
    { goto L_08845088; }
L_0884505c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e7cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000009u, c->r[2]); goto L_08845044; }
L_08845088:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08845094u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001f58u;
    { c->r[31] = 0x088450b0u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088450bcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2du, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088450d4u; c->r[5] = 0u + 0x00000005u; func_089d7208(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088450ecu; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); goto L_08845424; }
L_088450fc:
    { c->r[31] = 0x08845104u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845424; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08845424; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845424; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); goto L_08845424; }
L_0884514c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08845158u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088451bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088451bc; }
    { goto L_08845378; }
L_088451bc:
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f6cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088451e4u; func_0880d140(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088451f4u; c->r[5] = 0u + 0x00000006u; func_089d7194(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000000du, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08845208u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000eu;
    { c->r[31] = 0x0884521cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[4] = 0u + 0x00000039u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08845240u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0884525cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000130u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000009u, 0u);
L_0884526c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845284; }
    { goto L_088452f0; }
L_08845284:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088452b0; }
    { goto L_088452f0; }
L_088452b0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0x00000039u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x088452e0u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000009u, c->r[2]); goto L_0884526c; }
L_088452f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08845424; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f70u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f74u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08845354u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_08845424; }
L_08845378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088453c8; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001f64u;
    { c->r[31] = 0x088453a0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000110u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088453b8u; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); goto L_08845424; }
L_088453c8:
    { c->r[31] = 0x088453d0u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845424; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e7cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
L_08845424:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000158u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000154u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000150u);
    { c->r[29] = c->r[29] + 0x00000160u; return; }
    return; /* fell out of func_08844fb8 */
}

/* func_088471b0  0x088471b0..0x08847290  224 bytes, source=fde */
void func_088471b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088471b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088471dc; }
    { goto L_0884727c; }
L_088471dc:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004ea4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08847200; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x08847200u; c->r[5] = 0u + 0u; func_089d8f30(c, ram); }
L_08847200:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004ea4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884727c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08847220u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884724c; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884727c; }
    { goto L_08847268; }
L_0884724c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004ea4u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x08847260u; c->r[5] = c->r[5] + 0x000071b0u; func_0880f03c(c, ram); }
    { goto L_0884727c; }
L_08847268:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004ea4u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0884727cu; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0884727c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088471b0 */
}

/* func_0884c2bc  0x0884c2bc..0x0884c314  88 bytes, source=sweep */
void func_0884c2bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c2bcu);
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
    vfpu_exec(c, ram, 0xd8670030u); /* lv.q */
    vfpu_exec(c, ram, 0xd8480000u); /* lv.q */
    vfpu_exec(c, ram, 0xd0006860u); /* vmov.s */
    vfpu_exec(c, ram, 0xf108a400u); /* vtfm3.t */
    vfpu_exec(c, ram, 0x60078080u); /* vadd.q */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c2bc */
}

/* func_0884d850  0x0884d850..0x0884d8f8  168 bytes, source=fde */
void func_0884d850(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d850u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000118u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884d874u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002650u;
    { c->r[31] = 0x0884d890u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884d8a0u; c->r[6] = 0u + 0x00000038u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0884d8b0u; c->r[6] = 0u + 0x00000020u; func_08a19ec4(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884d8ccu; c->r[6] = 0u + 0x00000001u; func_089f586c(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000032u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000118u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0884d850 */
}

/* func_08853648  0x08853648..0x0885367c  52 bytes, source=fde */
void func_08853648(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08853648u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff8c7cu);
    { c->r[31] = 0x08853668u; c->r[4] = c->r[2] + 0u; func_08853448(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08853648 */
}

/* func_0885851c  0x0885851c..0x088586a8  396 bytes, source=fde */
void func_0885851c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885851cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08858534u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885868c; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002c60u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002c64u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002c68u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002c6cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002c70u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0885857c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858594; }
    { goto L_08858680; }
L_08858594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088585b0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9284u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858670; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9284u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9284u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x08858670u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
L_08858670:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0885857c; }
L_08858680:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08858690; }
L_0885868c:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08858690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0885851c */
}

/* func_0885a44c  0x0885a44c..0x0885a494  72 bytes, source=sweep */
void func_0885a44c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a44cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[3] + 0x00000008u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a44c */
}

/* func_0885b2a8  0x0885b2a8..0x0885b300  88 bytes, source=residue */
void func_0885b2a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b2a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00001cd8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885b2a8 */
}

/* func_0886111c  0x0886111c..0x08861158  60 bytes, source=sweep */
void func_0886111c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886111cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08861144u; c->r[6] = 0u + 0x00000001u; func_08861a04(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0886111c */
}

/* func_08862160  0x08862160..0x088621d0  112 bytes, source=sweep */
void func_08862160(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862160u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862194; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0886219c; }
L_08862194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0886219c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x088621bcu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_088621d0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862160 */
}

/* func_08866264  0x08866264..0x088662e0  124 bytes, source=sweep */
void func_08866264(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866264u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08866298; }
    { goto L_088662d0; }
L_08866298:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d1u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088662d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088662d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
L_088662d0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08866264 */
}

/* func_0886b688  0x0886b688..0x0886b8a0  536 bytes, source=sweep */
void func_0886b688(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886b688u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886b6f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886b6f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffff7u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000218u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[5] + 0x00000218u, c->r[2]); goto L_0886b88c; }
L_0886b6f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (c->r[3] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886b88c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000033e4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0886b734u: goto L_0886b734; case 0x0886b750u: goto L_0886b750; case 0x0886b76cu: goto L_0886b76c; case 0x0886b788u: goto L_0886b788; case 0x0886b7a0u: goto L_0886b7a0; case 0x0886b7b8u: goto L_0886b7b8; case 0x0886b7d0u: goto L_0886b7d0; case 0x0886b7ecu: goto L_0886b7ec; case 0x0886b820u: goto L_0886b820; case 0x0886b858u: goto L_0886b858; case 0x0886b874u: goto L_0886b874; case 0x0886b88cu: goto L_0886b88c; default: recomp_trap_unknown_indirect(c, ram, 0x0886b72cu, _t); return; } }
L_0886b734:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000218u, c->r[2]); goto L_0886b88c; }
L_0886b750:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_0886b88c; }
L_0886b76c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_0886b88c; }
L_0886b788:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] | 0x0400u;
    { mem_w32(ram, c->r[3] + 0x00000218u, c->r[2]); goto L_0886b88c; }
L_0886b7a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] | 0x1000u;
    { mem_w32(ram, c->r[3] + 0x00000218u, c->r[2]); goto L_0886b88c; }
L_0886b7b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] | 0x0800u;
    { mem_w32(ram, c->r[3] + 0x00000218u, c->r[2]); goto L_0886b88c; }
L_0886b7d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_0886b88c; }
L_0886b7ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[3] + 0x00000218u, c->r[2]);
    { c->r[31] = 0x0886b808u; c->r[4] = 0u + 0u; func_08867a3c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000033dcu);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]); goto L_0886b88c; }
L_0886b820:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[3] + 0x00000218u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000033e0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    { mem_w16(ram, c->r[2] + 0x00000042u, c->r[3]); goto L_0886b88c; }
L_0886b858:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000218u, c->r[2]); goto L_0886b88c; }
L_0886b874:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000218u, c->r[2]);
L_0886b88c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0886b688 */
}

/* func_08870ee8  0x08870ee8..0x08871088  416 bytes, source=sweep */
void func_08870ee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08870ee8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000200u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08870f84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000208u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08870f84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000204u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08870f84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000020cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08870f84; }
    { goto L_08870fb8; }
L_08870f84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] | 0x0080u;
    mem_w32(ram, c->r[3] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xfff70000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]); goto L_08871078; }
L_08870fb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000001f0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871040; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000001f8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871040; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000001f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871040; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000001fcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871040; }
    { goto L_0887105c; }
L_08871040:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]); goto L_08871078; }
L_0887105c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xfff70000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_08871078:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08870ee8 */
}

/* func_0887b3f8  0x0887b3f8..0x0887b998  1440 bytes, source=sweep */
void func_0887b3f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887b3f8u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b444; }
    { goto L_0887b454; }
L_0887b444:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003920u);
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_0887b480; }
L_0887b454:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b474; }
    { goto L_0887b480; }
L_0887b474:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003924u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_0887b480:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x000000b8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b4c8; }
    { goto L_0887b4d4; }
L_0887b4c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000b8u, 0u); goto L_0887b50c; }
L_0887b4d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b4fc; }
    { goto L_0887b50c; }
L_0887b4fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    mem_wf32(ram, c->r[2] + 0x000000b8u, c->f[0]);
L_0887b50c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000392cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b534; }
    { goto L_0887b630; }
L_0887b534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887b554; }
    { goto L_0887b568; }
L_0887b554:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x0000021cu, c->r[2]);
L_0887b568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b590; }
    { goto L_0887b720; }
L_0887b590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887b5c4; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0887b5fc; }
L_0887b5c4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002e6cu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[1]);
L_0887b5fc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003930u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    c->f[1] = c->f[0] / c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = c->f[0] + c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_wf32(ram, c->r[2] + 0x000000bcu, c->f[0]); goto L_0887b720; }
L_0887b630:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887b660; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887b660:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b684; }
    { goto L_0887b720; }
L_0887b684:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887b6b8; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_0887b6f0; }
L_0887b6b8:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002e6cu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[1]);
L_0887b6f0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003930u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    c->f[1] = c->f[0] / c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x000000bcu, c->f[0]);
L_0887b720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b744; }
    { goto L_0887b750; }
L_0887b744:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000bcu, 0u); goto L_0887b788; }
L_0887b750:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b778; }
    { goto L_0887b788; }
L_0887b778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    mem_wf32(ram, c->r[2] + 0x000000bcu, c->f[0]);
L_0887b788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003920u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b7b0; }
    { goto L_0887b86c; }
L_0887b7b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b7d8; }
    { goto L_0887b920; }
L_0887b7d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887b80c; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0887b844; }
L_0887b80c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002e6cu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]);
L_0887b844:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[0] / c->f[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { mem_wf32(ram, c->r[2] + 0x000000c0u, c->f[0]); goto L_0887b920; }
L_0887b86c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b890; }
    { goto L_0887b920; }
L_0887b890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887b8c4; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]); goto L_0887b8fc; }
L_0887b8c4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002e6cu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[1]);
L_0887b8fc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = c->f[0] / c->f[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x000000c0u, c->f[0]);
L_0887b920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b944; }
    { goto L_0887b950; }
L_0887b944:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000c0u, 0u); goto L_0887b988; }
L_0887b950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b978; }
    { goto L_0887b988; }
L_0887b978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003928u);
    mem_wf32(ram, c->r[2] + 0x000000c0u, c->f[0]);
L_0887b988:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0887b3f8 */
}

/* func_0887e6d0  0x0887e6d0..0x0887e70c  60 bytes, source=sweep */
void func_0887e6d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887e6d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001b80u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887e6d0 */
}

/* func_08883304  0x08883304..0x08883328  36 bytes, source=residue */
void func_08883304(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883304u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe674u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08883304 */
}

/* func_0888b6b4  0x0888b6b4..0x0888b728  116 bytes, source=sweep */
void func_0888b6b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b6b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888b6f0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888b714u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b6b4 */
}

/* func_0888c350  0x0888c350..0x0888c394  68 bytes, source=sweep */
void func_0888c350(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c350u);
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
    { c->r[31] = 0x0888c380u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c350 */
}

/* func_0888cee0  0x0888cee0..0x0888cf50  112 bytes, source=sweep */
void func_0888cee0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888cee0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888cf14; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0888cf1c; }
L_0888cf14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0888cf1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x0888cf3cu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_0888cfa4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888cee0 */
}

/* func_0888e694  0x0888e694..0x0888e6cc  56 bytes, source=fde */
void func_0888e694(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888e694u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e6b8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000084u); func_088920dc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888e694 */
}

/* func_08892d48  0x08892d48..0x08892f00  440 bytes, source=sweep */
void func_08892d48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08892d48u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08892e00u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    { c->r[31] = 0x08892e0cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088946d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_08892e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08892e28; }
    { goto L_08892ee0; }
L_08892e28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08892e48; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    { mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]); goto L_08892e50; }
L_08892e48:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_08892e50:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08892e74; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    { mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]); goto L_08892e7c; }
L_08892e74:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
L_08892e7c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08892ea0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    { mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]); goto L_08892ea8; }
L_08892ea0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
L_08892ea8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08892ec0u; c->r[5] = c->r[2] + 0u; func_08894714(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08892ed0; }
    { mem_w32(ram, c->r[30] + 0x00000044u, 0u); goto L_08892ee8; }
L_08892ed0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08892e10; }
L_08892ee0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_08892ee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08892d48 */
}

/* func_08899524  0x08899524..0x088995a4  128 bytes, source=sweep */
void func_08899524(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899524u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08899544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889955c; }
    { goto L_08899590; }
L_0889955c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08899580; }
    { goto L_08899590; }
L_08899580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08899544; }
L_08899590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899524 */
}

/* func_0889a4dc  0x0889a4dc..0x0889a520  68 bytes, source=sweep */
void func_0889a4dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a4dcu);
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
    { c->r[31] = 0x0889a50cu; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a4dc */
}

/* func_0889ee04  0x0889ee04..0x0889ee9c  152 bytes, source=sweep */
void func_0889ee04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889ee04u);
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
    { c->r[31] = 0x0889ee5cu; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ee80u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    { c->r[31] = 0x0889ee88u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0889ef94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889ee04 */
}

/* func_0889fcc4  0x0889fcc4..0x0889fd28  100 bytes, source=sweep */
void func_0889fcc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fcc4u);
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
    { c->r[31] = 0x0889fd14u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889fcc4 */
}

/* func_088a4098  0x088a4098..0x088a40dc  68 bytes, source=sweep */
void func_088a4098(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4098u);
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
    { c->r[31] = 0x088a40c8u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4098 */
}

/* func_088ad640  0x088ad640..0x088ad710  208 bytes, source=sweep */
void func_088ad640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ad640u);
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
    return; /* fell out of func_088ad640 */
}

/* func_088aea1c  0x088aea1c..0x088aea3c  32 bytes, source=sweep */
void func_088aea1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088aea1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088aea1c */
}

/* func_088b2b14  0x088b2b14..0x088b2b58  68 bytes, source=sweep */
void func_088b2b14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2b14u);
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
    { c->r[31] = 0x088b2b44u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2b14 */
}

/* func_088b7820  0x088b7820..0x088b7bb0  912 bytes, source=fde */
void func_088b7820(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b7820u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9370u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088b7854:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b786c; }
    { goto L_088b7960; }
L_088b786c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b78f0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b78ecu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b78f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7920; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b791cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7950; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b794cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b7854; }
L_088b7960:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000002c0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088b7970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7988; }
    { goto L_088b7a7c; }
L_088b7988:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7a0c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7a08u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7a0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7a3c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7a38u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7a3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7a6c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7a68u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b7970; }
L_088b7a7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000590u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088b7a8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7aa4; }
    { goto L_088b7b98; }
L_088b7aa4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7b28; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7b24u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7b28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7b58; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7b54u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7b58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7b88; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7b84u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7b88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b7a8c; }
L_088b7b98:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088b7820 */
}

/* func_088be488  0x088be488..0x088be4c0  56 bytes, source=sweep */
void func_088be488(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be488u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x9b000000u;
    { c->r[31] = 0x088be4acu; c->r[5] = c->r[5] | 0x0001u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be488 */
}

/* func_088bf120  0x088bf120..0x088bf1cc  172 bytes, source=sweep */
void func_088bf120(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf120u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004c60u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000080u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bf170; }
    c->r[2] = 0u + 0x0000007fu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088bf188; }
L_088bf170:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0xffffff80u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bf188; }
    c->r[2] = 0u + 0xffffff80u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088bf188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x00ffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc8000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf1b8u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf120 */
}

/* func_088c1794  0x088c1794..0x088c1980  492 bytes, source=fde */
void func_088c1794(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c1794u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c17ec; }
    { c->r[31] = 0x088c17c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088c17e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c17e4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088c17e4:
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088c1968; }
L_088c17ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c1808; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088c1968; }
L_088c1808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c1880; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1854; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1854; }
    { goto L_088c1868; }
L_088c1854:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088c1868:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000088u, c->r[2]);
L_088c1880:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088c18d4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c18c8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088c1968; }
L_088c18d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000050u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c1964; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000050u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1964; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
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
L_088c1964:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088c1968:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c1794 */
}

/* func_088c6bf8  0x088c6bf8..0x088c86dc  6884 bytes, source=fde */
void func_088c6bf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c6bf8u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c6cac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c6c54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c6c7c; }
    { goto L_088c86c8; }
L_088c6c54:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c86c8; }
    c->r[2] = 0u + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c6d50; }
    { goto L_088c86c8; }
L_088c6c7c:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffcbb0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088c6c90u; c->r[6] = 0u + 0x00002000u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xffffebb0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c6ca4u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    { goto L_088c86c8; }
L_088c6cac:
    mem_w16(ram, c->r[30] + 0x0000000cu, 0u);
L_088c6cb0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c6cc8; }
    { goto L_088c86c8; }
L_088c6cc8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c6cf0; }
    { goto L_088c6d40; }
L_088c6cf0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c6d34; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_088c6d40; }
L_088c6d34:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088c6d40u; c->r[4] = c->r[2] + 0u; func_088c3efc(c, ram); }
L_088c6d40:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088c6cb0; }
L_088c6d50:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffcba4u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f90u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c6d74u; mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088c6d80u; c->r[4] = c->r[2] + 0u; func_088c9698(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c6d94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c6dac; }
    { goto L_088c6f30; }
L_088c6dac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c6de8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x0000000eu, 0u); goto L_088c6f20; }
L_088c6de8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c6e04u; c->r[4] = c->r[2] + 0u; func_088c96c0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c6ea8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f94u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c6e50; }
    { goto L_088c6e7c; }
L_088c6e50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088c6f20; }
L_088c6e7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_088c6f20; }
L_088c6ea8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f94u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c6ecc; }
    { goto L_088c6ef8; }
L_088c6ecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088c6f20; }
L_088c6ef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088c6f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c6d94; }
L_088c6f30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c74d4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f98u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c6f54u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c6f68u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c6f78u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c6fc0u; c->r[5] = 0u + 0xffffffffu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c7008u; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c7068u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c70c8u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b70u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c70e4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7104u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_088c7118:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c7130; }
    { goto L_088c740c; }
L_088c7130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c715c; }
    { goto L_088c73fc; }
L_088c715c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c7180u; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f9cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c73fc; }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c71b0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c71b8u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c71dcu; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c71e8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7210u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7224u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c726cu; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c7278u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa4u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c72a4u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c72b0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c72d8u; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c72e4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c72fcu; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c7304u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c731cu; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7354u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c735cu; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7374u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c73acu; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c73b4u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c73ccu; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_088c73fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088c7118; }
L_088c740c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c7470u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000024u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c74b8u; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c74c8u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c74d4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c74d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c7afc; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f98u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c74f8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c750cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c751cu; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0x7f7f0000u;
    { c->r[31] = 0x088c7568u; c->r[5] = c->r[5] | 0x7f7fu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c75b0u; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c7610u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c7670u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b72u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c768cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c76acu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c76c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c76d8; }
    { goto L_088c7a34; }
L_088c76d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c7704; }
    { goto L_088c7a24; }
L_088c7704:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c7728u; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f9cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c7a24; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c7758u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c7760u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c7784u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c7790u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c77b8u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c77ccu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c7814u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa8u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa8u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c786c; }
    { goto L_088c789c; }
L_088c786c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004facu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
L_088c789c:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c78a8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c78ccu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c78d8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7900u; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c790cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7924u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c792cu; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7944u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c797cu; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c7984u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c799cu; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c79d4u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c79dcu; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c79f4u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c7a24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c76c0; }
L_088c7a34:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c7a98u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000034u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c7ae0u; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c7af0u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c7afcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c7afc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c80a0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fb0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c7b20u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c7b34u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c7b44u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c7b8cu; c->r[5] = 0u + 0xffffffffu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c7bd4u; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c7c34u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c7c94u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b70u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7cb0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7cd0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c7ce4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c7cfc; }
    { goto L_088c7fd8; }
L_088c7cfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c7d28; }
    { goto L_088c7fc8; }
L_088c7d28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c7d4cu; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f9cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c7fc8; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c7d7cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c7d84u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c7da8u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c7db4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7ddcu; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7df0u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c7e38u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c7e44u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa4u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7e70u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c7e7cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7ea4u; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c7eb0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7ec8u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c7ed0u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7ee8u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7f20u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c7f28u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7f40u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c7f78u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c7f80u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c7f98u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c7fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c7ce4; }
L_088c7fd8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c803cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000034u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c8084u; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c8094u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c80a0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c80a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c86c8; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fb0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c80c4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c80d8u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c80e8u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0x7f7f0000u;
    { c->r[31] = 0x088c8134u; c->r[5] = c->r[5] | 0x7f7fu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c817cu; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c81dcu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088c823cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b72u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c8258u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c8278u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c828c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c82a4; }
    { goto L_088c8600; }
L_088c82a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c82d0; }
    { goto L_088c85f0; }
L_088c82d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c82f4u; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f9cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c85f0; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c8324u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c832cu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c8350u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c835cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c8384u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c8398u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c83e0u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa8u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fa8u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c8438; }
    { goto L_088c8468; }
L_088c8438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004facu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_088c8468:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c8474u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c8498u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u); func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c84a4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffcbb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c84ccu; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c84d8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c84f0u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c84f8u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c8510u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c8548u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c8550u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c8568u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c85a0u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c85a8u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c85c0u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c85f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c828c; }
L_088c8600:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c8664u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000034u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088c86acu; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c86bcu; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c86c8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c86c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088c6bf8 */
}

/* func_088c938c  0x088c938c..0x088c943c  176 bytes, source=sweep */
void func_088c938c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c938cu);
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
    { c->r[31] = 0x088c93d4u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c93f8u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c9404u; c->r[5] = 0x15000000u; func_088c8760(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c9428u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c938c */
}

/* func_088d0cc8  0x088d0cc8..0x088d0dbc  244 bytes, source=fde */
void func_088d0cc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d0cc8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x088d0ce8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d0d28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0da8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d0da8; }
L_088d0d28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000005du, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d0d40u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[8] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x008bu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d0d80u; func_0884fcb4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d0da8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088d0da8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d0cc8 */
}

/* func_088d3cd8  0x088d3cd8..0x088d3d90  184 bytes, source=fde */
void func_088d3cd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3cd8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d3d08u; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d3d20u; c->r[5] = c->r[2] + 0u; func_0889a828(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d3d7c; }
    { c->r[31] = 0x088d3d30u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b724c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d3d7c; }
    { c->r[31] = 0x088d3d7cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b721c(c, ram); }
L_088d3d7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d3cd8 */
}

/* func_088d8e94  0x088d8e94..0x088d8f58  196 bytes, source=fde */
void func_088d8e94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d8e94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000061u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d8ef4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x0092u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d8ef4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
L_088d8ef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d8f40; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x03000000u;
    c->r[4] = c->r[4] | 0x0004u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d8f3cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]);
L_088d8f40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d8e94 */
}

/* func_088de358  0x088de358..0x088de3a4  76 bytes, source=sweep */
void func_088de358(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de358u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de380; }
    c->r[2] = 0u + 0x000000ffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088de390; }
L_088de380:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088de390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de358 */
}

/* func_088df29c  0x088df29c..0x088df30c  112 bytes, source=sweep */
void func_088df29c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df29cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df2c0; }
    { goto L_088df2fc; }
L_088df2c0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000023u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000023u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000023u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088df2fc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    mem_w8(ram, c->r[2] + 0x00000023u, 0u);
L_088df2fc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088df29c */
}

/* func_088e45a4  0x088e45a4..0x088e482c  648 bytes, source=fde */
void func_088e45a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e45a4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000009bu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e45f0; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4614; }
    { goto L_088e4818; }
L_088e45f0:
    { c->r[31] = 0x088e45f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088de7dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000009bu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]); goto L_088e4818; }
L_088e4614:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x088e463cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088de7dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ce8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e466cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d7000(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
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
    { c->r[31] = 0x088e46b8u; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
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
    { c->r[31] = 0x088e46ecu; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cecu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e470cu; c->f[12] = c->f[0]; func_088ef870(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4720; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
L_088e4720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cf0u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e4740u; c->f[12] = c->f[0]; func_088ef870(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cf4u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e4764u; c->f[12] = c->f[0]; func_088ef870(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4774; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088e4774:
    { c->r[31] = 0x088e477cu; func_088de358(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4794; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088e4794:
    { c->r[31] = 0x088e479cu; func_088de790(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_088e47cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e47cc; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088e47cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4808; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e47f4u; c->r[6] = 0u + 0u; func_088e0e00(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e4800u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3c48(c, ram); }
    { goto L_088e4818; }
L_088e4808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088e4818u; c->r[4] = c->r[2] + 0u; func_088de750(c, ram); }
L_088e4818:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088e45a4 */
}

/* func_088e9d94  0x088e9d94..0x088e9f58  452 bytes, source=fde */
void func_088e9d94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e9d94u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9de8; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e9e88; }
    { goto L_088e9f44; }
L_088e9de8:
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e9e44; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9e3cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e952c(c, ram); }
    { goto L_088e9e64; }
L_088e9e44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005e90u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000b4u, c->f[0]);
L_088e9e64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9f44; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9e80u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8368(c, ram); }
    { goto L_088e9f44; }
L_088e9e88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9e98u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6f10(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9efc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9eb4u; c->r[5] = 0u + 0x0000001fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9ec8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9ec8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8368(c, ram); }
L_088e9ec8:
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
    { c->r[31] = 0x088e9efcu; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
L_088e9efc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9f20u; c->f[12] = c->f[0]; func_088ef870(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9f44; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9f38u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e952c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9f44u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088e9f44:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088e9d94 */
}

/* func_088ef73c  0x088ef73c..0x088ef798  92 bytes, source=sweep */
void func_088ef73c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ef73cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ef768u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_088ef6ac(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ef778; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088ef780; }
L_088ef778:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088ef780:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ef73c */
}

/* func_088f4d8c  0x088f4d8c..0x088f4dc4  56 bytes, source=residue */
void func_088f4d8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4d8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00004994u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00004996u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f4d8c */
}

/* func_088f9f14  0x088f9f14..0x088f9fbc  168 bytes, source=sweep */
void func_088f9f14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f9f14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9f7c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9f7c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062d0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000062d4u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffee00u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f9f7cu; func_0880d140(c, ram); }
L_088f9f7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9fa8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9fa8; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9fa8u; c->r[4] = c->r[4] + 0xffffee30u; func_08808240(c, ram); }
L_088f9fa8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f9f14 */
}

/* func_08900384  0x08900384..0x08900538  436 bytes, source=fde */
void func_08900384(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900384u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089003c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089003d8; }
    { goto L_08900524; }
L_089003d8:
    { c->r[31] = 0x089003e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08900524; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08900524; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006468u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0890041cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffff4bcu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08900438u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08900484u; c->r[5] = c->r[5] | 0x0102u; func_089009c0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08900498u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
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
    { c->r[31] = 0x089004ecu; c->r[5] = 0u + 0xffffffffu; func_08900a04(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000646cu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff498u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = 0u + 0x0000011bu;
    c->r[7] = 0u + 0x000000b0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08900518u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08900524u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08900524:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08900384 */
}

/* func_08902e18  0x08902e18..0x08902ea0  136 bytes, source=sweep */
void func_08902e18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08902e18u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e74u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902e88; }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08902e38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08902e50; }
    { goto L_08902e88; }
L_08902e50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002e84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902e78; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08902e8c; }
L_08902e78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08902e38; }
L_08902e88:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08902e8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08902e18 */
}

/* func_08905a80  0x08905a80..0x089061bc  1852 bytes, source=sweep */
void func_08905a80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08905a80u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x08905aa4u; c->r[5] = 0u + 0x00000010u; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08905d10; }
    c->r[4] = 0u + 0x00000028u;
    { c->r[31] = 0x08905ad0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08905ae0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08905af8; }
    { goto L_08905c0c; }
L_08905af8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000010u;
    { c->r[31] = 0x08905b0cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08905ae0; }
L_08905c0c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08905c68u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08905cc4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08905d10u; c->r[5] = c->r[5] | 0x0004u; func_089207f8(c, ram); }
L_08905d10:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08905d1cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08905f58; }
    c->r[4] = 0u + 0x00000028u;
    { c->r[31] = 0x08905d38u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08905d48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffffffeu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08905d68; }
    { goto L_08905e54; }
L_08905d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000010u;
    { c->r[31] = 0x08905d84u; c->r[6] = c->r[2] + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08905d48; }
L_08905e54:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08905eb0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08905f0cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08905f58u; c->r[5] = c->r[5] | 0x0004u; func_089207f8(c, ram); }
L_08905f58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + 0xffffffd8u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08905f7cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08905f8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffffffcu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08905fac; }
    { goto L_08906098; }
L_08905fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000010u;
    { c->r[31] = 0x08905fc8u; c->r[6] = c->r[2] + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08905f8c; }
L_08906098:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089060f4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08906150u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[2] + 0xfffffff8u;
    c->r[2] = 0x04060000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089061a8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08905a80 */
}

/* func_0890f424  0x0890f424..0x0890f4bc  152 bytes, source=fde */
void func_0890f424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890f424u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890f458; }
    { goto L_0890f4a8; }
L_0890f458:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000017u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0x00000002u;
    { c->r[31] = 0x0890f4a8u; c->r[8] = 0u + 0u; func_0890438c(c, ram); }
L_0890f4a8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0890f424 */
}

/* func_0891c300  0x0891c300..0x0891c3d4  212 bytes, source=fde */
void func_0891c300(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891c300u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891c320u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891c33c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0891c3bc; }
L_0891c33c:
    { c->r[31] = 0x0891c344u; func_0896db64(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0891c34c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891c368; }
    { goto L_0891c3b4; }
L_0891c368:
    { c->r[31] = 0x0891c370u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0891c384u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891c3a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0891c3bc; }
L_0891c3a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0891c34c; }
L_0891c3b4:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0891c3bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0891c300 */
}

/* func_08920f5c  0x08920f5c..0x08920fc8  108 bytes, source=sweep */
void func_08920f5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08920f5cu);
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
    { c->r[31] = 0x08920f98u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920fb4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08920f5c */
}

/* func_08921dd4  0x08921dd4..0x08921ec8  244 bytes, source=sweep */
void func_08921dd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921dd4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08921dfcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08921e14; }
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_08921eb0; }
L_08921e14:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08921e20u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08922628(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08921e4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921e4c; }
    { goto L_08921e54; }
L_08921e4c:
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_08921eb0; }
L_08921e54:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000005cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08921eb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08921dd4 */
}

/* func_08924710  0x08924710..0x08924ca4  1428 bytes, source=fde */
void func_08924710(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08924710u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003au);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089249b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006e60u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08924760u: goto L_08924760; case 0x0892476cu: goto L_0892476c; case 0x08924898u: goto L_08924898; case 0x08924998u: goto L_08924998; case 0x089249a8u: goto L_089249a8; default: recomp_trap_unknown_indirect(c, ram, 0x08924758u, _t); return; } }
L_08924760:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x0000003bu, 0u); goto L_08924c90; }
L_0892476c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08924790; }
    { goto L_089247dc; }
L_08924790:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089247d0; }
    { goto L_089247e4; }
L_089247d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x0000000cu, 0u); goto L_089247e4; }
L_089247dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
L_089247e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e44u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e48u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e48u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e4cu);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08924850; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_08924874; }
L_08924850:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
L_08924874:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000003bu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089249b4; }
    { goto L_08924c90; }
L_08924898:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089248bc; }
    { goto L_089248dc; }
L_089248bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]); goto L_089248f0; }
L_089248dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000003u;
    mem_w8(ram, c->r[2] + 0x0000003au, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
L_089248f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e44u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e48u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e4cu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08924950; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_08924974; }
L_08924950:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]);
L_08924974:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x0000003bu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089249b4; }
    { goto L_08924c90; }
L_08924998:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000060u;
    { mem_w8(ram, c->r[3] + 0x0000003bu, c->r[2]); goto L_089249b4; }
L_089249a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000003bu, c->r[2]);
L_089249b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000003au);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08924a78; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e50u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08924a18; }
    { goto L_08924a3c; }
L_08924a18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e54u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e50u);
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_08924a78; }
L_08924a3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08924a60; }
    { goto L_08924a78; }
L_08924a60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e58u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_08924a78:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08924ac4u; c->r[5] = c->r[5] | 0x0102u; func_089258bc(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08924ad8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003bu);
    c->r[3] = c->r[2] << 24;
    c->r[2] = 0x007f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08924b34u; c->r[5] = c->r[2] + 0u; func_08925900(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000038u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08924b50u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08924b68u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 1;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08924b94u; c->r[6] = 0u + 0x00000001u; func_08926550(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08924be0u; c->r[5] = c->r[5] | 0x0102u; func_089258bc(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08924bf4u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e5cu);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08924c78; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003bu);
    c->r[3] = c->r[2] << 24;
    c->r[2] = 0x007c0000u;
    c->r[2] = c->r[2] | 0x7c7cu;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08924c78u; c->r[5] = c->r[2] + 0u; func_08925900(c, ram); }
L_08924c78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08924c90u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
L_08924c90:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08924710 */
}

/* func_089261e4  0x089261e4..0x08926320  316 bytes, source=sweep */
void func_089261e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089261e4u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892623c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892623cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
L_0892623c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892626cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08926290u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
L_08926290:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089262e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089262c0u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089262e4u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
L_089262e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892630cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089261e4 */
}

/* func_08929208  0x08929208..0x08929428  544 bytes, source=fde */
void func_08929208(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08929208u);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x0000001du, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00002008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08929340; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08929288u; c->r[5] = c->r[5] + 0x00006fe8u; func_08a1ad34(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08929294:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089292b8; }
    { goto L_08929308; }
L_089292b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_089292f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089292f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08929294; }
L_08929308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08929410; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08929338u; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000048u, c->r[2]); goto L_08929410; }
L_08929340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000053u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006ff4u;
    { c->r[31] = 0x0892935cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08929368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892938c; }
    { goto L_089293dc; }
L_0892938c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_089293cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089293cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08929368; }
L_089293dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08929410; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0892940cu; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000048u, c->r[2]);
L_08929410:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08929208 */
}

/* func_08930000  0x08930000..0x08930048  72 bytes, source=sweep */
void func_08930000(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930000u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08930038; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
L_08930038:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08930000 */
}

/* func_08932c38  0x08932c38..0x08932c98  96 bytes, source=sweep */
void func_08932c38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932c38u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08932c60; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08932c84; }
L_08932c60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000026u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08932c84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932c38 */
}

/* func_089348e8  0x089348e8..0x089349a4  188 bytes, source=sweep */
void func_089348e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089348e8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0893490c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934924; }
    { goto L_0893498c; }
L_08934924:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893495c; }
    { goto L_0893497c; }
L_0893495c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893497c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08934990; }
L_0893497c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0893490c; }
L_0893498c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08934990:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089348e8 */
}

/* func_0893a73c  0x0893a73c..0x0893ac78  1340 bytes, source=fde */
void func_0893a73c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893a73cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0893a7a8u; c->r[5] = c->r[5] | 0x0102u; func_0893bf80(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893a7bcu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0893a7d8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
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
    { c->r[31] = 0x0893a824u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0893c01c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0893a830u; c->r[4] = c->r[4] + 0x00007428u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893a844u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0893a848:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893a860; }
    { goto L_0893ac60; }
L_0893a860:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893a890; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893a890; }
    { goto L_0893ac60; }
L_0893a890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893aa48; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893a8c0; }
    c->r[2] = 0xff400000u;
    c->r[2] = c->r[2] | 0x4040u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0893a8cc; }
L_0893a8c0:
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0893a8cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893a920; }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0893a920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0893a930u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
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
    { c->r[31] = 0x0893a97cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0893c01c(c, ram); }
    c->r[2] = 0u + 0x0000001fu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0893a9a4; }
    c->r[2] = 0u + 0x00000017u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0893aa20; }
L_0893a9a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893a9ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893a9e0; }
    c->r[2] = 0u + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0893aa20; }
L_0893a9e0:
    c->r[2] = 0u + 0x00000022u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0893aa20; }
L_0893a9ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893aa18; }
    c->r[2] = 0u + 0x0000001fu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0893aa20; }
L_0893aa18:
    c->r[2] = 0u + 0x00000021u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893aa20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0893aaf8; }
L_0893aa48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893aa94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0893aa9c; }
L_0893aa94:
    c->r[2] = 0u + 0x0000004eu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893aa9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893aad4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8050u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0893aaf8; }
L_0893aad4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0893aaf8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893ab44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0893ab44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000000au);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_0893ab44; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0893ab44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ab94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ab94; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0893ab7cu; c->r[5] = c->r[2] + 0u; func_089690ec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ab94; }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0893ab94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893ac2c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0893abb8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u); func_0893a5d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893ac50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ac10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ac10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ac10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ac10; }
    { goto L_0893ac50; }
L_0893ac10:
    c->r[4] = 0u + 0x00000040u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0893ac24u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u); func_0893a5d0(c, ram); }
    { goto L_0893ac50; }
L_0893ac2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893ac50; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0893ac50u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u); func_0893a64c(c, ram); }
L_0893ac50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0893a848; }
L_0893ac60:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893a73c */
}

/* func_0893c918  0x0893c918..0x0893c95c  68 bytes, source=sweep */
void func_0893c918(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c918u);
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
    { c->r[31] = 0x0893c948u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c918 */
}

/* func_0893dd3c  0x0893dd3c..0x0893dd80  68 bytes, source=sweep */
void func_0893dd3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893dd3cu);
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
    { c->r[31] = 0x0893dd6cu; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893dd3c */
}

/* func_089402c0  0x089402c0..0x08940304  68 bytes, source=sweep */
void func_089402c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089402c0u);
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
    { c->r[31] = 0x089402f0u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089402c0 */
}

/* func_089457a0  0x089457a0..0x089457e0  64 bytes, source=sweep */
void func_089457a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089457a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089457ccu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u); func_08945b90(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089457a0 */
}

/* func_08946484  0x08946484..0x089464c8  68 bytes, source=sweep */
void func_08946484(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08946484u);
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
    { c->r[31] = 0x089464b4u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08946484 */
}

/* func_0894c0ac  0x0894c0ac..0x0894c0f0  68 bytes, source=sweep */
void func_0894c0ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c0acu);
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
    { c->r[31] = 0x0894c0dcu; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c0ac */
}

/* func_0895114c  0x0895114c..0x089520c0  3956 bytes, source=fde */
void func_0895114c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895114cu);
L_0895114c:
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x0000010cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089511a0u; func_0880d140(c, ram); }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007d04u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007d08u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007d0cu);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007d10u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007d14u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007d18u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (c->r[3] < 0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089520a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00007da4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0895114cu: goto L_0895114c; case 0x08951274u: goto L_08951274; case 0x08951420u: goto L_08951420; case 0x08951958u: goto L_08951958; case 0x089519d4u: goto L_089519d4; case 0x08951ac4u: goto L_08951ac4; case 0x089520a4u: goto L_089520a4; default: recomp_trap_unknown_indirect(c, ram, 0x0895126cu, _t); return; } }
L_08951274:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003990u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895129c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08951294u; c->r[5] = c->r[5] + 0x00007d1cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003990u, c->r[2]);
L_0895129c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003992u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089512c4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x089512bcu; c->r[5] = c->r[5] + 0x00007d28u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003992u, c->r[2]);
L_089512c4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003994u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089512ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x089512e4u; c->r[5] = c->r[5] + 0x00007d34u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003994u, c->r[2]);
L_089512ec:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003996u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951314; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0895130cu; c->r[5] = c->r[5] + 0x00007d40u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003996u, c->r[2]);
L_08951314:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08951320u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
L_08951324:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951338; }
    { goto L_08951390; }
L_08951338:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08951378; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0x08950000u;
    c->r[2] = c->r[2] + 0x0000114cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08951378; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08951378; }
    { goto L_08951390; }
L_08951378:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08951388u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000005cu); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]); goto L_08951324; }
L_08951390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089513e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0u + 0x00000034u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089513c0u; c->r[9] = 0u + 0x00000001u; func_089c6bec(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089513d0u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089513e8u; func_088b6d08(c, ram); }
L_089513e8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089513f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08951404u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]); goto L_089520a4; }
L_08951420:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08951438u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08951788; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951788; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
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
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089514b4; }
    { goto L_089514e4; }
L_089514b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d4cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_089514e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08951504; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]); goto L_08951510; }
L_08951504:
    { c->r[31] = 0x0895150cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000005cu); func_088dacdc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_08951510:
    { c->r[31] = 0x08951518u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895152c; }
    { c->r[31] = 0x08951528u; func_08853648(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_0895152c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089516ec; }
    { c->r[31] = 0x08951540u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089516ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08951568u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08951588; }
    { goto L_089516ec; }
L_08951588:
    { c->r[31] = 0x08951590u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089515ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]); goto L_089515b4; }
L_089515ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[3]);
L_089515b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[4] = 0u + 0x00000054u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000068u);
    { c->r[31] = 0x089515d8u; c->r[9] = mem_r32(ram, c->r[30] + 0x0000006cu); func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089516ec; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d54u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08951608u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d58u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d5cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0895162cu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000024u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d54u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08951650u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d54u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08951674u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000030u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d58u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d5cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08951698u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000034u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d54u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089516bcu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089516ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d60u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089516ecu; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
L_089516ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08951700u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000010u); func_089f762c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951740; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[8] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x02000000u;
    c->r[5] = c->r[5] | 0x0010u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08951738u; c->r[7] = c->r[3] + 0u; func_089f6924(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000010u, c->r[2]); goto L_08951814; }
L_08951740:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[8] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000010u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08951780u; c->r[10] = 0u + 0u; func_089f6d90(c, ram); }
    { goto L_08951814; }
L_08951788:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = u2f(0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d68u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089517e0; }
    { goto L_08951814; }
L_089517e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951814; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08951808u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000010u); func_089f73a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
L_08951814:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_08951818:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951830; }
    { goto L_08951924; }
L_08951830:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08951844u; c->r[16] = c->r[2] + 0x00000010u; func_0883a25c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0895185cu; c->r[16] = c->r[2] + 0x00000014u; func_0883a25c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08951874u; c->r[16] = c->r[2] + 0x00000018u; func_0883a25c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d60u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d6cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089518a8u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d6cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089518dcu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d70u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d74u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08951910u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_08951818; }
L_08951924:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d6cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08951944u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x0000000cu, c->f[0]);
    { c->r[31] = 0x08951950u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    { goto L_089520a4; }
L_08951958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08951974u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089519a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08951998u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089519a4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089519a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089520a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x089519ccu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000010u); func_089f73a0(c, ram); }
    { goto L_089520a4; }
L_089519d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089519f0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08951a0c; }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00003998u, 0u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08951a0cu; func_088b6d08(c, ram); }
L_08951a0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08951a2cu; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08951a50; }
    { goto L_08951a60; }
L_08951a50:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    { mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]); goto L_08951a70; }
L_08951a60:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
L_08951a70:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003998u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08951aa8; }
    { goto L_089520a4; }
L_08951aa8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00003998u, c->f[0]);
    { c->r[31] = 0x08951abcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000074u); func_088b6d08(c, ram); }
    { goto L_089520a4; }
L_08951ac4:
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x08951ad0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08951adcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08951b00u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x08951b0cu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08951b28u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08951b88u; c->r[5] = c->r[2] + 0u; func_089520c0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08951be8u; c->r[5] = c->r[2] + 0u; func_089520c0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08951bf8u; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08951c0cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08951c2c; }
    { goto L_08951c3c; }
L_08951c2c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    { mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]); goto L_08951c4c; }
L_08951c3c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
L_08951c4c:
    mem_w32(ram, c->r[30] + 0x0000006cu, 0u);
L_08951c50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951c68; }
    { goto L_08951ef4; }
L_08951c68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08951ee4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08951ca8; }
    { goto L_08951ee4; }
L_08951ca8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08951d2c; }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d78u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d78u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007d7cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007d80u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08951d08u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]); goto L_08951d88; }
L_08951d2c:
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d7cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d80u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007d78u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007d78u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08951d68u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
L_08951d88:
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d84u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d88u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007d8cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08951dc4u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08951e14u; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[4] = c->r[30] + 0x00000090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08951e40u; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08951e70; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003992u);
    { mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]); goto L_08951e7c; }
L_08951e70:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00003996u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[3]);
L_08951e7c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u);
    { c->r[31] = 0x08951e90u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[5] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x00000080u;
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d90u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08951edcu; c->r[9] = 0u + 0u; func_089ec420(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_08951ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]); goto L_08951c50; }
L_08951ef4:
    c->r[2] = c->r[30] + 0x000000b0u;
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[16] = c->r[30] + 0x000000c0u;
    c->r[2] = c->r[30] + 0x000000d0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d94u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d94u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007d80u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007d80u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08951f3cu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000d0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08951f54u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000000c0u;
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08951f78; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d98u);
    { mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]); goto L_08951f84; }
L_08951f78:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d6cu);
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
L_08951f84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu);
    { c->r[31] = 0x08951f94u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000f0u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[16] = c->r[30] + 0x000000d0u;
    c->r[17] = c->r[30] + 0x000000c0u;
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007d8cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007d84u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007d9cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007d64u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08951ff8u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08952010u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08952024u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000074u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003994u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08952060u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007da0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08952098u; c->r[9] = 0u + 0u; func_089ec420(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089520a4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089520a4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000010cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_0895114c */
}

/* func_08955684  0x08955684..0x089556c8  68 bytes, source=sweep */
void func_08955684(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955684u);
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
    { c->r[31] = 0x089556b4u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955684 */
}

/* func_0895843c  0x0895843c..0x08958480  68 bytes, source=sweep */
void func_0895843c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895843cu);
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
    { c->r[31] = 0x0895846cu; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895843c */
}

/* func_0895abd4  0x0895abd4..0x0895ac04  48 bytes, source=sweep */
void func_0895abd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895abd4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0895abf0u; c->r[5] = 0u | 0xffffu; func_0895a550(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0895abd4 */
}

/* func_0895cef0  0x0895cef0..0x0895d5f8  1800 bytes, source=fde */
void func_0895cef0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895cef0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895cf94; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895cf38; }
    c->r[2] = 0u + 0x0000003cu;
    c->r[1] = 0x08a60000u;
    { mem_w32(ram, c->r[1] + 0xffff8910u, c->r[2]); goto L_0895cf94; }
L_0895cf38:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895cf44u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895cf50u; c->r[5] = 0u + 0x00000001u; func_08968c78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0895cf70; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895cf70u; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
L_0895cf70:
    c->r[4] = 0x30000000u;
    { c->r[31] = 0x0895cf7cu; c->r[4] = c->r[4] | 0x0015u; func_08881760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] + 0x0000001eu;
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffff8910u, c->r[2]);
L_0895cf94:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049aau, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049aau);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8910u);
    c->r[2] = c->r[2] + 0xffffffe2u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d030; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81d4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0895cfe0u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895cfecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d018; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d000u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d018; }
    { goto L_0895d030; }
L_0895d018:
    { c->r[31] = 0x0895d020u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0895d030u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
L_0895d030:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[3] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8910u);
    c->r[3] = c->r[3] + 0xffffffffu;
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0895d10c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d058u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d084; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d06cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d084; }
    { goto L_0895d09c; }
L_0895d084:
    { c->r[31] = 0x0895d08cu; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0895d09cu; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
L_0895d09c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d0a8u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d0dc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d0c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895d0d0u; c->r[5] = 0u + 0x00000002u; func_08969240(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x0895d0dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0895ce34(c, ram); }
L_0895d0dc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d0e8u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d10c; }
    { c->r[31] = 0x0895d100u; c->r[4] = 0u + 0x00000001u; func_089699f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x0895d10cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0895ce34(c, ram); }
L_0895d10c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[3] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8910u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d5d4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00004961u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049aau);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8910u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d5cc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d158u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81d8u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d174u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d194; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81dcu);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0895d194:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d1b0; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81e0u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0895d1b0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d1bcu; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d4ec; }
    c->r[16] = 0x08aa0000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0x000049c4u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d1e0u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000038u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x0895d20cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089034d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d22c; }
    { c->r[31] = 0x0895d228u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089034d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0895d22c:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0895d238u; c->r[4] = mem_r32(ram, c->r[4] + 0x0000521cu); func_0895c76c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00005230u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895d268u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089657f4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d274u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000049c4u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x000049c0u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0x08aa0000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00004968u);
    { c->r[31] = 0x0895d298u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08967d80(c, ram); }
    { c->r[31] = 0x0895d2a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0895c248(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000049c4u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x000049c0u);
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x0895d2bcu; c->r[6] = c->r[6] + 0x00004960u; func_0895c9b4(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0895d2c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d2e0; }
    { goto L_0895d3e0; }
L_0895d2e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d308; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d330; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d358; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d380; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d3a8; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d3a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d3d0; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d3d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0895d2c8; }
L_0895d3e0:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0895d3e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d3fc; }
    { goto L_0895d4cc; }
L_0895d3fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000a5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d420; }
    { goto L_0895d4bc; }
L_0895d420:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000b6u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d438; }
    { goto L_0895d4bc; }
L_0895d438:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000b7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d450; }
    { goto L_0895d4bc; }
L_0895d450:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000c0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d468; }
    { goto L_0895d4bc; }
L_0895d468:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000c6u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d480; }
    { goto L_0895d4bc; }
L_0895d480:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000d1u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d498; }
    { goto L_0895d4bc; }
L_0895d498:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000eb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d4bc; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0895d4bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0895d3e4; }
L_0895d4cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d4ec; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895d4ecu; c->r[5] = 0u + 0x000000e4u; func_089ca128(c, ram); }
L_0895d4ec:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d4f8u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d5cc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d5cc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d528u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d57c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d564; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d57c; }
    { goto L_0895d5cc; }
L_0895d564:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d57c; }
    { goto L_0895d5cc; }
L_0895d57c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004963u);
    c->r[2] = 0u + 0x0000012cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d5acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895d5b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_08969e60(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895d5ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08965830(c, ram); }
L_0895d5cc:
    { mem_w32(ram, c->r[30] + 0x00000024u, 0u); goto L_0895d5dc; }
L_0895d5d4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_0895d5dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0895cef0 */
}

/* func_08960bdc  0x08960bdc..0x08960cac  208 bytes, source=fde */
void func_08960bdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960bdcu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08960c4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08960c84; }
L_08960c4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08960c74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08960c84; }
L_08960c74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08960c84:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08960c98u; c->r[5] = c->r[3] + 0u; func_089616d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08960bdc */
}

/* func_08963534  0x08963534..0x08963708  468 bytes, source=fde */
void func_08963534(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08963534u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0896356c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963588; }
    { goto L_089636f4; }
L_08963588:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089635b4u; c->r[5] = c->r[2] + 0u; func_08961ee8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089635c4; }
    { goto L_089636e4; }
L_089635c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x089635f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963600; }
    { goto L_089636e4; }
L_08963600:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089636e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089636e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    { c->r[31] = 0x089636c0u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_089636e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896356c; }
L_089636f4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08963534 */
}

/* func_08965c08  0x08965c08..0x08965ccc  196 bytes, source=sweep */
void func_08965c08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965c08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965c08 */
}

/* func_089691c4  0x089691c4..0x089691fc  56 bytes, source=sweep */
void func_089691c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089691c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089691c4 */
}

/* func_0896a190  0x0896a190..0x0896a1b4  36 bytes, source=sweep */
void func_0896a190(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a190u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000053d4u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896a190 */
}

/* func_0896c670  0x0896c670..0x0896c89c  556 bytes, source=fde */
void func_0896c670(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896c670u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896c888; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c888; }
    mem_w8(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0896c6bc:
    { c->r[31] = 0x0896c6c4u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c6e0; }
    { goto L_0896c7cc; }
L_0896c6e0:
    { c->r[31] = 0x0896c6e8u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896c700; }
    { goto L_0896c7bc; }
L_0896c700:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x0896c728u; c->r[4] = c->r[2] + 0u; func_0896e128(c, ram); }
    { c->r[31] = 0x0896c730u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c7bc; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c79c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c79c; }
    { goto L_0896c7a4; }
L_0896c79c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0896c7a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0896c7bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896c6bc; }
L_0896c7cc:
    { c->r[31] = 0x0896c7d4u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896c828; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000028eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c804; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000028fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c804; }
    { goto L_0896c818; }
L_0896c804:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0896c828; }
L_0896c818:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0896c828:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x0000007fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[4] + 0x000009c5u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896c86c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x000009c5u, c->r[2]);
L_0896c86c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x000009c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    { c->r[31] = 0x0896c888u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a248ccu); /* sceKernelSetGPO */ }
L_0896c888:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896c670 */
}

/* func_0896e2f8  0x0896e2f8..0x0896e344  76 bytes, source=sweep */
void func_0896e2f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e2f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 25;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 7);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000012u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e2f8 */
}

/* func_0896f1ac  0x0896f1ac..0x0896f1d0  36 bytes, source=sweep */
void func_0896f1ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f1acu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9dd0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896f1ac */
}

/* func_08970788  0x08970788..0x0897093c  436 bytes, source=fde */
void func_08970788(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08970788u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[4]);
    { c->r[31] = 0x089707c0u; mem_w16(ram, c->r[30] + 0x00000006u, c->r[5]); func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089707d0; }
    { goto L_08970924; }
L_089707d0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897081c; }
    { goto L_08970924; }
L_0897081c:
    mem_w16(ram, c->r[30] + 0x00000010u, 0u);
    mem_w16(ram, c->r[30] + 0x00000012u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970844; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    { mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08970860; }
L_08970844:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08970924; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000012cu;
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
L_08970860:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089708c8; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089708c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089708a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
L_089708a4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089708b0u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089708c0u; c->r[5] = c->r[3] + 0u; func_0896fc10(c, ram); }
    { goto L_08970924; }
L_089708c8:
    { c->r[31] = 0x089708d0u; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08970924; }
    { c->r[31] = 0x089708e0u; func_0896a3e4(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089708f0u; c->r[5] = c->r[3] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x08970900u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970924; }
    { c->r[31] = 0x08970914u; c->r[4] = 0u + 0x00000008u; func_0896f2b4(c, ram); }
    { c->r[31] = 0x0897091cu; c->r[4] = 0u + 0x00000008u; func_0896ef9c(c, ram); }
    { c->r[31] = 0x08970924u; func_08998e44(c, ram); }
L_08970924:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08970788 */
}

/* func_08973f28  0x08973f28..0x08973f98  112 bytes, source=fde */
void func_08973f28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08973f28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006984u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08973f50u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x08973f5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08973f78; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08973f80; }
L_08973f78:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08973f80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08973f28 */
}

/* func_0897608c  0x0897608c..0x08976104  120 bytes, source=fde */
void func_0897608c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897608cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    { c->r[31] = 0x089760b4u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]); func_0896a3c0(c, ram); }
    c->r[2] = c->r[2] + 0x00000094u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089760c8u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    { c->r[31] = 0x089760d0u; func_0896a3c0(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089760e4u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d88u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0897608c */
}

/* func_089795dc  0x089795dc..0x08979620  68 bytes, source=sweep */
void func_089795dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089795dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089795f4u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa290u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089795dc */
}

/* func_089814c0  0x089814c0..0x089818d4  1044 bytes, source=fde */
void func_089814c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089814c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089814d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089814f0; }
    { goto L_0898151c; }
L_089814f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898150cu; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089814d8; }
L_0898151c:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08981520:
    { c->r[31] = 0x08981528u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981544; }
    { goto L_08981574; }
L_08981544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff91f0u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08981560u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a4d4(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08981520; }
L_08981574:
    { c->r[31] = 0x0898157cu; mem_w32(ram, c->r[30] + 0x00000000u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08981584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898159c; }
    { goto L_08981768; }
L_0898159c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff91f0u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x089815b8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a2e0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089815c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898174c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff91f0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9191u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9191u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9192u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9192u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9193u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9193u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0898174c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08981584; }
L_08981768:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0898176c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981784; }
    { goto L_089818bc; }
L_08981784:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08981788:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089817a8; }
    { goto L_08981818; }
L_089817a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0x0000007fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08981788; }
L_08981818:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08981824:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898183c; }
    { goto L_089818ac; }
L_0898183c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08981824; }
L_089818ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0898176c; }
L_089818bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089814c0 */
}

/* func_0898bad4  0x0898bad4..0x0898ced4  5120 bytes, source=fde */
void func_0898bad4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898bad4u);
L_0898bad4:
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
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898bb34; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898ccd4; }
    { goto L_0898ceb8; }
L_0898bb34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cc98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9a48u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898bad4u: goto L_0898bad4; case 0x0898bb70u: goto L_0898bb70; case 0x0898bbf4u: goto L_0898bbf4; case 0x0898bc28u: goto L_0898bc28; case 0x0898bfb8u: goto L_0898bfb8; case 0x0898c2dcu: goto L_0898c2dc; case 0x0898c440u: goto L_0898c440; case 0x0898c564u: goto L_0898c564; case 0x0898c714u: goto L_0898c714; case 0x0898c880u: goto L_0898c880; case 0x0898c978u: goto L_0898c978; case 0x0898ca4cu: goto L_0898ca4c; case 0x0898ca88u: goto L_0898ca88; case 0x0898cad4u: goto L_0898cad4; case 0x0898cb14u: goto L_0898cb14; case 0x0898cb50u: goto L_0898cb50; case 0x0898cb64u: goto L_0898cb64; case 0x0898cb78u: goto L_0898cb78; case 0x0898cba4u: goto L_0898cba4; case 0x0898cc98u: goto L_0898cc98; case 0x0898cd28u: goto L_0898cd28; case 0x0898cd44u: goto L_0898cd44; case 0x0898cd60u: goto L_0898cd60; case 0x0898cd7cu: goto L_0898cd7c; case 0x0898cd98u: goto L_0898cd98; case 0x0898cdb4u: goto L_0898cdb4; case 0x0898cdf0u: goto L_0898cdf0; case 0x0898ce0cu: goto L_0898ce0c; case 0x0898ce28u: goto L_0898ce28; case 0x0898ce44u: goto L_0898ce44; case 0x0898ce60u: goto L_0898ce60; case 0x0898ce7cu: goto L_0898ce7c; case 0x0898ce98u: goto L_0898ce98; case 0x0898ceacu: goto L_0898ceac; default: recomp_trap_unknown_indirect(c, ram, 0x0898bb68u, _t); return; } }
L_0898bb70:
    { c->r[31] = 0x0898bb78u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000045u, c->r[2]);
    { c->r[31] = 0x0898bb8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0897950c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    { c->r[31] = 0x0898bba0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0898b938(c, ram); }
    { c->r[31] = 0x0898bba8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898bbc0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898bbc8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898bbd4u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898bbf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898bc08u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898bc18; }
    { goto L_0898cc98; }
L_0898bc18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898bc28:
    { c->r[31] = 0x0898bc30u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898bc78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898bc54u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898bc5cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898bc68u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898be28; }
L_0898bc78:
    { c->r[31] = 0x0898bc80u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898bc98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898be28; }
L_0898bc98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898bd00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898bcdcu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898bce4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898bcf0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898be28; }
L_0898bd00:
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
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = 0u + 0x00000168u;
    c->r[8] = 0u + 0x000000c0u;
    { c->r[31] = 0x0898bd5cu; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898bd78u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898bd98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898be28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898be28; }
    { c->r[31] = 0x0898bdbcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x0898bdc8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x0898bdd4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08932b30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0898bde0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898be28u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0898be28:
    { c->r[31] = 0x0898be30u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898be44u; c->r[7] = 0u + 0x00000004u; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898bee4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898be88; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898bea0; }
    { goto L_0898cc98; }
L_0898be88:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898bf48; }
    { goto L_0898cc98; }
L_0898bea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898beb4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898bec4u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898bedcu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898bee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898cc98; }
    { c->r[31] = 0x0898bf00u; func_08a1a548(c, ram); }
    { c->r[31] = 0x0898bf08u; mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); func_0896a284(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000004u;
    { c->r[31] = 0x0898bf24u; c->r[8] = c->r[3] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898bf2cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898bf38u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898bf48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898bf70u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898bf78u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898bf9cu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898bfa4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898bfb0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { goto L_0898cc98; }
L_0898bfb8:
    { c->r[31] = 0x0898bfc0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c028; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898bfd8u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898bfe0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898bff8u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c000u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c00cu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898c1d8; }
L_0898c028:
    { c->r[31] = 0x0898c030u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c048; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898c1d8; }
L_0898c048:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898c0b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898c08cu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898c094u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c0a0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898c1d8; }
L_0898c0b0:
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
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[7] = 0u + 0x00000168u;
    c->r[8] = 0u + 0x000000c0u;
    { c->r[31] = 0x0898c10cu; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898c128u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898c148u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c1d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c1d8; }
    { c->r[31] = 0x0898c16cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x0898c178u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0898c184u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08932b30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x0898c190u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898c1d8u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_0898c1d8:
    { c->r[31] = 0x0898c1e0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898c1f4u; c->r[7] = 0u + 0x00000004u; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c228; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c26c; }
    { goto L_0898cc98; }
L_0898c228:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c23cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898c24cu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898c264u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898c26c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898c294u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898c29cu; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898c2c0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c2c8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c2d4u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { goto L_0898cc98; }
L_0898c2dc:
    { c->r[31] = 0x0898c2e4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898c2f8u; c->r[7] = 0u + 0x00000004u; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c388; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c33c; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c354; }
    { goto L_0898cc98; }
L_0898c33c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c3e4; }
    { goto L_0898cc98; }
L_0898c354:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c368u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898c380u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898c388:
    { c->r[31] = 0x0898c390u; func_08a1a548(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x0898c3a4u; mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); func_0896a284(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000004u;
    { c->r[31] = 0x0898c3c0u; c->r[8] = c->r[3] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c3c8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c3d4u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c3e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { c->r[31] = 0x0898c400u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898c424u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c42cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c438u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { goto L_0898cc98; }
L_0898c440:
    { c->r[31] = 0x0898c448u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    { c->r[31] = 0x0898c45cu; c->r[7] = 0u + 0x000000ffu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c490; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c4c4; }
    { goto L_0898cc98; }
L_0898c490:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c4a4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898c4bcu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898c4c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898c514; }
    { c->r[31] = 0x0898c4e0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000011u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898c4f8u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000004bu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c514:
    { c->r[31] = 0x0898c51cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000eu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898c534u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c548u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c564:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898c6fc; }
    { c->r[31] = 0x0898c57cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000au;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898c594u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c59cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c5a8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898c5c4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c5e0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898c5e0u; c->r[5] = 0u | 0x8000u; func_0892ff54(c, ram); }
L_0898c5e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x000000c4u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0898c60cu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cc98; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0898c628u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0898c634u; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9a40u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0898c648u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0898c654u; mem_w8(ram, c->r[2] + 0x00000011u, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898c6a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898c670u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x000000c4u;
    { c->r[31] = 0x0898c684u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0898c690u; c->r[5] = 0u + 0x00000001u; func_08932484(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); goto L_0898c6b0; }
L_0898c6a0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898c6b0u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
L_0898c6b0:
    { c->r[31] = 0x0898c6b8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898c6dc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898c6d4u; c->r[6] = 0u + 0x00000002u; func_08930178(c, ram); }
    { goto L_0898c6ec; }
L_0898c6dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898c6ecu; c->r[6] = 0u + 0x00000002u; func_08930208(c, ram); }
L_0898c6ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c6fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898cc98; }
L_0898c714:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898c730u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c750; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0898c74cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u); func_089324c0(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
L_0898c750:
    { c->r[31] = 0x0898c758u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c838; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898c7e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c798; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898c78cu; c->r[5] = 0x04000000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898c798u; c->r[5] = 0u + 0x00002000u; func_0892ff54(c, ram); }
L_0898c798:
    { c->r[31] = 0x0898c7a0u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000au;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0898c7c4u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c7ccu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c7d8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c7e8:
    { c->r[31] = 0x0898c7f0u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000fu;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0898c814u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c81cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c828u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000du;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c838:
    { c->r[31] = 0x0898c840u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000au;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0898c864u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c86cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c878u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { goto L_0898cc98; }
L_0898c880:
    { c->r[31] = 0x0898c888u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c914; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c8a4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c8b8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x0898c8c0u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000fu;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0898c8e4u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898c8ecu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898c8f8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c914:
    { c->r[31] = 0x0898c91cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cc98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898c940u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898c968; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898c95cu; c->r[5] = 0x04000000u; func_0892ffa8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898c968u; c->r[5] = 0u + 0x00002000u; func_0892ffa8(c, ram); }
L_0898c968:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898c978:
    { c->r[31] = 0x0898c980u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x0898c990u; c->r[6] = 0u + 0x0000000du; func_0896d35c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898c9c4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898ca0c; }
    { goto L_0898cc98; }
L_0898c9c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c9d8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898c9ecu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898ca04u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898ca0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898ca20u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898ca34u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898cc98; }
L_0898ca4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898ca70; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898ca68u; c->r[5] = 0u + 0x0000001fu; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898ca70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898cc98; }
L_0898ca88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898cb8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = (c->r[3] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cc98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9af8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898bad4u: goto L_0898bad4; case 0x0898bb70u: goto L_0898bb70; case 0x0898bbf4u: goto L_0898bbf4; case 0x0898bc28u: goto L_0898bc28; case 0x0898bfb8u: goto L_0898bfb8; case 0x0898c2dcu: goto L_0898c2dc; case 0x0898c440u: goto L_0898c440; case 0x0898c564u: goto L_0898c564; case 0x0898c714u: goto L_0898c714; case 0x0898c880u: goto L_0898c880; case 0x0898c978u: goto L_0898c978; case 0x0898ca4cu: goto L_0898ca4c; case 0x0898ca88u: goto L_0898ca88; case 0x0898cad4u: goto L_0898cad4; case 0x0898cb14u: goto L_0898cb14; case 0x0898cb50u: goto L_0898cb50; case 0x0898cb64u: goto L_0898cb64; case 0x0898cb78u: goto L_0898cb78; case 0x0898cba4u: goto L_0898cba4; case 0x0898cc98u: goto L_0898cc98; case 0x0898cd28u: goto L_0898cd28; case 0x0898cd44u: goto L_0898cd44; case 0x0898cd60u: goto L_0898cd60; case 0x0898cd7cu: goto L_0898cd7c; case 0x0898cd98u: goto L_0898cd98; case 0x0898cdb4u: goto L_0898cdb4; case 0x0898cdf0u: goto L_0898cdf0; case 0x0898ce0cu: goto L_0898ce0c; case 0x0898ce28u: goto L_0898ce28; case 0x0898ce44u: goto L_0898ce44; case 0x0898ce60u: goto L_0898ce60; case 0x0898ce7cu: goto L_0898ce7c; case 0x0898ce98u: goto L_0898ce98; case 0x0898ceacu: goto L_0898ceac; default: recomp_trap_unknown_indirect(c, ram, 0x0898caccu, _t); return; } }
L_0898cad4:
    { c->r[31] = 0x0898cadcu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898cb00; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898caf8u; c->r[5] = 0u + 0x00000019u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898cb0cu; c->r[5] = 0u + 0x0000001bu; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb14:
    { c->r[31] = 0x0898cb1cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898cb3c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898cb34u; c->r[5] = 0u + 0x00000017u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb3c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898cb48u; c->r[5] = 0u + 0x00000015u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898cb5cu; c->r[5] = 0u + 0x00000013u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898cb70u; c->r[5] = 0u + 0x00000011u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb78:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898cb84u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_0898cc98; }
L_0898cb8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898cc98; }
L_0898cba4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898cbb8u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cbc8; }
    { goto L_0898cc98; }
L_0898cbc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898cc90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898cc90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x00000017u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898cc90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898cc90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898cc34u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cc50; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898cc50u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0898cc50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898cc6cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898cc88; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0898cc88u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0898cc88:
    { c->r[31] = 0x0898cc90u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
L_0898cc90:
    { c->r[31] = 0x0898cc98u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0898cc98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898ccb4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898ceb8; }
    { c->r[31] = 0x0898ccccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0898b640(c, ram); }
    { goto L_0898ceb8; }
L_0898ccd4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9a44u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0898ccecu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898ceac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9b0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898bad4u: goto L_0898bad4; case 0x0898bb70u: goto L_0898bb70; case 0x0898bbf4u: goto L_0898bbf4; case 0x0898bc28u: goto L_0898bc28; case 0x0898bfb8u: goto L_0898bfb8; case 0x0898c2dcu: goto L_0898c2dc; case 0x0898c440u: goto L_0898c440; case 0x0898c564u: goto L_0898c564; case 0x0898c714u: goto L_0898c714; case 0x0898c880u: goto L_0898c880; case 0x0898c978u: goto L_0898c978; case 0x0898ca4cu: goto L_0898ca4c; case 0x0898ca88u: goto L_0898ca88; case 0x0898cad4u: goto L_0898cad4; case 0x0898cb14u: goto L_0898cb14; case 0x0898cb50u: goto L_0898cb50; case 0x0898cb64u: goto L_0898cb64; case 0x0898cb78u: goto L_0898cb78; case 0x0898cba4u: goto L_0898cba4; case 0x0898cc98u: goto L_0898cc98; case 0x0898cd28u: goto L_0898cd28; case 0x0898cd44u: goto L_0898cd44; case 0x0898cd60u: goto L_0898cd60; case 0x0898cd7cu: goto L_0898cd7c; case 0x0898cd98u: goto L_0898cd98; case 0x0898cdb4u: goto L_0898cdb4; case 0x0898cdf0u: goto L_0898cdf0; case 0x0898ce0cu: goto L_0898ce0c; case 0x0898ce28u: goto L_0898ce28; case 0x0898ce44u: goto L_0898ce44; case 0x0898ce60u: goto L_0898ce60; case 0x0898ce7cu: goto L_0898ce7c; case 0x0898ce98u: goto L_0898ce98; case 0x0898ceacu: goto L_0898ceac; default: recomp_trap_unknown_indirect(c, ram, 0x0898cd20u, _t); return; } }
L_0898cd28:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001707u;
    { c->r[31] = 0x0898cd3cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898cd44:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001509u;
    { c->r[31] = 0x0898cd58u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898cd60:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001706u;
    { c->r[31] = 0x0898cd74u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898cd7c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001712u;
    { c->r[31] = 0x0898cd90u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898cd98:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001712u;
    { c->r[31] = 0x0898cdacu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898cdb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898ceac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9bbcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898bad4u: goto L_0898bad4; case 0x0898bb70u: goto L_0898bb70; case 0x0898bbf4u: goto L_0898bbf4; case 0x0898bc28u: goto L_0898bc28; case 0x0898bfb8u: goto L_0898bfb8; case 0x0898c2dcu: goto L_0898c2dc; case 0x0898c440u: goto L_0898c440; case 0x0898c564u: goto L_0898c564; case 0x0898c714u: goto L_0898c714; case 0x0898c880u: goto L_0898c880; case 0x0898c978u: goto L_0898c978; case 0x0898ca4cu: goto L_0898ca4c; case 0x0898ca88u: goto L_0898ca88; case 0x0898cad4u: goto L_0898cad4; case 0x0898cb14u: goto L_0898cb14; case 0x0898cb50u: goto L_0898cb50; case 0x0898cb64u: goto L_0898cb64; case 0x0898cb78u: goto L_0898cb78; case 0x0898cba4u: goto L_0898cba4; case 0x0898cc98u: goto L_0898cc98; case 0x0898cd28u: goto L_0898cd28; case 0x0898cd44u: goto L_0898cd44; case 0x0898cd60u: goto L_0898cd60; case 0x0898cd7cu: goto L_0898cd7c; case 0x0898cd98u: goto L_0898cd98; case 0x0898cdb4u: goto L_0898cdb4; case 0x0898cdf0u: goto L_0898cdf0; case 0x0898ce0cu: goto L_0898ce0c; case 0x0898ce28u: goto L_0898ce28; case 0x0898ce44u: goto L_0898ce44; case 0x0898ce60u: goto L_0898ce60; case 0x0898ce7cu: goto L_0898ce7c; case 0x0898ce98u: goto L_0898ce98; case 0x0898ceacu: goto L_0898ceac; default: recomp_trap_unknown_indirect(c, ram, 0x0898cde8u, _t); return; } }
L_0898cdf0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001527u;
    { c->r[31] = 0x0898ce04u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898ce0c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001526u;
    { c->r[31] = 0x0898ce20u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898ce28:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001525u;
    { c->r[31] = 0x0898ce3cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898ce44:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001417u;
    { c->r[31] = 0x0898ce58u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898ce60:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001558u;
    { c->r[31] = 0x0898ce74u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898ce7c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001503u;
    { c->r[31] = 0x0898ce90u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898ceac; }
L_0898ce98:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0898ceacu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_0898ceac:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0898ceb8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0898ceb8:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_0898bad4 */
}

/* func_08996c64  0x08996c64..0x08996eac  584 bytes, source=fde */
void func_08996c64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08996c64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x08996c84u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9908u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08996ca0u; c->r[6] = 0u + 0x00000060u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08996ca4:
    { c->r[31] = 0x08996cacu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996cc8; }
    { goto L_08996e94; }
L_08996cc8:
    { c->r[31] = 0x08996cd0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08996cf8u; mem_w8(ram, c->r[2] + 0x00000005u, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08996d80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9918u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08996e84; }
    { c->r[31] = 0x08996d3cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08996d68u; mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08996e84; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08996e84; }
L_08996d80:
    { c->r[31] = 0x08996d88u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9908u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08996dd8u; c->r[6] = 0u + 0x00000018u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9918u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08996e84; }
    { c->r[31] = 0x08996e0cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08996e38u; mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0x0000007fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[5] + 0x00000011u, c->r[2]);
L_08996e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08996ca4; }
L_08996e94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08996c64 */
}

/* func_08998ef4  0x08998ef4..0x08998f18  36 bytes, source=sweep */
void func_08998ef4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998ef4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b80u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998ef4 */
}

/* func_0899a064  0x0899a064..0x0899a280  540 bytes, source=fde */
void func_0899a064(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899a064u);
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
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a268; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899a0d0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a0d8; }
    { goto L_0899a268; }
L_0899a0d0:
    { goto L_0899a268; }
L_0899a0d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a188; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899a11c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a144; }
    { goto L_0899a268; }
L_0899a11c:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a1e8; }
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a23c; }
    { goto L_0899a268; }
L_0899a144:
    { c->r[31] = 0x0899a14cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    { c->r[31] = 0x0899a154u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x0899a15cu; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0899a268; }
L_0899a188:
    { c->r[31] = 0x0899a190u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x0899a198u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0899a1d0; }
    { c->r[31] = 0x0899a1b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f550(c, ram); }
    { c->r[31] = 0x0899a1b8u; func_0899d924(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0899a1d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0899a268; }
L_0899a1e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0899a224; }
    { c->r[31] = 0x0899a200u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    { c->r[31] = 0x0899a208u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x0899a210u; func_0896a284(c, ram); }
    { c->r[31] = 0x0899a218u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899a224u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
L_0899a224:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0899a268; }
L_0899a23c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899a248u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a258; }
    { goto L_0899a268; }
L_0899a258:
    { c->r[31] = 0x0899a260u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089750b4(c, ram); }
    { c->r[31] = 0x0899a268u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0899a268:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0899a064 */
}

/* func_0899fe44  0x0899fe44..0x0899ffac  360 bytes, source=fde */
void func_0899fe44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899fe44u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x0899fe68u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0899fe7c:
    { c->r[31] = 0x0899fe84u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fea0; }
    { goto L_0899ff10; }
L_0899fea0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899fef8; }
    { c->r[31] = 0x0899fec4u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x0899feccu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0899ff00; }
L_0899fef8:
    { c->r[31] = 0x0899ff00u; func_0896a3c0(c, ram); }
L_0899ff00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899fe7c; }
L_0899ff10:
    { c->r[31] = 0x0899ff18u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x0899ff20u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899ff54; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0899ff90; }
L_0899ff54:
    { c->r[31] = 0x0899ff5cu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899ff8c; }
    { c->r[31] = 0x0899ff74u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899ff8c; }
    { goto L_0899ff90; }
L_0899ff8c:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0899ff90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899fe44 */
}

/* func_089a3b48  0x089a3b48..0x089a3f5c  1044 bytes, source=fde */
void func_089a3b48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a3b48u);
L_089a3b48:
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
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3ee4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a3bb8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3bd0; }
    { goto L_089a3f40; }
L_089a3bb8:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3f38; }
    { goto L_089a3f40; }
L_089a3bd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a3ed4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa834u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089a3b48u: goto L_089a3b48; case 0x089a3c0cu: goto L_089a3c0c; case 0x089a3d04u: goto L_089a3d04; case 0x089a3de8u: goto L_089a3de8; case 0x089a3e2cu: goto L_089a3e2c; case 0x089a3ebcu: goto L_089a3ebc; case 0x089a3ed4u: goto L_089a3ed4; default: recomp_trap_unknown_indirect(c, ram, 0x089a3c04u, _t); return; } }
L_089a3c0c:
    { c->r[31] = 0x089a3c14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f8d0(c, ram); }
    { c->r[31] = 0x089a3c1cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899b088(c, ram); }
    { c->r[31] = 0x089a3c24u; func_089a39fc(c, ram); }
    { c->r[31] = 0x089a3c2cu; func_0897de00(c, ram); }
    { c->r[31] = 0x089a3c34u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x00c0u;
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089a3c54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3c6c; }
    { goto L_089a3cb8; }
L_089a3c6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000047u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a3ca8u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089a3c54; }
L_089a3cb8:
    { c->r[31] = 0x089a3cc0u; func_0899c07c(c, ram); }
    { c->r[31] = 0x089a3cc8u; func_0899d820(c, ram); }
    { c->r[31] = 0x089a3cd0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x089a3cd8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a3ce4u; c->r[5] = 0u + 0x00000384u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089a3cecu; func_0896a284(c, ram); }
    { c->r[31] = 0x089a3cf4u; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a3f40; }
L_089a3d04:
    { c->r[31] = 0x089a3d0cu; func_0896a284(c, ram); }
    { c->r[31] = 0x089a3d14u; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    { c->r[31] = 0x089a3d1cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x089a3d30u; c->r[7] = 0u + 0x000000feu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3d64; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3da0; }
    { goto L_089a3f40; }
L_089a3d64:
    { c->r[31] = 0x089a3d6cu; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a3d84u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a3d98u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089a3f40; }
L_089a3da0:
    { c->r[31] = 0x089a3da8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a3dbcu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa830u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089a3dd8u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a3f40; }
L_089a3de8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a3df4u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a3e04; }
    { goto L_089a3f40; }
L_089a3e04:
    { c->r[31] = 0x089a3e0cu; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089a3e14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f9e0(c, ram); }
    { c->r[31] = 0x089a3e1cu; func_08998f18(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a3f40; }
L_089a3e2c:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089a3e30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3e48; }
    { goto L_089a3e88; }
L_089a3e48:
    { c->r[31] = 0x089a3e50u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_08998cec(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a3e5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_089ac86c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089a3e68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_08971434(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a3e74u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_08998c08(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[16]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089a3e30; }
L_089a3e88:
    { c->r[31] = 0x089a3e90u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x089a3e98u; c->r[4] = c->r[2] + 0u; func_08999048(c, ram); }
    c->r[2] = c->r[2] & 0x00ffu;
    { c->r[31] = 0x089a3ea4u; c->r[4] = c->r[2] + 0u; func_08999258(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x089a0000u;
    { c->r[31] = 0x089a3eb4u; c->r[5] = c->r[5] + 0x000035f4u; func_0899ffac(c, ram); }
    { goto L_089a3f40; }
L_089a3ebc:
    { c->r[31] = 0x089a3ec4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x089a3eccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089a3f40; }
L_089a3ed4:
    { c->r[31] = 0x089a3edcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0558(c, ram); }
    { goto L_089a3f40; }
L_089a3ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3f28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3f28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3f28; }
    { goto L_089a3f40; }
L_089a3f28:
    { c->r[31] = 0x089a3f30u; func_0899dcf4(c, ram); }
    { goto L_089a3f40; }
L_089a3f38:
    { c->r[31] = 0x089a3f40u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0d08(c, ram); }
L_089a3f40:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089a3b48 */
}

/* func_089a9980  0x089a9980..0x089a99f4  116 bytes, source=fde */
void func_089a9980(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a9980u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000004u, 0u);
    { c->r[31] = 0x089a99a0u; mem_w32(ram, c->r[30] + 0x00000008u, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a99c0; }
    c->r[2] = c->r[30] + 0x00000004u;
    { c->r[31] = 0x089a99b8u; c->r[4] = c->r[2] + 0u; func_089a93f4(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a99d0; }
L_089a99c0:
    c->r[2] = c->r[30] + 0x00000004u;
    { c->r[31] = 0x089a99ccu; c->r[4] = c->r[2] + 0u; func_089a96dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a99d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a9980 */
}

/* func_089ae6a0  0x089ae6a0..0x089aec24  1412 bytes, source=fde */
void func_089ae6a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ae6a0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x089ae718u; mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089ae77cu; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
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
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x089ae7b0u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ae7e0u; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ae984; }
    { c->r[31] = 0x089ae81cu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ae984; }
    { c->r[31] = 0x089ae858u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[16] + 0x00000068u, c->r[2]);
    { c->r[31] = 0x089ae890u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w16(ram, c->r[16] + 0x0000006au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089ae8dcu; c->r[5] = c->r[2] + 0u; func_089b3320(c, ram); }
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
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb088u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
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
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb08cu);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089ae950u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb090u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089ae978u; c->r[5] = c->r[3] + 0u; func_08886dbc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_089ae984:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089aea00; }
    { goto L_089aeb04; }
L_089aea00:
    { c->r[31] = 0x089aea08u; func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089aea3cu; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089aea6cu; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_0896a3e4(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    { c->r[31] = 0x089aeaa4u; mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); func_0896a3e4(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_089aec0c; }
L_089aeb04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb094u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089aeb40; }
    { goto L_089aec0c; }
L_089aeb40:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aeb60u; c->r[5] = c->r[2] + 0u; func_089b3464(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aec0c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089aec0c; }
    { c->r[31] = 0x089aeb84u; func_0896dc4c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000031u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_089aec0c; }
    { c->r[31] = 0x089aeb9cu; func_0896a3e4(c, ram); }
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
    c->r[2] = 0u + 0x0000000bu;
    { c->r[31] = 0x089aebd0u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    { c->r[31] = 0x089aebfcu; c->r[16] = c->r[3] + c->r[2]; func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]);
L_089aec0c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089ae6a0 */
}

/* func_089b2f4c  0x089b2f4c..0x089b2f90  68 bytes, source=sweep */
void func_089b2f4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2f4cu);
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
    { c->r[31] = 0x089b2f7cu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2f4c */
}

/* func_089b42f8  0x089b42f8..0x089b43b8  192 bytes, source=fde */
void func_089b42f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b42f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4350; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_089b43a0; }
L_089b4350:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b4374u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b3fd0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089b4380u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b4194(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b4390u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089b4450(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b43a0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089b46d4(c, ram); }
L_089b43a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b42f8 */
}

/* func_089b72cc  0x089b72cc..0x089b731c  80 bytes, source=residue */
void func_089b72cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b72ccu);
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
    return; /* fell out of func_089b72cc */
}

/* func_089b8810  0x089b8810..0x089b8830  32 bytes, source=residue */
void func_089b8810(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8810u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b8810 */
}

/* func_089c1990  0x089c1990..0x089c1bf4  612 bytes, source=fde */
void func_089c1990(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c1990u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c19c0; }
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_089c1bdc; }
L_089c19c0:
    { c->r[31] = 0x089c19c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089bb69c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089c19cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000071u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c19ec; }
    { goto L_089c1b7c; }
L_089c19ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] << 8;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[5] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089c1b6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u | 0xffffu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1b6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1a78; }
    { goto L_089c1b6c; }
L_089c1a78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089c1a80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1a94; }
    { goto L_089c1b6c; }
L_089c1a94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c1ac4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c1ac4; }
    { goto L_089c1b34; }
L_089c1ac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1b0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1b0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1b0c; }
    { goto L_089c1b1c; }
L_089c1b0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089c1a80; }
L_089c1b1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c1b2cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c12e0(c, ram); }
    { goto L_089c1b54; }
L_089c1b34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c1b54; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089c1b54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_088984dc(c, ram); }
L_089c1b54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089c1a80; }
L_089c1b6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c19cc; }
L_089c1b7c:
    c->r[2] = 0x08b40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff124u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1bcc; }
    c->r[2] = 0x08b40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff124u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c1bbc; }
    c->r[4] = 0x08b40000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff124u);
    { c->r[31] = 0x089c1bb4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_088984dc(c, ram); }
    { goto L_089c1bcc; }
L_089c1bbc:
    c->r[4] = 0x08b40000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff124u);
    { c->r[31] = 0x089c1bccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c1e30(c, ram); }
L_089c1bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000070u);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089c1bdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089c1990 */
}

/* func_089c612c  0x089c612c..0x089c61b8  140 bytes, source=fde */
void func_089c612c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c612cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff1b8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c61a0; }
    c->r[3] = 0x08b80000u;
    c->r[3] = c->r[3] + 0xfffff1b8u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff1bcu;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089c6194u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_089c61a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c612c */
}

/* func_089c88c8  0x089c88c8..0x089c8928  96 bytes, source=fde */
void func_089c88c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c88c8u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000071u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c88fcu; c->r[5] = 0u + 0u; func_08885c0c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000eu;
    { c->r[31] = 0x089c890cu; c->r[6] = 0u + 0x00000003u; func_089c1990(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000070u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089c88c8 */
}

/* func_089caa1c  0x089caa1c..0x089caa44  40 bytes, source=sweep */
void func_089caa1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089caa1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000120u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089caa1c */
}

/* func_089cd1f4  0x089cd1f4..0x089cd410  540 bytes, source=fde */
void func_089cd1f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cd1f4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffffc6cu, 0u);
    { c->r[31] = 0x089cd220u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cbcac(c, ram); }
    { c->r[31] = 0x089cd228u; c->r[4] = 0u + 0x00000056u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089cd234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cd24c; }
    { goto L_089cd28c; }
L_089cd24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc70u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089cd278u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089cd234; }
L_089cd28c:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb650u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb654u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb658u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb65cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb660u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb664u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb668u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089cd2e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cd2fc; }
    { goto L_089cd340; }
L_089cd2fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc74u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089cd328u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089cd2e4; }
L_089cd340:
    c->r[2] = 0x08b80000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffc70u);
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089cd368u; c->r[8] = c->r[3] + 0u; func_08890404(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089cd36c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cd384; }
    { goto L_089cd3f4; }
L_089cd384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc90u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = 0u + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffcd0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089cd36c; }
L_089cd3f4:
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089cd1f4 */
}

/* func_089d21d8  0x089d21d8..0x089d220c  52 bytes, source=sweep */
void func_089d21d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d21d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d21f8u; c->r[5] = 0x0b000000u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d21d8 */
}

/* func_089d3080  0x089d3080..0x089d30c4  68 bytes, source=sweep */
void func_089d3080(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3080u);
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
    { c->r[31] = 0x089d30b0u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3080 */
}

/* func_089d46d0  0x089d46d0..0x089d4720  80 bytes, source=sweep */
void func_089d46d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d46d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000024u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d46d0 */
}

/* func_089d5b6c  0x089d5b6c..0x089d5bbc  80 bytes, source=fde */
void func_089d5b6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5b6cu);
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
    { c->r[31] = 0x089d5ba8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089761b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5b6c */
}

/* func_089d7a68  0x089d7a68..0x089d7b60  248 bytes, source=fde */
void func_089d7a68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7a68u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000654u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d7a94u; c->r[5] = c->r[5] + 0xffffbb2cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7ad0; }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u);
    { c->r[31] = 0x089d7aacu; c->r[5] = 0u + 0x00000001u; func_089d7f3c(c, ram); }
    c->r[4] = 0x08b90000u;
    { c->r[31] = 0x089d7ab8u; c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u); func_089d7314(c, ram); }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u);
    { c->r[31] = 0x089d7ac8u; c->r[5] = 0u + 0u; func_089d7f3c(c, ram); }
    { goto L_089d7b38; }
L_089d7ad0:
    c->r[4] = 0x08b90000u;
    { c->r[31] = 0x089d7adcu; c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u); func_089d7f6c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u);
    { c->r[31] = 0x089d7af0u; c->r[5] = 0u + 0x00000001u; func_089d7f3c(c, ram); }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u);
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x089d7b04u; c->r[5] = c->r[5] + 0x00000654u; func_089d73b4(c, ram); }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u);
    { c->r[31] = 0x089d7b14u; c->r[5] = 0u + 0u; func_089d7f3c(c, ram); }
    c->r[4] = 0x08b90000u;
    { c->r[31] = 0x089d7b20u; c->r[4] = mem_r32(ram, c->r[4] + 0x00000694u); func_089d7f6c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000654u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d7b38u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089c3c84(c, ram); }
L_089d7b38:
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000650u, 0u);
    { c->r[31] = 0x089d7b48u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24884u); /* sceKernelExitDeleteThread */ }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7a68 */
}

/* func_089d8e68  0x089d8e68..0x089d8ed4  108 bytes, source=fde */
void func_089d8e68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8e68u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d8eacu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d9034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d8eb8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9468(c, ram); }
    { c->r[31] = 0x089d8ec0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d8e68 */
}

/* func_089d9f08  0x089d9f08..0x089da1f0  744 bytes, source=fde */
void func_089d9f08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9f08u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089d9f28u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089da36c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d9f44; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089d9f44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d9f5cu; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000040u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000013u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000012u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000054u;
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000054u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d9fe4u; c->r[6] = 0u + 0x00000034u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089d9fe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089d9ffc; }
    { goto L_089da1dc; }
L_089d9ffc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000054u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000058u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x0000005cu;
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000064u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x0000006cu;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x00000074u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x00000078u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000034u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x0000007cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089d9fe8; }
L_089da1dc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d9f08 */
}

/* func_089db424  0x089db424..0x089db894  1136 bytes, source=fde */
void func_089db424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db424u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006acu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089db880; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006b0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089db45c; }
    { goto L_089db880; }
L_089db45c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db4a8u; c->r[5] = c->r[5] | 0x0102u; func_089db8b8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db4f0u; c->r[5] = 0u + 0x00000009u; func_089db98c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db538u; c->r[5] = 0u + 0u; func_089db9c8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db580u; c->r[5] = 0u + 0x00000001u; func_089db9c8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db5d4u; c->r[8] = 0u + 0u; func_089dba04(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0u + 0x00000200u;
    c->r[7] = 0u + 0x00000200u;
    c->r[8] = 0u + 0x00000200u;
    c->r[9] = 0x08b90000u;
    { c->r[31] = 0x089db630u; c->r[9] = mem_r32(ram, c->r[9] + 0x000006b4u); func_089db934(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x089db63cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0x7f7f0000u;
    { c->r[31] = 0x089db68cu; c->r[5] = c->r[5] | 0x7f7fu; func_089db8fc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000110u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000110u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089db748u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089db7a4u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db7f0u; c->r[5] = c->r[5] | 0x0002u; func_089db8b8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db838u; c->r[5] = 0u + 0u; func_089db98c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089db880u; c->r[5] = 0u + 0x00000001u; func_089db98c(c, ram); }
L_089db880:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db424 */
}

/* func_089dc4b4  0x089dc4b4..0x089dc524  112 bytes, source=sweep */
void func_089dc4b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc4b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dc4e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_089dc4f0; }
L_089dc4e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_089dc4f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x089dc510u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_089dc524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc4b4 */
}

/* func_089de564  0x089de564..0x089de5c0  92 bytes, source=fde */
void func_089de564(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de564u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089de590u; c->r[5] = c->r[2] + 0u; func_089de50c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] & 0x0003u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089de5a8; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089de5a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de564 */
}

/* func_089e194c  0x089e194c..0x089e199c  80 bytes, source=sweep */
void func_089e194c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e194cu);
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
    return; /* fell out of func_089e194c */
}

/* func_089e2418  0x089e2418..0x089e2448  48 bytes, source=sweep */
void func_089e2418(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2418u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2418 */
}

/* func_089e3694  0x089e3694..0x089e36e8  84 bytes, source=sweep */
void func_089e3694(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3694u);
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
    { c->r[31] = 0x089e36d4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3694 */
}

/* func_089e48cc  0x089e48cc..0x089e4910  68 bytes, source=sweep */
void func_089e48cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e48ccu);
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
    { c->r[31] = 0x089e48fcu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e48cc */
}

/* func_089e90a8  0x089e90a8..0x089e97e0  1848 bytes, source=fde */
void func_089e90a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e90a8u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089e912cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x089e914cu; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000001fcu;
    { c->r[31] = 0x089e915cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc37cu);
    c->f[0] = c->f[1] * c->f[0];
    vfpu_exec(c, ram, 0xdf9c3800u); /* vfim.s */
    vfpu_exec(c, ram, 0xdfbc3800u); /* vfim.s */
    vfpu_exec(c, ram, 0xdf9d3b80u); /* vfim.s */
    vfpu_exec(c, ram, 0xdfbd3840u); /* vfim.s */
    c->r[8] = f2u(c->f[0]);
    vfpu_exec(c, ram, 0x48e8001eu); /* mtv */
    vfpu_exec(c, ram, 0x48e8003eu); /* mtv */
L_089e9188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e91a0; }
    { goto L_089e97cc; }
L_089e91a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_089e91c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e91dc; }
    { goto L_089e9344; }
L_089e91dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e9204; }
    { goto L_089e9344; }
L_089e9204:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e9334; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000012c0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x089e92c0u; c->r[6] = c->r[2] + 0u; func_089ea1a4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006310u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000012c0u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006330u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006310u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x089e9334u; c->r[6] = c->r[6] + 0xffffc110u; func_0884c6d4(c, ram); }
L_089e9334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089e91c4; }
L_089e9344:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e93d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0xc000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 14);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089e93d8u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
L_089e93d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x1800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e9614; }
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_089e93f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e9410; }
    { goto L_089e97b4; }
L_089e9410:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[4]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000003eu, c->r[4]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089e949cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089e94f8u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e956c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003eu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x089e9564u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    { goto L_089e9584; }
L_089e956c:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003eu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e9584u; c->r[6] = c->r[3] + 0u; func_089eb45c(c, ram); }
L_089e9584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e95e4; }
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003eu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e95c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_089e95c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089e9604; }
L_089e95e4:
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003eu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_089e9604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089e93f0; }
L_089e9614:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_089e9618:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e9638; }
    { goto L_089e97b4; }
L_089e9638:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000003eu, c->r[4]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[4]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089e96c4u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003eu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089e96ecu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089e97e0(c, ram); }
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003eu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e9760; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x089e9758u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    { goto L_089e9778; }
L_089e9760:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003eu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e9778u; c->r[6] = c->r[3] + 0u; func_089eb45c(c, ram); }
L_089e9778:
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003eu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001bu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_089e9618; }
L_089e97b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089e9188; }
L_089e97cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089e90a8 */
}

/* func_089eae64  0x089eae64..0x089eaea8  68 bytes, source=sweep */
void func_089eae64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eae64u);
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
    { c->r[31] = 0x089eae94u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eae64 */
}

/* func_089ee680  0x089ee680..0x089ee6f4  116 bytes, source=sweep */
void func_089ee680(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ee680u);
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
    c->r[5] = 0x12000000u;
    { c->r[31] = 0x089ee6e0u; c->r[5] = c->r[5] | 0x0183u; func_089eefec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ee680 */
}

/* func_089f0ab0  0x089f0ab0..0x089f0af4  68 bytes, source=sweep */
void func_089f0ab0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0ab0u);
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
    { c->r[31] = 0x089f0ae0u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0ab0 */
}

/* func_089f1b40  0x089f1b40..0x089f1ba4  100 bytes, source=sweep */
void func_089f1b40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f1b40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f1b40 */
}

/* func_089f5584  0x089f5584..0x089f55b8  52 bytes, source=residue */
void func_089f5584(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5584u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f5584 */
}

/* func_089f77f0  0x089f77f0..0x089f7894  164 bytes, source=fde */
void func_089f77f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f77f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089f7808u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] >> 6;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x089f783cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f90a8(c, ram); }
    { c->r[31] = 0x089f7844u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a02408(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089f7850u; c->r[4] = c->r[4] + 0xffffc810u; func_089f85f8(c, ram); }
    { c->r[31] = 0x089f7858u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8344(c, ram); }
    { c->r[31] = 0x089f7860u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f71c8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f77f0 */
}

/* func_089f9144  0x089f9144..0x089f914c  8 bytes, source=residue */
void func_089f9144(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9144u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089f9144 */
}

/* func_089f9c48  0x089f9c48..0x089f9f6c  804 bytes, source=fde */
void func_089f9c48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9c48u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[20]);
    c->r[2] = 0x08a50000u;
    c->r[3] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x000000bcu, c->r[19]);
    c->r[20] = 0u + 0x00000001u;
    c->r[19] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[17]);
    mem_wf32(ram, c->r[29] + 0x000000d8u, c->f[22]);
    mem_wf32(ram, c->r[29] + 0x000000d4u, c->f[21]);
    mem_wf32(ram, c->r[29] + 0x000000d0u, c->f[20]);
    c->f[21] = mem_rf32(ram, c->r[2] + 0xffffd154u);
    c->f[22] = mem_rf32(ram, c->r[3] + 0xffffd158u);
L_089f9c8c:
    c->r[3] = mem_r8(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[3] == c->r[20]); c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_089f9f50; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_089f9f40; }
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000003u; if (_c) goto L_089f9d08; }
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f9cf0; }
L_089f9cb0:
    c->r[19] = c->r[19] + 0x00000001u;
L_089f9cb4:
    c->r[2] = ((s32)c->r[19] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0x0000004cu; if (_c) goto L_089f9c8c; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x000000c0u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x000000bcu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    c->f[22] = mem_rf32(ram, c->r[29] + 0x000000d8u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x000000d4u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
L_089f9cf0:
    { c->r[31] = 0x089f9cf8u; c->r[4] = c->r[19] + 0u; func_089fe070(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
    mem_w8(ram, c->r[16] + 0x00000000u, 0u);
    { mem_w32(ram, c->r[16] + 0x00000020u, 0u); goto L_089f9cb0; }
L_089f9d08:
    c->r[4] = mem_r8(ram, c->r[16] + 0x0000000bu);
    { c->r[31] = 0x089f9d14u; c->r[5] = c->r[29] + 0u; func_089fb264(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[16] + 0x00000034u);
    c->f[2] = mem_rf32(ram, c->r[16] + 0x0000002cu);
    c->f[3] = mem_rf32(ram, c->r[16] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[3];
    c->f[0] = c->f[0] * c->f[2];
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = c->f[0] * c->f[21];
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[5] = f2u(c->f[1]);
    { c->r[31] = 0x089f9d4cu; c->r[4] = mem_r8(ram, c->r[16] + 0x0000000au); func_089fd918(c, ram); }
    c->r[2] = c->r[2] << 4;
    c->r[4] = mem_r8(ram, c->r[16] + 0x0000000cu);
    mem_w16(ram, c->r[16] + 0x00000044u, c->r[2]);
    { c->r[31] = 0x089f9d60u; c->r[5] = c->r[29] + 0x00000050u; func_089fb264(c, ram); }
    c->r[3] = mem_r16(ram, c->r[29] + 0x00000056u);
    { int _c = (c->r[3] == c->r[20]); c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[29] + 0x00000078u); if (_c) goto L_089f9f20; }
L_089f9d6c:
    c->f[20] = u2f(0u);
L_089f9d70:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000038u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000028u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[29] + 0x00000004u);
    c->r[5] = c->r[29] + 0x000000a0u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[4] = c->r[4] + c->r[3];
    c->r[4] = c->r[4] + 0xffffffc0u;
    { c->r[31] = 0x089f9d94u; c->r[6] = c->r[29] + 0x000000a4u; func_089fd94c(c, ram); }
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000044u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000a0u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000003cu);
    alx_mult(c, c->r[3], c->r[5]);
    c->r[3] = c->lo;
    alx_mult(c, c->r[4], c->r[5]);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[3] = c->r[3] + c->r[2];
    c->r[5] = (u32)((s32)c->r[3] >> 8);
    c->r[4] = c->lo;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[4] = c->r[4] + c->r[2];
    c->r[6] = (u32)((s32)c->r[4] >> 8);
    c->f[1] = u2f(c->r[5]);
    c->f[2] = u2f(c->r[6]);
    c->r[2] = c->r[5] - c->r[7];
    c->f[0] = (f32)(s32)f2u(c->f[1]);
    c->f[1] = (f32)(s32)f2u(c->f[2]);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[5]);
    c->f[0] = c->f[0] * c->f[20];
    c->f[1] = c->f[1] * c->f[20];
    c->r[4] = c->r[6] + 0u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    c->r[18] = f2u(c->f[0]);
    c->r[17] = f2u(c->f[1]);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x000000a4u, c->r[6]); if (_c) goto L_089f9f08; }
    c->r[5] = c->r[7] + 0x00000100u;
L_089f9e18:
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[5]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000003eu);
L_089f9e20:
    c->r[2] = c->r[4] - c->r[3];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] - c->r[4]; if (_c) goto L_089f9ef4; }
    c->r[6] = c->r[3] + 0x00000100u;
L_089f9e34:
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[6]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000040u);
L_089f9e3c:
    c->r[2] = c->r[18] - c->r[3];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] - c->r[18]; if (_c) goto L_089f9ee4; }
    c->r[18] = c->r[3] + 0x00000100u;
L_089f9e50:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000042u);
    c->r[2] = c->r[17] - c->r[3];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] - c->r[17]; if (_c) goto L_089f9ed4; }
    c->r[17] = c->r[3] + 0x00000100u;
L_089f9e68:
    c->r[2] = ((s32)c->r[5] < (s32)0x00001001u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = ((s32)c->r[6] < (s32)0x00001001u) ? 1u : 0u; if (_c) goto L_089f9e7c; }
    c->r[5] = 0u + 0x00001000u;
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[5]);
L_089f9e7c:
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x00001000u; if (_c) goto L_089f9e8c; }
    c->r[6] = 0u + 0x00001000u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[6]);
L_089f9e8c:
    c->r[4] = ((s32)c->r[18] < (s32)0x00001001u) ? 1u : 0u;
    c->r[2] = ((s32)c->r[17] < (s32)0x00001001u) ? 1u : 0u;
    if (c->r[4] == 0u) c->r[18] = c->r[3];
    if (c->r[2] == 0u) c->r[17] = c->r[3];
    c->r[4] = c->r[19] + 0u;
    c->r[7] = c->r[18] + 0u;
    { c->r[31] = 0x089f9eacu; c->r[8] = c->r[17] + 0u; func_08a05c2c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[29] + 0x000000a0u);
    c->r[3] = mem_r16(ram, c->r[29] + 0x000000a4u);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w16(ram, c->r[16] + 0x0000003cu, c->r[2]);
    mem_w16(ram, c->r[16] + 0x0000003eu, c->r[3]);
    mem_w16(ram, c->r[16] + 0x00000040u, c->r[18]);
    mem_w16(ram, c->r[16] + 0x00000042u, c->r[17]);
    { mem_w32(ram, c->r[16] + 0x00000004u, c->r[4]); goto L_089f9cb0; }
L_089f9ed4:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    c->r[3] = c->r[3] + 0xffffff00u;
    { if (c->r[2] == 0u) c->r[17] = c->r[3]; goto L_089f9e68; }
L_089f9ee4:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    c->r[3] = c->r[3] + 0xffffff00u;
    { if (c->r[2] == 0u) c->r[18] = c->r[3]; goto L_089f9e50; }
L_089f9ef4:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000040u); goto L_089f9e3c; }
    { c->r[6] = c->r[3] + 0xffffff00u; goto L_089f9e34; }
L_089f9f08:
    c->r[2] = c->r[7] - c->r[5];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000003eu); goto L_089f9e20; }
    { c->r[5] = c->r[7] + 0xffffff00u; goto L_089f9e18; }
L_089f9f20:
    { int _c = (c->r[2] != c->r[3]); c->f[1] = mem_rf32(ram, c->r[29] + 0x00000050u); if (_c) goto L_089f9d6c; }
    c->r[2] = mem_r8(ram, c->r[16] + 0x0000000du);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[2];
    { c->f[20] = c->f[1] / c->f[22]; goto L_089f9d70; }
L_089f9f40:
    if (c->r[3] == 0u) { mem_w32(ram, c->r[16] + 0x00000004u, 0u); goto L_089f9cb0; }
    { c->r[19] = c->r[19] + 0x00000001u; goto L_089f9cb4; }
L_089f9f50:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = ((s32)c->r[2] < (s32)0x00000078u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]); if (_c) goto L_089f9cb0; }
    { mem_w8(ram, c->r[16] + 0x00000000u, 0u); goto L_089f9cb0; }
    return; /* fell out of func_089f9c48 */
}

/* func_089fa618  0x089fa618..0x089fa640  40 bytes, source=residue */
void func_089fa618(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa618u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fa628u; func_089f98a0(c, ram); }
    { c->r[31] = 0x089fa630u; func_089faca4(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa618 */
}

/* func_089fb044  0x089fb044..0x089fb0b0  108 bytes, source=fde */
void func_089fb044(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb044u);
    c->r[3] = c->r[4] & 0x00ffu;
    c->r[2] = 0x08b90000u;
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[4] = c->r[3] + 0u;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[3] = c->r[3] << 5;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = alx_seh(c->r[5]);
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { c->r[31] = 0x089fb07cu; c->f[20] = c->f[12]; func_089fb3b8(c, ram); }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0007u; if (_c) goto L_089fb094; }
    mem_w16(ram, c->r[17] + 0x00000008u, c->r[16]);
    c->r[3] = 0u + 0u;
    mem_wf32(ram, c->r[17] + 0x00000004u, c->f[20]);
L_089fb094:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fb044 */
}

/* func_089fbef8  0x089fbef8..0x089fbf1c  36 bytes, source=sweep */
void func_089fbef8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbef8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    { c->r[31] = 0x089fbf10u; c->r[4] = mem_r32(ram, c->r[2] + 0x00007eacu); func_089fbc80(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fbef8 */
}

/* func_089fcc88  0x089fcc88..0x089fcce4  92 bytes, source=sweep */
void func_089fcc88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fcc88u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = alx_seh(c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[4] == 0u); c->r[2] = ((s32)c->r[4] < (s32)0x00000960u) ? 1u : 0u; if (_c) goto L_089fccd8; }
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_089fcccc; }
    c->f[0] = u2f(c->r[4]);
    c->f[13] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd260u);
    c->r[2] = 0x08a50000u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd264u);
    { c->r[31] = 0x089fccc0u; c->f[13] = c->f[13] / c->f[0]; func_08a0ff08(c, ram); }
L_089fccc0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fcccc:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd25cu); goto L_089fccc0; }
L_089fccd8:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd258u); goto L_089fccc0; }
    return; /* fell out of func_089fcc88 */
}

/* func_089fe070  0x089fe070..0x089fe098  40 bytes, source=fde */
void func_089fe070(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe070u);
    c->r[2] = 0x08ba0000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff92dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fe08cu; func_089fdb2c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fe070 */
}

/* func_089feeb4  0x089feeb4..0x089fef60  172 bytes, source=sweep */
void func_089feeb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089feeb4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000170u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[18] = 0u + 0u;
    c->r[17] = c->r[2] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = ((s32)c->r[3] <= 0); c->r[4] = c->r[3] - c->r[4]; if (_c) goto L_089fef04; }
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[4]);
L_089feeec:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
L_089feef0:
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fef04:
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = ((s32)c->r[2] <= 0); c->r[4] = c->r[18] + 0u; if (_c) goto L_089feeec; }
    c->f[0] = u2f(c->r[16]);
    c->f[1] = mem_rf32(ram, c->r[17] + 0x00000000u);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000004u);
    c->f[0] = c->f[0] * c->f[2];
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[17] + 0x00000000u, c->f[1]);
    { c->r[31] = 0x089fef34u; c->f[12] = c->f[1]; func_089feba8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[16];
    { int _c = ((s32)c->r[3] > 0); mem_w32(ram, c->r[17] + 0x00000008u, c->r[3]); if (_c) goto L_089feeec; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000010u);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[18] + 0u; if (_c) goto L_089feeec; }
    { c->r[31] = 0x089fef58u; func_089fe394(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu); goto L_089feef0; }
    return; /* fell out of func_089feeb4 */
}

/* func_08a0167c  0x08a0167c..0x08a016dc  96 bytes, source=sweep */
void func_08a0167c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0167cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[2] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd324u);
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->f[12] = c->f[12] * c->f[0];
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000184u;
    c->r[4] = 0u + 0x00000001u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[12]));
    c->r[16] = c->lo;
    c->r[16] = c->r[16] + c->r[2];
    c->r[2] = f2u(c->f[0]);
    { c->r[31] = 0x08a016c0u; c->r[5] = alx_seh(c->r[2]); func_089fd918(c, ram); }
    c->r[2] = c->r[2] << 7;
    mem_w32(ram, c->r[16] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0167c */
}

/* func_08a02b40  0x08a02b40..0x08a02b58  24 bytes, source=sweep */
void func_08a02b40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02b40u);
    c->r[6] = c->r[6] & 0xffffu;
    c->r[6] = c->r[6] << 2;
    c->r[6] = c->r[6] + c->r[4];
    c->r[2] = 0u + 0u;
    { mem_w32(ram, c->r[6] + 0x00000000u, c->r[7]); return; }
    return; /* fell out of func_08a02b40 */
}

/* func_08a03660  0x08a03660..0x08a036c8  104 bytes, source=sweep */
void func_08a03660(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03660u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    c->r[5] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    { c->r[31] = 0x08a03678u; mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]); func_089fb264(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a036b4; }
    { c->r[31] = 0x08a03688u; c->r[4] = mem_r8(ram, c->r[29] + 0x00000008u); func_089fb34c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08a03698u; c->r[4] = c->r[4] + 0xffffffffu; func_08a06010(c, ram); }
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08a036a4u; c->r[5] = 0u + 0x00000001u; func_08a05f78(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000008u);
    { c->r[31] = 0x08a036b0u; c->r[4] = mem_r32(ram, c->r[16] + 0x00000004u); func_08a05fc4(c, ram); }
    c->r[3] = 0u + 0u;
L_08a036b4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08a03660 */
}

/* func_08a047b8  0x08a047b8..0x08a04818  96 bytes, source=residue */
void func_08a047b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a047b8u);
    c->r[3] = c->r[4] + 0u;
    c->r[2] = 0x80440000u;
    c->r[4] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[4] == 0u); c->r[5] = c->r[2] | 0x0005u; if (_c) goto L_08a04810; }
    c->r[5] = 0u + 0x0000004cu;
    alx_mult(c, c->r[3], c->r[5]);
    c->r[4] = 0x08ba0000u;
    c->r[3] = c->r[4] + 0xffffaa78u;
    c->r[6] = 0x08ba0000u;
    c->r[9] = c->r[6] + 0xffffacd8u;
    c->r[8] = c->lo;
    c->r[4] = c->r[8] + c->r[3];
    c->r[7] = mem_r32(ram, c->r[4] + 0x0000001cu);
    c->r[5] = 0u + 0u;
    { int _c = (c->r[7] == 0u); c->r[6] = c->r[8] + c->r[9]; if (_c) goto L_08a04810; }
    c->r[11] = mem_r32(ram, c->r[4] + 0x00000018u);
    c->r[12] = 0x00140000u;
    mem_w32(ram, c->r[6] + 0x0000001cu, 0u);
    c->r[10] = c->r[11] | c->r[12];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[10]);
L_08a04810:
    { c->r[2] = c->r[5] + 0u; return; }
    return; /* fell out of func_08a047b8 */
}

/* func_08a06010  0x08a06010..0x08a0604c  60 bytes, source=sweep */
void func_08a06010(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06010u);
    c->r[5] = 0x08ba0000u;
    c->r[6] = mem_r32(ram, c->r[5] + 0xffffaf80u);
    c->r[2] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    c->r[5] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a06040; }
    { c->r[31] = 0x08a06040u; hle_dispatch_stub(c, ram, 0x08a24c8cu); /* __sceSasRevType */ }
L_08a06040:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a06010 */
}

/* func_08a06ebc  0x08a06ebc..0x08a06f90  212 bytes, source=sweep */
void func_08a06ebc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06ebcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a06ee8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a06ef4; }
L_08a06ee8:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a06f7c; }
L_08a06ef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    mem_w32(ram, c->r[3] + 0x00000014u, 0u);
    mem_w32(ram, c->r[4] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000528u;
    mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000048u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000044u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08a06f7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a06ebc */
}

/* func_08a0d674  0x08a0d674..0x08a0d70c  152 bytes, source=fde */
void func_08a0d674(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0d674u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    c->r[4] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0d6acu; c->r[16] = c->r[5] + 0u; recomp_call_indirect(c, ram, 0x08a0d6a4u, _t); }
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[29] + 0u;
    { int _c = (c->r[2] == 0u); c->r[7] = 0u + 0x00000001u; if (_c) goto L_08a0d6cc; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
L_08a0d6cc:
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000010u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0d6dcu; recomp_call_indirect(c, ram, 0x08a0d6d4u, _t); }
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a0d6f0; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
L_08a0d6f0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0d674 */
}

/* func_08a0e4c4  0x08a0e4c4..0x08a0e4d4  16 bytes, source=residue */
void func_08a0e4c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e4c4u);
    c->r[3] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[3] + 0xfffffe40u);
    { mem_w32(ram, c->r[3] + 0xfffffe40u, c->r[4]); return; }
    return; /* fell out of func_08a0e4c4 */
}

/* func_08a0eb14  0x08a0eb14..0x08a0ebb0  156 bytes, source=fde */
void func_08a0eb14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0eb14u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0eb78; }
    mem_w32(ram, c->r[11] + 0x00000004u, c->r[6]);
    { int _c = ((s32)c->r[5] < 0); mem_w32(ram, c->r[11] + 0x00000000u, c->r[8]); if (_c) goto L_08a0eb60; }
    c->r[2] = c->r[8] + c->r[5];
    c->r[2] = c->r[2] ^ c->r[10];
    c->r[3] = 0u + 0x00000006u;
    c->r[4] = 0u + 0x00000001u;
    if (c->r[2] != 0u) c->r[3] = c->r[4];
    mem_w32(ram, c->r[11] + 0x0000000cu, c->r[3]);
L_08a0eb50:
    c->r[2] = 0u + 0u;
L_08a0eb54:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a0eb58:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0eb60:
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[5] != c->r[2]); c->r[2] = 0u + 0u; if (_c) goto L_08a0eb54; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[11] + 0x0000000cu, c->r[2]); goto L_08a0eb50; }
L_08a0eb78:
    if (c->r[8] == c->r[10]) { c->r[2] = mem_r32(ram, c->r[9] + 0x00000004u); goto L_08a0eb9c; }
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000008u);
L_08a0eb84:
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000001cu);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0eb94u; recomp_call_indirect(c, ram, 0x08a0eb8cu, _t); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a0eb58; }
L_08a0eb9c:
    if (c->r[3] != c->r[2]) { c->r[4] = mem_r32(ram, c->r[4] + 0x00000008u); goto L_08a0eb84; }
    c->r[2] = 0u + 0u;
    { mem_w32(ram, c->r[11] + 0x00000008u, c->r[6]); goto L_08a0eb54; }
    return; /* fell out of func_08a0eb14 */
}

/* func_08a12b58  0x08a12b58..0x08a12d6c  532 bytes, source=sweep */
void func_08a12b58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a12b58u);
    c->r[8] = alx_ext(c->r[5], 20u, 10u);
    c->r[7] = c->r[8] + 0xfffffc01u;
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[6] = ((s32)c->r[7] < (s32)0x00000014u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[10] = c->r[4] + 0u;
    c->r[11] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    c->r[12] = c->r[5] + 0u;
    c->r[13] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[18] = c->r[5] >> 31;
    { int _c = (c->r[6] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]); if (_c) goto L_08a12cfc; }
    { int _c = ((s32)c->r[7] < 0); c->r[2] = 0x000f0000u; if (_c) goto L_08a12c5c; }
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = (u32)((s32)c->r[2] >> (c->r[7] & 31u));
    c->r[3] = c->r[5] & c->r[4];
    c->r[3] = c->r[3] | c->r[10];
    c->r[8] = c->r[10] + 0u;
    { int _c = (c->r[3] == 0u); c->r[9] = c->r[5] + 0u; if (_c) goto L_08a12c34; }
    c->r[4] = c->r[4] >> 1;
    c->r[2] = c->r[5] & c->r[4];
    c->r[2] = c->r[2] | c->r[10];
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a12be8; }
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[7] == c->r[2]); c->r[3] = ~(0u | c->r[4]); if (_c) goto L_08a12c54; }
    c->r[2] = 0x00020000u;
    c->r[3] = c->r[5] & c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> (c->r[7] & 31u));
    c->r[12] = c->r[3] | c->r[2];
L_08a12be4:
    c->r[2] = 0x08a50000u;
L_08a12be8:
    c->r[2] = c->r[2] + 0x00000fb0u;
    c->r[3] = c->r[18] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[6] = c->r[13] + 0u;
    c->r[7] = c->r[12] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a12c10u; c->r[5] = c->r[17] + 0u; func_08a13a8c(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[31] = 0x08a12c2cu; c->r[5] = mem_r32(ram, c->r[29] + 0x00000004u); func_08a13af4(c, ram); }
    c->r[8] = c->r[2] + 0u;
L_08a12c30:
    c->r[9] = c->r[3] + 0u;
L_08a12c34:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[8] + 0u;
    c->r[3] = c->r[9] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a12c54:
    { c->r[13] = 0x40000000u; goto L_08a12be4; }
L_08a12c5c:
    c->r[2] = c->r[5] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 31u, 31u);
    c->r[2] = c->r[2] | c->r[4];
    c->r[8] = c->r[4] + 0u;
    { int _c = (c->r[2] == 0u); c->r[9] = c->r[5] + 0u; if (_c) goto L_08a12c34; }
    c->r[2] = c->r[5] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    c->r[13] = c->r[4] | c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[4] = 0u - c->r[13];
    c->r[2] = c->r[2] + 0x00000fb0u;
    c->r[3] = c->r[18] << 3;
    c->r[4] = c->r[13] | c->r[4];
    c->r[3] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = 0x00080000u;
    c->r[4] = c->r[4] >> 12;
    c->r[4] = c->r[4] & c->r[2];
    c->r[12] = alx_ins(c->r[12], 0u, 0u, 16u);
    c->r[3] = c->r[12] | c->r[4];
    c->r[6] = c->r[10] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a12cc8u; c->r[5] = c->r[17] + 0u; func_08a13a8c(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[31] = 0x08a12ce4u; c->r[5] = mem_r32(ram, c->r[29] + 0x00000004u); func_08a13af4(c, ram); }
    c->r[7] = alx_ext(c->r[3], 0u, 30u);
    c->r[6] = c->r[18] << 31;
    c->r[5] = c->r[7] | c->r[6];
    c->r[8] = c->r[2] + 0u;
    { c->r[9] = c->r[5] + 0u; goto L_08a12c34; }
L_08a12cfc:
    c->r[2] = ((s32)c->r[7] < (s32)0x00000034u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[5] = c->r[8] + 0xfffffbedu; goto L_08a12d2c; }
    c->r[2] = 0u + 0x00000400u;
    c->r[8] = c->r[4] + 0u;
    { int _c = (c->r[7] != c->r[2]); c->r[9] = c->r[5] + 0u; if (_c) goto L_08a12c34; }
    c->r[6] = c->r[4] + 0u;
    { c->r[31] = 0x08a12d24u; c->r[7] = c->r[5] + 0u; func_08a13a8c(c, ram); }
    { c->r[8] = c->r[2] + 0u; goto L_08a12c30; }
L_08a12d2c:
    c->r[2] = 0u + 0xffffffffu;
    c->r[4] = c->r[2] >> (c->r[5] & 31u);
    c->r[3] = c->r[10] & c->r[4];
    c->r[8] = c->r[10] + 0u;
    { int _c = (c->r[3] == 0u); c->r[9] = c->r[11] + 0u; if (_c) goto L_08a12c34; }
    c->r[4] = c->r[4] >> 1;
    c->r[2] = c->r[10] & c->r[4];
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a12be8; }
    c->r[3] = ~(0u | c->r[4]);
    c->r[2] = 0x40000000u;
    c->r[3] = c->r[10] & c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> (c->r[5] & 31u));
    { c->r[13] = c->r[3] | c->r[2]; goto L_08a12be4; }
    return; /* fell out of func_08a12b58 */
}

/* func_08a1492c  0x08a1492c..0x08a14934  8 bytes, source=sweep */
void func_08a1492c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1492cu);
    { c->r[2] = mem_r32(ram, c->r[4] + 0x0000035cu); return; }
    return; /* fell out of func_08a1492c */
}

/* func_08a16f4c  0x08a16f4c..0x08a16f6c  32 bytes, source=fde */
void func_08a16f4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16f4cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[6] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a16f60u; c->r[7] = 0u + 0u; func_08a16eec(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a16f4c */
}

/* func_08a18f68  0x08a18f68..0x08a18f70  8 bytes, source=sweep */
void func_08a18f68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18f68u);
    { c->r[2] = 0u + 0x00000001u; return; }
    return; /* fell out of func_08a18f68 */
}

/* func_08a195c4  0x08a195c4..0x08a197ec  552 bytes, source=sweep */
void func_08a195c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a195c4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[2] = 0x08a60000u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    c->r[23] = c->r[2] + 0x00004de0u;
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    c->r[22] = 0x08a60000u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[20] = mem_r32(ram, c->r[23] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0xffffff3cu);
    c->r[2] = mem_r32(ram, c->r[22] + 0x000051ecu);
    c->r[19] = mem_r32(ram, c->r[20] + 0x00000004u);
    c->r[5] = c->r[5] + c->r[3];
    c->r[17] = c->r[5] + 0x00000010u;
    c->r[19] = alx_ins(c->r[19], 0u, 0u, 1u);
    { int _c = (c->r[2] == c->r[21]); c->r[18] = c->r[20] + c->r[19]; if (_c) goto L_08a19634; }
    c->r[17] = c->r[5] + 0x0000100fu;
    c->r[17] = alx_ins(c->r[17], 0u, 0u, 11u);
L_08a19634:
    { c->r[31] = 0x08a1963cu; c->r[5] = c->r[17] + 0u; func_08a1a8e4(c, ram); }
    { int _c = (c->r[2] == c->r[21]); c->r[16] = c->r[2] + 0u; if (_c) goto L_08a19658; }
    c->r[2] = (c->r[2] < c->r[18]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[21] = 0x08ba0000u; if (_c) goto L_08a19688; }
    { int _c = (c->r[20] == c->r[23]); c->r[2] = mem_r32(ram, c->r[21] + 0xffffff48u); if (_c) goto L_08a1968c; }
L_08a19658:
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
L_08a19688:
    c->r[2] = mem_r32(ram, c->r[21] + 0xffffff48u);
L_08a1968c:
    c->r[2] = c->r[2] + c->r[17];
    { int _c = (c->r[16] == c->r[18]); mem_w32(ram, c->r[21] + 0xffffff48u, c->r[2]); if (_c) goto L_08a197cc; }
    c->r[3] = mem_r32(ram, c->r[22] + 0x000051ecu);
L_08a1969c:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = mem_r32(ram, c->r[21] + 0xffffff48u); if (_c) goto L_08a197c4; }
    c->r[3] = c->r[16] - c->r[18];
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[21] + 0xffffff48u, c->r[2]);
L_08a196b4:
    c->r[2] = c->r[16] + 0x00000008u;
    c->r[3] = c->r[2] & 0x000fu;
    { int _c = (c->r[3] == 0u); c->r[18] = 0u + 0u; if (_c) goto L_08a196d0; }
    c->r[2] = 0u + 0x00000010u;
    c->r[18] = c->r[2] - c->r[3];
    c->r[16] = c->r[16] + c->r[18];
L_08a196d0:
    c->r[2] = c->r[16] + c->r[17];
    c->r[2] = c->r[2] & 0x0fffu;
    c->r[3] = 0u + 0x00001000u;
    c->r[3] = c->r[3] - c->r[2];
    c->r[18] = c->r[18] + c->r[3];
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a196f0u; c->r[5] = c->r[18] + 0u; func_08a1a8e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    if (c->r[4] == c->r[2]) { c->r[18] = 0u + 0u; goto L_08a197bc; }
L_08a19700:
    c->r[3] = mem_r32(ram, c->r[21] + 0xffffff48u);
    c->r[2] = c->r[4] - c->r[16];
    c->r[2] = c->r[2] + c->r[18];
    c->r[5] = 0x08a60000u;
    c->r[3] = c->r[3] + c->r[18];
    c->r[4] = c->r[5] + 0x00004de0u;
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[21] + 0xffffff48u, c->r[3]);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[16]);
    { int _c = (c->r[20] == c->r[4]); mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]); if (_c) goto L_08a19770; }
    c->r[2] = (c->r[19] < 0x00000010u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[20] + 0x00000004u); goto L_08a19744; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]); goto L_08a19658; }
L_08a19744:
    c->r[19] = c->r[19] + 0xfffffff4u;
    c->r[19] = alx_ins(c->r[19], 0u, 0u, 3u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[4] = c->r[20] + c->r[19];
    c->r[3] = 0u + 0x00000005u;
    c->r[2] = c->r[2] | c->r[19];
    c->r[5] = (c->r[19] < 0x00000010u) ? 1u : 0u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[3]);
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[4] + 0x00000004u, c->r[3]); if (_c) goto L_08a197a8; }
L_08a19770:
    c->r[7] = 0x08ba0000u;
L_08a19774:
    c->r[8] = 0x08ba0000u;
    c->r[4] = mem_r32(ram, c->r[21] + 0xffffff48u);
    c->r[3] = mem_r32(ram, c->r[7] + 0xffffff40u);
    c->r[2] = mem_r32(ram, c->r[8] + 0xffffff44u);
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[3] = (c->r[3] < c->r[4]) ? 1u : 0u;
    c->r[2] = (c->r[2] < c->r[4]) ? 1u : 0u;
    if (c->r[2] != 0u) c->r[6] = c->r[4];
    if (c->r[3] != 0u) c->r[5] = c->r[4];
    mem_w32(ram, c->r[7] + 0xffffff40u, c->r[5]);
    { mem_w32(ram, c->r[8] + 0xffffff44u, c->r[6]); goto L_08a19658; }
L_08a197a8:
    c->r[5] = c->r[20] + 0x00000008u;
    { c->r[31] = 0x08a197b4u; c->r[4] = c->r[30] + 0u; func_08a21690(c, ram); }
    { c->r[7] = 0x08ba0000u; goto L_08a19774; }
L_08a197bc:
    { c->r[4] = c->r[16] + 0u; goto L_08a19700; }
L_08a197c4:
    { mem_w32(ram, c->r[22] + 0x000051ecu, c->r[16]); goto L_08a196b4; }
L_08a197cc:
    c->r[2] = c->r[16] & 0x0fffu;
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r32(ram, c->r[22] + 0x000051ecu); if (_c) goto L_08a1969c; }
    c->r[3] = mem_r32(ram, c->r[23] + 0x00000008u);
    c->r[2] = c->r[17] + c->r[19];
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08a19770; }
    return; /* fell out of func_08a195c4 */
}

/* func_08a1adb4  0x08a1adb4..0x08a1ae50  156 bytes, source=sweep */
void func_08a1adb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1adb4u);
    c->r[8] = c->r[4] + 0u;
    c->r[9] = c->r[5] + 0u;
    c->r[13] = 0x08a50000u;
L_08a1adc0:
    c->r[12] = mem_r8(ram, c->r[8] + 0x00000000u);
    c->r[5] = c->r[13] + 0x00001b80u;
    c->r[8] = c->r[8] + 0x00000001u;
    c->r[6] = alx_seb(c->r[12]);
    c->r[2] = c->r[6] + c->r[5];
    { int _c = (c->r[6] == 0u); c->r[11] = c->r[6] + 0x00000020u; if (_c) goto L_08a1ae48; }
    c->r[10] = mem_r8(ram, c->r[9] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = alx_seb(c->r[10]);
    c->r[5] = c->r[3] + c->r[5];
    c->r[2] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[4] & 0x0001u;
    c->r[7] = c->r[3] + 0x00000020u;
    c->r[2] = c->r[2] & 0x0001u;
    if (c->r[4] != 0u) c->r[6] = c->r[11];
    if (c->r[2] != 0u) c->r[3] = c->r[7];
    { int _c = (c->r[6] == c->r[3]); c->r[9] = c->r[9] + 0x00000001u; if (_c) goto L_08a1adc0; }
L_08a1ae0c:
    c->r[2] = c->r[12] & 0x00ffu;
    c->r[6] = c->r[10] & 0x00ffu;
    c->r[3] = c->r[13] + 0x00001b80u;
    c->r[7] = c->r[6] + c->r[3];
    c->r[3] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[5] = mem_r8(ram, c->r[7] + 0x00000000u);
    c->r[8] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[4] & 0x0001u;
    c->r[5] = c->r[5] & 0x0001u;
    c->r[3] = c->r[6] + 0x00000020u;
    if (c->r[4] != 0u) c->r[2] = c->r[8];
    if (c->r[5] != 0u) c->r[6] = c->r[3];
    { c->r[2] = c->r[2] - c->r[6]; return; }
L_08a1ae48:
    { c->r[10] = mem_r8(ram, c->r[9] + 0x00000000u); goto L_08a1ae0c; }
    return; /* fell out of func_08a1adb4 */
}

/* func_08a1fc88  0x08a1fc88..0x08a1fed0  584 bytes, source=sweep */
void func_08a1fc88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1fc88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[13] = c->r[5] + 0u;
    c->r[20] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[18] = mem_r32(ram, c->r[5] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[18]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a1fea4; }
    c->r[18] = c->r[18] + 0xffffffffu;
    c->r[10] = c->r[5] + 0x00000014u;
    c->r[2] = c->r[18] << 2;
    c->r[19] = c->r[4] + 0x00000014u;
    c->r[17] = c->r[10] + c->r[2];
    c->r[12] = c->r[19] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000000u);
    c->r[14] = mem_r32(ram, c->r[12] + 0x00000000u);
    c->r[22] = c->r[10] + 0u;
    c->r[3] = c->r[3] + 0x00000001u;
    alx_divu(c, c->r[14], c->r[3]);
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x08a1fcf8u, 0x7u); goto L_08a1fcfc; }
L_08a1fcfc:
    c->r[16] = c->lo;
    c->r[21] = c->lo;
    { int _c = (c->r[16] == 0u); c->r[9] = c->r[19] + 0u; if (_c) goto L_08a1fdc8; }
    c->r[11] = 0u + 0u;
    c->r[4] = 0u + 0u;
L_08a1fd14:
    c->r[3] = mem_r32(ram, c->r[10] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[9] + 0x00000000u);
    c->r[10] = c->r[10] + 0x00000004u;
    c->r[2] = c->r[3] & 0xffffu;
    alx_mult(c, c->r[2], c->r[16]);
    c->r[3] = c->r[3] >> 16;
    c->r[5] = c->r[6] & 0xffffu;
    c->r[6] = c->r[6] >> 16;
    c->r[7] = (c->r[17] < c->r[10]) ? 1u : 0u;
    c->r[2] = c->lo;
    alx_mult(c, c->r[3], c->r[16]);
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] & 0xffffu;
    c->r[2] = c->r[2] >> 16;
    c->r[5] = c->r[5] - c->r[4];
    c->r[3] = c->lo;
    c->r[3] = c->r[3] + c->r[2];
    c->r[8] = c->r[5] + c->r[11];
    c->r[2] = c->r[3] & 0xffffu;
    c->r[11] = (u32)((s32)c->r[8] >> 16);
    c->r[6] = c->r[6] - c->r[2];
    c->r[5] = c->r[6] + c->r[11];
    mem_w16(ram, c->r[9] + 0x00000002u, c->r[5]);
    c->r[4] = c->r[3] >> 16;
    c->r[11] = (u32)((s32)c->r[5] >> 16);
    mem_w16(ram, c->r[9] + 0x00000000u, c->r[8]);
    { int _c = (c->r[7] == 0u); c->r[9] = c->r[9] + 0x00000004u; if (_c) goto L_08a1fd14; }
    if (c->r[14] != 0u) { c->r[5] = c->r[13] + 0u; goto L_08a1fdcc; }
    c->r[12] = c->r[12] + 0xfffffffcu;
    c->r[2] = (c->r[19] < c->r[12]) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[20] + 0x00000010u, c->r[18]); goto L_08a1fdc8; }
    c->r[2] = mem_r32(ram, c->r[12] + 0x00000000u);
    if (c->r[2] != 0u) { mem_w32(ram, c->r[20] + 0x00000010u, c->r[18]); goto L_08a1fdc8; }
    c->r[12] = c->r[12] + 0xfffffffcu;
L_08a1fdac:
    c->r[2] = (c->r[19] < c->r[12]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[18] = c->r[18] + 0xffffffffu; if (_c) goto L_08a1fdc4; }
    c->r[2] = mem_r32(ram, c->r[12] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[12] = c->r[12] + 0xfffffffcu; if (_c) goto L_08a1fdac; }
L_08a1fdc4:
    mem_w32(ram, c->r[20] + 0x00000010u, c->r[18]);
L_08a1fdc8:
    c->r[5] = c->r[13] + 0u;
L_08a1fdcc:
    { c->r[31] = 0x08a1fdd4u; c->r[4] = c->r[20] + 0u; func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[21] + 0u; if (_c) goto L_08a1fea4; }
    c->r[21] = c->r[16] + 0x00000001u;
    c->r[10] = c->r[22] + 0u;
    c->r[11] = 0u + 0u;
    c->r[4] = 0u + 0u;
    c->r[9] = c->r[19] + 0u;
L_08a1fdf0:
    c->r[3] = mem_r32(ram, c->r[10] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[9] + 0x00000000u);
    c->r[10] = c->r[10] + 0x00000004u;
    c->r[2] = c->r[3] & 0xffffu;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] >> 16;
    c->r[6] = c->r[2] & 0xffffu;
    c->r[3] = c->r[3] >> 16;
    c->r[2] = c->r[5] & 0xffffu;
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = c->r[2] - c->r[6];
    c->r[8] = c->r[2] + c->r[11];
    c->r[5] = c->r[5] >> 16;
    c->r[2] = c->r[3] & 0xffffu;
    c->r[5] = c->r[5] - c->r[2];
    c->r[11] = (u32)((s32)c->r[8] >> 16);
    c->r[5] = c->r[5] + c->r[11];
    c->r[2] = (c->r[17] < c->r[10]) ? 1u : 0u;
    mem_w16(ram, c->r[9] + 0x00000002u, c->r[5]);
    c->r[4] = c->r[3] >> 16;
    c->r[11] = (u32)((s32)c->r[5] >> 16);
    mem_w16(ram, c->r[9] + 0x00000000u, c->r[8]);
    { int _c = (c->r[2] == 0u); c->r[9] = c->r[9] + 0x00000004u; if (_c) goto L_08a1fdf0; }
    c->r[2] = c->r[18] << 2;
    c->r[12] = c->r[19] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[12] + 0x00000000u);
    if (c->r[3] != 0u) { c->r[3] = c->r[21] + 0u; goto L_08a1fea4; }
    c->r[12] = c->r[12] + 0xfffffffcu;
    c->r[2] = (c->r[19] < c->r[12]) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[20] + 0x00000010u, c->r[18]); goto L_08a1fea0; }
    c->r[2] = mem_r32(ram, c->r[12] + 0x00000000u);
    if (c->r[2] != 0u) { mem_w32(ram, c->r[20] + 0x00000010u, c->r[18]); goto L_08a1fea0; }
    c->r[12] = c->r[12] + 0xfffffffcu;
L_08a1fe84:
    c->r[2] = (c->r[19] < c->r[12]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[18] = c->r[18] + 0xffffffffu; if (_c) goto L_08a1fe9c; }
    c->r[2] = mem_r32(ram, c->r[12] + 0x00000000u);
    if (c->r[2] == 0u) { c->r[12] = c->r[12] + 0xfffffffcu; goto L_08a1fe84; }
L_08a1fe9c:
    mem_w32(ram, c->r[20] + 0x00000010u, c->r[18]);
L_08a1fea0:
    c->r[3] = c->r[21] + 0u;
L_08a1fea4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a1fc88 */
}

/* func_08a22f18  0x08a22f18..0x08a23094  380 bytes, source=sweep */
void func_08a22f18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a22f18u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    c->r[4] = c->r[17] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    { c->r[31] = 0x08a22f48u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); func_08a22eb0(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[19] + 0u; if (_c) goto L_08a23078; }
    { int _c = ((s32)c->r[2] < 0); c->r[16] = 0u + 0u; if (_c) goto L_08a23064; }
L_08a22f58:
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000004u);
    { c->r[31] = 0x08a22f64u; c->r[4] = c->r[19] + 0u; func_08a225c0(c, ram); }
    c->r[10] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[12] = c->r[2] + 0u;
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[16]);
    c->r[8] = c->r[17] + 0x00000014u;
    c->r[6] = c->r[18] + 0x00000014u;
    c->r[3] = c->r[3] << 2;
    c->r[2] = c->r[10] << 2;
    c->r[13] = c->r[8] + c->r[2];
    c->r[11] = c->r[6] + c->r[3];
    c->r[7] = c->r[12] + 0x00000014u;
    c->r[9] = 0u + 0u;
L_08a22f94:
    c->r[4] = mem_r32(ram, c->r[8] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000004u;
    c->r[2] = c->r[4] & 0xffffu;
    c->r[3] = c->r[5] & 0xffffu;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] + c->r[9];
    c->r[5] = c->r[5] >> 16;
    c->r[4] = c->r[4] >> 16;
    c->r[9] = (u32)((s32)c->r[3] >> 16);
    c->r[4] = c->r[4] - c->r[5];
    c->r[5] = c->r[4] + c->r[9];
    c->r[2] = (c->r[6] < c->r[11]) ? 1u : 0u;
    mem_w16(ram, c->r[7] + 0x00000002u, c->r[5]);
    c->r[8] = c->r[8] + 0x00000004u;
    c->r[9] = (u32)((s32)c->r[5] >> 16);
    mem_w16(ram, c->r[7] + 0x00000000u, c->r[3]);
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[7] + 0x00000004u; if (_c) goto L_08a22f94; }
    c->r[2] = (c->r[8] < c->r[13]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[7] = c->r[7] + 0xfffffffcu; goto L_08a23024; }
L_08a22fec:
    c->r[2] = mem_r32(ram, c->r[8] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000004u;
    c->r[4] = (c->r[8] < c->r[13]) ? 1u : 0u;
    c->r[3] = c->r[2] & 0xffffu;
    c->r[3] = c->r[3] + c->r[9];
    c->r[9] = (u32)((s32)c->r[3] >> 16);
    c->r[2] = c->r[2] >> 16;
    c->r[5] = c->r[2] + c->r[9];
    mem_w16(ram, c->r[7] + 0x00000002u, c->r[5]);
    c->r[9] = (u32)((s32)c->r[5] >> 16);
    mem_w16(ram, c->r[7] + 0x00000000u, c->r[3]);
    { int _c = (c->r[4] != 0u); c->r[7] = c->r[7] + 0x00000004u; if (_c) goto L_08a22fec; }
    c->r[7] = c->r[7] + 0xfffffffcu;
L_08a23024:
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000000u);
    if (c->r[2] != 0u) { mem_w32(ram, c->r[12] + 0x00000010u, c->r[10]); goto L_08a23044; }
L_08a23030:
    c->r[7] = c->r[7] + 0xfffffffcu;
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[10] = c->r[10] + 0xffffffffu; if (_c) goto L_08a23030; }
    mem_w32(ram, c->r[12] + 0x00000010u, c->r[10]);
L_08a23044:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[12] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a23064:
    c->r[12] = c->r[17] + 0u;
    c->r[16] = 0u + 0x00000001u;
    c->r[17] = c->r[18] + 0u;
    { c->r[18] = c->r[12] + 0u; goto L_08a22f58; }
L_08a23078:
    { c->r[31] = 0x08a23080u; c->r[5] = 0u + 0u; func_08a225c0(c, ram); }
    c->r[12] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[12] + 0x00000010u, c->r[2]);
    { mem_w32(ram, c->r[12] + 0x00000014u, 0u); goto L_08a23044; }
    return; /* fell out of func_08a22f18 */
}
