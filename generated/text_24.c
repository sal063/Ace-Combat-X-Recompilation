#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08805eb8  0x08805eb8..0x08805f00  72 bytes, source=sweep */
void func_08805eb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08805eb8u);
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
    { c->r[31] = 0x08805eecu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08806740(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08805eb8 */
}

/* func_08807100  0x08807100..0x0880723c  316 bytes, source=sweep */
void func_08807100(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08807100u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_08807158; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807158u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
L_08807158:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088071ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807188u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088071acu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
L_088071ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08807200; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088071dcu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807200u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
L_08807200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807228u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08807100 */
}

/* func_08808170  0x08808170..0x0880819c  44 bytes, source=sweep */
void func_08808170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808170u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08808170 */
}

/* func_0880ab6c  0x0880ab6c..0x0880ab8c  32 bytes, source=indirect */
void func_0880ab6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ab6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ab6c */
}

/* func_0880d3a8  0x0880d3a8..0x0880d3dc  52 bytes, source=sweep */
void func_0880d3a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d3a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000148u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d3a8 */
}

/* func_0880e37c  0x0880e37c..0x0880e538  444 bytes, source=fde */
void func_0880e37c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e37cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e3bc; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015a2u;
    { c->r[31] = 0x0880e3b4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880e524; }
L_0880e3bc:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ca0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e448; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e3dcu; c->r[4] = c->r[4] + 0x00000330u; func_089d9a3c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0880e3f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d9c80(c, ram); }
    c->r[3] = c->r[2] + 0x00000034u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0880e404u; c->r[5] = c->r[3] + 0u; func_08a1af70(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e410u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0880e428u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0880e448u; c->r[7] = c->r[7] + 0xffffeef0u; func_089d8ae4(c, ram); }
L_0880e448:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ca0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e524; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e468u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e4c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e490; }
    { goto L_0880e4ac; }
L_0880e490:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e4a4u; c->r[5] = c->r[5] + 0xffffe538u; func_0880f03c(c, ram); }
    { goto L_0880e4c0; }
L_0880e4ac:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e4c0u; c->r[5] = c->r[5] + 0xffffed14u; func_0880f03c(c, ram); }
L_0880e4c0:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003cd4u);
    c->r[2] = 0x08810000u;
    c->r[2] = c->r[2] + 0xffffe538u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e524; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e4e4u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    { c->r[31] = 0x0880e4f0u; c->r[4] = c->r[2] + 0u; func_0880de68(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e508; }
    { c->r[31] = 0x0880e500u; c->r[4] = 0u + 0x00000001u; func_08902cf4(c, ram); }
    { goto L_0880e524; }
L_0880e508:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001b54u;
    c->r[6] = 0x08810000u;
    { c->r[31] = 0x0880e524u; c->r[6] = c->r[6] + 0xffffe5b0u; func_0880f1d4(c, ram); }
L_0880e524:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0880e37c */
}

/* func_08811340  0x08811340..0x088113f8  184 bytes, source=sweep */
void func_08811340(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08811340u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088113d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_088113e8; }
L_088113d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
L_088113e8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08811340 */
}

/* func_08813ca0  0x08813ca0..0x088142a8  1544 bytes, source=fde */
void func_08813ca0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08813ca0u);
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
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813eb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08813d0c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_08813d34; }
    { goto L_08814290; }
L_08813d0c:
    c->r[2] = 0u + 0x00000019u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_08814074; }
    c->r[2] = 0u + 0x00000020u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[7] == c->r[2]); if (_c) goto L_08814164; }
    { goto L_08814290; }
L_08813d34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08813d60u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08813d78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x08813d98u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08967acc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813dd4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813dd4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813dd4; }
    { goto L_08813dec; }
L_08813dd4:
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08813de4u; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
    { goto L_08813e44; }
L_08813dec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813e34; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08813e10u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08813e20u; c->r[6] = 0u + 0x00000001u; func_089323c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08813e2cu; c->r[5] = 0u + 0x00000001u; func_08932484(c, ram); }
    { goto L_08813e44; }
L_08813e34:
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08813e44u; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
L_08813e44:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000e44u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08813e70; }
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08813e68u; c->r[6] = 0u + 0x00000003u; func_089323c0(c, ram); }
    { goto L_08813e80; }
L_08813e70:
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08813e80u; c->r[6] = 0u + 0x00000003u; func_08932330(c, ram); }
L_08813e80:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08813e94u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08813ea8u; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
    { goto L_08814290; }
L_08813eb0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08813ec0u; c->r[5] = 0u + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08813ed4u; c->r[5] = 0u + 0x00000001u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08813ef0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814290; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08814058; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08813f24u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813fa4; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000021u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08813f44u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x08813f58u; c->r[5] = c->r[5] + 0x00000cccu; func_089c965c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000021u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00000cd2u, c->r[2]);
    { c->r[31] = 0x08813f6cu; c->r[4] = 0u + 0x0000000au; func_089691c4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08813f7cu; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08813f88u; c->r[4] = c->r[4] + 0x00000af4u; func_088145dc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08813f9cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08814290; }
L_08813fa4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08813fd0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000009u;
    { c->r[31] = 0x08813fc8u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08814290; }
L_08813fd0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814010; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000018u;
    { c->r[31] = 0x08814008u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08814290; }
L_08814010:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814290; }
    c->r[2] = 0u + 0x00000012u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000037u, c->r[2]);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000019u;
    { c->r[31] = 0x08814050u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08814290; }
L_08814058:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x0881406cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08814290; }
L_08814074:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08814084u; c->r[5] = 0u + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08814098u; c->r[5] = 0u + 0x00000001u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2b0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088140b4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x088140bcu; func_08902ea0(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff29cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814120; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000021u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff2a4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08814120u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_08814120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814150; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00001400u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff2a4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08814150u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_08814150:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881415cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08814290; }
L_08814164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881417cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08814190u; c->r[5] = 0u + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088141a4u; c->r[5] = 0u + 0x00000001u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088141f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088141f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088141f4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x088141f4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_088141f4:
    { c->r[31] = 0x088141fcu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08814264; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000021u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814264; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814264; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000009u, c->r[3]);
    { c->r[31] = 0x08814234u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0893029c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881424cu; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08814258u; c->r[5] = 0u + 0x00000001u; func_08932484(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08814264u; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
L_08814264:
    { c->r[31] = 0x0881426cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08814290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
L_08814290:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08813ca0 */
}

/* func_08819458  0x08819458..0x088194c4  108 bytes, source=sweep */
void func_08819458(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819458u);
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
    { c->r[31] = 0x08819494u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088194b0u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819458 */
}

/* func_0881ce88  0x0881ce88..0x0881ced0  72 bytes, source=residue */
void func_0881ce88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881ce88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881ce88 */
}

/* func_08820f30  0x08820f30..0x08820f58  40 bytes, source=sweep */
void func_08820f30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820f30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820f30 */
}

/* func_08826b24  0x08826b24..0x08826b58  52 bytes, source=sweep */
void func_08826b24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826b24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b8du, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826b24 */
}

/* func_08828918  0x08828918..0x08828974  92 bytes, source=fde */
void func_08828918(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08828918u);
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
    { c->r[31] = 0x08828958u; c->r[6] = 0u + 0x000019e8u; func_089d9d14(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08828918 */
}

/* func_0882c0e4  0x0882c0e4..0x0882c1ec  264 bytes, source=fde */
void func_0882c0e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882c0e4u);
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
    c->r[5] = 0u + 0x00000041u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0882c128u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882c144u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882c1d4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882c168u; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000e38u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882c1b4; }
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0882c1b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0882c1c4u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0882c1d4u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
L_0882c1d4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0882c0e4 */
}

/* func_08830f6c  0x08830f6c..0x088310d4  360 bytes, source=fde */
void func_08830f6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08830f6cu);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08831020; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08830fa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08830fc0; }
    { goto L_08831014; }
L_08830fc0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08831004; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08830ff0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_08968e8c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08831004; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088310bc; }
L_08831004:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08830fa8; }
L_08831014:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088310bc; }
L_08831020:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08831028:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883104c; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0883104c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08831060; }
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08831060:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883107c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088310bc; }
L_0883107c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08831028; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088310acu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_08968e8c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08831028; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088310bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08830f6c */
}

/* func_08832c7c  0x08832c7c..0x08832cc4  72 bytes, source=fde */
void func_08832c7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832c7cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08832cb0u; c->r[4] = c->r[2] + 0u; func_08937f80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832c7c */
}

/* func_0883503c  0x0883503c..0x08835088  76 bytes, source=fde */
void func_0883503c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883503cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08835060u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08830940(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x0000140cu;
    { c->r[31] = 0x08835074u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883503c */
}

/* func_08838bd8  0x08838bd8..0x08838cc0  232 bytes, source=fde */
void func_08838bd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08838bd8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08838c10u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08838ca8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08838c3cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08838c94; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000009du;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08838c6cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000034u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08838c88u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08838c94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08838ca8u; c->r[5] = 0u + 0x00000002u; func_08937a50(c, ram); }
L_08838ca8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08838bd8 */
}

/* func_0883bda0  0x0883bda0..0x0883bf44  420 bytes, source=fde */
void func_0883bda0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883bda0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bdcc; }
    { goto L_0883bf30; }
L_0883bdcc:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004874u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883be2c; }
    c->r[4] = 0u + 0x00000012u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08a80000u;
    { c->r[31] = 0x0883be00u; c->r[9] = mem_r32(ram, c->r[9] + 0x000048dcu); func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883be14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e08u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e0cu, 0u);
L_0883be2c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004874u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883bf30; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e08u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883be58u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883bf30; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e0cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883bed4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bea0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883beb8; }
    { goto L_0883bf30; }
L_0883bea0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883bef0; }
    { goto L_0883bf30; }
L_0883beb8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883beccu; c->r[5] = c->r[5] + 0xffffbd04u; func_0880f03c(c, ram); }
    { goto L_0883bf30; }
L_0883bed4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bee8u; c->r[5] = c->r[5] + 0xffffbb20u; func_0880f03c(c, ram); }
    { goto L_0883bf30; }
L_0883bef0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004894u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883bf1c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bf14u; c->r[5] = c->r[5] + 0xffffb17cu; func_0880f03c(c, ram); }
    { goto L_0883bf30; }
L_0883bf1c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bf30u; c->r[5] = c->r[5] + 0xffffbb20u; func_0880f03c(c, ram); }
L_0883bf30:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883bda0 */
}

/* func_08845528  0x08845528..0x088455a8  128 bytes, source=sweep */
void func_08845528(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08845528u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
L_08845548:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08845568u; c->r[6] = c->r[3] + 0u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845578; }
    { goto L_08845590; }
L_08845578:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08845548; }
L_08845590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08845528 */
}

/* func_08847390  0x08847390..0x08847534  420 bytes, source=fde */
void func_08847390(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08847390u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f2cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08847454; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f10u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08847454; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002120u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002124u);
    c->r[4] = c->r[30] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x088473ecu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002128u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08847410u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08847424u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x08847438u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[30] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08847454u; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
L_08847454:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f10u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08847520; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f28u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08847520; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002120u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002124u);
    c->r[4] = c->r[30] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0884749cu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088474bcu; c->f[15] = mem_rf32(ram, c->r[1] + 0x00004f34u); func_0880d140(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088474dc; }
    { goto L_08847520; }
L_088474dc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088474f0u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x08847504u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[30] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08847520u; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
L_08847520:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08847390 */
}

/* func_0884c668  0x0884c668..0x0884c6d4  108 bytes, source=sweep */
void func_0884c668(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c668u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    vfpu_exec(c, ram, 0xd8440000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8450010u); /* lv.q */
    vfpu_exec(c, ram, 0xd8460020u); /* lv.q */
    vfpu_exec(c, ram, 0xd8470030u); /* lv.q */
    vfpu_exec(c, ram, 0xd0008420u); /* vmov.t */
    vfpu_exec(c, ram, 0xd0008521u); /* vmov.t */
    vfpu_exec(c, ram, 0xd0008622u); /* vmov.t */
    vfpu_exec(c, ram, 0xd0028708u); /* vneg.t */
    vfpu_exec(c, ram, 0xdc00f040u); /* vpfxs */
    vfpu_exec(c, ram, 0xd00087a3u); /* vmov.q */
    vfpu_exec(c, ram, 0xf1088403u); /* vtfm3.t */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8610010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8620020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8630030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c668 */
}

/* func_0884dec4  0x0884dec4..0x0884dee8  36 bytes, source=sweep */
void func_0884dec4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884dec4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff90b0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884dec4 */
}

/* func_08853c34  0x08853c34..0x08854034  1024 bytes, source=fde */
void func_08853c34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08853c34u);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08853d28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853c90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853ca8; }
    { goto L_08854020; }
L_08853c90:
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08853d8c; }
    { goto L_08854020; }
L_08853ca8:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff8e24u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000028f8u;
    { c->r[31] = 0x08853cc8u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff8e24u);
    c->r[7] = 0x08a90000u;
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[7] + 0xffff8e26u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002908u;
    { c->r[31] = 0x08853cf0u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08853d10u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x08853d20u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    { goto L_08854020; }
L_08853d28:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff90c0u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90c0u, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff90c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002920u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08853d6c; }
    { goto L_08854020; }
L_08853d6c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002920u);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff90c0u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffff90c0u, c->f[0]); goto L_08854020; }
L_08853d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]);
    { c->r[31] = 0x08853d9cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000210u); func_08808280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08853db4u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08853dc0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002924u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002924u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00002924u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x08853df0u; c->f[14] = c->f[2]; func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000210u);
    { c->r[31] = 0x08853e04u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08853e58u; c->r[5] = 0u + 0x00000020u; func_0885a338(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854020; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000040u);
    { c->r[31] = 0x08853e78u; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853e88u; c->r[5] = c->r[5] + 0x00002918u; func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000214u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854020; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08853ea8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000214u); func_089b9b8c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000218u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff8e24u);
    mem_w32(ram, c->r[30] + 0x0000021cu, c->r[2]);
    c->r[2] = 0u + 0x0000001au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000021cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08853f94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000021cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853eec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000021cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853f14; }
    { goto L_08854020; }
L_08853eec:
    c->r[2] = 0u + 0x0000001bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000021cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08853f14; }
    c->r[2] = 0u + 0x0000001du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000021cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08853fd0; }
    { goto L_08854020; }
L_08853f14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002924u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002924u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00002924u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x08853f68u; c->f[14] = c->f[2]; func_0881a114(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_08854020; }
L_08853f94:
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x08853fa0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08853fb4u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000044u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08853fc8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000218u); func_0884c6d4(c, ram); }
    { goto L_08854020; }
L_08853fd0:
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x08853fdcu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff90c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002920u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002928u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885400cu; c->f[12] = c->f[0]; func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08854020u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000218u); func_0884c6d4(c, ram); }
L_08854020:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_08853c34 */
}

/* func_08858824  0x08858824..0x08858880  92 bytes, source=fde */
void func_08858824(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858824u);
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
    { c->r[31] = 0x08858864u; c->r[6] = 0u + 0x000019e8u; func_089d9d14(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08858824 */
}

/* func_0885a72c  0x0885a72c..0x0885a754  40 bytes, source=sweep */
void func_0885a72c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a72cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a72c */
}

/* func_0885b378  0x0885b378..0x0885b398  32 bytes, source=sweep */
void func_0885b378(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b378u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885b378 */
}

/* func_08861270  0x08861270..0x088612d4  100 bytes, source=fde */
void func_08861270(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861270u);
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
    { c->r[31] = 0x088612c0u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_088614d0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08861270 */
}

/* func_088622e4  0x088622e4..0x08862314  48 bytes, source=sweep */
void func_088622e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088622e4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08862300u; c->r[5] = 0u | 0xffffu; func_08860a74(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088622e4 */
}

/* func_088663bc  0x088663bc..0x0886672c  880 bytes, source=fde */
void func_088663bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088663bcu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886640c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08866404u; c->r[5] = c->r[2] + 0u; func_08867a08(c, ram); }
    { goto L_08866714; }
L_0886640c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866434; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886642cu; c->r[6] = 0u + 0x00000004u; func_08a19db8(c, ram); }
    { goto L_08866444; }
L_08866434:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08866440u; c->r[4] = c->r[2] + 0u; func_08866378(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000010u, 0u);
L_08866444:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000001bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866478; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866478; }
    { goto L_08866714; }
L_08866478:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0886648cu; c->r[5] = c->r[2] + 0u; func_08867a08(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000014u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088664dc; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088664d4u; c->r[5] = c->r[2] + 0u; func_08826ac8(c, ram); }
    { goto L_08866518; }
L_088664dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886650cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08866518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08866558u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088665a4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088665f0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0886663cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08866688u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088666d4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000318cu);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000016u, 0u);
    { c->r[31] = 0x08866714u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088662e0(c, ram); }
L_08866714:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088663bc */
}

/* func_0886dbd8  0x0886dbd8..0x0886df34  860 bytes, source=fde */
void func_0886dbd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886dbd8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886dc04u; c->r[4] = c->r[4] + 0x00003444u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886dd88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000258u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0886dc44u; c->r[6] = 0u + 0x00000188u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000258u;
    mem_w32(ram, c->r[3] + 0x000003e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886dc68u; c->r[6] = mem_r32(ram, c->r[2] + 0x000003e0u); func_0886b8a0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886dc74u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886dc94; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_0886dc94:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886dca0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886dce0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000029u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886dcd8u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    { goto L_0886dd70; }
L_0886dce0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886dcecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886dd24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886dd00u; c->r[4] = mem_r32(ram, c->r[2] + 0x000003e0u); func_0886daa8(c, ram); }
    c->r[4] = 0u + 0x00000029u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886dd1cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_0886dd70; }
L_0886dd24:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886dd30u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886dd64; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886dd4cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886dd64; }
    { goto L_0886dd70; }
L_0886dd64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886dd70u; c->r[4] = mem_r32(ram, c->r[2] + 0x000003e0u); func_0886daa8(c, ram); }
L_0886dd70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000003e0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886dd90; }
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_0886df18; }
L_0886dd88:
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_0886df18; }
L_0886dd90:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886dd9cu; c->r[4] = c->r[4] + 0x0000347cu; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbe50u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbe50u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886ddc0; }
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_0886df18; }
L_0886ddc0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886ddccu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886ddf4; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886ddecu; c->r[4] = c->r[4] + 0x00003488u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[16] + 0x000003ecu, c->r[2]);
L_0886ddf4:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886de00u; c->r[4] = c->r[4] + 0x00003494u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886de14u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886de28u; c->r[5] = c->r[3] + 0u; func_088bf6ec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886df08; }
    mem_w8(ram, c->r[30] + 0x00000018u, 0u);
L_0886de3c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886de54; }
    { goto L_0886df10; }
L_0886de54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886dea8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000003e0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000138u);
    c->r[2] = 0u - c->r[3];
    c->r[3] = alx_max(c->r[3], c->r[2]);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]); goto L_0886dec4; }
L_0886dea8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
L_0886dec4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886def8; }
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_0886df18; }
L_0886def8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0886de3c; }
L_0886df08:
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_0886df18; }
L_0886df10:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0886df18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0886dbd8 */
}

/* func_08871a4c  0x08871a4c..0x08871e90  1092 bytes, source=fde */
void func_08871a4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08871a4cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08871a7cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000f8u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08871a98u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08871ab4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x08871aacu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
L_08871ab4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000036a0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08871ad0u; c->r[7] = mem_r32(ram, c->r[7] + 0x000036a4u); func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08871ae0; }
    { goto L_08871b48; }
L_08871ae0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871b0c; }
    { goto L_08871b2c; }
L_08871b0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036a8u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]); goto L_08871b48; }
L_08871b2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036a8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]);
L_08871b48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000d4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08871bb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000058u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_08871bb4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f0u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036acu);
    c->f[0] = c->f[0] - c->f[1];
    c->f[0] = c->f[2] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036b0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036b4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871c24; }
    { goto L_08871c38; }
L_08871c24:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036b8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_08871c38:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871c58; }
    { goto L_08871c6c; }
L_08871c58:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000036bcu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_08871c6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08871dec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871c9c; }
    { goto L_08871cf8; }
L_08871c9c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036c0u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003940u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08871cd0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000048u); func_08a0f5bc(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036acu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_08871d74; }
L_08871cf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871d1c; }
    { goto L_08871d74; }
L_08871d1c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036c0u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003960u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08871d50u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000048u); func_08a0f5bc(c, ram); }
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036acu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_08871d74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871db4; }
    { goto L_08871ddc; }
L_08871db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_08871dec; }
L_08871ddc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_08871dec:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x000000dcu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08871e0cu; c->r[4] = 0u + 0u; func_0887b998(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000dcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000dcu);
    mem_wf32(ram, c->r[3] + 0x00000130u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08871e5c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000130u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000130u, c->f[0]);
L_08871e5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000130u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000130u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08871a4c */
}

/* func_0887bed0  0x0887bed0..0x0887bf28  88 bytes, source=sweep */
void func_0887bed0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887bed0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887bf14; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887bf14; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0887bf14u; c->r[4] = c->r[4] + 0xffffbe60u; func_08808240(c, ram); }
L_0887bf14:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887bed0 */
}

/* func_0887f9a0  0x0887f9a0..0x0887fed0  1328 bytes, source=fde */
void func_0887f9a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887f9a0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0u + 0xffffffffu;
    { c->r[31] = 0x0887f9d0u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_0895bafc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000039d8u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[5]);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[6]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffffbec0u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887fa1c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbec0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbec0u, c->r[2]);
L_0887fa1c:
    mem_w8(ram, c->r[30] + 0x00000014u, 0u);
L_0887fa20:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fa38; }
    { goto L_0887feb8; }
L_0887fa38:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887fa70; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]); goto L_0887fa74; }
L_0887fa70:
    mem_w8(ram, c->r[30] + 0x00000015u, 0u);
L_0887fa74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fad0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fad0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0887fac8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_0887fea8; }
L_0887fad0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fe64; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000039dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0887fb00u: goto L_0887fb00; case 0x0887fb98u: goto L_0887fb98; case 0x0887fc30u: goto L_0887fc30; case 0x0887fd5cu: goto L_0887fd5c; case 0x0887fdf4u: goto L_0887fdf4; case 0x0887fe2cu: goto L_0887fe2c; default: recomp_trap_unknown_indirect(c, ram, 0x0887faf8u, _t); return; } }
L_0887fb00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fb34; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fb34; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0003u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0887fe64; }
L_0887fb34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fe64; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fe64; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0887fb90u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_0887fe64; }
L_0887fb98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fbcc; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fbcc; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0887fe64; }
L_0887fbcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fe64; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fe64; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0887fc28u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_0887fe64; }
L_0887fc30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000220u);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fce8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fce8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887fc5cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fc90; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887fc74u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x005bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[3]); goto L_0887fca4; }
L_0887fc90:
    c->r[4] = 0x31000000u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[5] | 0x005du;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[5]);
L_0887fca4:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887fcb8u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = 0x31000000u;
    c->r[3] = c->r[3] | 0x0064u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0887fce0u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_0887fe64; }
L_0887fce8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000220u);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fe64; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887fe64; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0887fd54u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_0887fe64; }
L_0887fd5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fd90; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fd90; }
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x0081u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0887fe64; }
L_0887fd90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887fe64; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fe64; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0887fdecu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_0887fe64; }
L_0887fdf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fe64; }
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffffbec0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0887fe64; }
    c->r[2] = 0x30000000u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000001eu;
    c->r[1] = 0x08a90000u;
    { mem_w8(ram, c->r[1] + 0xffffbec0u, c->r[2]); goto L_0887fe64; }
L_0887fe2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887fe64; }
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffffbec0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0887fe64; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000001eu;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbec0u, c->r[2]);
L_0887fe64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887fea8; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0887fea4u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0887fea8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0887fa20; }
L_0887feb8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0887f9a0 */
}

/* func_08883394  0x08883394..0x088833b8  36 bytes, source=sweep */
void func_08883394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883394u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe6b8u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08883394 */
}

/* func_0888b7c8  0x0888b7c8..0x0888b810  72 bytes, source=sweep */
void func_0888b7c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b7c8u);
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
    { c->r[31] = 0x0888b7fcu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0888bc94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b7c8 */
}

/* func_0888c41c  0x0888c41c..0x0888c460  68 bytes, source=sweep */
void func_0888c41c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c41cu);
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
    { c->r[31] = 0x0888c44cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c41c */
}

/* func_0888d008  0x0888d008..0x0888d05c  84 bytes, source=sweep */
void func_0888d008(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d008u);
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
    { c->r[31] = 0x0888d048u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d008 */
}

/* func_0888e868  0x0888e868..0x0888eae4  636 bytes, source=fde */
void func_0888e868(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888e868u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e89c; }
    { goto L_0888ead0; }
L_0888e89c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888e8e4u; c->r[5] = 0u + 0x00000007u; func_0888b894(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888e92cu; c->r[5] = 0u + 0xffffffffu; func_0888be2c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0888e98cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0888e9ecu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0888ea00u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0888ea14u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[3] + 0x000000a4u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0888ea40u; c->r[9] = 0u + 0x00000001u; func_089ebe90(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ea88u; c->r[5] = 0u + 0x00000007u; func_0888b858(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ead0u; c->r[5] = 0u + 0u; func_0888be2c(c, ram); }
L_0888ead0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888e868 */
}

/* func_08893690  0x08893690..0x08893a20  912 bytes, source=fde */
void func_08893690(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08893690u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088936c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088936e8; }
    { goto L_08893a08; }
L_088936e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088936f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08893710; }
    { goto L_088939f8; }
L_08893710:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088937b0; }
    { c->r[31] = 0x08893758u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884bfd0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08893764u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_0884bfd0(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08893774u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08893784u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08893798u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088937a8u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_088939c0; }
L_088937b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088937e0; }
    { goto L_088937f0; }
L_088937e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]); goto L_088937fc; }
L_088937f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
L_088937fc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08893838; }
    { goto L_08893848; }
L_08893838:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]); goto L_08893854; }
L_08893848:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_08893854:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08893890; }
    { goto L_088938a0; }
L_08893890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]); goto L_088938ac; }
L_088938a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
L_088938ac:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088938e8; }
    { goto L_088938f8; }
L_088938e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    { mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]); goto L_08893904; }
L_088938f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_08893904:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08893940; }
    { goto L_08893950; }
L_08893940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    { mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]); goto L_0889395c; }
L_08893950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
L_0889395c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_wf32(ram, c->r[2] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08893998; }
    { goto L_088939a8; }
L_08893998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    { mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]); goto L_088939b4; }
L_088939a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
L_088939b4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]);
L_088939c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_088936f0; }
L_088939f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088936c8; }
L_08893a08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08893690 */
}

/* func_08899648  0x08899648..0x0889967c  52 bytes, source=sweep */
void func_08899648(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899648u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899648 */
}

/* func_0889a5a8  0x0889a5a8..0x0889a654  172 bytes, source=sweep */
void func_0889a5a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a5a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889a608; }
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
    { c->r[31] = 0x0889a600u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_0889a728(c, ram); }
    { goto L_0889a640; }
L_0889a608:
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
    { c->r[31] = 0x0889a640u; c->r[8] = c->r[2] + 0u; func_0889a728(c, ram); }
L_0889a640:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a5a8 */
}

/* func_0889efc8  0x0889efc8..0x0889f00c  68 bytes, source=sweep */
void func_0889efc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889efc8u);
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
    { c->r[31] = 0x0889eff8u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889efc8 */
}

/* func_0889fe08  0x0889fe08..0x0889fe8c  132 bytes, source=sweep */
void func_0889fe08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fe08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = mem_r16(ram, c->r[1] + 0x000008dau);
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w16(ram, c->r[1] + 0x000008dau, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[3] + 0x000008dau);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w16(ram, c->r[1] + 0x000008dau, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889fe08 */
}

/* func_088a4164  0x088a4164..0x088a41a8  68 bytes, source=sweep */
void func_088a4164(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4164u);
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
    { c->r[31] = 0x088a4194u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4164 */
}

/* func_088ad8b0  0x088ad8b0..0x088adad0  544 bytes, source=sweep */
void func_088ad8b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ad8b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088adabc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000469cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088ad8fcu: goto L_088ad8fc; case 0x088ad910u: goto L_088ad910; case 0x088ad924u: goto L_088ad924; case 0x088ad938u: goto L_088ad938; case 0x088ad94cu: goto L_088ad94c; case 0x088ad960u: goto L_088ad960; case 0x088ad974u: goto L_088ad974; case 0x088ad988u: goto L_088ad988; case 0x088ad99cu: goto L_088ad99c; case 0x088ad9b0u: goto L_088ad9b0; case 0x088ad9c4u: goto L_088ad9c4; case 0x088ad9d8u: goto L_088ad9d8; case 0x088ad9ecu: goto L_088ad9ec; case 0x088ada00u: goto L_088ada00; case 0x088ada18u: goto L_088ada18; case 0x088ada30u: goto L_088ada30; case 0x088ada48u: goto L_088ada48; case 0x088ada60u: goto L_088ada60; case 0x088ada74u: goto L_088ada74; case 0x088ada88u: goto L_088ada88; case 0x088ada9cu: goto L_088ada9c; case 0x088adab0u: goto L_088adab0; default: recomp_trap_unknown_indirect(c, ram, 0x088ad8f4u, _t); return; } }
L_088ad8fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad908u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adad0(c, ram); }
    { goto L_088adabc; }
L_088ad910:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad91cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adb14(c, ram); }
    { goto L_088adabc; }
L_088ad924:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad930u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adf60(c, ram); }
    { goto L_088adabc; }
L_088ad938:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad944u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adb58(c, ram); }
    { goto L_088adabc; }
L_088ad94c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad958u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adb9c(c, ram); }
    { goto L_088adabc; }
L_088ad960:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad96cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adbe0(c, ram); }
    { goto L_088adabc; }
L_088ad974:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad980u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adc24(c, ram); }
    { goto L_088adabc; }
L_088ad988:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad994u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adc68(c, ram); }
    { goto L_088adabc; }
L_088ad99c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad9a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adcac(c, ram); }
    { goto L_088adabc; }
L_088ad9b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad9bcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adcf0(c, ram); }
    { goto L_088adabc; }
L_088ad9c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad9d0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088add34(c, ram); }
    { goto L_088adabc; }
L_088ad9d8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad9e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088add78(c, ram); }
    { goto L_088adabc; }
L_088ad9ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ad9f8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088addbc(c, ram); }
    { goto L_088adabc; }
L_088ada00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ada10u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ade00(c, ram); }
    { goto L_088adabc; }
L_088ada18:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088ada28u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ade00(c, ram); }
    { goto L_088adabc; }
L_088ada30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088ada40u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ade00(c, ram); }
    { goto L_088adabc; }
L_088ada48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088ada58u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ade00(c, ram); }
    { goto L_088adabc; }
L_088ada60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ada6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ade50(c, ram); }
    { goto L_088adabc; }
L_088ada74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ada80u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ade94(c, ram); }
    { goto L_088adabc; }
L_088ada88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ada94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088aded8(c, ram); }
    { goto L_088adabc; }
L_088ada9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088adaa8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088adf1c(c, ram); }
    { goto L_088adabc; }
L_088adab0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088adabcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088ae00c(c, ram); }
L_088adabc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ad8b0 */
}

/* func_088b0d88  0x088b0d88..0x088b1664  2268 bytes, source=fde */
void func_088b0d88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b0d88u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0u + 0x00000050u;
    { c->r[31] = 0x088b0db4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b0e10; }
L_088b0de0:
    { c->r[31] = 0x088b0de8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b0de0; }
L_088b0e10:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047d0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000047d4u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000047d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088b0e44u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047d0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000047d0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000047d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088b0e98u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000047d0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000047d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088b0eecu; c->f[15] = c->f[2]; func_0880d140(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000047d4u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000047d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088b0f40u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
L_088b0f64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b0f7c; }
    { goto L_088b107c; }
L_088b0f7c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x088b0facu; c->r[6] = c->r[6] + 0xffffc0d0u; func_0884c26c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]); goto L_088b0f64; }
L_088b107c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b112cu; c->r[5] = 0u + 0x0000000au; func_088b1f98(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1174u; c->r[5] = 0u + 0x00000001u; func_088b1f98(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b11bcu; c->r[5] = 0u + 0x00000001u; func_088b20b0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1204u; c->r[5] = 0u + 0x00000005u; func_088b1f98(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1250u; c->r[5] = c->r[5] | 0x019eu; func_088b1ee0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088b1264u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8bc8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b1280u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b128cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b1298u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088b12a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b12cc; }
    { goto L_088b1530; }
L_088b12cc:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047dcu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[6] + 0x00000000u, c->f[0]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047dcu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[6] + 0x00000004u, c->f[0]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047dcu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[1];
    { c->r[31] = 0x088b13a8u; mem_wf32(ram, c->r[6] + 0x00000008u, c->f[0]); func_088820b0(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x088b13bcu; c->r[6] = c->r[2] + 0u; func_0888d510(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047d8u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b141cu; c->r[6] = c->r[3] + 0u; func_088b1fd4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088b1478u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088b14d4u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1520u; c->r[5] = c->r[5] | 0x0004u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088b12a8; }
L_088b1530:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1578u; c->r[5] = 0u + 0u; func_088b20b0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b15c0u; c->r[5] = 0u + 0x00000005u; func_088b1f5c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1608u; c->r[5] = 0u + 0x00000001u; func_088b1f5c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1650u; c->r[5] = 0u + 0x0000000au; func_088b1f5c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_088b0d88 */
}

/* func_088b2bec  0x088b2bec..0x088b2c30  68 bytes, source=sweep */
void func_088b2bec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2becu);
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
    { c->r[31] = 0x088b2c1cu; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2bec */
}

/* func_088b8710  0x088b8710..0x088b94f4  3556 bytes, source=fde */
void func_088b8710(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b8710u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w8(ram, c->r[30] + 0x00000002u, 0u);
    mem_w8(ram, c->r[30] + 0x00000003u, 0u);
    mem_w8(ram, c->r[30] + 0x00000004u, 0u);
    { c->r[31] = 0x088b8738u; mem_w8(ram, c->r[30] + 0x00000005u, 0u); func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8750; }
    { c->r[31] = 0x088b8748u; func_08854c28(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000003u, c->r[2]); goto L_088b8760; }
L_088b8750:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088b875cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000003u, c->r[2]);
L_088b8760:
    { c->r[31] = 0x088b8768u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffffbf30u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffffbf50u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000014u, 0u);
    mem_w8(ram, c->r[30] + 0x00000015u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a3cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000003u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a40u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_088b87c4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088b87c4:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b87c8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b87e0; }
    { goto L_088b8e88; }
L_088b87e0:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff93f0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b8820u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8e58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8864; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8864; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]);
L_088b8864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9900u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b88b8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088b88d8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088b88f0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000018u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b88fcu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a40u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b8924; }
    { goto L_088b8934; }
L_088b8924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8954; }
L_088b8934:
    { c->r[31] = 0x088b893cu; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8994; }
    { c->r[31] = 0x088b894cu; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8994; }
L_088b8954:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8e78; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b898cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088b8e78; }
L_088b8994:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x000000b0u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006c14u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x088b89e0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { c->r[31] = 0x088b89f4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x088b8a00u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088b8a34u; c->r[7] = c->r[2] + 0u; func_088ba2e8(c, ram); }
    { c->r[31] = 0x088b8a3cu; mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]); func_08820f58(c, ram); }
    { c->r[31] = 0x088b8a44u; c->r[16] = c->r[2] + 0x00000020u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x088b8a58u; c->r[6] = c->r[2] + 0u; func_088ba4f4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a44u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8a94; }
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbb08u);
    { mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]); goto L_088b8a98; }
L_088b8a94:
    mem_w32(ram, c->r[30] + 0x0000005cu, 0u);
L_088b8a98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b8ab0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000080u);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a40u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b8b54; }
    { goto L_088b8b90; }
L_088b8b54:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a48u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a48u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]); goto L_088b8ba0; }
L_088b8b90:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_088b8ba0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8bc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000088u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8bc4; }
    { goto L_088b8c90; }
L_088b8bc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8bf0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b8bf0u; c->r[4] = c->r[2] + 0u; func_088b75fc(c, ram); }
L_088b8bf0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a4cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b8c14; }
    { goto L_088b8c58; }
L_088b8c14:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = c->r[2] + 0x00000020u;
    c->r[8] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[3] + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x088b8c54u; c->r[10] = 0u + 0xffffffffu; func_089f65a8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b8c58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b8db0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x00000089u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x0000008au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w16(ram, c->r[2] + 0x0000004cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { mem_w16(ram, c->r[2] + 0x0000004eu, 0u); goto L_088b8db0; }
L_088b8c90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b8ca4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f762c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b8ce4; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088b8cdcu; c->r[8] = c->r[2] + 0u; func_089f6b84(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]); goto L_088b8db0; }
L_088b8ce4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8d14; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b8d10u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b8d14:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a4cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b8d38; }
    { goto L_088b8d7c; }
L_088b8d38:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = c->r[2] + 0x00000020u;
    c->r[8] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[3] + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x088b8d78u; c->r[10] = 0u + 0xffffffffu; func_089f65a8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b8d7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8db0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x00000089u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x0000008au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w16(ram, c->r[2] + 0x0000004cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w16(ram, c->r[2] + 0x0000004eu, 0u);
L_088b8db0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088b8dd8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x088b8e0cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000058u); func_088b9bd0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000002u, c->r[2]); goto L_088b8e78; }
L_088b8e58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8e78; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b8e78u; c->r[4] = c->r[2] + 0u; func_088b75fc(c, ram); }
L_088b8e78:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b87c8; }
L_088b8e88:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9900u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b8eb0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8ec8; }
    { goto L_088b8ef0; }
L_088b8ec8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000c0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b8eb0; }
L_088b8ef0:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b8ef4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8f10; }
    { goto L_088b9024; }
L_088b8f10:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[2]);
L_088b8f18:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8f34; }
    { goto L_088b9014; }
L_088b8f34:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b8fac; }
    { goto L_088b9004; }
L_088b8fac:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000c0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088b9004:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000001u, c->r[2]); goto L_088b8f18; }
L_088b9014:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b8ef4; }
L_088b9024:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b9028:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b9040; }
    { goto L_088b91bc; }
L_088b9040:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9900u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b91a4; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b91a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a44u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[30] + 0x000000a4u;
    c->r[5] = c->r[30] + 0x00000080u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x088b9108u; c->r[4] = c->r[3] + 0u; func_088ba5c0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9128; }
    { goto L_088b9134; }
L_088b9128:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
L_088b9134:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9154; }
    { goto L_088b9160; }
L_088b9154:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
L_088b9160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9178; }
    { goto L_088b9184; }
L_088b9178:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x0000004cu, c->r[2]);
L_088b9184:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[1] = -c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a50u);
    c->f[0] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]); goto L_088b91ac; }
L_088b91a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w16(ram, c->r[2] + 0x0000004cu, 0u);
L_088b91ac:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b9028; }
L_088b91bc:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b91c0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b91d8; }
    { goto L_088b94dc; }
L_088b91d8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9900u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b9254u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b9298; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b94cc; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b9290u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088b94cc; }
L_088b9298:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b94c4; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b94c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a44u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088b933c; }
    { goto L_088b9370; }
L_088b933c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a48u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]); goto L_088b9380; }
L_088b9370:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
L_088b9380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b9470; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b93d8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b93d4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b93d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a4cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9400; }
    { goto L_088b944c; }
L_088b9400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b944c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000d0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x088b9448u; c->r[10] = 0u + 0xffffffffu; func_089f65a8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b944c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b94cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x0000004eu, c->r[2]); goto L_088b94cc; }
L_088b9470:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b9484u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f762c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b94cc; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088b94bcu; c->r[8] = c->r[2] + 0u; func_089f6b84(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]); goto L_088b94cc; }
L_088b94c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w16(ram, c->r[2] + 0x0000004eu, 0u);
L_088b94cc:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b91c0; }
L_088b94dc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_088b8710 */
}

/* func_088be5f4  0x088be5f4..0x088be6c4  208 bytes, source=sweep */
void func_088be5f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be5f4u);
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
    return; /* fell out of func_088be5f4 */
}

/* func_088bf2f8  0x088bf2f8..0x088bf340  72 bytes, source=sweep */
void func_088bf2f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf2f8u);
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
    { c->r[31] = 0x088bf32cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf2f8 */
}

/* func_088c2290  0x088c2290..0x088c2460  464 bytes, source=fde */
void func_088c2290(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2290u);
L_088c2290:
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
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (c->r[3] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c244c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004e28u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088c2290u: goto L_088c2290; case 0x088c22f4u: goto L_088c22f4; case 0x088c23f4u: goto L_088c23f4; case 0x088c244cu: goto L_088c244c; default: recomp_trap_unknown_indirect(c, ram, 0x088c22ecu, _t); return; } }
L_088c22f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088c2324; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c231cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088c244c; }
L_088c2324:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x088c2334u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c2340u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c234cu; c->r[5] = 0u + 0x00000001u; func_088679d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088c244c; }
    c->r[2] = 0u + 0x00000041u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000021u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9b24u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004d0cu;
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088c23a0u; c->r[8] = 0u + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9b44u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004d1cu;
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088c23ccu; c->r[8] = 0u + 0u; func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xffff9b24u;
    c->r[6] = 0x08aa0000u;
    c->r[6] = c->r[6] + 0xffff9b44u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088c23ecu; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088c244c; }
L_088c23f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c2400u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_08862cb4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c2438; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c2438; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_088c2438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[2] + 0x00000040u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
L_088c244c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088c2290 */
}

/* func_088c87a4  0x088c87a4..0x088c87fc  88 bytes, source=sweep */
void func_088c87a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c87a4u);
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
    { c->r[31] = 0x088c87e8u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_088c89b4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c87a4 */
}

/* func_088c9590  0x088c9590..0x088c9618  136 bytes, source=fde */
void func_088c9590(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c9590u);
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
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088c95c8u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c95e0u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[3] + 0x0000000du, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c9590 */
}

/* func_088d1054  0x088d1054..0x088d13a0  844 bytes, source=fde */
void func_088d1054(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d1054u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004eu);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d10b4u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d10c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d1224; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d10e0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d554(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d1224; }
L_088d10f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d1104; }
    { goto L_088d138c; }
L_088d1104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d111cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb8e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d1150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d1150; }
    { goto L_088d10f0; }
L_088d1150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d1168; }
    { goto L_088d10f0; }
L_088d1168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1188; }
    { goto L_088d10f0; }
L_088d1188:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d11a0; }
    { goto L_088d10f0; }
L_088d11a0:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d11acu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088d11c8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d11d4u; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d10f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088d121cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_088d0e2c(c, ram); }
    { goto L_088d10f0; }
L_088d1224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d1238; }
    { goto L_088d138c; }
L_088d1238:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d1250u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb8e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d1284; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d1284; }
    { goto L_088d1224; }
L_088d1284:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d12b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d12b8; }
    { goto L_088d1224; }
L_088d12b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d12d0; }
    { goto L_088d1224; }
L_088d12d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d12f0; }
    { goto L_088d1224; }
L_088d12f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d1308; }
    { goto L_088d1224; }
L_088d1308:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d1314u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088d1330u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d133cu; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d1224; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088d1384u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_088d0e2c(c, ram); }
    { goto L_088d1224; }
L_088d138c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088d1054 */
}

/* func_088d40cc  0x088d40cc..0x088d41e0  276 bytes, source=sweep */
void func_088d40cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d40ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d40f8; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088d41cc; }
L_088d40f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d4164; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000a6u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d4144; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d41cc; }
L_088d4144:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a6u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000000a6u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d41cc; }
L_088d4164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000a6u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d41b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000a8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d41cc; }
L_088d41b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a6u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000000a6u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088d41cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d40cc */
}

/* func_088d9824  0x088d9824..0x088d9878  84 bytes, source=sweep */
void func_088d9824(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d9824u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d985c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]); goto L_088d9868; }
L_088d985c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
L_088d9868:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d9824 */
}

/* func_088de438  0x088de438..0x088de480  72 bytes, source=sweep */
void func_088de438(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de438u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de45c; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088de46c; }
L_088de45c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088de46c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de438 */
}

/* func_088df3a4  0x088df3a4..0x088df414  112 bytes, source=sweep */
void func_088df3a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df3a4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df3c8; }
    { goto L_088df404; }
L_088df3c8:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000002du, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088df404; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    mem_w8(ram, c->r[2] + 0x0000002du, 0u);
L_088df404:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088df3a4 */
}

/* func_088e49fc  0x088e49fc..0x088e4cdc  736 bytes, source=sweep */
void func_088e49fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e49fcu);
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
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4bcc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4a60; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4a88; }
    { goto L_088e4cc4; }
L_088e4a60:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4c14; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4c90; }
    { goto L_088e4cc4; }
L_088e4a88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cfcu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cfcu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
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
    { c->r[31] = 0x088e4b30u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d00u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x0000003cu);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[5] + 0x00000038u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e4b84u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e4cc4; }
L_088e4bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e4bf0; }
    { goto L_088e4cc4; }
L_088e4bf0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e4cc4; }
L_088e4c14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e4c38; }
    { goto L_088e4cc4; }
L_088e4c38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e4c60u; func_0880d140(c, ram); }
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
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e4cc4; }
L_088e4c90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e4cc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e4cc4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e49fc */
}

/* func_088ea264  0x088ea264..0x088ea3e8  388 bytes, source=fde */
void func_088ea264(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ea264u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea2b8; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ea358; }
    { goto L_088ea3d0; }
L_088ea2b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000b4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ea304u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea340; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ea340u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8368(c, ram); }
L_088ea340:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0008u;
    { mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]); goto L_088ea3d0; }
L_088ea358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea378; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ea378u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e9658(c, ram); }
L_088ea378:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088ea3d0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0u + 0xfffffff7u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ea3c0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ea3d0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e952c(c, ram); }
L_088ea3d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ea264 */
}

/* func_088ef958  0x088ef958..0x088efa68  272 bytes, source=fde */
void func_088ef958(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ef958u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ef984u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088ef998u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ef9a4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088ef9b4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ef9c8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ef9e0u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efa00; }
    { goto L_088efa08; }
L_088efa00:
    { mem_w32(ram, c->r[30] + 0x00000074u, 0u); goto L_088efa50; }
L_088efa08:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    { c->r[31] = 0x088efa20u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_08a0f5bc(c, ram); }
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efa40; }
    { goto L_088efa4c; }
L_088efa40:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_088efa50; }
L_088efa4c:
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
L_088efa50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_088ef958 */
}

/* func_088f4f28  0x088f4f28..0x088f4f4c  36 bytes, source=sweep */
void func_088f4f28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4f28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f4f28 */
}

/* func_088fa06c  0x088fa06c..0x088fa180  276 bytes, source=fde */
void func_088fa06c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fa06cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x0000008du;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088fa0a8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088fa0b8u; c->r[4] = c->r[4] + 0x000062dcu; func_089c6f64(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffee50u;
    { c->r[31] = 0x088fa0c8u; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fa0e8; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000022bcu);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088fa0f4; }
L_088fa0e8:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000265cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088fa0f4:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088fa0f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000012u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fa110; }
    { goto L_088fa16c; }
L_088fa110:
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fa148; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088fa15c; }
L_088fa148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_088fa15c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088fa0f8; }
L_088fa16c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088fa06c */
}

/* func_08900810  0x08900810..0x08900940  304 bytes, source=fde */
void func_08900810(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900810u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089008b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08900878; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089008a0; }
    { goto L_0890092c; }
L_08900878:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890092c; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089008e4; }
    { goto L_0890092c; }
L_089008a0:
    { c->r[31] = 0x089008a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08900538(c, ram); }
    { goto L_0890092c; }
L_089008b0:
    { c->r[31] = 0x089008b8u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890092c; }
    { c->r[31] = 0x089008c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089006e0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x089008dcu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0890092c; }
L_089008e4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000647cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089008fcu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08900904u; func_08902ea0(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00006470u;
    c->r[5] = 0u + 0x000013dfu;
    { c->r[31] = 0x08900918u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08900924u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { c->r[31] = 0x0890092cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08900384(c, ram); }
L_0890092c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08900810 */
}

/* func_0890325c  0x0890325c..0x089032a0  68 bytes, source=sweep */
void func_0890325c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890325cu);
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
    return; /* fell out of func_0890325c */
}

/* func_0890665c  0x0890665c..0x08906904  680 bytes, source=sweep */
void func_0890665c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890665cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08906690; }
    { goto L_089068f0; }
L_08906690:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000013u;
    { c->r[31] = 0x089066a4u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba74u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006678u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000667cu);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x089066fcu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000eu);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[5] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08906848u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089068a4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089068f0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_089068f0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0890665c */
}

/* func_0890fafc  0x0890fafc..0x0890fb98  156 bytes, source=fde */
void func_0890fafc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890fafcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda8u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890fb30; }
    { goto L_0890fb84; }
L_0890fb30:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890fb6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x000000b8u;
    { c->r[31] = 0x0890fb64u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u); func_089ce0d0(c, ram); }
    { goto L_0890fb84; }
L_0890fb6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x000000b7u;
    { c->r[31] = 0x0890fb84u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u); func_089ce0d0(c, ram); }
L_0890fb84:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0890fafc */
}

/* func_0891cc80  0x0891cc80..0x0891ce94  532 bytes, source=fde */
void func_0891cc80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891cc80u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0891ccc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0891ccc0:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    { c->r[31] = 0x0891ccd8u; c->r[4] = c->r[2] + 0u; func_0896dc80(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006b30u;
    { c->r[31] = 0x0891ccf4u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x0891ccfcu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891cd34; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0891cd34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891cd4c; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0891cdac; }
L_0891cd4c:
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r8(ram, c->r[4] + 0xffffbbd1u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891cd80; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0891cdac; }
L_0891cd80:
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r8(ram, c->r[4] + 0xffffbbd0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891ce80; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0891cdac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000069u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x7f170000u;
    c->r[6] = c->r[6] | 0x177fu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0891cddcu; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0891cde8u; c->r[4] = c->r[2] + 0u; func_08a1b008(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000069u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891ce08u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891ce80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0x000000bbu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0x7f170000u;
    { c->r[31] = 0x0891ce80u; c->r[8] = c->r[8] | 0x177fu; func_089ce1e8(c, ram); }
L_0891ce80:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_0891cc80 */
}

/* func_08921298  0x08921298..0x089212dc  68 bytes, source=sweep */
void func_08921298(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921298u);
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
    { c->r[31] = 0x089212c8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921298 */
}

/* func_08921f64  0x08921f64..0x08922080  284 bytes, source=sweep */
void func_08921f64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921f64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d70u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08921f9cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08921fc0; }
    { goto L_08921fc8; }
L_08921fc0:
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08922068; }
L_08921fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006d70u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d74u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d78u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d74u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d7cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08922068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921f64 */
}

/* func_089250a4  0x089250a4..0x08925510  1132 bytes, source=fde */
void func_089250a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089250a4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
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
    { c->r[31] = 0x0892512cu; c->r[5] = c->r[5] | 0x0100u; func_089258bc(c, ram); }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08925138u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08933888(c, ram); }
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
    { c->r[31] = 0x08925180u; c->r[4] = c->r[2] + 0u; func_08925900(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08925194u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089251dcu; c->r[5] = 0u + 0x00000009u; func_08925974(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[4] = 0u + 0x00000018u;
    { c->r[31] = 0x089251ecu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006e84u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006e84u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e84u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089252a8; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089252a8; }
    { goto L_089252e8; }
L_089252a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0u + 0x00000110u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089252e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892530c; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892530c; }
    { goto L_089253ac; }
L_0892530c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0u + 0x000001e0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089253ac:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08925408u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08925464u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x04010000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089254b4u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089254fcu; c->r[5] = 0u + 0x00000009u; func_08925938(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089250a4 */
}

/* func_0892643c  0x0892643c..0x089264a0  100 bytes, source=sweep */
void func_0892643c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892643cu);
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
    { c->r[31] = 0x0892648cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892643c */
}

/* func_08929da0  0x08929da0..0x0892a044  676 bytes, source=fde */
void func_08929da0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08929da0u);
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
    { c->r[31] = 0x08929e20u; c->r[5] = c->r[5] | 0x0102u; func_0893365c(c, ram); }
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08929e3cu; c->r[5] = c->r[2] + 0u; func_08933804(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08929e84u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089336a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08929e98u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x08929eacu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08929eb8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08929f88u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08929fe4u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0892a030u; c->r[5] = c->r[5] | 0x0002u; func_0893365c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08929da0 */
}

/* func_08930178  0x08930178..0x08930208  144 bytes, source=sweep */
void func_08930178(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930178u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089301f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
L_089301f8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08930178 */
}

/* func_08932eec  0x08932eec..0x08932f40  84 bytes, source=sweep */
void func_08932eec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932eecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08932f18; }
    { goto L_08932f30; }
L_08932f18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x0000002cu, c->r[2]);
L_08932f30:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932eec */
}

/* func_08934bcc  0x08934bcc..0x08935750  2948 bytes, source=fde */
void func_08934bcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08934bccu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08934bf0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934c08; }
    { goto L_0893573c; }
L_08934c08:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934c24; }
    { goto L_0893573c; }
L_08934c24:
    { c->r[31] = 0x08934c2cu; func_0883a25c(c, ram); }
    c->r[4] = c->r[2] + 0u;
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
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934c7c; }
    { goto L_0893573c; }
L_08934c7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007e54u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08934cb4; }
    { goto L_0893573c; }
L_08934cb4:
    { c->r[31] = 0x08934cbcu; func_0883a25c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x08934cd0u, 0x7u); goto L_08934cd4; }
L_08934cd4:
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934d24; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934d24; }
    { goto L_0893573c; }
L_08934d24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934d58; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934d58; }
    { goto L_0893573c; }
L_08934d58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934d88; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08934d78u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934d88; }
    { goto L_0893573c; }
L_08934d88:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934da8; }
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_08934e04; }
L_08934da8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934dc8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08934e04; }
L_08934dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934de8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08934e04; }
L_08934de8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893573c; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08934e04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000d46u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934fc0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d47u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934ea0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d36u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934e78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d33u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934f38; }
    c->r[2] = 0u + 0x00000d01u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893573c; }
    c->r[2] = 0u + 0x00000d02u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935018; }
    { goto L_08935150; }
L_08934e78:
    c->r[2] = 0u + 0x00000d43u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934f68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d43u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935150; }
    { goto L_08935090; }
L_08934ea0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d5bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934ee8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d54u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935018; }
    c->r[2] = 0u + 0x00000d47u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935090; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d4fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935150; }
    { goto L_08935018; }
L_08934ee8:
    c->r[2] = 0u + 0x0000200fu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089350c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00002010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934f20; }
    c->r[2] = 0u + 0x00001f4cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935054; }
    { goto L_08935150; }
L_08934f20:
    c->r[2] = 0u + 0x00002010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935120; }
    { goto L_08935150; }
L_08934f38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934f4c; }
    { goto L_0893573c; }
L_08934f4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935150; }
    { goto L_0893573c; }
L_08934f68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934f7c; }
    { goto L_0893573c; }
L_08934f7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934f98; }
    { goto L_0893573c; }
L_08934f98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893573c; }
    { goto L_08935150; }
L_08934fc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934fd4; }
    { goto L_0893573c; }
L_08934fd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000012cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934ff0; }
    { goto L_0893573c; }
L_08934ff0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893573c; }
    { goto L_08935150; }
L_08935018:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893502c; }
    { goto L_0893573c; }
L_0893502c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893573c; }
    { goto L_08935150; }
L_08935054:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935068; }
    { goto L_0893573c; }
L_08935068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893573c; }
    { goto L_08935150; }
L_08935090:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089350a4; }
    { goto L_0893573c; }
L_089350a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935150; }
    { goto L_0893573c; }
L_089350c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089350dc; }
    { goto L_0893573c; }
L_089350dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089350f8; }
    { goto L_0893573c; }
L_089350f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893573c; }
    { goto L_08935150; }
L_08935120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935134; }
    { goto L_0893573c; }
L_08935134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935150; }
    { goto L_0893573c; }
L_08935150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0u + 0x00002011u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089351bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00002012u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935194; }
    c->r[2] = 0u + 0x00002010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935318; }
    { goto L_0893534c; }
L_08935194:
    c->r[2] = 0u + 0x00002012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935248; }
    c->r[2] = 0u + 0x00002014u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089352e8; }
    { goto L_0893534c; }
L_089351bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089351d0; }
    { goto L_0893573c; }
L_089351d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000103u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000104u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935224; }
    c->r[2] = 0u + 0x00000046u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    c->r[2] = 0u + 0x00000091u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    { goto L_0893573c; }
L_08935224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0xfffffed9u;
    c->r[2] = 0u + 0xfffffed9u;
    c->r[2] = c->r[2] + 0x00000128u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893573c; }
    { goto L_0893534c; }
L_08935248:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893525c; }
    { goto L_0893573c; }
L_0893525c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x000000eeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000000efu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089352b0; }
    c->r[2] = 0u + 0x00000045u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    c->r[2] = 0u + 0x0000008eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    { goto L_0893573c; }
L_089352b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000123u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893573c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000125u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893534c; }
    c->r[2] = 0u + 0x00000129u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    { goto L_0893573c; }
L_089352e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089352fc; }
    { goto L_0893573c; }
L_089352fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893534c; }
    { goto L_0893573c; }
L_08935318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893532c; }
    { goto L_0893573c; }
L_0893532c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] + 0xfffffff4u;
    c->r[2] = 0u + 0xfffffff4u;
    c->r[2] = c->r[2] + 0x0000000du;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893573c; }
L_0893534c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffff2bfu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] & 0xffffu;
    c->r[2] = (c->r[2] < 0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935720; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] & 0xffffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000071fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08935394u: goto L_08935394; case 0x089355a0u: goto L_089355a0; case 0x08935720u: goto L_08935720; default: recomp_trap_unknown_indirect(c, ram, 0x0893538cu, _t); return; } }
L_08935394:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089353a8; }
    { goto L_0893573c; }
L_089353a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089353c4; }
    { goto L_0893573c; }
L_089353c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089353e0; }
    { goto L_0893573c; }
L_089353e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089353fc; }
    { goto L_0893573c; }
L_089353fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000122u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935418; }
    { goto L_0893573c; }
L_08935418:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000121u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935434; }
    { goto L_0893573c; }
L_08935434:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x000000e7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935450; }
    { goto L_0893573c; }
L_08935450:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x000000e6u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893546c; }
    { goto L_0893573c; }
L_0893546c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935488; }
    { goto L_0893573c; }
L_08935488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000089u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089354a4; }
    { goto L_0893573c; }
L_089354a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x000000abu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089354c0; }
    { goto L_0893573c; }
L_089354c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089354dc; }
    { goto L_0893573c; }
L_089354dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089354f8; }
    { goto L_0893573c; }
L_089354f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000041u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935514; }
    { goto L_0893573c; }
L_08935514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000003eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935530; }
    { goto L_0893573c; }
L_08935530:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893554c; }
    { goto L_0893573c; }
L_0893554c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000096u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935568; }
    { goto L_0893573c; }
L_08935568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935584; }
    { goto L_0893573c; }
L_08935584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000094u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935720; }
    { goto L_0893573c; }
L_089355a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089355b4; }
    { goto L_0893573c; }
L_089355b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089355d0; }
    { goto L_0893573c; }
L_089355d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089355ec; }
    { goto L_0893573c; }
L_089355ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000121u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935608; }
    { goto L_0893573c; }
L_08935608:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935624; }
    { goto L_0893573c; }
L_08935624:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000089u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935640; }
    { goto L_0893573c; }
L_08935640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893565c; }
    { goto L_0893573c; }
L_0893565c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935678; }
    { goto L_0893573c; }
L_08935678:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000041u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935694; }
    { goto L_0893573c; }
L_08935694:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000003eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089356b0; }
    { goto L_0893573c; }
L_089356b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089356cc; }
    { goto L_0893573c; }
L_089356cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000096u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089356e8; }
    { goto L_0893573c; }
L_089356e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935704; }
    { goto L_0893573c; }
L_08935704:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000094u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935720; }
    { goto L_0893573c; }
L_08935720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0893573cu; c->r[7] = 0u + 0u; func_08935750(c, ram); }
L_0893573c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08934bcc */
}

/* func_0893b2d4  0x0893b2d4..0x0893b488  436 bytes, source=fde */
void func_0893b2d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893b2d4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b300u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b310u; c->r[5] = 0u + 0u; func_089dfeb4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0893b35cu; c->r[5] = c->r[5] | 0x0102u; func_0893bf80(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893b370u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0893b38cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
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
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0893b3d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0893c01c(c, ram); }
    { c->r[31] = 0x0893b3e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08968ff8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893b41c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8050u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0893b440; }
L_0893b41c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893b440:
    c->r[4] = 0u + 0x0000004du;
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0893b454u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u); func_0893a5d0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b464u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b474u; c->r[5] = 0u + 0x00000001u; func_089dfeb4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893b2d4 */
}

/* func_0893c9e4  0x0893c9e4..0x0893ca90  172 bytes, source=sweep */
void func_0893c9e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c9e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ca44; }
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
    { c->r[31] = 0x0893ca3cu; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_0893cb64(c, ram); }
    { goto L_0893ca7c; }
L_0893ca44:
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
    { c->r[31] = 0x0893ca7cu; c->r[8] = c->r[2] + 0u; func_0893cb64(c, ram); }
L_0893ca7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c9e4 */
}

/* func_0893de9c  0x0893de9c..0x0893df00  100 bytes, source=sweep */
void func_0893de9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893de9cu);
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
    { c->r[31] = 0x0893deecu; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893de9c */
}

/* func_0894038c  0x0894038c..0x089403d0  68 bytes, source=sweep */
void func_0894038c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894038cu);
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
    { c->r[31] = 0x089403bcu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894038c */
}

/* func_08945860  0x08945860..0x089458a0  64 bytes, source=sweep */
void func_08945860(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945860u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0894588cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08945d24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08945860 */
}

/* func_089465e4  0x089465e4..0x08946648  100 bytes, source=sweep */
void func_089465e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089465e4u);
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
    { c->r[31] = 0x08946634u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089465e4 */
}

/* func_0894c178  0x0894c178..0x0894c1bc  68 bytes, source=sweep */
void func_0894c178(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c178u);
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
    { c->r[31] = 0x0894c1a8u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c178 */
}

/* func_08952e8c  0x08952e8c..0x08953404  1400 bytes, source=sweep */
void func_08952e8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08952e8cu);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e38u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08952ec4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08952ee0; }
    { goto L_089533f0; }
L_08952ee0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e3cu);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08952f0cu; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007e38u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08952f2cu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08952f54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08952f54; }
    { goto L_08952f60; }
L_08952f54:
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_08952f60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000007fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e44u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e48u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08952ff8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0895301c; }
L_08952ff8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[3]);
L_0895301c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e44u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e48u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953094; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]); goto L_089530b8; }
L_08953094:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[3]);
L_089530b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e38u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000007fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e44u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e48u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08953238; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]); goto L_0895325c; }
L_08953238:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
L_0895325c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e44u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e48u);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089532d4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]); goto L_089532f8; }
L_089532d4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
L_089532f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007e38u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08952ec4; }
L_089533f0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08952e8c */
}

/* func_08955750  0x08955750..0x08955794  68 bytes, source=sweep */
void func_08955750(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955750u);
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
    { c->r[31] = 0x08955780u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955750 */
}

/* func_08958508  0x08958508..0x0895854c  68 bytes, source=sweep */
void func_08958508(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958508u);
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
    { c->r[31] = 0x08958538u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958508 */
}

/* func_0895b0dc  0x0895b0dc..0x0895b110  52 bytes, source=sweep */
void func_0895b0dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b0dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x01000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0895b0dc */
}

/* func_0895db18  0x0895db18..0x0895dea0  904 bytes, source=fde */
void func_0895db18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895db18u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895db3cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895db78; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895db58u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895db78; }
    { c->r[31] = 0x0895db70u; func_088f4d68(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0895de88; }
L_0895db78:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895dcec; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00100000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895dc18; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000049d1u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895dbc4; }
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895dbc4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    alx_div(c, c->r[2], c->r[3]);
    c->r[2] = c->hi;
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x0895dbdcu, 0x7u); goto L_0895dbe0; }
L_0895dbe0:
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895dcd0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049a6u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a6u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049a6u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0895dcd0; }
    c->r[1] = 0x08aa0000u;
    { mem_w16(ram, c->r[1] + 0x000049a6u, 0u); goto L_0895dcd0; }
L_0895dc18:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00200000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895dcd0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000049d0u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0895dc4cu, 0x7u); goto L_0895dc50; }
L_0895dc50:
    { int _c = (c->r[3] != 0u); if (_c) goto L_0895dcd0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049a6u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a6u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049a6u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895dc8c; }
    c->r[2] = 0u + 0x00000064u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a6u, c->r[2]);
L_0895dc8c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049a6u);
    c->r[2] = 0u + 0x00000064u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895dcd0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0895dcd0; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] + 0xffffd8f0u;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_0895dcd0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0xffef0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_0895dcec:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895dd10; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81e8u);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0895de88; }
L_0895dd10:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000017u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895de24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895de24; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049f0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895de84; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049f8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895de84; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049f0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895de84; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049f8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895de84; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0895dd94u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049ecu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049f4u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0895ddbcu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0895ddc8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff81ecu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895de00; }
    { goto L_0895de04; }
L_0895de00:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_0895de04:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81ecu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0895de88; }
L_0895de24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81f0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895de6c; }
    { goto L_0895de78; }
L_0895de6c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81f0u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_0895de78:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0895de88; }
L_0895de84:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0895de88:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0895db18 */
}

/* func_08960f2c  0x08960f2c..0x08960fbc  144 bytes, source=fde */
void func_08960f2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960f2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08960f54u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08960f64; }
    { goto L_08960fa8; }
L_08960f64:
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
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[5] + 0x000000d4u, c->r[2]);
L_08960fa8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08960f2c */
}

/* func_08963a50  0x08963a50..0x08963b38  232 bytes, source=sweep */
void func_08963a50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08963a50u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08963a90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963aac; }
    { goto L_08963b28; }
L_08963aac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963b18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963b0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08963b28; }
L_08963b0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08963b18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08963a90; }
L_08963b28:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08963a50 */
}

/* func_089669c4  0x089669c4..0x08966c64  672 bytes, source=fde */
void func_089669c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089669c4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00005350u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00005380u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00005398u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00005200u, 0u);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966a04u; c->r[4] = c->r[4] + 0xffff834cu; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08966a18u; c->r[5] = c->r[5] + 0x00005350u; func_08965a9c(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966a24u; c->r[4] = c->r[4] + 0xffff8358u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08966a38u; c->r[5] = c->r[5] + 0x00005380u; func_08965c08(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966a44u; c->r[4] = c->r[4] + 0xffff8364u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08966a58u; c->r[5] = c->r[5] + 0x00005398u; func_08965ccc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966a78; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966a70u; c->r[4] = c->r[4] + 0xffff8370u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08966a88; }
L_08966a78:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966a84u; c->r[4] = c->r[4] + 0xffff837cu; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08966a88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08966a98u; c->r[5] = c->r[5] + 0x00005200u; func_08965dc8(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966aa4u; c->r[4] = c->r[4] + 0xffff8384u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000053b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000053bcu, c->r[2]);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966ad8u; c->r[4] = c->r[4] + 0xffff8390u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966b04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffede0u, c->r[2]); goto L_08966b0c; }
L_08966b04:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffede0u, 0u);
L_08966b0c:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966b18u; c->r[4] = c->r[4] + 0xffff83a0u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffede4u, c->r[2]); goto L_08966b4c; }
L_08966b44:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffede4u, 0u);
L_08966b4c:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966b58u; c->r[4] = c->r[4] + 0xffff83acu; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966b84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffede8u, c->r[2]); goto L_08966b8c; }
L_08966b84:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffede8u, 0u);
L_08966b8c:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966b98u; c->r[4] = c->r[4] + 0xffff83b8u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966bc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffedecu, c->r[2]); goto L_08966bcc; }
L_08966bc4:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffedecu, 0u);
L_08966bcc:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966bd8u; c->r[4] = c->r[4] + 0xffff83c4u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966c04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffedf0u, c->r[2]); goto L_08966c0c; }
L_08966c04:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffedf0u, 0u);
L_08966c0c:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966c18u; c->r[4] = c->r[4] + 0xffff83d4u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966c44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffedf4u, c->r[2]); goto L_08966c4c; }
L_08966c44:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffedf4u, 0u);
L_08966c4c:
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089669c4 */
}

/* func_0896933c  0x0896933c..0x0896948c  336 bytes, source=sweep */
void func_0896933c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896933cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08969358u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08967a48(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896946c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089693ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969398; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_08969398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089693b4; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_089693b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089693d0; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_089693d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896946c; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_089693ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969464; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969418; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_08969418:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969434; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_08969434:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896946c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896946c; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_08969464:
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08969474; }
L_0896946c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08969474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896933c */
}

/* func_0896a284  0x0896a284..0x0896a2a8  36 bytes, source=sweep */
void func_0896a284(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a284u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005e84u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896a284 */
}

/* func_0896cb9c  0x0896cb9c..0x0896cc50  180 bytes, source=fde */
void func_0896cb9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896cb9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896cbd4; }
    { goto L_0896cc3c; }
L_0896cbd4:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0896cbd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896cbf0; }
    { goto L_0896cc24; }
L_0896cbf0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0896cc14u; c->r[4] = c->r[2] + 0u; func_089d454c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0896cbd8; }
L_0896cc24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x000009c5u, c->r[2]);
L_0896cc3c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896cb9c */
}

/* func_0896e3a0  0x0896e3a0..0x0896e3dc  60 bytes, source=sweep */
void func_0896e3a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e3a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000055u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000056u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e3a0 */
}

/* func_0896f2b4  0x0896f2b4..0x0896f350  156 bytes, source=sweep */
void func_0896f2b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f2b4u);
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
    c->r[2] = ((s32)c->r[2] < (s32)0x00000063u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f340; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x0000686cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x0000686cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f340; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00006868u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00006868u, c->r[2]);
L_0896f340:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f2b4 */
}

/* func_08970b1c  0x08970b1c..0x08970efc  992 bytes, source=fde */
void func_08970b1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08970b1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08970b34u; hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    { c->r[31] = 0x08970b3cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970b54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x00006864u, c->r[2]); goto L_08970ee8; }
L_08970b54:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08970b60u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08971924(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x00080000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970bf0; }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006934u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00006934u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006934u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff875cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08970bbc; }
    { goto L_08970bf8; }
L_08970bbc:
    { c->r[31] = 0x08970bc4u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08970bd0u; c->r[5] = 0u + 0xfffffffeu; func_0896fc10(c, ram); }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006934u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff875cu);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08aa0000u;
    { mem_wf32(ram, c->r[1] + 0x00006934u, c->f[0]); goto L_08970bf8; }
L_08970bf0:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006934u, 0u);
L_08970bf8:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08970bfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970c14; }
    { goto L_08970d8c; }
L_08970c14:
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970c80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffba10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08970c64u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970c80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08970c80:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08970d64; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970d64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006938u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006938u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006938u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff875cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08970d10; }
    { goto L_08970d7c; }
L_08970d10:
    { c->r[31] = 0x08970d18u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08970d24u; c->r[5] = 0u + 0x00000001u; func_0896fc10(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006938u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006938u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff875cu);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_08970d7c; }
L_08970d64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006938u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_08970d7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08970bfc; }
L_08970d8c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbbd0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970e14; }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006948u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00006948u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006948u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff875cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08970de0; }
    { goto L_08970e1c; }
L_08970de0:
    { c->r[31] = 0x08970de8u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08970df4u; c->r[5] = 0u + 0xffffffffu; func_0896fc10(c, ram); }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006948u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff875cu);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08aa0000u;
    { mem_wf32(ram, c->r[1] + 0x00006948u, c->f[0]); goto L_08970e1c; }
L_08970e14:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006948u, 0u);
L_08970e1c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x00a0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970edc; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006864u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970e68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006864u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08970e7c; }
L_08970e68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006864u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08970e7c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006860u);
    c->r[3] = 0xd6930000u;
    c->r[3] = c->r[3] | 0xa3ffu;
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970edc; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006860u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006860u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006860u);
    c->r[2] = 0xd6930000u;
    c->r[2] = c->r[2] | 0xa400u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970edc; }
    c->r[2] = 0xd6930000u;
    c->r[2] = c->r[2] | 0xa400u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006860u, c->r[2]);
L_08970edc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006864u, c->r[2]);
L_08970ee8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08970b1c */
}

/* func_089740f4  0x089740f4..0x089746b0  1468 bytes, source=fde */
void func_089740f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089740f4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    { c->r[31] = 0x08974120u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    { c->r[31] = 0x08974130u; mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974144; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08974144:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08974148:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974164; }
    { goto L_089745c0; }
L_08974164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000069a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897418cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006984u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089741b8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x00000073u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = 0u + 0x00000058u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x0897421cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (c->r[3] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897455c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8924u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08974268u: goto L_08974268; case 0x089742c8u: goto L_089742c8; case 0x089743acu: goto L_089743ac; case 0x0897443cu: goto L_0897443c; case 0x089744ccu: goto L_089744cc; case 0x0897455cu: goto L_0897455c; default: recomp_trap_unknown_indirect(c, ram, 0x08974260u, _t); return; } }
L_08974268:
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1a2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089742a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089742a8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089742a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089742c0u; c->r[5] = 0u + 0x00002000u; func_0892ffa8(c, ram); }
    { goto L_08974574; }
L_089742c8:
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1a6u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x0000006cu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08974308u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u); func_08973ff8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974360; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8920u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897432cu; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00006d80u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974354; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0897434cu; c->r[5] = 0u | 0x8000u; func_0892ff54(c, ram); }
    { goto L_08974360; }
L_08974354:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08974360u; c->r[5] = 0u | 0x8000u; func_0892ffa8(c, ram); }
L_08974360:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08974378u; c->r[5] = 0u + 0x00002000u; func_0892ffa8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08974390u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089743a4u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    { goto L_08974574; }
L_089743ac:
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1a8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1aau);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x0000006du;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x089743ecu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u); func_08973ff8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974410; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8920u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08974410u; c->f[12] = c->f[0]; func_08932528(c, ram); }
L_08974410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08974428u; c->r[5] = 0u + 0x00002000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08974434u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    { goto L_08974574; }
L_0897443c:
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1b0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x000000c5u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897447cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u); func_08973ff8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089744a0; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8920u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089744a0u; c->f[12] = c->f[0]; func_08932528(c, ram); }
L_089744a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089744b8u; c->r[5] = 0u + 0x00002000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089744c4u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    { goto L_08974574; }
L_089744cc:
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1a8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = 0x08a60000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffa1aau);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x00000074u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0897450cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u); func_08973ff8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974530; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8920u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08974530u; c->f[12] = c->f[0]; func_08932528(c, ram); }
L_08974530:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08974548u; c->r[5] = 0u + 0x00002000u; func_0892ffa8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08974554u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    { goto L_08974574; }
L_0897455c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08974574u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08974574:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089745b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000069a4u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089745a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_089745b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08974148; }
L_089745c0:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089745c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089745dc; }
    { goto L_08974668; }
L_089745dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006984u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08974604u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x08974610u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x08974618u; mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897464c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0897464c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08974644u; c->r[5] = 0u + 0x00004000u; func_0892ff54(c, ram); }
    { goto L_08974658; }
L_0897464c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08974658u; c->r[5] = 0u + 0x00004000u; func_0892ffa8(c, ram); }
L_08974658:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089745c4; }
L_08974668:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00006d80u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00006d80u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00006d80u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000040u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974698; }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00006d80u, 0u);
L_08974698:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089740f4 */
}

/* func_089761b8  0x089761b8..0x08976230  120 bytes, source=fde */
void func_089761b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089761b8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    { c->r[31] = 0x089761e0u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]); func_0896a3c0(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089761f4u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897620c; }
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x00006d88u, c->r[2]); goto L_0897621c; }
L_0897620c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x000027dcu;
    { c->r[31] = 0x0897621cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d3f90(c, ram); }
L_0897621c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089761b8 */
}

/* func_08979698  0x08979698..0x089796dc  68 bytes, source=sweep */
void func_08979698(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08979698u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089796b0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa2b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08979698 */
}

/* func_08981bd0  0x08981bd0..0x08981cc0  240 bytes, source=fde */
void func_08981bd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08981bd0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08981be8u; mem_w32(ram, c->r[30] + 0x00000000u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08981bfcu; c->r[7] = 0u + 0x000000ffu; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08981c1c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08981ca8; }
L_08981c1c:
    { c->r[31] = 0x08981c24u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08981c98; }
    { c->r[31] = 0x08981c38u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08981c98; }
    { c->r[31] = 0x08981c54u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9180u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08981c74u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9190u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08981c90u; c->r[6] = 0u + 0x00000060u; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08981c98:
    { c->r[31] = 0x08981ca0u; func_089818d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08981ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08981bd0 */
}

/* func_0898e410  0x0898e410..0x0898f2a0  3728 bytes, source=fde */
void func_0898e410(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898e410u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0898e42c:
    { c->r[31] = 0x0898e434u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e450; }
    { goto L_0898e5f8; }
L_0898e450:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9830u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9830u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898e4c8u; mem_w8(ram, c->r[2] + 0x00000000u, 0u); func_089795a0(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e514; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9830u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898e4f0u; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u); func_089795a0(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e514; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898e514:
    { c->r[31] = 0x0898e51cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e5c4; }
    { c->r[31] = 0x0898e554u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e5c4; }
    { c->r[31] = 0x0898e58cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e5c4; }
    { goto L_0898e5dc; }
L_0898e5c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xfffffffeu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898e5dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0898e42c; }
L_0898e5f8:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    { c->r[31] = 0x0898e608u; mem_w32(ram, c->r[30] + 0x00000014u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0898e610:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e628; }
    { goto L_0898e6ec; }
L_0898e628:
    { c->r[31] = 0x0898e630u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0896dbc0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0898e6c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898e654u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0896fe40(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898e674u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0896f988(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    { c->r[31] = 0x0898e694u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_08970efc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e6b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898e6b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0898e6dc; }
L_0898e6c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xfffffffdu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898e6dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0898e610; }
L_0898e6ec:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9d7cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9d7cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9d84u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9d88u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[5]);
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_0898e7a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e7b8; }
    { goto L_0898e8c8; }
L_0898e7b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e874; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[4] < (s32)0xffffffffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e808; }
    c->r[2] = 0u + 0xfffffffdu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_0898e898; }
    { goto L_0898e8b8; }
L_0898e808:
    c->r[2] = 0u + 0xffffffffu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0898e850; }
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[7] == 0u); if (_c) goto L_0898e82c; }
    { goto L_0898e8b8; }
L_0898e82c:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000070u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0898e8b8; }
L_0898e850:
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000070u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_0898e8b8; }
L_0898e874:
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000070u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0898e8b8; }
L_0898e898:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000070u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0898e8b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0898e7a0; }
L_0898e8c8:
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898e8e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898e90cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898e930u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898e954u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a19db8(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
L_0898e968:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e984; }
    { goto L_0898ea68; }
L_0898e984:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
L_0898e98c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0898ea58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898e9f8; }
    { goto L_0898ea58; }
L_0898e9f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000080u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]); goto L_0898e98c; }
L_0898ea58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]); goto L_0898e968; }
L_0898ea68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
L_0898ea74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898ea98; }
    { goto L_0898eb84; }
L_0898ea98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
L_0898eaa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898eb74; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898eb14; }
    { goto L_0898eb74; }
L_0898eb14:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000080u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]); goto L_0898eaa0; }
L_0898eb74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]); goto L_0898ea74; }
L_0898eb84:
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000078u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000088u, 0u);
L_0898eb98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898ebb4; }
    { goto L_0898ec80; }
L_0898ebb4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0898ec70; }
    { c->r[31] = 0x0898ebe0u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898ec70; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898ec34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]); goto L_0898ec40; }
L_0898ec34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
L_0898ec40:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w8(ram, c->r[1] + 0xffff9898u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
L_0898ec70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_0898eb98; }
L_0898ec80:
    { c->r[31] = 0x0898ec88u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898efd8; }
    { c->r[31] = 0x0898eca0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898efd8; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9878u;
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
L_0898ecc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898ecdc; }
    { goto L_0898edb8; }
L_0898ecdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
L_0898ece4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0898eda8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898ed48; }
    { goto L_0898eda8; }
L_0898ed48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000080u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]); goto L_0898ece4; }
L_0898eda8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]); goto L_0898ecc0; }
L_0898edb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
L_0898edc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898ede8; }
    { goto L_0898eecc; }
L_0898ede8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
L_0898edf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898eebc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898ee5c; }
    { goto L_0898eebc; }
L_0898ee5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000080u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]); goto L_0898edf0; }
L_0898eebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]); goto L_0898edc4; }
L_0898eecc:
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000078u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000008cu, 0u);
L_0898eee0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898eefc; }
    { goto L_0898efd8; }
L_0898eefc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0898efc8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898ef38u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898efc8; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898ef8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]); goto L_0898ef98; }
L_0898ef8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
L_0898ef98:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w8(ram, c->r[1] + 0xffff9898u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
L_0898efc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]); goto L_0898eee0; }
L_0898efd8:
    { c->r[31] = 0x0898efe0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898f288; }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9870u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9874u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9888u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff988au, 0u);
    mem_w32(ram, c->r[30] + 0x00000090u, 0u);
L_0898f014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f02c; }
    { goto L_0898f260; }
L_0898f02c:
    { c->r[31] = 0x0898f034u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000090u); func_0896dbc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898f05c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898f158; }
    { goto L_0898f250; }
L_0898f05c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0898f0d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9870u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9870u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff9888u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08ab0000u;
    { mem_w16(ram, c->r[1] + 0xffff9888u, c->r[2]); goto L_0898f250; }
L_0898f0d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898f250; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0u;
    c->r[3] = alx_min(c->r[3], c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9870u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9870u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff9888u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08ab0000u;
    { mem_w16(ram, c->r[1] + 0xffff9888u, c->r[2]); goto L_0898f250; }
L_0898f158:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0898f1d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9874u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9874u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff988au);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08ab0000u;
    { mem_w16(ram, c->r[1] + 0xffff988au, c->r[2]); goto L_0898f250; }
L_0898f1d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff98a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898f250; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0u;
    c->r[3] = alx_min(c->r[3], c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9874u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9874u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff988au);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff988au, c->r[2]);
L_0898f250:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]); goto L_0898f014; }
L_0898f260:
    { c->r[31] = 0x0898f268u; c->r[4] = 0u + 0u; func_08998cec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff988cu, c->r[2]);
    { c->r[31] = 0x0898f27cu; c->r[4] = 0u + 0x00000001u; func_08998cec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff988eu, c->r[2]);
L_0898f288:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_0898e410 */
}

/* func_08998788  0x08998788..0x089987ac  36 bytes, source=sweep */
void func_08998788(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998788u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002aa4u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998788 */
}

/* func_08998f9c  0x08998f9c..0x08998fc0  36 bytes, source=residue */
void func_08998f9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998f9cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002b88u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998f9c */
}

/* func_0899bdac  0x0899bdac..0x0899c07c  720 bytes, source=fde */
void func_0899bdac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899bdacu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x0000006cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000070u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0899bdd0u; c->r[4] = c->r[30] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5d0u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa5d4u);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffa5d0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899be30u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899be40u; c->r[5] = c->r[30] + 0u; func_0880d1a0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5d8u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5dcu);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0899be5c:
    { c->r[31] = 0x0899be64u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899be80; }
    { goto L_0899c05c; }
L_0899be80:
    { c->r[31] = 0x0899be88u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899be9cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[17] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0899beb4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[20] = c->f[1] * c->f[0];
    { c->r[31] = 0x0899bec8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899bef4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899bf0cu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[16] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0899bf3cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_08859e90(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899bf5cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899c020; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb14u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb18u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb1cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb20u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb24u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb28u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0899c004u; mem_w32(ram, c->r[1] + 0xffffbb2cu, c->r[2]); func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899c020u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
L_0899c020:
    { c->r[31] = 0x0899c028u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa6b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0899be5c; }
L_0899c05c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0899bdac */
}

/* func_089a0558  0x089a0558..0x089a09a0  1096 bytes, source=fde */
void func_089a0558(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a0558u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0628; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a05bc; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a05e4; }
    { goto L_089a098c; }
L_089a05bc:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a08a0; }
    c->r[2] = 0u + 0x00000014u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0920; }
    { goto L_089a098c; }
L_089a05e4:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002b89u, c->r[2]);
    { c->r[31] = 0x089a05f8u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    { c->r[31] = 0x089a0600u; c->r[4] = 0u + 0x000000ffu; func_08999204(c, ram); }
    { c->r[31] = 0x089a0608u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a098c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a061cu; c->r[5] = 0u + 0x00000021u; func_0896a7b8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0x00002b89u, 0u); goto L_089a098c; }
L_089a0628:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a0630:
    { c->r[31] = 0x089a0638u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a0654; }
    { goto L_089a0708; }
L_089a0654:
    { c->r[31] = 0x089a065cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x000000abu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a06f8; }
    { c->r[31] = 0x089a0678u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089a06a4u; mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089a06d0u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_089a06f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a0630; }
L_089a0708:
    { c->r[31] = 0x089a0710u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x089a0718u; c->r[4] = 0u + 0x00000080u; func_089991b0(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = c->r[30] + 0x0000000cu;
    { c->r[31] = 0x089a0728u; c->r[4] = c->r[2] + 0u; func_0899fc08(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089a0738u; c->r[4] = c->r[2] + 0u; func_089992ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089a0748:
    { c->r[31] = 0x089a0750u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a076c; }
    { goto L_089a0864; }
L_089a076c:
    { c->r[31] = 0x089a0774u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089a078c; }
    { goto L_089a0854; }
L_089a078c:
    { c->r[31] = 0x089a0794u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a07cc; }
    { goto L_089a0854; }
L_089a07cc:
    { c->r[31] = 0x089a07d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000097u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a07ec; }
    { goto L_089a0854; }
L_089a07ec:
    { c->r[31] = 0x089a07f4u; func_0896a284(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0818; }
    { goto L_089a0854; }
L_089a0818:
    { c->r[31] = 0x089a0820u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0848; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_089a0854; }
L_089a0848:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089a0854:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089a0748; }
L_089a0864:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a088c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000096u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089a088c:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089a0898u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b96c(c, ram); }
    { goto L_089a098c; }
L_089a08a0:
    { c->r[31] = 0x089a08a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x089a08b0u; c->r[4] = 0u + 0x00000080u; func_089991b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089a08f8; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa640u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089a08dcu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a090c; }
L_089a08f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089a090c:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089a0918u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b96c(c, ram); }
    { goto L_089a098c; }
L_089a0920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089a0978; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a093cu; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a094c; }
    { goto L_089a098c; }
L_089a094c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x089a095cu; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x089a0964u; func_0899d924(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a0970u; c->r[5] = 0u + 0x0000002fu; func_0896a7b8(c, ram); }
    { goto L_089a098c; }
L_089a0978:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089a098c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089a0558 */
}

/* func_089a45fc  0x089a45fc..0x089a4bbc  1472 bytes, source=fde */
void func_089a45fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a45fcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089a4620u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x089a4628u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a4644; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089a4644:
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000016u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089a4658:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a4670; }
    { goto L_089a4720; }
L_089a4670:
    { c->r[31] = 0x089a4678u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa744u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089a46b4; }
    { goto L_089a4720; }
L_089a46b4:
    { c->r[31] = 0x089a46bcu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa744u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a4704u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089a4710u; c->r[5] = 0u + 0x00000002u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089a4658; }
L_089a4720:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089a4724:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a473c; }
    { goto L_089a47ec; }
L_089a473c:
    { c->r[31] = 0x089a4744u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa744u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089a4780; }
    { goto L_089a47ec; }
L_089a4780:
    { c->r[31] = 0x089a4788u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa744u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089a47d0u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089a47dcu; c->r[5] = 0u + 0x00000002u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089a4724; }
L_089a47ec:
    c->r[4] = 0u + 0x0000001cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a47fcu; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[4] = 0u + 0x0000001du;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089a480cu; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    { c->r[31] = 0x089a4814u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x089a4820u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x089a482cu; c->r[4] = 0u + 0x0000001cu; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x089a4838u; c->r[4] = 0u + 0x0000001du; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x089a4844u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[16] + 0x000000b0u, c->r[2]);
    { c->r[31] = 0x089a4868u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[16] + 0x000000b0u, c->r[2]);
    { c->r[31] = 0x089a488cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000018u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa73cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[16] + 0x000000b0u, c->r[2]);
    { c->r[31] = 0x089a48b0u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa73cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[16] + 0x000000b0u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004ac0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004ac8u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089a48f0u; c->r[16] = mem_r32(ram, c->r[2] + 0x00000060u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa73cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[16] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x089a4918u; c->r[16] = mem_r32(ram, c->r[2] + 0x00000060u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa73cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a4938u; mem_w16(ram, c->r[16] + 0x00000006u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a495cu; mem_w16(ram, c->r[1] + 0x00002de4u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0x00002de6u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffff0u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffff0u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffff0u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffff0u;
    c->r[2] = c->r[3] & c->r[2];
    { c->r[31] = 0x089a49e0u; mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x089a49e8u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a4a44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_089a4a94; }
L_089a4a44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_089a4a94:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000088u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000088u, c->r[2]);
    { c->r[31] = 0x089a4b34u; c->r[4] = 0u + 0u; func_08903aac(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002de8u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002de9u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002decu, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002dedu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e00u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e01u, 0u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002df0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089a4b88u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002df8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089a4b9cu; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x089a4ba4u; c->r[4] = 0u + 0x00000022u; func_08999258(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089a45fc */
}

/* func_089a9cd8  0x089a9cd8..0x089a9e0c  308 bytes, source=fde */
void func_089a9cd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a9cd8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a9cf0:
    { c->r[31] = 0x089a9cf8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9d14; }
    { goto L_089a9df4; }
L_089a9d14:
    { c->r[31] = 0x089a9d1cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08998b48(c, ram); }
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a9dd0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ff0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9db4; }
    { c->r[31] = 0x089a9d50u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089a9d70; }
    { c->r[31] = 0x089a9d68u; c->r[4] = 0u + 0x00002080u; func_089346e8(c, ram); }
    { goto L_089a9db4; }
L_089a9d70:
    { c->r[31] = 0x089a9d78u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9d94; }
    { c->r[31] = 0x089a9d8cu; c->r[4] = 0u + 0x00002081u; func_089346e8(c, ram); }
    { goto L_089a9db4; }
L_089a9d94:
    { c->r[31] = 0x089a9d9cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x089a9da4u; c->r[16] = c->r[2] + 0u; func_0896dc4c(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_089a9db4; }
    { c->r[31] = 0x089a9db4u; c->r[4] = 0u + 0x00002081u; func_089346e8(c, ram); }
L_089a9db4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ff0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a9de4; }
L_089a9dd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00002ff0u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_089a9de4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a9cf0; }
L_089a9df4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a9cd8 */
}

/* func_089af678  0x089af678..0x089afa8c  1044 bytes, source=fde */
void func_089af678(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089af678u);
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
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000033u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x089af6bcu; mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089af720u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
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
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { c->r[31] = 0x089af77cu; c->r[4] = c->r[2] + 0u; func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089af7a4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089af7f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089af7f8; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0xfbff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbdcu, c->r[2]);
L_089af7f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089af820; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_089afa6c; }
L_089af820:
    { c->r[31] = 0x089af828u; func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089af88cu; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089af8c0u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[4] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0bcu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    { c->r[31] = 0x089af934u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089af96cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089af9b8u; c->r[5] = c->r[2] + 0u; func_089b3320(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0c0u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0c4u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089afa2cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0c8u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089afa54u; c->r[5] = c->r[3] + 0u; func_08886dbc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_089afa6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000039u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089af678 */
}

/* func_089b3024  0x089b3024..0x089b3068  68 bytes, source=sweep */
void func_089b3024(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3024u);
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
    { c->r[31] = 0x089b3054u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3024 */
}

/* func_089b4518  0x089b4518..0x089b46d4  444 bytes, source=fde */
void func_089b4518(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b4518u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b454c; }
    { goto L_089b46c0; }
L_089b454c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4564; }
    { goto L_089b46c0; }
L_089b4564:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x089b45a4u; c->r[6] = 0u + 0x00000030u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x089b45c0u; c->r[6] = 0u + 0x00000030u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089b45c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b45e4; }
    { goto L_089b46c0; }
L_089b45e4:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089b45ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b466c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b4610; }
    { goto L_089b466c; }
L_089b4610:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x089b4658u; c->r[5] = c->r[2] + 0u; func_08a1aefc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089b45ec; }
L_089b466c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b46b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x0000002fu;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089b46b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089b45c8; }
L_089b46c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b4518 */
}

/* func_089b7394  0x089b7394..0x089b73e0  76 bytes, source=fde */
void func_089b7394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7394u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0x089b0000u;
    c->r[7] = c->r[7] + 0x0000731cu;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b73ccu; c->r[9] = 0u + 0u; func_089cafb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b7394 */
}

/* func_089b8a34  0x089b8a34..0x089b8b08  212 bytes, source=sweep */
void func_089b8a34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8a34u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8a6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_089b8a78; }
L_089b8a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_089b8a78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089b8a98u; c->r[6] = c->r[2] + 0u; func_0885a194(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8af4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8af4; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089b8ac4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b8ae0u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b8af4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c6d4(c, ram); }
L_089b8af4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089b8a34 */
}

/* func_089c1e30  0x089c1e30..0x089c2520  1776 bytes, source=sweep */
void func_089c1e30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c1e30u);
    c->r[29] = c->r[29] + 0xfffffdf0u;
    mem_w32(ram, c->r[29] + 0x00000204u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000200u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089c1e90u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089c1e9cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089c1ea8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x089c1eb4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000068u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089c1eccu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c1eecu; c->r[6] = c->r[2] + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x089c1ef8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c1f10u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089c1f28u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c1f44u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f0u, 0u);
    mem_w32(ram, c->r[30] + 0x000000f8u, 0u);
L_089c1f4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1f6c; }
    { goto L_089c240c; }
L_089c1f6c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004fu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089c1f9c; }
    { goto L_089c23fc; }
L_089c1f9c:
    c->r[2] = c->r[30] + 0x00000100u;
    { c->r[31] = 0x089c1fa8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x089c1fb4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x089c1fc0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x089c2004u; c->r[6] = c->r[2] + 0u; func_0884c26c(c, ram); }
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x089c2030u; c->r[6] = c->r[2] + 0u; func_0884c26c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x089c2040u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000130u); func_08820ca4(c, ram); }
    { c->r[31] = 0x089c2048u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u); func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u);
    { c->r[31] = 0x089c2058u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000138u); func_0884c1d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c23fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000150u;
    { c->r[31] = 0x089c20c0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000150u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c20dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000130u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000150u;
    { c->r[31] = 0x089c20e8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000160u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000160u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000016cu, 0u);
L_089c2138:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000016cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c2154; }
    { goto L_089c23fc; }
L_089c2154:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000016cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u);
    { c->r[31] = 0x089c2188u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000174u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000170u);
    { c->r[31] = 0x089c21b8u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000178u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x089c21d0u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000180u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x089c21f4u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000184u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000184u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23ec; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000174u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000190u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000190u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23ec; }
    c->r[2] = c->r[30] + 0x000001a0u;
    { c->r[31] = 0x089c225cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000001a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000138u);
    { c->r[31] = 0x089c2270u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000190u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000001a0u;
    c->r[3] = c->r[30] + 0x000001a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2288u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000130u); func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x000001b0u;
    { c->r[31] = 0x089c2294u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000001b0u;
    c->r[3] = c->r[30] + 0x000001a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000170u);
    { c->r[31] = 0x089c22acu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c22c4u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23ec; }
    c->r[4] = c->r[30] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x000001a0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c22f8u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c2310u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23ec; }
    c->r[4] = c->r[30] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000001a0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c2344u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c235cu; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c23ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a4u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a8u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001acu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000190u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
L_089c23ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000016cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000016cu, c->r[2]); goto L_089c2138; }
L_089c23fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]); goto L_089c1f4c; }
L_089c240c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c2508; }
    c->r[2] = c->r[30] + 0x000001c0u;
    { c->r[31] = 0x089c2428u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c243cu; c->r[6] = mem_r32(ram, c->r[30] + 0x000000f4u); func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2454u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2bcu);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000005cu, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x000001c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c247cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x000001c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2494u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    mem_wf32(ram, c->r[2] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x0000006cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000023u;
    mem_w8(ram, c->r[3] + 0x00000070u, c->r[2]);
L_089c2508:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000204u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000200u);
    { c->r[29] = c->r[29] + 0x00000210u; return; }
    return; /* fell out of func_089c1e30 */
}

/* func_089c62a0  0x089c62a0..0x089c62f8  88 bytes, source=sweep */
void func_089c62a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c62a0u);
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
    { c->r[31] = 0x089c62e4u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089c6420(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c62a0 */
}

/* func_089c89e8  0x089c89e8..0x089c8a18  48 bytes, source=sweep */
void func_089c89e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c89e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089c8a04u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808260(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c89e8 */
}

/* func_089caa94  0x089caa94..0x089caabc  40 bytes, source=sweep */
void func_089caa94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089caa94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000126u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089caa94 */
}

/* func_089cd548  0x089cd548..0x089cd570  40 bytes, source=sweep */
void func_089cd548(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cd548u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc6cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cd548 */
}

/* func_089d22c4  0x089d22c4..0x089d22fc  56 bytes, source=sweep */
void func_089d22c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d22c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d22e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d27dc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d22c4 */
}

/* func_089d314c  0x089d314c..0x089d31f8  172 bytes, source=sweep */
void func_089d314c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d314cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d31ac; }
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
    { c->r[31] = 0x089d31a4u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089d32cc(c, ram); }
    { goto L_089d31e4; }
L_089d31ac:
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
    { c->r[31] = 0x089d31e4u; c->r[8] = c->r[2] + 0u; func_089d32cc(c, ram); }
L_089d31e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d314c */
}

/* func_089d4800  0x089d4800..0x089d49ec  492 bytes, source=fde */
void func_089d4800(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4800u);
    c->r[29] = c->r[29] + 0xfffffd30u;
    mem_w32(ram, c->r[29] + 0x000002c4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002c0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d4830u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24ba4u); /* sceNetAdhocGetPdpStat */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d4848u; c->r[5] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24ba4u); /* sceNetAdhocGetPdpStat */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4860; }
    { goto L_089d48cc; }
L_089d4860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4874; }
    { mem_w32(ram, c->r[30] + 0x000002bcu, 0u); goto L_089d49d4; }
L_089d4874:
    mem_w32(ram, c->r[30] + 0x00000294u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]);
L_089d4880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4894; }
    { goto L_089d48b8; }
L_089d4894:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000294u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]); goto L_089d4880; }
L_089d48b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000294u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d48cc; }
    { mem_w32(ram, c->r[30] + 0x000002bcu, 0u); goto L_089d49d4; }
L_089d48cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x00000294u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000002b4u, 0u);
L_089d48fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d4910; }
    { goto L_089d49c8; }
L_089d4910:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x000002b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[6] = c->r[30] + 0x000002b0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = c->r[30] + 0x000002b8u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000001cu);
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089d4948u; c->r[10] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24bacu); /* sceNetAdhocPdpRecv */ }
    mem_w32(ram, c->r[30] + 0x000002b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d48fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d4980; }
    c->r[2] = c->r[30] + 0x000002a0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d4978u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d48fc; }
L_089d4980:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b8u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b8u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_089d48fc; }
L_089d49c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x000002bcu, c->r[2]);
L_089d49d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002bcu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002c4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002c0u);
    { c->r[29] = c->r[29] + 0x000002d0u; return; }
    return; /* fell out of func_089d4800 */
}

/* func_089d5c50  0x089d5c50..0x089d5c84  52 bytes, source=fde */
void func_089d5c50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5c50u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089d5c68u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24d34u); /* sceKernelVolatileMemUnlock */ }
    { c->r[31] = 0x089d5c70u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24d24u); /* sceKernelPowerUnlock */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089d5c50 */
}

/* func_089d7c74  0x089d7c74..0x089d7cac  56 bytes, source=fde */
void func_089d7c74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7c74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x0000064cu);
    { c->r[31] = 0x089d7c98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a2487cu); /* sceKernelChangeThreadPriority */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7c74 */
}

/* func_089d8f88  0x089d8f88..0x089d9034  172 bytes, source=fde */
void func_089d8f88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8f88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = 0x08a50000u;
    c->r[7] = c->r[7] + 0xffffbb54u;
    c->r[8] = 0x08a50000u;
    { c->r[31] = 0x089d8fc8u; c->r[8] = c->r[8] + 0xffffbb58u; func_089d9034(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000006dcu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d8fe0u; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000006f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d8ff8u; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000006dcu;
    mem_w32(ram, c->r[3] + 0x00000620u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000006f0u;
    mem_w32(ram, c->r[3] + 0x00000628u, c->r[2]);
    { c->r[31] = 0x089d9020u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d8f88 */
}

/* func_089da274  0x089da274..0x089da2b8  68 bytes, source=sweep */
void func_089da274(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da274u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da274 */
}

/* func_089db8fc  0x089db8fc..0x089db934  56 bytes, source=sweep */
void func_089db8fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db8fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089db920u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dbb28(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db8fc */
}

/* func_089dc638  0x089dc638..0x089dc6c8  144 bytes, source=fde */
void func_089dc638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc638u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dc668u; c->r[6] = 0u + 0x00000100u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbc70u;
    c->r[5] = 0x089e0000u;
    c->r[5] = c->r[5] + 0xffffc6c8u;
    c->r[6] = 0u + 0x0000001au;
    c->r[7] = 0u + 0x00001400u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089dc69cu; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[5] = 0u + 0x00000108u;
    { c->r[31] = 0x089dc6b4u; c->r[6] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_089dc638 */
}

/* func_089de758  0x089de758..0x089de82c  212 bytes, source=fde */
void func_089de758(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de758u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006e8u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006ecu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000006e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089de7a8u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000020u); func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089de7ccu, 0x7u); goto L_089de7d0; }
L_089de7d0:
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[3]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006ecu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000006e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089de800u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a04588(c, ram); }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006ecu);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006ecu, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de758 */
}

/* func_089e1a44  0x089e1a44..0x089e1b68  292 bytes, source=sweep */
void func_089e1a44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1a44u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e1a8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089e1a9c; }
L_089e1a8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089e1a9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x44000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1b08u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1b24u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0xd6000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1b3cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xd7000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1b54u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e1a44 */
}

/* func_089e25c4  0x089e25c4..0x089e2624  96 bytes, source=sweep */
void func_089e25c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e25c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089e2610u; c->r[7] = mem_r32(ram, c->r[2] + 0x0000005cu); func_089e1a44(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e25c4 */
}

/* func_089e3790  0x089e3790..0x089e37c4  52 bytes, source=sweep */
void func_089e3790(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3790u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e37b0u; c->r[5] = 0xcc000000u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3790 */
}

/* func_089e4998  0x089e4998..0x089e49dc  68 bytes, source=sweep */
void func_089e4998(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4998u);
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
    { c->r[31] = 0x089e49c8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4998 */
}

/* func_089e9f68  0x089e9f68..0x089ea03c  212 bytes, source=sweep */
void func_089e9f68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e9f68u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e9ffc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e9ffc; }
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006330u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e9ffc; }
L_089e9fcc:
    { c->r[31] = 0x089e9fd4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e9fcc; }
L_089e9ffc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ea028; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ea028; }
    c->r[4] = 0x08b90000u;
    { c->r[31] = 0x089ea028u; c->r[4] = c->r[4] + 0x00006530u; func_08808260(c, ram); }
L_089ea028:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e9f68 */
}

/* func_089eaf30  0x089eaf30..0x089eaf74  68 bytes, source=sweep */
void func_089eaf30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eaf30u);
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
    { c->r[31] = 0x089eaf60u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eaf30 */
}

/* func_089eef20  0x089eef20..0x089eefc8  168 bytes, source=fde */
void func_089eef20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eef20u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc474u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    { c->r[31] = 0x089eef50u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1b008(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089eef70; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_089eefa0; }
L_089eef70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[4] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[1]);
L_089eefa0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089eef20 */
}

/* func_089f0b7c  0x089f0b7c..0x089f0bc0  68 bytes, source=sweep */
void func_089f0b7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0b7cu);
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
    { c->r[31] = 0x089f0bacu; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0b7c */
}

/* func_089f1e54  0x089f1e54..0x089f22d8  1156 bytes, source=fde */
void func_089f1e54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f1e54u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffc55cu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffc560u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc528u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f1ec8; }
    { goto L_089f1ef4; }
L_089f1ec8:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006580u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f1ee8; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc528u);
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_089f1ef4; }
L_089f1ee8:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc52cu);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_089f1ef4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000048u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc530u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc534u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f1f70; }
    { goto L_089f1f80; }
L_089f1f70:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc534u);
    { mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]); goto L_089f1f8c; }
L_089f1f80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
L_089f1f8c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_wf32(ram, c->r[2] + 0x00000058u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000044u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000048u);
    { c->r[31] = 0x089f1fd4u; c->f[15] = mem_rf32(ram, c->r[7] + 0x0000004cu); func_089f24ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x000000e0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc538u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc53cu);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000040u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000044u);
    c->f[14] = c->f[2];
    { c->r[31] = 0x089f2024u; c->f[15] = c->f[0]; func_089f24ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000160u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc528u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000044u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x089f2058u; c->f[15] = mem_rf32(ram, c->r[6] + 0x00000058u); func_089f24ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f2078u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000120u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc540u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000120u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc544u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000134u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000120u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc548u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000120u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc548u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000134u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x000001e0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f210cu; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000220u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f2130u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000260u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000120u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f2154u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000160u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f2178u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f22bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc52cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089f21d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f21e8; }
    { goto L_089f22bc; }
L_089f21e8:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f21f4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000044u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089f2218u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000018u); func_089f24ac(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f2234u; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000460u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000760u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089f228cu; func_089f2544(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089f21d0; }
L_089f22bc:
    { c->r[31] = 0x089f22c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f22d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_089f1e54 */
}

/* func_089f5620  0x089f5620..0x089f5658  56 bytes, source=sweep */
void func_089f5620(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5620u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f5620 */
}

/* func_089f7af4  0x089f7af4..0x089f7d84  656 bytes, source=fde */
void func_089f7af4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f7af4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089f7b0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7b24; }
    { goto L_089f7b40; }
L_089f7b24:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f7b30u; c->r[4] = c->r[2] + 0u; func_089f9868(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089f7b0c; }
L_089f7b40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000039f8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000039f8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000039f8u);
    c->r[2] = 0u + 0x00000dc0u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[4] + 0x000039f0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000039f8u);
    c->r[2] = 0u + 0x00000580u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00002970u;
    mem_w32(ram, c->r[4] + 0x000039f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000039f0u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089f7bb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7bcc; }
    { goto L_089f7d70; }
L_089f7bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f7d54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000095u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f7d54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f7d54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffd100u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089f7c2cu: goto L_089f7c2c; case 0x089f7c58u: goto L_089f7c58; case 0x089f7c9cu: goto L_089f7c9c; case 0x089f7cccu: goto L_089f7ccc; case 0x089f7d14u: goto L_089f7d14; case 0x089f7d54u: goto L_089f7d54; default: recomp_trap_unknown_indirect(c, ram, 0x089f7c24u, _t); return; } }
L_089f7c2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000038u);
    { c->r[31] = 0x089f7c50u; c->r[7] = c->r[2] + 0u; func_089f5dcc(c, ram); }
    { goto L_089f7d54; }
L_089f7c58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000038u);
    c->f[12] = mem_rf32(ram, c->r[7] + 0x0000003cu);
    c->r[7] = mem_r32(ram, c->r[8] + 0x00000040u);
    c->r[8] = mem_r32(ram, c->r[9] + 0x00000044u);
    { c->r[31] = 0x089f7c94u; c->r[9] = c->r[2] + 0u; func_089f5f2c(c, ram); }
    { goto L_089f7d54; }
L_089f7c9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089f7cc4u; c->r[7] = c->r[2] + 0u; func_089f60cc(c, ram); }
    { goto L_089f7d54; }
L_089f7ccc:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[9] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000038u);
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x089f7d0cu; c->r[10] = c->r[2] + 0u; func_089f6254(c, ram); }
    { goto L_089f7d54; }
L_089f7d14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[9] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x089f7d54u; c->r[10] = c->r[2] + 0u; func_089f65a8(c, ram); }
L_089f7d54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a0u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089f7bb4; }
L_089f7d70:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f7af4 */
}

/* func_089f91a8  0x089f91a8..0x089f9200  88 bytes, source=residue */
void func_089f91a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f91a8u);
    c->f[0] = u2f(0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = 0x80000000u;
    alx_c_cond_s(c, 12, c->f[12], c->f[0]);
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    c->r[4] = 0u + 0u;
    c->f[20] = c->f[12];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[2] = c->r[2] | 0x0030u; if (_c) goto L_089f91f0; }
    { c->r[31] = 0x089f91d8u; func_089fb380(c, ram); }
    c->r[2] = alx_seh(c->r[2]);
    c->f[12] = c->f[20];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f91ecu; c->r[4] = 0u + 0u; func_089fb044(c, ram); }
    c->r[2] = 0u + 0u;
L_089f91f0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f91a8 */
}

/* func_089f9fd0  0x089f9fd0..0x089fa048  120 bytes, source=sweep */
void func_089f9fd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9fd0u);
    { int _c = (c->r[5] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_089fa004; }
    c->r[7] = 0u + 0u;
    c->r[3] = c->r[4] + 0u;
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
L_089f9fe4:
    c->r[8] = c->r[7] + 0u;
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[3] = c->r[3] + 0x0000004cu;
    { int _c = (c->r[2] == 0u); c->r[6] = (c->r[7] < 0x0000001du) ? 1u : 0u; if (_c) goto L_089fa010; }
    if (c->r[6] != 0u) { c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u); goto L_089f9fe4; }
    c->r[2] = 0u + 0x00000001u;
L_089fa004:
    { int _c = (c->r[5] == c->r[2]); c->r[8] = 0x80000000u; if (_c) goto L_089fa018; }
L_089fa00c:
    c->r[8] = c->r[8] | 0x0012u;
L_089fa010:
    { c->r[2] = c->r[8] + 0u; return; }
L_089fa018:
    c->r[4] = c->r[4] + 0x00000980u;
    c->r[7] = 0u + 0u;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u);
L_089fa024:
    c->r[8] = c->r[7] + 0u;
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[4] = c->r[4] + 0x0000004cu;
    { int _c = (c->r[2] == 0u); c->r[3] = (c->r[7] < 0x00000008u) ? 1u : 0u; if (_c) goto L_089fa010; }
    if (c->r[3] != 0u) { c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u); goto L_089fa024; }
    { c->r[8] = 0x80000000u; goto L_089fa00c; }
    return; /* fell out of func_089f9fd0 */
}

/* func_089fa6f0  0x089fa6f0..0x089fa720  48 bytes, source=sweep */
void func_089fa6f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa6f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0u | 0x8000u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00004700u);
    { int _c = ((s32)c->r[3] <= 0); c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_089fa718; }
    { c->r[31] = 0x089fa714u; c->r[4] = mem_r32(ram, c->r[4] + 0x00004708u); func_08a19594(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_089fa718:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa6f0 */
}

/* func_089fb168  0x089fb168..0x089fb1f4  140 bytes, source=fde */
void func_089fb168(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb168u);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = 0x08b90000u;
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[3] = c->r[3] + 0x00006594u;
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] << 5;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[2] + c->r[3];
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { c->r[31] = 0x089fb1a0u; c->f[20] = c->f[12]; func_089fb3b8(c, ram); }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0007u; if (_c) goto L_089fb1d8; }
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000004u);
    c->f[2] = u2f(c->r[17]);
    c->r[2] = 0u + 0x00000002u;
    c->f[0] = c->f[20] - c->f[0];
    c->f[1] = (f32)(s32)f2u(c->f[2]);
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = 0u + 0u;
    c->f[0] = c->f[0] / c->f[1];
    mem_w32(ram, c->r[16] + 0x00000010u, c->r[17]);
    mem_wf32(ram, c->r[16] + 0x00000014u, c->f[20]);
    mem_wf32(ram, c->r[16] + 0x00000018u, c->f[0]);
L_089fb1d8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fb168 */
}

/* func_089fbf60  0x089fbf60..0x089fbf88  40 bytes, source=residue */
void func_089fbf60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbf60u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[3] = c->r[4] + 0u;
    c->r[2] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00007eacu);
    { c->r[31] = 0x089fbf7cu; c->r[5] = mem_r32(ram, c->r[3] + 0x00000008u); func_089fbbb0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fbf60 */
}

/* func_089fcdbc  0x089fcdbc..0x089fcdf0  52 bytes, source=sweep */
void func_089fcdbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fcdbcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fcddcu; c->r[16] = alx_seh(c->r[16]); func_089fa398(c, ram); }
    mem_w16(ram, c->r[2] + 0x00000038u, c->r[16]);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fcdbc */
}

/* func_089fe0e4  0x089fe0e4..0x089fe108  36 bytes, source=sweep */
void func_089fe0e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe0e4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08ba0000u;
    c->r[5] = c->r[4] + 0u;
    { c->r[31] = 0x089fe0fcu; c->r[4] = mem_r32(ram, c->r[2] + 0xffff92dcu); func_089fdd38(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fe0e4 */
}

/* func_089fef98  0x089fef98..0x089fefa0  8 bytes, source=residue */
void func_089fef98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fef98u);
    { return; }
    return; /* fell out of func_089fef98 */
}

/* func_08a01720  0x08a01720..0x08a017dc  188 bytes, source=residue */
void func_08a01720(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01720u);
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000184u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[4] = c->lo;
    c->r[17] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    c->r[2] = 0u + 0x00000003u;
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); c->r[4] = 0x80000000u; if (_c) goto L_08a01780; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000048u);
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    c->r[3] = (c->r[2] < c->r[5]) ? 1u : 0u;
    { int _c = ((s32)c->r[2] <= 0); mem_w32(ram, c->r[29] + 0x00000004u, 0u); if (_c) goto L_08a01780; }
    c->r[5] = c->r[29] + 0u;
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[29] + 0x00000004u; if (_c) goto L_08a0179c; }
L_08a01780:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a0179c:
    { c->r[31] = 0x08a017a4u; c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u); hle_dispatch_stub(c, ram, 0x08a2494cu); /* sceAtracGetLoopStatus */ }
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[16] = c->r[2] + 0u;
    c->r[5] = c->r[18] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a017bcu; c->r[7] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2490cu); /* sceAtracResetPlayPosition */ }
    if (c->r[16] == 0u) { c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u); goto L_08a017cc; }
    { c->r[4] = 0u + 0u; goto L_08a01780; }
L_08a017cc:
    { c->r[31] = 0x08a017d4u; c->r[5] = mem_r32(ram, c->r[29] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a2492cu); /* sceAtracSetLoopNum */ }
    { c->r[4] = 0u + 0u; goto L_08a01780; }
    return; /* fell out of func_08a01720 */
}

/* func_08a02c78  0x08a02c78..0x08a02cb8  64 bytes, source=residue */
void func_08a02c78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02c78u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x000000acu, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[4] + 0x00000098u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x0000009cu, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, 0u);
    mem_w32(ram, c->r[4] + 0x00000004u, 0u);
    mem_w32(ram, c->r[4] + 0x00000088u, 0u);
    mem_w32(ram, c->r[4] + 0x0000008cu, 0u);
    mem_w32(ram, c->r[4] + 0x000000a0u, 0u);
    mem_w32(ram, c->r[4] + 0x000000a4u, 0u);
    { mem_w32(ram, c->r[4] + 0x000000a8u, 0u); return; }
    return; /* fell out of func_08a02c78 */
}

/* func_08a03744  0x08a03744..0x08a03888  324 bytes, source=sweep */
void func_08a03744(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03744u);
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd38cu);
    c->f[5] = (f32)fabsf(c->f[12]);
    alx_c_cond_s(c, 12, c->f[5], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a037f4; }
    c->f[0] = u2f(0u);
    c->r[2] = 0x08a50000u;
    alx_c_cond_s(c, 12, c->f[12], c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd390u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffd3c0u;
    c->f[0] = c->f[5] * c->f[0];
    c->f[4] = u2f((u32)alx_cvt_w_s(c, c->f[0]));
    c->r[3] = f2u(c->f[4]);
    c->f[0] = u2f(c->r[3]);
    c->r[3] = c->r[3] << 4;
    c->r[3] = c->r[3] + c->r[2];
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd394u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[3] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[2] = c->f[2] * c->f[1];
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[4] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[5] = c->f[5] - c->f[2];
    c->f[0] = c->f[0] * c->f[5];
    c->f[0] = c->f[0] + c->f[3];
    c->f[0] = c->f[0] * c->f[5];
    c->f[0] = c->f[0] + c->f[1];
    c->f[0] = c->f[0] * c->f[5];
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->f[5] = c->f[0] + c->f[4]; if (_c) goto L_08a037d8; }
    { c->f[0] = c->f[5]; return; }
L_08a037d8:
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd398u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd39cu);
    c->f[0] = c->f[0] - c->f[5];
    { c->f[0] = c->f[0] + c->f[1]; return; }
L_08a037f4:
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[12], c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd3a0u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd3a4u);
    c->f[0] = c->f[0] - c->f[5];
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] * c->f[1];
    c->f[5] = (f32)sqrtf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd390u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffd540u;
    c->f[0] = c->f[5] * c->f[0];
    c->f[4] = u2f((u32)alx_cvt_w_s(c, c->f[0]));
    c->r[3] = f2u(c->f[4]);
    c->f[0] = u2f(c->r[3]);
    c->r[3] = c->r[3] << 4;
    c->r[3] = c->r[3] + c->r[2];
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd394u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[3] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[2] = c->f[2] * c->f[1];
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[4] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[5] = c->f[5] - c->f[2];
    c->f[0] = c->f[0] * c->f[5];
    c->f[0] = c->f[0] + c->f[3];
    c->f[0] = c->f[0] * c->f[5];
    c->f[0] = c->f[0] + c->f[1];
    c->f[0] = c->f[0] * c->f[5];
    c->f[0] = c->f[0] + c->f[4];
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->f[5] = c->f[0] + c->f[0]; if (_c) goto L_08a037d8; }
    { c->f[0] = c->f[5]; return; }
    return; /* fell out of func_08a03744 */
}

/* func_08a04894  0x08a04894..0x08a048d0  60 bytes, source=sweep */
void func_08a04894(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04894u);
    c->r[3] = 0x08ba0000u;
    c->r[6] = c->r[4] << 2;
    c->r[8] = c->r[3] + 0xffffaf4cu;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = c->r[6] + c->r[8];
    c->r[7] = 0x80440000u;
    c->r[6] = (c->r[4] < 0x00000004u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[7] | 0x0010u; if (_c) goto L_08a048c4; }
    { c->r[31] = 0x08a048c4u; c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24974u); /* sceAudioChangeChannelConfig */ }
L_08a048c4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a04894 */
}

/* func_08a060b4  0x08a060b4..0x08a060dc  40 bytes, source=residue */
void func_08a060b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a060b4u);
    c->r[5] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[5] + 0xffffaf80u);
    c->r[3] = 0x80420000u;
    c->r[6] = 0u + 0x00000001u;
    { int _c = (c->r[2] != c->r[6]); c->r[4] = c->r[3] | 0x0100u; if (_c) goto L_08a060d4; }
    mem_w32(ram, c->r[5] + 0xffffaf80u, 0u);
    c->r[4] = 0u + 0u;
L_08a060d4:
    { c->r[2] = c->r[4] + 0u; return; }
    return; /* fell out of func_08a060b4 */
}

/* func_08a071c4  0x08a071c4..0x08a0721c  88 bytes, source=sweep */
void func_08a071c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a071c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffd7a0u;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    mem_w32(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffdfa0u;
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a071c4 */
}

/* func_08a0d7d0  0x08a0d7d0..0x08a0dca0  1232 bytes, source=fde */
void func_08a0d7d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0d7d0u);
    c->r[29] = c->r[29] + 0xffffff80u;
    c->r[2] = c->r[8] + 0x00000020u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = 0u + 0x00000003u;
    mem_w32(ram, c->r[29] + 0x0000006cu, c->r[23]);
    c->r[23] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[22]);
    c->r[22] = c->r[8] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[21]);
    c->r[21] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[17]);
    { int _c = (c->r[4] != c->r[2]); mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]); if (_c) goto L_08a0d8dc; }
    c->r[2] = c->r[5] ^ 0x0006u;
    c->r[3] = 0x432b0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = c->r[3] | 0x2b00u;
    c->r[4] = c->r[2] + 0u;
    { int _c = (c->r[6] == c->r[3]); c->r[5] = 0u + 0u; if (_c) goto L_08a0dc50; }
L_08a0d840:
    c->r[2] = c->r[4] & c->r[5];
L_08a0d844:
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); c->r[4] = 0u + 0x00000001u; if (_c) goto L_08a0d964; }
    c->r[2] = mem_r32(ram, c->r[22] + 0x00000024u);
    c->r[3] = mem_r32(ram, c->r[22] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[22] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000044u);
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    if (c->r[3] != 0u) c->r[4] = c->r[2];
    c->r[2] = 0x432b0000u;
L_08a0d878:
    c->r[2] = c->r[2] | 0x2b00u;
    c->r[5] = alx_ext(c->r[23], 3u, 0u);
    { int _c = (c->r[18] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_08a0d94c; }
    c->r[3] = 0u + 0x00000001u;
L_08a0d88c:
    c->r[2] = c->r[3] | c->r[5];
L_08a0d890:
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0d918; }
    { int _c = (c->r[4] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x00000048u); if (_c) goto L_08a0dc68; }
    { int _c = ((s32)c->r[3] < 0); if (_c) goto L_08a0d910; }
L_08a0d8ac:
    c->r[6] = c->r[22] + 0x00000030u;
L_08a0d8b0:
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08a0d8bcu; c->r[4] = c->r[21] + 0u; func_08a16858(c, ram); }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[4] = c->r[21] + 0u;
    { c->r[31] = 0x08a0d8ccu; c->r[5] = 0u + 0x00000005u; func_08a16858(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000044u);
    { c->r[31] = 0x08a0d8d8u; c->r[4] = c->r[21] + 0u; func_08a16874(c, ram); }
    c->r[3] = 0u + 0x00000007u;
L_08a0d8dc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000080u; return; }
L_08a0d910:
    { c->r[31] = 0x08a0d918u; func_08a0ddf4(c, ram); }
L_08a0d918:
    { int _c = (c->r[4] == c->r[2]); c->r[2] = mem_r32(ram, c->r[29] + 0x00000048u); if (_c) goto L_08a0dc90; }
    { int _c = ((s32)c->r[2] >= 0); c->r[6] = c->r[22] + 0x00000030u; if (_c) goto L_08a0d8b0; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[4] = c->r[21] + 0u;
    { c->r[31] = 0x08a0d938u; c->r[6] = c->r[29] + 0u; func_08a0d51c(c, ram); }
    c->r[4] = mem_r8(ram, c->r[29] + 0x00000014u);
    { c->r[31] = 0x08a0d944u; c->r[5] = c->r[21] + 0u; func_08a0d2a4(c, ram); }
    { mem_w32(ram, c->r[22] + 0x00000024u, c->r[2]); goto L_08a0d8ac; }
L_08a0d94c:
    c->r[2] = 0x474e0000u;
    c->r[2] = c->r[2] | 0x5543u;
    if (c->r[19] != c->r[2]) { c->r[3] = 0u + 0x00000001u; goto L_08a0d88c; }
    { c->r[2] = c->r[3] | c->r[5]; goto L_08a0d890; }
L_08a0d964:
    { c->r[31] = 0x08a0d96cu; c->r[4] = c->r[21] + 0u; func_08a148f0(c, ram); }
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[2]);
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0x00000008u; if (_c) goto L_08a0d8dc; }
    c->r[6] = c->r[29] + 0u;
    c->r[4] = c->r[21] + 0u;
    { c->r[31] = 0x08a0d988u; c->r[5] = c->r[2] + 0u; func_08a0d51c(c, ram); }
    c->r[4] = mem_r8(ram, c->r[29] + 0x00000014u);
    c->r[5] = c->r[21] + 0u;
    c->r[17] = c->r[2] + 0u;
    { c->r[31] = 0x08a0d99cu; mem_w32(ram, c->r[29] + 0x00000044u, 0u); func_08a0d2a4(c, ram); }
    c->r[4] = c->r[21] + 0u;
    { c->r[31] = 0x08a0d9a8u; mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]); func_08a1686c(c, ram); }
    c->r[20] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
    mem_w32(ram, c->r[29] + 0x00000040u, 0u);
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000048u, 0u); if (_c) goto L_08a0da74; }
    c->r[30] = c->r[29] + 0x00000028u;
    c->r[16] = mem_r8(ram, c->r[29] + 0x00000015u);
L_08a0d9c8:
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a0d9d4u; c->r[4] = c->r[16] + 0u; func_08a0d2a4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a0d9e8u; c->r[7] = c->r[29] + 0x00000020u; func_08a0d3d8(c, ram); }
    c->r[16] = mem_r8(ram, c->r[29] + 0x00000015u);
    c->r[5] = 0u + 0u;
    c->r[17] = c->r[2] + 0u;
    { c->r[31] = 0x08a0d9fcu; c->r[4] = c->r[16] + 0u; func_08a0d2a4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a0da10u; c->r[7] = c->r[29] + 0x00000024u; func_08a0d3d8(c, ram); }
    c->r[16] = mem_r8(ram, c->r[29] + 0x00000015u);
    c->r[5] = 0u + 0u;
    c->r[17] = c->r[2] + 0u;
    { c->r[31] = 0x08a0da24u; c->r[4] = c->r[16] + 0u; func_08a0d2a4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a0da38u; c->r[7] = c->r[30] + 0u; func_08a0d3d8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a0da44u; c->r[5] = c->r[29] + 0x0000002cu; func_08a0d34c(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[4] = c->r[4] + c->r[2];
    c->r[3] = (c->r[20] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000024u); if (_c) goto L_08a0dae0; }
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[17] + 0u;
L_08a0da68:
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = mem_r8(ram, c->r[29] + 0x00000015u); if (_c) goto L_08a0d9c8; }
L_08a0da74:
    c->r[4] = 0u + 0x00000001u;
L_08a0da78:
    c->r[2] = c->r[23] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x432b0000u; if (_c) goto L_08a0d878; }
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[4] == c->r[2]); c->r[3] = 0u + 0x00000008u; if (_c) goto L_08a0d8dc; }
    c->r[2] = 0x432b0000u;
    c->r[2] = c->r[2] | 0x2b00u;
    { int _c = (c->r[18] == c->r[2]); c->r[2] = 0x474e0000u; if (_c) goto L_08a0daa8; }
L_08a0daa0:
    { c->r[3] = 0u + 0x00000006u; goto L_08a0d8dc; }
L_08a0daa8:
    c->r[2] = c->r[2] | 0x5543u;
    if (c->r[19] != c->r[2]) { c->r[3] = 0u + 0x00000006u; goto L_08a0d8dc; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000044u);
    mem_w32(ram, c->r[22] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000003cu);
    mem_w32(ram, c->r[22] + 0x00000024u, c->r[3]);
    mem_w32(ram, c->r[22] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[22] + 0x0000001cu, c->r[3]);
    { mem_w32(ram, c->r[22] + 0x00000028u, c->r[2]); goto L_08a0daa0; }
L_08a0dae0:
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = (c->r[20] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a0da68; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000028u);
    if (c->r[3] == 0u) { c->r[3] = mem_r32(ram, c->r[29] + 0x0000002cu); goto L_08a0db0c; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000002cu);
L_08a0db0c:
    { int _c = (c->r[3] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000044u); if (_c) goto L_08a0db28; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000044u);
L_08a0db28:
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0x00000008u; if (_c) goto L_08a0d8dc; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000040u);
    { int _c = (c->r[3] == 0u); c->r[4] = 0u + 0x00000002u; if (_c) goto L_08a0da78; }
    c->r[2] = 0x432b0000u;
    c->r[2] = c->r[2] | 0x2b00u;
    c->r[20] = 0u + 0u;
    c->r[3] = alx_ext(c->r[23], 3u, 0u);
    { int _c = (c->r[18] == c->r[2]); c->r[4] = 0u + 0u; if (_c) goto L_08a0dc38; }
    c->r[4] = 0u + 0x00000001u;
L_08a0db58:
    c->r[2] = c->r[4] | c->r[3];
L_08a0db5c:
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); c->r[16] = 0u + 0u; if (_c) goto L_08a0db6c; }
    c->r[16] = mem_r32(ram, c->r[22] + 0x00000000u);
L_08a0db6c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[31] = 0x08a0db78u; c->r[5] = c->r[29] + 0x00000030u; func_08a0d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[29] + 0x00000034u;
    { c->r[31] = 0x08a0db88u; c->r[17] = c->r[2] + 0u; func_08a0d380(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000030u);
    { int _c = (c->r[5] != 0u); if (_c) goto L_08a0dbbc; }
    c->r[20] = 0u + 0x00000001u;
L_08a0db98:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
L_08a0db9c:
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[17] + c->r[2]; if (_c) goto L_08a0dbac; }
    { mem_w32(ram, c->r[29] + 0x00000040u, c->r[17]); goto L_08a0db6c; }
L_08a0dbac:
    { int _c = (c->r[20] != 0u); c->r[4] = 0u + 0x00000002u; if (_c) goto L_08a0da78; }
    { c->r[3] = 0u + 0x00000008u; goto L_08a0d8dc; }
L_08a0dbbc:
    { int _c = ((s32)c->r[5] <= 0); if (_c) goto L_08a0dc00; }
    { c->r[31] = 0x08a0dbccu; c->r[4] = c->r[29] + 0u; func_08a0d61c(c, ram); }
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u); goto L_08a0dbf4; }
    { int _c = (c->r[16] == 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a0db98; }
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a0dbe8u; c->r[6] = c->r[29] + 0x00000038u; func_08a0d674(c, ram); }
L_08a0dbe8:
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u); if (_c) goto L_08a0db9c; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u);
L_08a0dbf4:
    c->r[4] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[29] + 0x00000048u, c->r[2]); goto L_08a0da78; }
L_08a0dc00:
    { int _c = (c->r[16] == 0u); c->r[7] = c->r[5] + 0u; if (_c) goto L_08a0dc28; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = c->r[29] + 0u;
    { c->r[31] = 0x08a0dc18u; c->r[5] = c->r[16] + 0u; func_08a0d70c(c, ram); }
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u); goto L_08a0db9c; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u); goto L_08a0dbf4; }
L_08a0dc28:
    { c->r[31] = 0x08a0dc30u; c->r[4] = c->r[29] + 0u; func_08a0d79c(c, ram); }
    { goto L_08a0dbe8; }
L_08a0dc38:
    c->r[2] = 0x474e0000u;
    c->r[2] = c->r[2] | 0x5543u;
    if (c->r[19] != c->r[2]) { c->r[4] = 0u + 0x00000001u; goto L_08a0db58; }
    { c->r[2] = c->r[4] | c->r[3]; goto L_08a0db5c; }
L_08a0dc50:
    c->r[2] = 0x474e0000u;
    c->r[2] = c->r[2] | 0x5543u;
    if (c->r[7] == c->r[2]) { c->r[5] = 0u + 0x00000001u; goto L_08a0d840; }
    { c->r[2] = c->r[4] & c->r[5]; goto L_08a0d844; }
L_08a0dc68:
    { c->r[31] = 0x08a0dc70u; func_08a0ddc4(c, ram); }
    { c->r[31] = 0x08a0dc78u; func_08a0e188(c, ram); }
    { c->r[31] = 0x08a0dc80u; func_08a0ddc4(c, ram); }
    { c->r[31] = 0x08a0dc88u; c->r[16] = c->r[4] + 0u; func_08a0e22c(c, ram); }
    { c->r[31] = 0x08a0dc90u; c->r[4] = c->r[16] + 0u; func_08a163b0(c, ram); }
L_08a0dc90:
    { c->r[31] = 0x08a0dc98u; c->r[4] = c->r[22] + 0x00000030u; func_08a0e188(c, ram); }
    { c->r[31] = 0x08a0dca0u; c->r[4] = mem_r32(ram, c->r[22] + 0x0000000cu); func_08a0dd9c(c, ram); }
    return; /* fell out of func_08a0d7d0 */
}

/* func_08a0e524  0x08a0e524..0x08a0e55c  56 bytes, source=indirect */
void func_08a0e524(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e524u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000568u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e544u; c->r[16] = c->r[4] + 0u; func_08a0e308(c, ram); }
    { c->r[31] = 0x08a0e54cu; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e524 */
}

/* func_08a0f0ac  0x08a0f0ac..0x08a0f12c  128 bytes, source=fde */
void func_08a0f0ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f0acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    { c->r[31] = 0x08a0f0d8u; c->r[16] = c->r[5] + 0u; func_08a0f07c(c, ram); }
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[17] + 0u;
    c->r[7] = c->r[18] + 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0x00000001u; if (_c) goto L_08a0f10c; }
L_08a0f0ec:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a0f10c:
    c->r[2] = mem_r32(ram, c->r[19] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0f124u; recomp_call_indirect(c, ram, 0x08a0f11cu, _t); }
    { c->r[3] = c->r[2] + 0u; goto L_08a0f0ec; }
    return; /* fell out of func_08a0f0ac */
}

/* func_08a1301c  0x08a1301c..0x08a13038  28 bytes, source=sweep */
void func_08a1301c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1301cu);
    c->r[3] = f2u(c->f[12]);
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = alx_ins(c->r[3], 0u, 31u, 31u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { c->r[2] = c->r[2] ^ 0x0001u; return; }
    return; /* fell out of func_08a1301c */
}

/* func_08a14ae8  0x08a14ae8..0x08a14fbc  1236 bytes, source=sweep */
void func_08a14ae8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14ae8u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    c->r[2] = (c->r[4] < c->r[5]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x0000012cu, c->r[19]);
    c->r[8] = c->r[4] + 0u;
    c->r[19] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[17]);
    c->r[17] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[7]); if (_c) goto L_08a14fac; }
    c->r[16] = mem_r8(ram, c->r[8] + 0x00000000u);
L_08a14b20:
    c->r[3] = c->r[16] + 0xfffffffdu;
    c->r[2] = (c->r[3] < 0x00000094u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[8] = c->r[8] + 0x00000001u; if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[3] << 2;
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x000010d4u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a14b4cu: goto L_08a14b4c; case 0x08a14b70u: goto L_08a14b70; case 0x08a14bb0u: goto L_08a14bb0; case 0x08a14bbcu: goto L_08a14bbc; case 0x08a14bc4u: goto L_08a14bc4; case 0x08a14bdcu: goto L_08a14bdc; case 0x08a14bf8u: goto L_08a14bf8; case 0x08a14c08u: goto L_08a14c08; case 0x08a14c18u: goto L_08a14c18; case 0x08a14c2cu: goto L_08a14c2c; case 0x08a14c44u: goto L_08a14c44; case 0x08a14c5cu: goto L_08a14c5c; case 0x08a14c70u: goto L_08a14c70; case 0x08a14c88u: goto L_08a14c88; case 0x08a14cacu: goto L_08a14cac; case 0x08a14cd8u: goto L_08a14cd8; case 0x08a14d14u: goto L_08a14d14; case 0x08a14d54u: goto L_08a14d54; case 0x08a14d5cu: goto L_08a14d5c; case 0x08a14d74u: goto L_08a14d74; case 0x08a14d7cu: goto L_08a14d7c; case 0x08a14d88u: goto L_08a14d88; case 0x08a14d98u: goto L_08a14d98; case 0x08a14da0u: goto L_08a14da0; case 0x08a14da8u: goto L_08a14da8; case 0x08a14db0u: goto L_08a14db0; case 0x08a14db8u: goto L_08a14db8; case 0x08a14dc0u: goto L_08a14dc0; case 0x08a14dc8u: goto L_08a14dc8; case 0x08a14dd4u: goto L_08a14dd4; case 0x08a14de0u: goto L_08a14de0; case 0x08a14de8u: goto L_08a14de8; case 0x08a14df0u: goto L_08a14df0; case 0x08a14df8u: goto L_08a14df8; case 0x08a14e04u: goto L_08a14e04; case 0x08a14e28u: goto L_08a14e28; case 0x08a14e44u: goto L_08a14e44; case 0x08a14e74u: goto L_08a14e74; case 0x08a14e8cu: goto L_08a14e8c; case 0x08a14eb0u: goto L_08a14eb0; case 0x08a14fb4u: goto L_08a14fb4; default: recomp_trap_unknown_indirect(c, ram, 0x08a14b44u, _t); return; } }
L_08a14b4c:
    c->r[2] = c->r[16] + 0xffffffd0u;
L_08a14b50:
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[2]);
L_08a14b54:
    c->r[2] = (c->r[17] < 0x00000040u) ? 1u : 0u;
L_08a14b58:
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000100u); if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[17] << 2;
    c->r[2] = c->r[2] + c->r[29];
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[17] = c->r[17] + 0x00000001u;
L_08a14b70:
    c->r[2] = (c->r[8] < c->r[18]) ? 1u : 0u;
L_08a14b74:
    if (c->r[2] != 0u) { c->r[16] = mem_r8(ram, c->r[8] + 0x00000000u); goto L_08a14b20; }
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] < 0); if (_c) goto L_08a14fb4; }
L_08a14b88:
    c->r[3] = c->r[17] << 2;
    c->r[3] = c->r[3] + c->r[29];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000130u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000012cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
L_08a14bb0:
    c->r[2] = mem_r8(ram, c->r[8] + 0x00000000u);
L_08a14bb4:
    { c->r[8] = c->r[8] + 0x00000001u; goto L_08a14b50; }
L_08a14bbc:
    { c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[8] + 0x00000000u); goto L_08a14bb4; }
L_08a14bc4:
    c->r[2] = mem_r8(ram, c->r[8] + 0x00000001u);
    c->r[3] = mem_r8(ram, c->r[8] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000002u;
L_08a14bd0:
    c->r[2] = c->r[2] << 8;
    { c->r[2] = c->r[2] | c->r[3]; goto L_08a14b50; }
L_08a14bdc:
    c->r[2] = mem_r8(ram, c->r[8] + 0x00000001u);
    c->r[3] = mem_r8(ram, c->r[8] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000002u;
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[2] = alx_seh(c->r[2]); goto L_08a14b50; }
L_08a14bf8:
    c->r[2] = mem_lwl(ram, c->r[8] + 0x00000003u, c->r[2]);
    c->r[2] = mem_lwr(ram, c->r[8] + 0x00000000u, c->r[2]);
    { c->r[8] = c->r[8] + 0x00000004u; goto L_08a14b50; }
L_08a14c08:
    c->r[2] = mem_lwl(ram, c->r[8] + 0x00000003u, c->r[2]);
    c->r[2] = mem_lwr(ram, c->r[8] + 0x00000000u, c->r[2]);
    { c->r[8] = c->r[8] + 0x00000008u; goto L_08a14b50; }
L_08a14c18:
    c->r[4] = c->r[8] + 0u;
    { c->r[31] = 0x08a14c24u; c->r[5] = c->r[29] + 0x00000100u; func_08a14718(c, ram); }
    { c->r[8] = c->r[2] + 0u; goto L_08a14b54; }
L_08a14c2c:
    c->r[4] = c->r[8] + 0u;
    { c->r[31] = 0x08a14c38u; c->r[5] = c->r[29] + 0x00000104u; func_08a1474c(c, ram); }
    c->r[8] = c->r[2] + 0u;
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000104u); goto L_08a14b50; }
L_08a14c44:
    { int _c = ((s32)c->r[17] <= 0); c->r[2] = c->r[17] << 2; if (_c) goto L_08a14fb4; }
L_08a14c4c:
    c->r[2] = c->r[2] + c->r[29];
    c->r[3] = mem_r32(ram, c->r[2] + 0xfffffffcu);
L_08a14c54:
    { mem_w32(ram, c->r[29] + 0x00000100u, c->r[3]); goto L_08a14b54; }
L_08a14c5c:
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] >= 0); c->r[2] = (c->r[8] < c->r[18]) ? 1u : 0u; if (_c) goto L_08a14b74; }
    { goto L_08a14fb4; }
L_08a14c70:
    c->r[2] = ((s32)c->r[17] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[17] << 2; if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[2] + c->r[29];
    { c->r[3] = mem_r32(ram, c->r[2] + 0xfffffff8u); goto L_08a14c54; }
L_08a14c88:
    c->r[3] = mem_r8(ram, c->r[8] + 0x00000000u);
    c->r[2] = c->r[17] + 0xffffffffu;
    c->r[8] = c->r[8] + 0x00000001u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x0000010cu, c->r[3]); if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[17] - c->r[3];
    { c->r[2] = c->r[2] << 2; goto L_08a14c4c; }
L_08a14cac:
    c->r[2] = ((s32)c->r[17] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[17] << 2; if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[2] + c->r[29];
    c->r[3] = mem_r32(ram, c->r[2] + 0xfffffffcu);
    c->r[4] = mem_r32(ram, c->r[2] + 0xfffffff8u);
    c->r[5] = mem_r32(ram, c->r[2] + 0xfffffff4u);
    mem_w32(ram, c->r[2] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[2] + 0xfffffffcu, c->r[4]);
    { mem_w32(ram, c->r[2] + 0xfffffff8u, c->r[5]); goto L_08a14b70; }
L_08a14cd8:
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] < 0); c->r[2] = c->r[17] << 2; if (_c) goto L_08a14fb4; }
    c->r[3] = mem_r8(ram, c->r[8] + 0x00000001u);
    c->r[4] = mem_r8(ram, c->r[8] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[29];
    c->r[3] = c->r[3] << 8;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] | c->r[4];
    c->r[3] = alx_seh(c->r[3]);
    mem_w32(ram, c->r[29] + 0x0000010cu, c->r[3]);
    { int _c = (c->r[5] == 0u); c->r[8] = c->r[8] + 0x00000002u; if (_c) goto L_08a14b70; }
    { c->r[8] = c->r[8] + c->r[3]; goto L_08a14b70; }
L_08a14d14:
    c->r[17] = c->r[17] + 0xfffffffeu;
    { int _c = ((s32)c->r[17] < 0); c->r[4] = c->r[16] + 0xffffffe6u; if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[17] << 2;
    c->r[2] = c->r[2] + c->r[29];
    c->r[3] = (c->r[4] < 0x00000015u) ? 1u : 0u;
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[3] == 0u); c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); if (_c) goto L_08a14fb4; }
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[4] << 2;
    c->r[3] = c->r[3] + 0x00001324u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a14b4cu: goto L_08a14b4c; case 0x08a14b70u: goto L_08a14b70; case 0x08a14bb0u: goto L_08a14bb0; case 0x08a14bbcu: goto L_08a14bbc; case 0x08a14bc4u: goto L_08a14bc4; case 0x08a14bdcu: goto L_08a14bdc; case 0x08a14bf8u: goto L_08a14bf8; case 0x08a14c08u: goto L_08a14c08; case 0x08a14c18u: goto L_08a14c18; case 0x08a14c2cu: goto L_08a14c2c; case 0x08a14c44u: goto L_08a14c44; case 0x08a14c5cu: goto L_08a14c5c; case 0x08a14c70u: goto L_08a14c70; case 0x08a14c88u: goto L_08a14c88; case 0x08a14cacu: goto L_08a14cac; case 0x08a14cd8u: goto L_08a14cd8; case 0x08a14d14u: goto L_08a14d14; case 0x08a14d54u: goto L_08a14d54; case 0x08a14d5cu: goto L_08a14d5c; case 0x08a14d74u: goto L_08a14d74; case 0x08a14d7cu: goto L_08a14d7c; case 0x08a14d88u: goto L_08a14d88; case 0x08a14d98u: goto L_08a14d98; case 0x08a14da0u: goto L_08a14da0; case 0x08a14da8u: goto L_08a14da8; case 0x08a14db0u: goto L_08a14db0; case 0x08a14db8u: goto L_08a14db8; case 0x08a14dc0u: goto L_08a14dc0; case 0x08a14dc8u: goto L_08a14dc8; case 0x08a14dd4u: goto L_08a14dd4; case 0x08a14de0u: goto L_08a14de0; case 0x08a14de8u: goto L_08a14de8; case 0x08a14df0u: goto L_08a14df0; case 0x08a14df8u: goto L_08a14df8; case 0x08a14e04u: goto L_08a14e04; case 0x08a14e28u: goto L_08a14e28; case 0x08a14e44u: goto L_08a14e44; case 0x08a14e74u: goto L_08a14e74; case 0x08a14e8cu: goto L_08a14e8c; case 0x08a14eb0u: goto L_08a14eb0; case 0x08a14fb4u: goto L_08a14fb4; default: recomp_trap_unknown_indirect(c, ram, 0x08a14d4cu, _t); return; } }
L_08a14d54:
    { c->r[2] = c->r[5] & c->r[6]; goto L_08a14b50; }
L_08a14d5c:
    alx_div(c, c->r[5], c->r[6]);
    c->r[2] = c->lo;
L_08a14d64:
    if (c->r[6] == 0u) { recomp_break(c, ram, 0x08a14d68u, 0x7u); goto L_08a14d6c; }
L_08a14d6c:
    { mem_w32(ram, c->r[29] + 0x00000100u, c->r[2]); goto L_08a14b54; }
L_08a14d74:
    { c->r[2] = c->r[5] - c->r[6]; goto L_08a14b50; }
L_08a14d7c:
    alx_div(c, c->r[5], c->r[6]);
    { c->r[2] = c->hi; goto L_08a14d64; }
L_08a14d88:
    alx_mult(c, c->r[5], c->r[6]);
    c->r[2] = c->lo;
    { mem_w32(ram, c->r[29] + 0x00000100u, c->r[2]); goto L_08a14b54; }
L_08a14d98:
    { c->r[2] = c->r[5] | c->r[6]; goto L_08a14b50; }
L_08a14da0:
    { c->r[2] = c->r[5] + c->r[6]; goto L_08a14b50; }
L_08a14da8:
    { c->r[2] = c->r[5] << (c->r[6] & 31u); goto L_08a14b50; }
L_08a14db0:
    { c->r[2] = c->r[5] >> (c->r[6] & 31u); goto L_08a14b50; }
L_08a14db8:
    { c->r[2] = (u32)((s32)c->r[5] >> (c->r[6] & 31u)); goto L_08a14b50; }
L_08a14dc0:
    { c->r[2] = c->r[5] ^ c->r[6]; goto L_08a14b50; }
L_08a14dc8:
    c->r[2] = c->r[6] ^ c->r[5];
    { c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u; goto L_08a14b50; }
L_08a14dd4:
    c->r[2] = ((s32)c->r[6] < (s32)c->r[5]) ? 1u : 0u;
L_08a14dd8:
    { c->r[2] = c->r[2] ^ 0x0001u; goto L_08a14b50; }
L_08a14de0:
    { c->r[2] = ((s32)c->r[5] < (s32)c->r[6]) ? 1u : 0u; goto L_08a14b50; }
L_08a14de8:
    { c->r[2] = ((s32)c->r[5] < (s32)c->r[6]) ? 1u : 0u; goto L_08a14dd8; }
L_08a14df0:
    { c->r[2] = ((s32)c->r[6] < (s32)c->r[5]) ? 1u : 0u; goto L_08a14b50; }
L_08a14df8:
    c->r[2] = c->r[6] ^ c->r[5];
    { c->r[2] = (0u < c->r[2]) ? 1u : 0u; goto L_08a14b50; }
L_08a14e04:
    c->r[2] = mem_r8(ram, c->r[8] + 0x00000001u);
    c->r[3] = mem_r8(ram, c->r[8] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000002u;
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] | c->r[3];
    c->r[2] = alx_seh(c->r[2]);
    c->r[8] = c->r[8] + c->r[2];
    { mem_w32(ram, c->r[29] + 0x0000010cu, c->r[2]); goto L_08a14b70; }
L_08a14e28:
    c->r[2] = c->r[16] + 0xffffffb0u;
L_08a14e2c:
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[19];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x00000100u, c->r[4]); goto L_08a14b54; }
L_08a14e44:
    c->r[4] = c->r[8] + 0u;
    { c->r[31] = 0x08a14e50u; c->r[5] = c->r[29] + 0x0000010cu; func_08a1474c(c, ram); }
    c->r[8] = c->r[2] + 0u;
    c->r[2] = c->r[16] + 0xffffff90u;
L_08a14e58:
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[19];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000010cu);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[3] = c->r[3] + c->r[2]; goto L_08a14c54; }
L_08a14e74:
    c->r[4] = c->r[8] + 0u;
    { c->r[31] = 0x08a14e80u; c->r[5] = c->r[29] + 0x00000108u; func_08a14718(c, ram); }
    c->r[8] = c->r[2] + 0u;
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000108u); goto L_08a14e2c; }
L_08a14e8c:
    c->r[4] = c->r[8] + 0u;
    { c->r[31] = 0x08a14e98u; c->r[5] = c->r[29] + 0x00000108u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a14ea4u; c->r[5] = c->r[29] + 0x0000010cu; func_08a1474c(c, ram); }
    c->r[8] = c->r[2] + 0u;
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000108u); goto L_08a14e58; }
L_08a14eb0:
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] < 0); c->r[2] = c->r[17] << 2; if (_c) goto L_08a14fb4; }
    c->r[2] = c->r[2] + c->r[29];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000001fu;
    { int _c = (c->r[16] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000100u, c->r[4]); if (_c) goto L_08a14ef8; }
    c->r[2] = (c->r[16] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000023u; if (_c) goto L_08a14f10; }
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[16] == c->r[2]); c->r[2] = 0u + 0x00000019u; if (_c) goto L_08a14f00; }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08a14fb4; }
    if ((s32)c->r[4] >= 0) { c->r[2] = (c->r[17] < 0x00000040u) ? 1u : 0u; goto L_08a14b58; }
L_08a14ef8:
    { c->r[2] = 0u - c->r[4]; goto L_08a14b50; }
L_08a14f00:
    c->r[2] = mem_lwl(ram, c->r[4] + 0x00000003u, c->r[2]);
    c->r[2] = mem_lwr(ram, c->r[4] + 0x00000000u, c->r[2]);
    { mem_w32(ram, c->r[29] + 0x00000100u, c->r[2]); goto L_08a14b54; }
L_08a14f10:
    if (c->r[16] == c->r[2]) { c->r[4] = c->r[8] + 0u; goto L_08a14f90; }
    c->r[2] = (c->r[16] < 0x00000024u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000094u; if (_c) goto L_08a14f38; }
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[16] != c->r[2]); c->r[2] = ~(0u | c->r[4]); if (_c) goto L_08a14fb4; }
    { mem_w32(ram, c->r[29] + 0x00000100u, c->r[2]); goto L_08a14b54; }
L_08a14f38:
    { int _c = (c->r[16] != c->r[2]); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a14fb4; }
    c->r[3] = mem_r8(ram, c->r[8] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); c->r[8] = c->r[8] + 0x00000001u; if (_c) goto L_08a14f84; }
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000004u; if (_c) goto L_08a14f6c; }
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a14fb4; }
    { c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u); goto L_08a14b50; }
L_08a14f6c:
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000008u; if (_c) goto L_08a14f00; }
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a14f00; }
    { goto L_08a14fb4; }
L_08a14f84:
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000001u);
    { c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u); goto L_08a14bd0; }
L_08a14f90:
    { c->r[31] = 0x08a14f98u; c->r[5] = c->r[29] + 0x00000110u; func_08a14718(c, ram); }
    c->r[8] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000110u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[2] = c->r[2] + c->r[3]; goto L_08a14b50; }
L_08a14fac:
    { c->r[17] = 0u + 0u; goto L_08a14b88; }
L_08a14fb4:
    { c->r[31] = 0x08a14fbcu; func_08a19084(c, ram); }
    return; /* fell out of func_08a14ae8 */
}

/* func_08a17098  0x08a17098..0x08a170b4  28 bytes, source=fde */
void func_08a17098(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17098u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a170a8u; func_08a16fa0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a17098 */
}

/* func_08a18f94  0x08a18f94..0x08a18f9c  8 bytes, source=residue */
void func_08a18f94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18f94u);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18f94 */
}

/* func_08a19db8  0x08a19db8..0x08a19ec4  268 bytes, source=sweep */
void func_08a19db8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19db8u);
    c->r[2] = c->r[5] | c->r[4];
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); c->r[10] = c->r[4] + 0u; if (_c) goto L_08a19e5c; }
    c->r[8] = c->r[6] >> 4;
    c->r[9] = c->r[5] + 0u;
    c->r[6] = c->r[6] & 0x000fu;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[4] + 0u; if (_c) goto L_08a19e0c; }
L_08a19ddc:
    c->r[2] = mem_r32(ram, c->r[9] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[9] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[9] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[9] + 0x0000000cu);
    c->r[8] = c->r[8] + 0xffffffffu;
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[9] = c->r[9] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[4]);
    mem_w32(ram, c->r[7] + 0x0000000cu, c->r[5]);
    { int _c = (c->r[8] != 0u); c->r[7] = c->r[7] + 0x00000010u; if (_c) goto L_08a19ddc; }
L_08a19e0c:
    c->r[8] = c->r[6] >> 2;
    { int _c = (c->r[8] == 0u); c->r[6] = c->r[6] & 0x0003u; if (_c) goto L_08a19e30; }
L_08a19e18:
    c->r[2] = mem_r32(ram, c->r[9] + 0x00000000u);
    c->r[8] = c->r[8] + 0xffffffffu;
    c->r[9] = c->r[9] + 0x00000004u;
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    { int _c = (c->r[8] != 0u); c->r[7] = c->r[7] + 0x00000004u; if (_c) goto L_08a19e18; }
L_08a19e30:
    c->r[3] = c->r[7] + 0u;
    { int _c = ((s32)c->r[6] <= 0); c->r[5] = c->r[9] + 0u; if (_c) goto L_08a19e54; }
L_08a19e3c:
    c->r[2] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[5] = c->r[5] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { int _c = ((s32)c->r[6] > 0); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a19e3c; }
L_08a19e54:
    { c->r[2] = c->r[10] + 0u; return; }
L_08a19e5c:
    c->r[2] = (u32)((s32)c->r[6] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[6] + c->r[2];
    c->r[8] = (u32)((s32)c->r[2] >> 2);
    c->r[3] = c->r[8] << 2;
    c->r[6] = c->r[6] - c->r[3];
    { int _c = (c->r[8] == 0u); c->r[3] = c->r[4] + 0u; if (_c) goto L_08a19e9c; }
L_08a19e7c:
    c->r[8] = c->r[8] + 0xffffffffu;
    c->r[2] = mem_lwl(ram, c->r[5] + 0x00000003u, c->r[2]);
    c->r[2] = mem_lwr(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[5] = c->r[5] + 0x00000004u;
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[2]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[2]);
    { int _c = (c->r[8] != 0u); c->r[3] = c->r[3] + 0x00000004u; if (_c) goto L_08a19e7c; }
L_08a19e9c:
    { int _c = ((s32)c->r[6] <= 0); if (_c) goto L_08a19e54; }
L_08a19ea4:
    c->r[2] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[5] = c->r[5] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { int _c = ((s32)c->r[6] > 0); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a19ea4; }
    { goto L_08a19e54; }
    return; /* fell out of func_08a19db8 */
}

/* func_08a1af70  0x08a1af70..0x08a1b008  152 bytes, source=sweep */
void func_08a1af70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1af70u);
    c->r[2] = c->r[5] | c->r[4];
    c->r[2] = c->r[2] & 0x0003u;
    c->r[10] = c->r[4] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[4] + 0u; if (_c) goto L_08a1afec; }
    c->r[7] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = 0xfefe0000u;
    c->r[2] = c->r[2] | 0xfeffu;
    c->r[2] = c->r[7] + c->r[2];
    c->r[4] = ~(0u | c->r[7]);
    c->r[3] = 0x80800000u;
    c->r[2] = c->r[2] & c->r[4];
    c->r[3] = c->r[3] | 0x8080u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[10] + 0u; if (_c) goto L_08a1afe8; }
    c->r[9] = 0xfefe0000u;
    c->r[4] = c->r[7] + 0u;
    c->r[9] = c->r[9] | 0xfeffu;
    c->r[8] = c->r[3] + 0u;
L_08a1afc0:
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[4]);
    c->r[5] = c->r[5] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[3] = c->r[2] + c->r[9];
    c->r[4] = c->r[2] + 0u;
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = c->r[3] & c->r[2];
    c->r[3] = c->r[3] & c->r[8];
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[6] + 0x00000004u; if (_c) goto L_08a1afc0; }
L_08a1afe8:
    c->r[3] = c->r[6] + 0u;
L_08a1afec:
    c->r[2] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[5] = c->r[5] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a1afec; }
    { c->r[2] = c->r[10] + 0u; return; }
    return; /* fell out of func_08a1af70 */
}

/* func_08a21418  0x08a21418..0x08a21470  88 bytes, source=sweep */
void func_08a21418(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21418u);
    c->r[2] = 0x08a20000u;
    c->r[2] = c->r[2] + 0x00003bd4u;
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    c->r[2] = 0x08a20000u;
    c->r[2] = c->r[2] + 0x00003a58u;
    mem_w32(ram, c->r[4] + 0x00000020u, c->r[2]);
    c->r[3] = 0x08a20000u;
    c->r[2] = 0x08a20000u;
    c->r[3] = c->r[3] + 0x00003ad0u;
    c->r[2] = c->r[2] + 0x00003b5cu;
    mem_w16(ram, c->r[4] + 0x0000000cu, c->r[5]);
    mem_w16(ram, c->r[4] + 0x0000000eu, c->r[6]);
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[3]);
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, 0u);
    mem_w32(ram, c->r[4] + 0x00000004u, 0u);
    mem_w32(ram, c->r[4] + 0x00000008u, 0u);
    mem_w32(ram, c->r[4] + 0x00000010u, 0u);
    mem_w32(ram, c->r[4] + 0x00000014u, 0u);
    mem_w32(ram, c->r[4] + 0x00000018u, 0u);
    { mem_w32(ram, c->r[4] + 0x0000001cu, c->r[4]); return; }
    return; /* fell out of func_08a21418 */
}

/* func_08a23228  0x08a23228..0x08a2338c  356 bytes, source=sweep */
void func_08a23228(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23228u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[5] = 0u + 0x00000001u;
    c->r[17] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    c->r[21] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[31]);
    { c->r[31] = 0x08a23264u; c->r[16] = c->r[6] + 0u; func_08a225c0(c, ram); }
    c->r[3] = c->r[17] + 0u;
    c->r[17] = alx_ext(c->r[17], 0u, 30u);
    c->r[3] = alx_ins(c->r[3], 0u, 20u, 31u);
    c->r[19] = c->r[17] >> 20;
    c->r[18] = c->r[2] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
    { int _c = (c->r[19] == 0u); c->r[20] = c->r[2] + 0x00000014u; if (_c) goto L_08a23290; }
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
L_08a23290:
    { int _c = (c->r[16] == 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a23364; }
    { c->r[31] = 0x08a232a0u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); func_08a2295c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a23358; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[4] = 0u - c->r[2];
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = c->r[3] << (c->r[4] & 31u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[18] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[3] = c->r[3] >> (c->r[5] & 31u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
L_08a232cc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[3] = 0u + 0x00000002u;
    c->r[2] = 0u + 0x00000001u;
    if (c->r[4] == 0u) c->r[3] = c->r[2];
    c->r[16] = c->r[3] + 0u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[4]);
    mem_w32(ram, c->r[18] + 0x00000010u, c->r[3]);
L_08a232e8:
    { int _c = (c->r[19] == 0u); c->r[3] = c->r[16] << 2; if (_c) goto L_08a23334; }
    c->r[2] = c->r[19] + c->r[5];
    c->r[3] = 0u + 0x00000035u;
    c->r[3] = c->r[3] - c->r[5];
    c->r[2] = c->r[2] + 0xfffffbcdu;
    mem_w32(ram, c->r[21] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[22] + 0x00000000u, c->r[3]);
L_08a23308:
    c->r[2] = c->r[18] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a23334:
    c->r[3] = c->r[3] + c->r[20];
    c->r[2] = c->r[5] + 0xfffffbceu;
    mem_w32(ram, c->r[21] + 0x00000000u, c->r[2]);
    c->r[16] = c->r[16] << 5;
    { c->r[31] = 0x08a2334cu; c->r[4] = mem_r32(ram, c->r[3] + 0xfffffffcu); func_08a228d4(c, ram); }
    c->r[16] = c->r[16] - c->r[2];
    { mem_w32(ram, c->r[22] + 0x00000000u, c->r[16]); goto L_08a23308; }
L_08a23358:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    { mem_w32(ram, c->r[18] + 0x00000014u, c->r[2]); goto L_08a232cc; }
L_08a23364:
    { c->r[31] = 0x08a2336cu; c->r[4] = c->r[29] + 0x00000004u; func_08a2295c(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000010u, c->r[2]);
    c->r[16] = 0u + 0x00000001u;
    c->r[5] = c->r[5] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    { mem_w32(ram, c->r[18] + 0x00000014u, c->r[2]); goto L_08a232e8; }
    return; /* fell out of func_08a23228 */
}
