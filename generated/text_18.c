#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_088058cc  0x088058cc..0x08805910  68 bytes, source=fde */
void func_088058cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088058ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x088058f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089f8f84(c, ram); }
    { c->r[31] = 0x088058f8u; func_0884757c(c, ram); }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088058cc */
}

/* func_08806f5c  0x08806f5c..0x08806fa0  68 bytes, source=sweep */
void func_08806f5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806f5cu);
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
    { c->r[31] = 0x08806f8cu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806f5c */
}

/* func_0880809c  0x0880809c..0x088080bc  32 bytes, source=sweep */
void func_0880809c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880809cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880809c */
}

/* func_0880a6c0  0x0880a6c0..0x0880a6e0  32 bytes, source=indirect */
void func_0880a6c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880a6c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880a6c0 */
}

/* func_0880d294  0x0880d294..0x0880d2bc  40 bytes, source=sweep */
void func_0880d294(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d294u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000140u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d294 */
}

/* func_0880de0c  0x0880de0c..0x0880de68  92 bytes, source=fde */
void func_0880de0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880de0cu);
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
    { c->r[31] = 0x0880de4cu; c->r[6] = 0u + 0x000019e8u; func_089d9d14(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880de0c */
}

/* func_088111e4  0x088111e4..0x0881121c  56 bytes, source=sweep */
void func_088111e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088111e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08811208u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0881121c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088111e4 */
}

/* func_088133a0  0x088133a0..0x08813b98  2040 bytes, source=fde */
void func_088133a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088133a0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000005u);
    c->r[2] = (c->r[2] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08813b80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000005u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff248u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088133f8u: goto L_088133f8; case 0x08813424u: goto L_08813424; case 0x0881344cu: goto L_0881344c; case 0x088136e4u: goto L_088136e4; case 0x08813708u: goto L_08813708; case 0x088137a0u: goto L_088137a0; case 0x088137ccu: goto L_088137cc; case 0x08813800u: goto L_08813800; case 0x0881380cu: goto L_0881380c; case 0x088139e0u: goto L_088139e0; case 0x08813a4cu: goto L_08813a4c; case 0x08813a78u: goto L_08813a78; case 0x08813b5cu: goto L_08813b5c; default: recomp_trap_unknown_indirect(c, ram, 0x088133f0u, _t); return; } }
L_088133f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08813b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000002eu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
L_08813424:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08813430u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08813b80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
L_0881344c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08813464u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08813494; }
    { c->r[31] = 0x0881347cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08813488u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb9e8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08813494u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08813494:
    { c->r[31] = 0x0881349cu; func_0880b360(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813530; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08813530; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff244u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08813504u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813520; }
    { c->r[31] = 0x08813520u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
L_08813520:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_08813530:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08813664; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881355cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x08813564u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088135e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088135e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813664; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff244u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088135c8u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x088135d0u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813664; }
L_088135e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813610; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813610; }
    { goto L_08813664; }
L_08813610:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813664; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff244u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08813650u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x08813658u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
L_08813664:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08813b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813b80; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff244u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088136ccu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x088136d4u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_088136e4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088136f0u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813b80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_08813708:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0881371c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813734; }
    { goto L_088139c8; }
L_08813734:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[30] + 0x00000019u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881380c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff26cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088133f8u: goto L_088133f8; case 0x08813424u: goto L_08813424; case 0x0881344cu: goto L_0881344c; case 0x088136e4u: goto L_088136e4; case 0x08813708u: goto L_08813708; case 0x088137a0u: goto L_088137a0; case 0x088137ccu: goto L_088137cc; case 0x08813800u: goto L_08813800; case 0x0881380cu: goto L_0881380c; case 0x088139e0u: goto L_088139e0; case 0x08813a4cu: goto L_08813a4c; case 0x08813a78u: goto L_08813a78; case 0x08813b5cu: goto L_08813b5c; default: recomp_trap_unknown_indirect(c, ram, 0x08813798u, _t); return; } }
L_088137a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088137acu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088137bcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x00000022u, c->r[2]); goto L_08813824; }
L_088137cc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088137d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088137e8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088137f8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000022u, c->r[2]); goto L_08813824; }
L_08813800:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x00000019u, c->r[2]); goto L_08813824; }
L_0881380c:
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[2]);
L_08813824:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881383c; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000019u, c->r[2]);
L_0881383c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000019u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088138bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088138bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000021u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088138bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000022u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088138bc; }
    { goto L_088139b8; }
L_088138bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088138c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088138dc; }
    { goto L_08813904; }
L_088138dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088138c4; }
L_08813904:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08813950; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881392cu; c->r[5] = c->r[2] + 0u; func_089d7208(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08813938u; c->r[4] = c->r[2] + 0u; func_08812ed8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08813950u; c->r[5] = c->r[2] + 0u; func_089d7194(c, ram); }
L_08813950:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000021u);
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_088139b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0881371c; }
L_088139c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000002eu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_088139e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813a3c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff244u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08813a20u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_08813a3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_08813a4c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08813a58u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813b80; }
    { c->r[31] = 0x08813a68u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_08813a78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08813ab4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08813aec; }
L_08813abc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08813ae8u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08813aec:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08813b00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08813b50; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff244u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08813b38u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x08813b40u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08813b80; }
L_08813b50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000005u, 0u); goto L_08813b80; }
L_08813b5c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08813b68u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08813b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000005u, 0u);
L_08813b80:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088133a0 */
}

/* func_088191c8  0x088191c8..0x0881920c  68 bytes, source=sweep */
void func_088191c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088191c8u);
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
    return; /* fell out of func_088191c8 */
}

/* func_0881a064  0x0881a064..0x0881a114  176 bytes, source=sweep */
void func_0881a064(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881a064u);
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
    { c->r[31] = 0x0881a0acu; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881a0d0u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881a0dcu; c->r[5] = 0x15000000u; func_088191c8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881a100u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0881a064 */
}

/* func_08820d48  0x08820d48..0x08820d70  40 bytes, source=sweep */
void func_08820d48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820d48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820d48 */
}

/* func_088269d4  0x088269d4..0x08826a0c  56 bytes, source=sweep */
void func_088269d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088269d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088269f8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08826a0c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088269d4 */
}

/* func_0882838c  0x0882838c..0x0882848c  256 bytes, source=fde */
void func_0882838c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882838cu);
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
    { c->r[31] = 0x088283e0u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08828438; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08828444; }
L_08828438:
    { c->r[31] = 0x08828440u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08828444:
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
    { c->r[31] = 0x08828478u; c->r[7] = c->r[3] + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0882838c */
}

/* func_0882b7b0  0x0882b7b0..0x0882b810  96 bytes, source=fde */
void func_0882b7b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882b7b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882b7e8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000008u); func_089d7208(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882b7b0 */
}

/* func_088303bc  0x088303bc..0x08830474  184 bytes, source=fde */
void func_088303bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088303bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088303e0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); func_08967acc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883044c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002dedu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883044c; }
    { goto L_08830458; }
L_0883044c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0883045c; }
L_08830458:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0883045c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088303bc */
}

/* func_08832808  0x08832808..0x08832868  96 bytes, source=fde */
void func_08832808(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832808u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0x0000000cu;
    { c->r[31] = 0x08832830u; c->r[7] = 0u + 0x0000001eu; func_08831ef4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832848; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_08832850; }
L_08832848:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08832850:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832808 */
}

/* func_08834688  0x08834688..0x08834888  512 bytes, source=fde */
void func_08834688(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08834688u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
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
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08834738; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088346f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088307d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883470cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08834730; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08834730u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08834730:
    { c->r[31] = 0x08834738u; c->r[4] = 0u + 0x0000001eu; func_0880b09c(c, ram); }
L_08834738:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834874; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08834760u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x0000000au;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08834874; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001988u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088347c0u: goto L_088347c0; case 0x088347f8u: goto L_088347f8; case 0x08834820u: goto L_08834820; case 0x08834858u: goto L_08834858; case 0x08834874u: goto L_08834874; default: recomp_trap_unknown_indirect(c, ram, 0x088347b8u, _t); return; } }
L_088347c0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x088347f0u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08834874; }
L_088347f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08834818u; c->r[6] = c->r[3] + 0u; func_08813280(c, ram); }
    { goto L_08834874; }
L_08834820:
    c->r[2] = 0u + 0x00000012u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[30] + 0x00000017u, c->r[2]);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000019u;
    { c->r[31] = 0x08834850u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08834874; }
L_08834858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08834874u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08834874:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08834688 */
}

/* func_0883784c  0x0883784c..0x08837b1c  720 bytes, source=fde */
void func_0883784c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883784cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837884u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08837b04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088378d4u; c->r[5] = 0u + 0x00000006u; func_08937a50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088378f0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08837948; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000009au;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08837920u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000038u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883793cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08837948:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837964u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088379bc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000099u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08837994u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000003cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088379b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088379bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08837a90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088379e8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08837a40; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000009bu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08837a18u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837a34u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08837a40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08837a60; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08837a60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08837a90u; c->r[6] = 0u + 0xffffffffu; func_08932fb4(c, ram); }
L_08837a90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837aacu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08837b04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000098u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08837adcu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000044u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837af8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08837b04:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0883784c */
}

/* func_0883b794  0x0883b794..0x0883ba70  732 bytes, source=fde */
void func_0883b794(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883b794u);
    c->r[29] = c->r[29] + 0xfffffbc0u;
    mem_w32(ram, c->r[29] + 0x00000434u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000430u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883b7d4; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x00001590u;
    { c->r[31] = 0x0883b7ccu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883ba5c; }
L_0883b7d4:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004874u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883b9bc; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004894u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b870; }
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004890u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000e28u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00000e28u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004890u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00000e29u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000e29u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000026bcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0883b870u; c->r[6] = 0u + 0x00000060u; func_08a19db8(c, ram); }
L_0883b870:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x000048e0u;
    { c->r[31] = 0x0883b888u; c->r[6] = 0u + 0x00000400u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000410u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0883b89cu; c->r[5] = mem_r32(ram, c->r[5] + 0x00000e34u); func_0883aa2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0883b8a0:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b8c0; }
    { goto L_0883b8d0; }
L_0883b8c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0883b8a0; }
L_0883b8d0:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0883b8d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b8ec; }
    { goto L_0883b924; }
L_0883b8ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[30] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000003u;
    c->r[3] = c->r[30] + 0x00000410u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883b8d4; }
L_0883b924:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b930u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000df4u;
    { c->r[31] = 0x0883b948u; c->r[6] = 0u + 0x000019e8u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b954u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    { c->r[31] = 0x0883b960u; c->r[4] = c->r[2] + 0u; func_0883ab40(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0883b978u; c->r[6] = c->r[2] + 0u; func_089d9728(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b984u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0883b99cu; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0x08a80000u;
    c->r[6] = c->r[6] + 0x00002e74u;
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0883b9bcu; c->r[7] = c->r[7] + 0x00001cdcu; func_089d8a88(c, ram); }
L_0883b9bc:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004874u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883ba5c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b9dcu; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000420u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000420u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883ba34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000420u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883ba04; }
    { goto L_0883ba20; }
L_0883ba04:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883ba18u; c->r[5] = c->r[5] + 0xffffba70u; func_0880f03c(c, ram); }
    { goto L_0883ba34; }
L_0883ba20:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883ba34u; c->r[5] = c->r[5] + 0xffffbf44u; func_0880f03c(c, ram); }
L_0883ba34:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000048a8u);
    c->r[2] = 0x08840000u;
    c->r[2] = c->r[2] + 0xffffbf44u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883ba5c; }
    c->r[2] = 0u + 0x00000006u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x0883ba5cu; mem_w32(ram, c->r[1] + 0x0000488cu, c->r[2]); func_0883b118(c, ram); }
L_0883ba5c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000434u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000430u);
    { c->r[29] = c->r[29] + 0x00000440u; return; }
    return; /* fell out of func_0883b794 */
}

/* func_08844abc  0x08844abc..0x08844d34  632 bytes, source=fde */
void func_08844abc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08844abcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[8] + 0u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08844aec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08844b04; }
    { goto L_08844d20; }
L_08844b04:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08844b64; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844b3cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08844b5cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08933498(c, ram); }
    { goto L_08844d10; }
L_08844b64:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08844ba0; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000dcu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08844ba0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000dcu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08844be8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08844be8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08844c64; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08844cdc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08844cdc; }
L_08844c64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08844cdc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000005u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08844cdc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08844cdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844cf0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08844d10u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08933498(c, ram); }
L_08844d10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08844aec; }
L_08844d20:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08844abc */
}

/* func_08846f90  0x08846f90..0x08846fec  92 bytes, source=fde */
void func_08846f90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08846f90u);
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
    { c->r[31] = 0x08846fd0u; c->r[6] = 0u + 0x000019e8u; func_089d9d14(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08846f90 */
}

/* func_0884c1d8  0x0884c1d8..0x0884c224  76 bytes, source=sweep */
void func_0884c1d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c1d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8400000u); /* lv.q */
    vfpu_exec(c, ram, 0x64808081u); /* vdot.q */
    vfpu_exec(c, ram, 0xd0060021u); /* vzero.s */
    vfpu_exec(c, ram, 0x6c010108u); /* vcmp.s */
    vfpu_exec(c, ram, 0xd0110101u); /* vrsq.s */
    vfpu_exec(c, ram, 0xd2a02101u); /* vcmovt.s */
    vfpu_exec(c, ram, 0x65018080u); /* vscl.q */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c1d8 */
}

/* func_0884d750  0x0884d750..0x0884d790  64 bytes, source=sweep */
void func_0884d750(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d750u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8e78u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d750 */
}

/* func_088521e0  0x088521e0..0x088531e4  4100 bytes, source=fde */
void func_088521e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088521e0u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08852208u; c->r[5] = c->r[2] + 0u; func_0885aa94(c, ram); }
    c->r[2] = c->r[30] + 0x00000006u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08852218u; c->r[5] = c->r[2] + 0u; func_0885ab2c(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08852224u; c->r[4] = c->r[2] + 0u; func_08853448(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = (c->r[3] < 0x0000001cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088531c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000027e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0885226cu: goto L_0885226c; case 0x08852280u: goto L_08852280; case 0x088522a4u: goto L_088522a4; case 0x088522e8u: goto L_088522e8; case 0x088524b8u: goto L_088524b8; case 0x08852568u: goto L_08852568; case 0x088525ccu: goto L_088525cc; case 0x0885279cu: goto L_0885279c; case 0x088527dcu: goto L_088527dc; case 0x0885292cu: goto L_0885292c; case 0x08852a48u: goto L_08852a48; case 0x08852b48u: goto L_08852b48; case 0x08852b84u: goto L_08852b84; case 0x08852ba8u: goto L_08852ba8; case 0x08852bdcu: goto L_08852bdc; case 0x08852becu: goto L_08852bec; case 0x08852bfcu: goto L_08852bfc; case 0x08852c0cu: goto L_08852c0c; case 0x08852c54u: goto L_08852c54; case 0x08852de8u: goto L_08852de8; case 0x08852f10u: goto L_08852f10; case 0x08852f68u: goto L_08852f68; case 0x08852f78u: goto L_08852f78; case 0x08852f8cu: goto L_08852f8c; case 0x08853164u: goto L_08853164; case 0x088531a0u: goto L_088531a0; case 0x088531c0u: goto L_088531c0; default: recomp_trap_unknown_indirect(c, ram, 0x08852264u, _t); return; } }
L_0885226c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852278u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088531c0; }
L_08852280:
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0885229cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_088531c0; }
L_088522a4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e40u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088522bcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088531c0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088522d4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff8e44u, c->r[2]); goto L_088531c0; }
L_088522e8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088522fcu; c->r[6] = 0u + 0x0000001cu; func_0885a9ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08852374u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000002au);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000027d4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000002cu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000027d4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000002eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000027d4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x0000004bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852414u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08852488; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08852488; }
    { goto L_088531c0; }
L_08852488:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c68u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c60u, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c64u, 0u);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088524b0u; c->r[4] = c->r[4] + 0xffff9078u; func_0884d8f8(c, ram); }
    { goto L_088531c0; }
L_088524b8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088524ccu; c->r[6] = 0u + 0x0000001cu; func_0885a9ec(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088524ecu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885250cu; func_0880d140(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08852538; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = mem_r8(ram, c->r[30] + 0x00000038u);
    c->r[7] = mem_r8(ram, c->r[30] + 0x00000039u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08852538u; c->r[5] = c->r[3] + 0u; func_088c4bbc(c, ram); }
L_08852538:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000038u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbda0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000013au);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_088531c0; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852560u; c->r[5] = c->r[2] + 0u; func_088531e4(c, ram); }
    { goto L_088531c0; }
L_08852568:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885257cu; c->r[6] = 0u + 0x00000010u; func_0885a9ec(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885259cu; func_0880d140(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088531c0; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[6] = mem_r8(ram, c->r[30] + 0x0000002du);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088525c4u; c->r[5] = c->r[3] + 0u; func_088c4cc4(c, ram); }
    { goto L_088531c0; }
L_088525cc:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088525e0u; c->r[6] = 0u + 0x0000001cu; func_0885a9ec(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] & 0xf000u;
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = 0u + 0x00002000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08852660; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00002001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885262c; }
    c->r[2] = 0u + 0x00001000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08852654; }
    { goto L_08852680; }
L_0885262c:
    c->r[2] = 0u + 0x00003000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885266c; }
    c->r[2] = 0u + 0x00004000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08852678; }
    { goto L_08852680; }
L_08852654:
    c->r[2] = 0u + 0x00000051u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_08852680; }
L_08852660:
    c->r[2] = 0u + 0x00000052u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_08852680; }
L_0885266c:
    c->r[2] = 0u + 0x0000005au;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_08852680; }
L_08852678:
    c->r[2] = 0u + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_08852680:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] & 0x0fffu;
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088526acu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08852764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088526e4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885272cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003au);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    { c->r[31] = 0x08852764u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
L_08852764:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x0000004du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088531c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0885278cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000074u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088531c0; }
L_0885279c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088527b8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088531c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    { c->r[31] = 0x088527d4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088531c0; }
L_088527dc:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088527f0u; c->r[6] = 0u + 0x00000028u; func_0885a9ec(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08852818u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088531c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08852850u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08852898u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088528e0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000046u);
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    { c->r[31] = 0x08852918u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x00004034u;
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_088531c0; }
L_0885292c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852940u; c->r[6] = 0u + 0x0000001cu; func_0885a9ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0885295cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088529b4; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000038u);
    c->r[4] = 0u + 0x00000058u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0885298cu; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088529a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000074u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088529b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088529dcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08852a24u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088531c0; }
L_08852a48:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852a5cu; c->r[6] = 0u + 0x0000000cu; func_0885a9ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08852a78u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08852acc; }
    c->r[4] = 0u + 0x00000058u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852aa4u; c->r[9] = 0u + 0x00000005u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08852ac0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000074u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08852acc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08852b24u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088531c0; }
L_08852b48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08852b64u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088531c0; }
    { c->r[31] = 0x08852b7cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u); func_08957f9c(c, ram); }
    { goto L_088531c0; }
L_08852b84:
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852ba0u; c->r[9] = 0u + 0x00000005u; func_089c6bec(c, ram); }
    { goto L_088531c0; }
L_08852ba8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852bbcu; c->r[6] = 0u + 0x00000008u; func_0885a9ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08852bd4u; c->r[4] = c->r[2] + 0u; func_08946728(c, ram); }
    { goto L_088531c0; }
L_08852bdc:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_088531c0; }
L_08852bec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000015u, c->r[2]); goto L_088531c0; }
L_08852bfc:
    c->r[2] = 0u + 0x0000000cu;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff8c68u, c->r[2]); goto L_088531c0; }
L_08852c0c:
    c->r[2] = c->r[30] + 0x00000084u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852c20u; c->r[6] = 0u + 0x00000002u; func_0885a9ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000084u);
    { c->r[31] = 0x08852c34u; c->r[4] = c->r[2] + 0u; func_08853448(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08852c44u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088531c0; }
L_08852c54:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852c68u; c->r[6] = 0u + 0x00000024u; func_0885a9ec(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x08852c74u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08852c80u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x08852c8cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[7] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08852ca8u; c->r[5] = c->r[3] + 0u; func_0885adb8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08852d1c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { c->r[31] = 0x08852cd4u; mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); func_08854c28(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08852d1c; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08852d00; }
    { goto L_08852d10; }
L_08852d00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_08852d1c; }
L_08852d10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
L_08852d1c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08852d98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08852d98; }
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[7] = c->r[30] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[5] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    { c->r[31] = 0x08852d90u; c->f[13] = c->f[0]; func_088815c8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08852dc0; }
L_08852d98:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[8] = c->r[30] + 0x000000a0u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08852dbcu; c->r[7] = c->r[3] + 0u; func_089f6924(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
L_08852dc0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088531c0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08852de0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u); func_0884d750(c, ram); }
    { goto L_088531c0; }
L_08852de8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852dfcu; c->r[6] = 0u + 0x00000020u; func_0885a9ec(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08852e08u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x08852e14u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08852e20u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x000000a0u;
    c->r[7] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08852e3cu; c->r[5] = c->r[3] + 0u; func_0885adb8(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000003cu);
    { c->r[31] = 0x08852e48u; c->r[4] = c->r[2] + 0u; func_0884d790(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088531c0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000038u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000027d8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000039u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003au);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000027dcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08852eac; }
    { goto L_08852ee4; }
L_08852eac:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[8] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000074u);
    { c->r[31] = 0x08852edcu; c->r[10] = mem_r32(ram, c->r[30] + 0x00000070u); func_089f6d90(c, ram); }
    { goto L_088531c0; }
L_08852ee4:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[8] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08852f08u; c->r[7] = c->r[3] + 0u; func_089f6b84(c, ram); }
    { goto L_088531c0; }
L_08852f10:
    c->r[2] = c->r[30] + 0x000000b8u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852f24u; c->r[6] = 0u + 0x00000001u; func_0885a9ec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000b8u);
    { c->r[31] = 0x08852f30u; c->r[4] = c->r[2] + 0u; func_0884d790(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088531c0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08852f54u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u); func_089f73a0(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000b8u);
    { c->r[31] = 0x08852f60u; c->r[4] = c->r[2] + 0u; func_0884d714(c, ram); }
    { goto L_088531c0; }
L_08852f68:
    { c->r[31] = 0x08852f70u; func_0895b080(c, ram); }
    { goto L_088531c0; }
L_08852f78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x000040d4u;
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_088531c0; }
L_08852f8c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852fa0u; c->r[6] = 0u + 0x00000020u; func_0885a9ec(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08852fb8u; c->r[6] = c->r[3] + 0u; func_0885af24(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852fccu; c->r[5] = c->r[2] + 0u; func_089c35a0(c, ram); }
    c->r[3] = mem_r16(ram, c->r[16] + 0x000000c4u);
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885300c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08852ff4u; c->r[5] = c->r[2] + 0u; func_089c35a0(c, ram); }
    c->r[3] = mem_r16(ram, c->r[16] + 0x000000c6u);
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885300c; }
    { goto L_088531c0; }
L_0885300c:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08853020u; c->r[5] = c->r[3] + 0u; func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853038u; c->r[5] = c->r[5] + 0x000027ccu; func_08a1af70(c, ram); }
    { c->r[31] = 0x08853040u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089b7544(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08853138; }
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x08853078u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000023u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0xfffffe20u;
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8e24u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8e24u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffd0u;
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8e24u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000037u);
    c->r[2] = c->r[2] + 0xffffffd0u;
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8e26u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088530ec; }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8cd0u);
    { c->r[31] = 0x088530e4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cd0u, 0u);
L_088530ec:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088530f8u; c->r[4] = c->r[4] + 0x00002730u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff8e24u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffbc18u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08853130u; c->r[6] = 0u + 0x00000188u; func_08a19db8(c, ram); }
    { goto L_088531c0; }
L_08853138:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0885315cu; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088531c0; }
L_08853164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08853180u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088531c0; }
    { c->r[31] = 0x08853198u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000b0u); func_08954f98(c, ram); }
    { goto L_088531c0; }
L_088531a0:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c68u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c60u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c64u, c->r[2]);
L_088531c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088531ccu; c->r[5] = 0u + 0x00000002u; func_0885ab78(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_088521e0 */
}

/* func_08858298  0x08858298..0x08858398  256 bytes, source=fde */
void func_08858298(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858298u);
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
    { c->r[31] = 0x088582ecu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858344; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08858350; }
L_08858344:
    { c->r[31] = 0x0885834cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08858350:
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
    { c->r[31] = 0x08858384u; c->r[7] = c->r[3] + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08858298 */
}

/* func_0885a338  0x0885a338..0x0885a36c  52 bytes, source=sweep */
void func_0885a338(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a338u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a338 */
}

/* func_0885b108  0x0885b108..0x0885b148  64 bytes, source=sweep */
void func_0885b108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b108u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c58u, c->r[2]);
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0885b134u; mem_w32(ram, c->r[1] + 0xffff8c74u, 0u); func_0885b09c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885b108 */
}

/* func_08861028  0x08861028..0x0886106c  68 bytes, source=sweep */
void func_08861028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861028u);
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
    return; /* fell out of func_08861028 */
}

/* func_0886202c  0x0886202c..0x08862070  68 bytes, source=sweep */
void func_0886202c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886202cu);
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
    { c->r[31] = 0x0886205cu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0886202c */
}

/* func_08865910  0x08865910..0x08865e8c  1404 bytes, source=fde */
void func_08865910(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08865910u);
    c->r[29] = c->r[29] + 0xffffff30u;
    mem_w32(ram, c->r[29] + 0x000000c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08865938u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08865944u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    { c->r[31] = 0x0886594cu; c->r[16] = c->r[30] + 0x00000060u; func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865964u; c->r[6] = c->r[3] + 0u; func_0886ec48(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0886597cu; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886598cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088659e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088659e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088659d4; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088659d4; }
    { goto L_088659e8; }
L_088659d4:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_088659e8; }
L_088659e0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_088659e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08865a4c; }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf70u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003158u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf70u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000315cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08865a3c; }
    { goto L_08865a4c; }
L_08865a3c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000315cu);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
L_08865a4c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08865a70u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08865b24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00003164u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08865aacu: goto L_08865aac; case 0x08865ac0u: goto L_08865ac0; case 0x08865adcu: goto L_08865adc; case 0x08865af0u: goto L_08865af0; case 0x08865b04u: goto L_08865b04; case 0x08865b18u: goto L_08865b18; default: recomp_trap_unknown_indirect(c, ram, 0x08865aa4u, _t); return; } }
L_08865aac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08865ab8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088632fc(c, ram); }
    { goto L_08865b24; }
L_08865ac0:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08865ad4u; c->r[6] = c->r[2] + 0u; func_08863a30(c, ram); }
    { goto L_08865b24; }
L_08865adc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08865ae8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08864100(c, ram); }
    { goto L_08865b24; }
L_08865af0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08865afcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08864d5c(c, ram); }
    { goto L_08865b24; }
L_08865b04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08865b10u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08864f08(c, ram); }
    { goto L_08865b24; }
L_08865b18:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08865b24u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088657cc(c, ram); }
L_08865b24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865b68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865b68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865b68; }
    { goto L_08865c18; }
L_08865b68:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08865b74u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865c18; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08865b90u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865c18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865bc8u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865bf0u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865c18u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
L_08865c18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08865cf8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08865c38u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08865c70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865c70u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
L_08865c70:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08865c7cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08865ca8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08865c90u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865ca8; }
    { goto L_08865cf8; }
L_08865ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865cd0u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08865cf8u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
L_08865cf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865d28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08865d28; }
    { goto L_08865e50; }
L_08865d28:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003160u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08865d50u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x08865d5cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08865d84u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08865d98u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08865dbcu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08865dd8u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003160u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08865e04; }
    { goto L_08865e50; }
L_08865e04:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x08865e10u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[5] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08865e30u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08865e50u; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
L_08865e50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08865e74u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000c0u);
    { c->r[29] = c->r[29] + 0x000000d0u; return; }
    return; /* fell out of func_08865910 */
}

/* func_0886ad8c  0x0886ad8c..0x0886af20  404 bytes, source=fde */
void func_0886ad8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886ad8cu);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886adb8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886adc8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x0886add4u; c->r[5] = c->r[2] + 0u; func_088bf6ec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000114u, 0u);
L_0886addc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886adf4; }
    { goto L_0886aed8; }
L_0886adf4:
    { c->r[31] = 0x0886adfcu; c->r[4] = 0u + 0u; func_08867a3c(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886ae40; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000338cu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0886ae38u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000114u); func_08a1ad34(c, ram); }
    { goto L_0886aea0; }
L_0886ae40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886ae88; }
    { c->r[31] = 0x0886ae58u; c->r[4] = 0u + 0u; func_08867a3c(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[2] - c->r[3];
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000338cu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000110u);
    { c->r[31] = 0x0886ae80u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_0886aea0; }
L_0886ae88:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000339cu;
    { c->r[31] = 0x0886aea0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000110u); func_08a1ad34(c, ram); }
L_0886aea0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000100u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886aec4u; c->r[5] = c->r[2] + 0u; func_089b98c4(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]); goto L_0886addc; }
L_0886aed8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0886aeecu; c->r[5] = c->r[5] + 0x000033a4u; func_089b98c4(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000120u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0886af04u; c->r[5] = c->r[5] + 0x000033acu; func_089b98c4(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000124u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_0886ad8c */
}

/* func_08870774  0x08870774..0x088707b8  68 bytes, source=sweep */
void func_08870774(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08870774u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887079c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffffb9fcu, c->r[2]);
L_0887079c:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbe70u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08870774 */
}

/* func_0887a320  0x0887a320..0x0887a4f0  464 bytes, source=fde */
void func_0887a320(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887a320u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887a348u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887a360; }
    { goto L_0887a4d8; }
L_0887a360:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887a36cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887a388; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000fcu);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_0887a394; }
L_0887a388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000100u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_0887a394:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000038dcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887a3d0; }
    { goto L_0887a3e0; }
L_0887a3d0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000038dcu);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0887a3ec; }
L_0887a3e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_0887a3ec:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887a424; }
    { goto L_0887a480; }
L_0887a424:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x000000e0u);
    c->f[14] = mem_rf32(ram, c->r[3] + 0x00000054u);
    c->f[15] = mem_rf32(ram, c->r[4] + 0x00000058u);
    { c->r[31] = 0x0887a44cu; c->r[4] = 0u + 0u; func_0887b998(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000e0u);
    mem_wf32(ram, c->r[3] + 0x00000134u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000134u, c->f[0]); goto L_0887a4d8; }
L_0887a480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000130u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0887a4a8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000e0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000dcu, 0u);
L_0887a4d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0887a320 */
}

/* func_0887e270  0x0887e270..0x0887e528  696 bytes, source=fde */
void func_0887e270(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887e270u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e2a0; }
    { goto L_0887e514; }
L_0887e2a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887e2acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e2bc; }
    { goto L_0887e514; }
L_0887e2bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0887e2d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e2e8; }
    { goto L_0887e514; }
L_0887e2e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e504; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887e32c; }
    c->r[3] = 0u + 0x00000011u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]); goto L_0887e334; }
L_0887e32c:
    c->r[4] = 0u + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[4]);
L_0887e334:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[4];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e37c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e4c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887e37c; }
    { goto L_0887e4c8; }
L_0887e37c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[5] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e3c0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0887e3c0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000010u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887e408; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000220u);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x00000220u, c->r[2]); goto L_0887e41c; }
L_0887e408:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000220u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[3] + 0x00000220u, c->r[2]);
L_0887e41c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[4] = 0u + 0u;
    c->r[3] = alx_ins(c->r[3], c->r[4], 12u, 31u);
    mem_w32(ram, c->r[2] + 0x0000004cu, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0887e434:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e44c; }
    { goto L_0887e514; }
L_0887e44c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0x00001000u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0887e434; }
L_0887e4c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000220u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[3] + 0x00000220u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887e4fc; }
    { c->r[31] = 0x0887e4f4u; c->r[4] = 0u + 0x0000002bu; func_089226a0(c, ram); }
    { goto L_0887e504; }
L_0887e4fc:
    { c->r[31] = 0x0887e504u; c->r[4] = 0u + 0x0000002au; func_089226a0(c, ram); }
L_0887e504:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0887e2d0; }
L_0887e514:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887e270 */
}

/* func_08883298  0x08883298..0x088832bc  36 bytes, source=sweep */
void func_08883298(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883298u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe668u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08883298 */
}

/* func_08889c18  0x08889c18..0x0888a6ac  2708 bytes, source=sweep */
void func_08889c18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08889c18u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffffeb48u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08889dec; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffeb50u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08889c88u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08889cc8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08889d08u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08889d48u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08889d88u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08889dc8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffeb48u, c->r[2]);
L_08889dec:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08889df8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x08889e04u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x08889e10u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x08889e1cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08889e28u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x08889e34u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08889e4cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0888d510(c, ram); }
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08889e68u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0888d510(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[6] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08889e80u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08889e94u; c->r[5] = c->r[3] + 0u; func_0888d4c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889eb8; }
    { goto L_08889ee4; }
L_08889eb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889edc; }
    { goto L_08889ee4; }
L_08889edc:
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_08889ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889f0c; }
    { goto L_08889f3c; }
L_08889f0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889f34; }
    { goto L_08889f3c; }
L_08889f34:
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_08889f3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889f60; }
    { goto L_08889f8c; }
L_08889f60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889f84; }
    { goto L_08889f8c; }
L_08889f84:
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_08889f8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889fb4; }
    { goto L_08889fe4; }
L_08889fb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08889fdc; }
    { goto L_08889fe4; }
L_08889fdc:
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_08889fe4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a008; }
    { goto L_0888a034; }
L_0888a008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a02c; }
    { goto L_0888a034; }
L_0888a02c:
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_0888a034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a05c; }
    { goto L_0888a08c; }
L_0888a05c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a084; }
    { goto L_0888a08c; }
L_0888a084:
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_0888a08c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a150; }
    { goto L_0888a154; }
L_0888a150:
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
L_0888a154:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a218; }
    { goto L_0888a21c; }
L_0888a218:
    mem_w32(ram, c->r[30] + 0x00000114u, 0u);
L_0888a21c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888a23c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888a23c; }
    { goto L_0888a248; }
L_0888a23c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]); goto L_0888a694; }
L_0888a248:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0888a24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888a264; }
    { goto L_0888a2f8; }
L_0888a264:
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffeb50u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0888a284u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000400cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a2ac; }
    { goto L_0888a2e8; }
L_0888a2ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000f0u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0888a2e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0888a24c; }
L_0888a2f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888a310; }
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_0888a694; }
L_0888a310:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0888a314:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888a330; }
    { goto L_0888a690; }
L_0888a330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000f0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888a3ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0888a390u: goto L_0888a390; case 0x0888a3a0u: goto L_0888a3a0; case 0x0888a3b0u: goto L_0888a3b0; case 0x0888a3c0u: goto L_0888a3c0; case 0x0888a3d0u: goto L_0888a3d0; case 0x0888a3e0u: goto L_0888a3e0; case 0x0888a4fcu: goto L_0888a4fc; case 0x0888a57cu: goto L_0888a57c; case 0x0888a5fcu: goto L_0888a5fc; default: recomp_trap_unknown_indirect(c, ram, 0x0888a388u, _t); return; } }
L_0888a390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0888a3ec; }
L_0888a3a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0888a3ec; }
L_0888a3b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0888a3ec; }
L_0888a3c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0888a3ec; }
L_0888a3d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0888a3ec; }
L_0888a3e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_0888a3ec:
    c->r[4] = c->r[30] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffeb50u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0888a40cu; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[4] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffeb50u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0888a43cu; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0888a4b4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0888a4ccu; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888a674; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004028u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0888a390u: goto L_0888a390; case 0x0888a3a0u: goto L_0888a3a0; case 0x0888a3b0u: goto L_0888a3b0; case 0x0888a3c0u: goto L_0888a3c0; case 0x0888a3d0u: goto L_0888a3d0; case 0x0888a3e0u: goto L_0888a3e0; case 0x0888a4fcu: goto L_0888a4fc; case 0x0888a57cu: goto L_0888a57c; case 0x0888a5fcu: goto L_0888a5fc; default: recomp_trap_unknown_indirect(c, ram, 0x0888a4f4u, _t); return; } }
L_0888a4fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    { goto L_0888a674; }
L_0888a57c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    { goto L_0888a674; }
L_0888a5fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888a680; }
L_0888a674:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]); goto L_0888a694; }
L_0888a680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0888a314; }
L_0888a690:
    mem_w32(ram, c->r[30] + 0x00000118u, 0u);
L_0888a694:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_08889c18 */
}

/* func_0888c284  0x0888c284..0x0888c2c8  68 bytes, source=sweep */
void func_0888c284(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c284u);
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
    { c->r[31] = 0x0888c2b4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c284 */
}

/* func_0888cdc4  0x0888cdc4..0x0888cdfc  56 bytes, source=sweep */
void func_0888cdc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888cdc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888cde8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0888d35c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888cdc4 */
}

/* func_0888de58  0x0888de58..0x0888e5bc  1892 bytes, source=fde */
void func_0888de58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888de58u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0888df1cu; c->r[6] = 0u + 0x00000018u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0888df20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888df38; }
    { goto L_0888df90; }
L_0888df38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x0888df80u; c->r[8] = c->r[2] + 0u; func_08890404(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0888df20; }
L_0888df90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000118u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000010u);
    { c->r[31] = 0x0888dfc4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000404cu);
    mem_wf32(ram, c->r[2] + 0x00000050u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x0000004cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004050u);
    mem_wf32(ram, c->r[2] + 0x0000005cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000002b0u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0888e070u; c->r[6] = 0u + 0u; func_08890f54(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e0b0; }
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
L_0888e0b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000068u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0888e0ccu; c->r[6] = 0u + 0x00000001u; func_08890f54(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e10c; }
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
L_0888e10c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000006cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e124u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08891388(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e164; }
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
L_0888e164:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000070u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e17cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08891468(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e1bc; }
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
L_0888e1bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e220; }
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
L_0888e220:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000078u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e238u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08891504(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e278; }
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
L_0888e278:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000007cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e290u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08891690(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e2d0; }
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
L_0888e2d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e2e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08891c28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e328; }
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
L_0888e328:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000084u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888e340u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088920dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e380; }
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
L_0888e380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000088u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    { c->r[31] = 0x0888e39cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08892334(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000008cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e400; }
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
L_0888e400:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e460; }
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
L_0888e460:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0888e47c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888e494; }
    { goto L_0888e4dc; }
L_0888e494:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0xff000000u;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0888e4cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0888e4cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0888e47c; }
L_0888e4dc:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0888e4e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888e4f8; }
    { goto L_0888e540; }
L_0888e4f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0xff000000u;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0888e530; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0888e530:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0888e4e0; }
L_0888e540:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888e5a4; }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0888e550:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888e568; }
    { goto L_0888e578; }
L_0888e568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0888e550; }
L_0888e578:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0888e57c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888e594; }
    { goto L_0888e5a4; }
L_0888e594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0888e57c; }
L_0888e5a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0888de58 */
}

/* func_088928c0  0x088928c0..0x08892a4c  396 bytes, source=fde */
void func_088928c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088928c0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088928ecu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08892904u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000098u); func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08892930; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0889292cu; c->r[6] = c->r[2] + 0u; func_08892c24(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08892930:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08892a38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08892a38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088929b8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000094u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000094u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000090u, c->r[2]); goto L_08892a38; }
L_088929b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000020u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088929d8u; c->r[7] = c->r[2] + 0u; func_088928c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000024u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088929f8u; c->r[7] = c->r[2] + 0u; func_088928c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000028u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08892a18u; c->r[7] = c->r[2] + 0u; func_088928c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x0000002cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08892a38u; c->r[7] = c->r[2] + 0u; func_088928c0(c, ram); }
L_08892a38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088928c0 */
}

/* func_08899478  0x08899478..0x088994b4  60 bytes, source=fde */
void func_08899478(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899478u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffec74u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffebb4u;
    { c->r[31] = 0x088994a0u; c->r[6] = 0u + 0x000000c0u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08899478 */
}

/* func_0889a404  0x0889a404..0x0889a448  68 bytes, source=sweep */
void func_0889a404(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a404u);
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
    { c->r[31] = 0x0889a434u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a404 */
}

/* func_0889ec28  0x0889ec28..0x0889ed98  368 bytes, source=sweep */
void func_0889ec28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889ec28u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889ec84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ec84u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
L_0889ec84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889ecd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ecb4u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ecd8u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
L_0889ecd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889ed2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ed08u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ed2cu; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
L_0889ed2c:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0889ed30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889ed4c; }
    { goto L_0889ed84; }
L_0889ed4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ed74u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0889ed30; }
L_0889ed84:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889ec28 */
}

/* func_0889fb64  0x0889fb64..0x0889fba8  68 bytes, source=sweep */
void func_0889fb64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fb64u);
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
    { c->r[31] = 0x0889fb94u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889fb64 */
}

/* func_088a3fcc  0x088a3fcc..0x088a4010  68 bytes, source=sweep */
void func_088a3fcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3fccu);
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
    { c->r[31] = 0x088a3ffcu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a3fcc */
}

/* func_088ad3d0  0x088ad3d0..0x088ad4dc  268 bytes, source=sweep */
void func_088ad3d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ad3d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x088ad3f4u; c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] << 8;
    { c->r[31] = 0x088ad414u; c->r[16] = c->r[3] - c->r[2]; func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[3] - c->r[2];
    { c->r[31] = 0x088ad438u; c->r[16] = c->r[16] + c->r[2]; func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[3] - c->r[2];
    { c->r[31] = 0x088ad45cu; c->r[16] = c->r[16] + c->r[2]; func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[16] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x088ad4a0u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ad3d0 */
}

/* func_088ae2d4  0x088ae2d4..0x088ae458  388 bytes, source=sweep */
void func_088ae2d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ae2d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    c->r[2] = c->r[8] + 0u;
    c->r[3] = c->r[9] + 0u;
    c->r[4] = c->r[10] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000000du, c->r[3]);
    mem_w8(ram, c->r[30] + 0x0000000eu, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] >> 8;
    c->r[5] = c->r[2] & 0xffffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000001u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000001u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[5] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] >> 8;
    c->r[5] = c->r[2] & 0xffffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000003u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000003u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 8;
    c->r[5] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 16;
    c->r[5] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000006u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] >> 24;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000007u);
    c->r[2] = c->r[2] & 0x0000u;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000du);
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000eu);
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ae2d4 */
}

/* func_088b2a48  0x088b2a48..0x088b2a8c  68 bytes, source=sweep */
void func_088b2a48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2a48u);
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
    { c->r[31] = 0x088b2a78u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2a48 */
}

/* func_088b6e60  0x088b6e60..0x088b7470  1552 bytes, source=fde */
void func_088b6e60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b6e60u);
    c->r[29] = c->r[29] + 0xffffff30u;
    mem_w32(ram, c->r[29] + 0x000000c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b6ecc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b7458; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b6ee4; }
    { goto L_088b7458; }
L_088b6ecc:
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b6fa8; }
    { goto L_088b7458; }
L_088b6ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b6efcu; c->r[5] = 0u + 0x00000004u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b6f08u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088b6f1cu; c->r[5] = c->r[5] + 0x00004a08u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b6f48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0xffff9280u;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000004u, 0u); goto L_088b6f68; }
L_088b6f48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x000006bcu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x000006c0u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_088b6f68:
    c->r[4] = 0u + 0x00000033u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088b6f84u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000034u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088b6fa0u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_088b7458; }
L_088b6fa8:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088b6fbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b6fe0; }
    { goto L_088b73d8; }
L_088b6fe0:
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a10u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a14u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a10u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a14u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a10u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a14u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    c->r[4] = c->r[5] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    { c->r[31] = 0x088b70d0u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a1cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a1cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b7100u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b7114u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[5] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[3] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    c->r[4] = c->r[5] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    { c->r[31] = 0x088b71bcu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a20u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    { c->r[31] = 0x088b7230u; c->r[16] = c->r[30] + 0x00000060u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b7248u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b7260u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b7278u; c->f[12] = c->f[0]; func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b7290u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088b72f0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b7318; }
    { goto L_088b7330; }
L_088b7318:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
L_088b7330:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b737c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088b73c8; }
L_088b737c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b73c8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088b73c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088b6fbc; }
L_088b73d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b73fc; }
    { goto L_088b7408; }
L_088b73fc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088b7408:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b742c; }
    { goto L_088b7438; }
L_088b742c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a18u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088b7438:
    { c->r[31] = 0x088b7440u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000018u); func_088b59c0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004a24u);
    c->f[0] = c->f[0] * c->f[1];
    { c->r[31] = 0x088b7458u; c->f[12] = c->f[0]; func_088b6c88(c, ram); }
L_088b7458:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000c0u);
    { c->r[29] = c->r[29] + 0x000000d0u; return; }
    return; /* fell out of func_088b6e60 */
}

/* func_088be29c  0x088be29c..0x088be378  220 bytes, source=sweep */
void func_088be29c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be29cu);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088be330; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088be2f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088be31c; }
    { goto L_088be364; }
L_088be2f4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088be344; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088be358; }
    { goto L_088be364; }
L_088be31c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be328u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088be4f4(c, ram); }
    { goto L_088be364; }
L_088be330:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be33cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088be5f4(c, ram); }
    { goto L_088be364; }
L_088be344:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be350u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088be190(c, ram); }
    { goto L_088be364; }
L_088be358:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be364u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088be6c4(c, ram); }
L_088be364:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be29c */
}

/* func_088beff0  0x088beff0..0x088bf034  68 bytes, source=sweep */
void func_088beff0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088beff0u);
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
    { c->r[31] = 0x088bf020u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088beff0 */
}

/* func_088c099c  0x088c099c..0x088c0bb8  540 bytes, source=fde */
void func_088c099c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c099cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000000au, c->r[3]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c09d0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c0abc; }
    { c->r[31] = 0x088c09e8u; func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c09f8; }
    { goto L_088c0ba4; }
L_088c09f8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c0a04u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d554(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c0a64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    { goto L_088c0ba4; }
L_088c0a64:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c0a70u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d554(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c0abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0abc; }
    { goto L_088c0ba4; }
L_088c0abc:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c0af0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088c0b14u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c0b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0b4c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088c0b4cu; c->r[4] = c->r[4] + 0xffffb9c0u; func_088c24e0(c, ram); }
L_088c0b4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000052u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088c0b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000052u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088c0b80u; c->r[7] = c->r[2] + 0u; func_0899ed48(c, ram); }
L_088c0b80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0ba4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
L_088c0ba4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088c099c */
}

/* func_088c4e64  0x088c4e64..0x088c4f00  156 bytes, source=fde */
void func_088c4e64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c4e64u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088c4e80u; c->r[4] = c->r[4] + 0x00004f40u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffcba4u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9ba0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088c4ea0u; c->r[6] = 0u + 0x00003000u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088c4eacu; c->r[4] = c->r[4] + 0x00004f4cu; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xffff9b70u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088c4ec0u; c->r[4] = c->r[4] + 0x00004f5cu; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xffff9b72u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xffffcba0u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002ee4u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x088c4ee4u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00002f8eu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088c4e64 */
}

/* func_088c920c  0x088c920c..0x088c92b8  172 bytes, source=sweep */
void func_088c920c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c920cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c926c; }
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
    { c->r[31] = 0x088c9264u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_088c938c(c, ram); }
    { goto L_088c92a4; }
L_088c926c:
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
    { c->r[31] = 0x088c92a4u; c->r[8] = c->r[2] + 0u; func_088c938c(c, ram); }
L_088c92a4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c920c */
}

/* func_088cfa74  0x088cfa74..0x088cfe58  996 bytes, source=fde */
void func_088cfa74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cfa74u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000057u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cfcd4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cfabcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cfcc0; }
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000426u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088cfae8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cfcb8; }
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
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088cfb30u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cfb44u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cfb58u; c->r[5] = c->r[3] + 0u; func_088f0c70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cfbf8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = 0u + 0x00000026u;
    mem_w16(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000096u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cfc98u; c->r[6] = 0u + 0x00000028u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088cfcb0u; c->r[7] = 0u + 0x00000028u; func_0884f888(c, ram); }
    { goto L_088cfcc0; }
L_088cfcb8:
    { mem_w32(ram, c->r[30] + 0x000000a8u, 0u); goto L_088cfe3c; }
L_088cfcc0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000057u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]);
L_088cfcd4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051ecu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088cfd10u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c96f8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cfd4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cfd40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088cfd4c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088cfd6cu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cfd84u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cfd9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
L_088cfd9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cfdb8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cfe30; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088cfde8u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cfe00u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051f0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { c->r[31] = 0x088cfe14u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051ecu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
L_088cfe30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
L_088cfe3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_088cfa74 */
}

/* func_088d3bfc  0x088d3bfc..0x088d3c48  76 bytes, source=sweep */
void func_088d3bfc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3bfcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x000000a4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d3c34u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3b40(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d3bfc */
}

/* func_088d86b8  0x088d86b8..0x088d8858  416 bytes, source=fde */
void func_088d86b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d86b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d86e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088da5a4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d86f0; }
    { goto L_088d8840; }
L_088d86f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d8754; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d873c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0xfffffffdu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8814; }
    { goto L_088d8754; }
L_088d873c:
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d87cc; }
    { goto L_088d8814; }
L_088d8754:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000064u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d878c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000f9u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d878c; }
    { goto L_088d8814; }
L_088d878c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088d87a0u; c->r[5] = c->r[5] + 0x000059e4u; func_089b9864(c, ram); }
    mem_w8(ram, c->r[16] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c4u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088d8814; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0080u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088d8814; }
L_088d87cc:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088d87e0u; c->r[5] = c->r[5] + 0x000059e8u; func_089b9864(c, ram); }
    mem_w8(ram, c->r[16] + 0x000000c4u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088d87f8u; c->r[5] = c->r[5] + 0x000059f0u; func_089b9864(c, ram); }
    mem_w8(ram, c->r[16] + 0x000000c5u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088d8810u; c->r[5] = c->r[5] + 0x000059f8u; func_089b9864(c, ram); }
    mem_w8(ram, c->r[16] + 0x000000c6u, c->r[2]);
L_088d8814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8840; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088d883cu; c->r[5] = c->r[5] + 0x00005a00u; func_089b9864(c, ram); }
    mem_w8(ram, c->r[16] + 0x000000c4u, c->r[2]);
L_088d8840:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d86b8 */
}

/* func_088dd8d0  0x088dd8d0..0x088de104  2100 bytes, source=fde */
void func_088dd8d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dd8d0u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000080u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dd964; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088dd95c; }
    { goto L_088dd964; }
L_088dd95c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088dd964:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088dd988u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u); func_088ef798(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dd998; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088dd998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[5] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088dd9c8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u); func_088ef958(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dd9d8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088dd9d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dda70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xfffb0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088de0e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088dda50u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088dda64u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000b8u, 0u); goto L_088de0e4; }
L_088dda70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0xffffffe2u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ddca0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x03000000u;
    c->r[4] = c->r[4] | 0x0002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088ddab8u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ddca0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x0000044du;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088ddae8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b30u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ddb60u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000c0u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b34u);
    c->f[20] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ddb7cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_08a0f760(c, ram); }
    c->f[1] = c->f[20] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000020u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ddba8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000c0u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b38u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ddbe0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000c0u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b34u);
    c->f[20] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ddbfcu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[20] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b3cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088ddc24u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ddc4cu; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088ddc60u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ddc78u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x0000004du;
    mem_w16(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000014u;
    mem_w16(ram, c->r[30] + 0x0000003au, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088ddca0u; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
L_088ddca0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ddcd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x00000009u, 0u); goto L_088de0e4; }
L_088ddcd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ddd7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x0000497au);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ddd7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088ddd60u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088ddd74u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000b8u, 0u);
L_088ddd7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088dddc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x0000000au, 0u); goto L_088de0e4; }
L_088dddc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de0e4; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088dde00u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088dde0cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ddeb4; }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088dde28u; c->r[4] = c->r[2] + 0u; func_088de660(c, ram); }
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088dde44u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b40u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088dde5cu; c->f[12] = c->f[0]; func_088e0a98(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b44u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b48u);
    c->f[1] = c->f[0] - c->f[1];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ddeacu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    { goto L_088ddf88; }
L_088ddeb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ddefcu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ddf88u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
L_088ddf88:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ddf9cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ddfbcu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de0a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x03000000u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088ddff4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { c->r[31] = 0x088ddffcu; func_0883a25c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = c->r[4] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088de070; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000008u;
    c->r[8] = 0u + 0x00000001u;
    { c->r[31] = 0x088de068u; c->r[9] = 0u + 0u; func_088c46d0(c, ram); }
    { goto L_088de0c8; }
L_088de070:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000008u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088de098u; c->r[9] = 0u + 0u; func_088c46d0(c, ram); }
    { goto L_088de0c8; }
L_088de0a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000008u;
    c->r[8] = 0u + 0x00000001u;
    { c->r[31] = 0x088de0c8u; c->r[9] = 0u + 0u; func_088c46d0(c, ram); }
L_088de0c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
L_088de0e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000007cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_088dd8d0 */
}

/* func_088df184  0x088df184..0x088df1e8  100 bytes, source=sweep */
void func_088df184(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df184u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df1ac; }
    { goto L_088df1d8; }
L_088df1ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088df1d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088df1d8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
L_088df1d8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df184 */
}

/* func_088e3c90  0x088e3c90..0x088e451c  2188 bytes, source=fde */
void func_088e3c90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e3c90u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088e3cc0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w16(ram, c->r[30] + 0x0000003cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4190; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e3d04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e3d28; }
    { goto L_088e4504; }
L_088e3d04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[3] = c->r[2] + 0xfffffffdu;
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[2] + 0x00000009u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e4504; }
    { goto L_088e4228; }
L_088e3d28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e3d5cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e3f9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005394u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000538cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cb8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e3e34; }
    { goto L_088e3e58; }
L_088e3e34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005388u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088e3ec0; }
L_088e3e58:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cbcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e3e7c; }
    { goto L_088e3ea0; }
L_088e3e7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005388u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088e3ec0; }
L_088e3ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005388u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_088e3ec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088e3f08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e3f20; }
    { goto L_088e3f8c; }
L_088e3f20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e3f7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005384u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]); goto L_088e3f8c; }
L_088e3f7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e3f08; }
L_088e3f8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_088e3f9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e4110; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005394u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000033u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005390u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088e4078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e4090; }
    { goto L_088e4100; }
L_088e4090:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e40f0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005384u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]); goto L_088e4100; }
L_088e40f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e4078; }
L_088e4100:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_088e4110:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000036u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e413c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003cu);
    mem_w16(ram, c->r[3] + 0x00000036u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e4148; }
L_088e413c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088e4148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005cc0u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[4] + 0x000000b4u, c->f[0]); goto L_088e4504; }
L_088e4190:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000036u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000036u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000036u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e4504; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e41fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x00000090u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000036u, c->r[2]);
L_088e41fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e4504; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    { mem_w16(ram, c->r[3] + 0x00000036u, c->r[2]); goto L_088e4504; }
L_088e4228:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005cc4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088e426cu: goto L_088e426c; case 0x088e4284u: goto L_088e4284; case 0x088e429cu: goto L_088e429c; case 0x088e42b4u: goto L_088e42b4; case 0x088e42ccu: goto L_088e42cc; case 0x088e42e4u: goto L_088e42e4; case 0x088e42fcu: goto L_088e42fc; case 0x088e4314u: goto L_088e4314; case 0x088e432cu: goto L_088e432c; default: recomp_trap_unknown_indirect(c, ram, 0x088e4264u, _t); return; } }
L_088e426c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e427cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e482c(c, ram); }
    { goto L_088e4354; }
L_088e4284:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e4294u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e4854(c, ram); }
    { goto L_088e4354; }
L_088e429c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e42acu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e49fc(c, ram); }
    { goto L_088e4354; }
L_088e42b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e42c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e4cdc(c, ram); }
    { goto L_088e4354; }
L_088e42cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e42dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e5290(c, ram); }
    { goto L_088e4354; }
L_088e42e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e42f4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e54e4(c, ram); }
    { goto L_088e4354; }
L_088e42fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e430cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e57c0(c, ram); }
    { goto L_088e4354; }
L_088e4314:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e4324u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e5bb0(c, ram); }
    { goto L_088e4354; }
L_088e432c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e433cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e5e88(c, ram); }
    { goto L_088e4354; }
L_088e4344:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e4354u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e638c(c, ram); }
L_088e4354:
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000036u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000036u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000036u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e4384; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_088e4384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e4410; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e43e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e43c4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_088e43c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e43e0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_088e43e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e4410; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e4410; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_088e4410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4504; }
    { c->r[31] = 0x088e4424u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e0ea8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e447cu; c->r[6] = 0u + 0u; func_088e0e00(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e4488u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3c48(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088e44a0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e4504; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e4504; }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088e44d8u; c->r[4] = c->r[2] + 0u; func_08934b94(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = 0u + 0x0000000du;
    { c->r[31] = 0x088e4504u; c->r[5] = c->r[2] + 0u; func_08934bcc(c, ram); }
L_088e4504:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088e3c90 */
}

/* func_088e9658  0x088e9658..0x088e981c  452 bytes, source=fde */
void func_088e9658(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e9658u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000009bu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e96a4; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e9744; }
    { goto L_088e9808; }
L_088e96a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e96b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8368(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9714; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    { mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_088e9720; }
L_088e9714:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9720u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d721c(c, ram); }
L_088e9720:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000009bu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = c->r[2] + 0x00000064u;
    { mem_w32(ram, c->r[3] + 0x0000009cu, c->r[2]); goto L_088e9808; }
L_088e9744:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e97c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9784u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6f10(c, ram); }
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
    { c->r[31] = 0x088e97b8u; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
    { goto L_088e97dc; }
L_088e97c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e97ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d721c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e97dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6f10(c, ram); }
L_088e97dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e9808; }
    { c->r[31] = 0x088e9808u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d9878(c, ram); }
L_088e9808:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e9658 */
}

/* func_088ef5b0  0x088ef5b0..0x088ef654  164 bytes, source=sweep */
void func_088ef5b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ef5b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_088ef5c8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006098u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ef5ec; }
    { goto L_088ef604; }
L_088ef5ec:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000609cu);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_088ef5c8; }
L_088ef604:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ef628; }
    { goto L_088ef640; }
L_088ef628:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000609cu);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_088ef5c8; }
L_088ef640:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ef5b0 */
}

/* func_088f4b60  0x088f4b60..0x088f4d3c  476 bytes, source=fde */
void func_088f4b60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4b60u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4b90; }
    { goto L_088f4d24; }
L_088f4b90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f4ba8; }
    { goto L_088f4d24; }
L_088f4ba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f4bd0; }
    { goto L_088f4d24; }
L_088f4bd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f4bf8; }
    { goto L_088f4d24; }
L_088f4bf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000068u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4c9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000073u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f4c78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000073u, c->r[2]);
L_088f4c78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088f4c98u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d2428(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000068u, c->r[2]);
L_088f4c9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4d24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000012u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000013u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000007fu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000007fu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000007fu);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f4d00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x0000007fu, c->r[2]);
L_088f4d00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000007fu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088f4d20u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088d2428(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000074u, c->r[2]);
L_088f4d24:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f4b60 */
}

/* func_088f9114  0x088f9114..0x088f9714  1536 bytes, source=fde */
void func_088f9114(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f9114u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000b4u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f96fc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f917c; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f96b0; }
    { goto L_088f96fc; }
L_088f917c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f9234; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f91a0u; c->r[6] = 0u + 0x00000800u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f9210; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w32(ram, c->r[3] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[16] = c->r[2] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f91f0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088f9210:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffee40u);
    mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088f9234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f96fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f94a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f926cu; c->r[6] = 0u + 0x00000800u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f938c; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9280u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee10u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9298u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee14u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee18u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f92ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0005u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f92e4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee18u, c->r[2]);
L_088f92ec:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee1cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9334; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f932cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee1cu, c->r[2]);
L_088f9334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[3] + 0x000000a4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    mem_wf32(ram, c->r[3] + 0x000000a8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x000000acu, c->f[0]);
L_088f938c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffede8u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffffee30u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffede8u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffffee34u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffede8u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffffee38u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffede8u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[5] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = 0u + 0x0000012cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f964c; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee20u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f964c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0003u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9494u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffee20u, c->r[2]); goto L_088f964c; }
L_088f94a0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f94b0u; c->r[6] = 0u + 0x00000800u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f95a8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee10u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f94fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f94f4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
L_088f94fc:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee14u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9544; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f953cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
L_088f9544:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9550u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee18u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee18u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9568u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee1cu); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee1cu, c->r[2]);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9580u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee20u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee20u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x000000acu, c->f[0]);
L_088f95a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffedecu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = -c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffffee30u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffedecu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffffee34u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffedecu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xffffee38u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffedecu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[5] + 0x00000024u, c->f[0]);
L_088f964c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000040u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffee34u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000048u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000aau, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000258u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f96fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000257u;
    { mem_w16(ram, c->r[3] + 0x000000aau, c->r[2]); goto L_088f96fc; }
L_088f96b0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f96e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000040u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088f96fc; }
L_088f96e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    mem_w32(ram, c->r[2] + 0x000000a0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    mem_w32(ram, c->r[2] + 0x000000a8u, 0u);
L_088f96fc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088f9114 */
}

/* func_088ff20c  0x088ff20c..0x088ff48c  640 bytes, source=fde */
void func_088ff20c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ff20cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002674u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002670u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088ff278; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_088ff278:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ff29c; }
    { goto L_088ff2a8; }
L_088ff29c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_088ff2a8:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002678u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000267cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002678u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088ff308; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088ff308:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ff32c; }
    { goto L_088ff338; }
L_088ff32c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006448u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088ff338:
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002338u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[2] = 0u + 0x0000000bu;
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088ff354:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ff36c; }
    { goto L_088ff3c0; }
L_088ff36c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ff3b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
L_088ff3b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088ff354; }
L_088ff3c0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x0000015fu;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088ff3e8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ff478; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0x00600000u;
    { c->r[31] = 0x088ff408u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0x00600000u;
    { c->r[31] = 0x088ff418u; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ff428u; c->r[6] = 0u + 0x00000003u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088ff438u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ff448u; c->r[6] = 0u + 0u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x088ff458u; c->r[6] = 0u + 0x00000001u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ff468u; c->r[6] = 0u + 0u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { c->r[31] = 0x088ff478u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
L_088ff478:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088ff20c */
}

/* func_08901e54  0x08901e54..0x08902cac  3672 bytes, source=fde */
void func_08901e54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08901e54u);
    c->r[29] = c->r[29] + 0xffffff00u;
    mem_w32(ram, c->r[29] + 0x000000f8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000f4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000f0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902724; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08901e94; }
    { goto L_08902c94; }
L_08901e94:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x00000006u;
    { c->r[31] = 0x08901eacu; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x08901ec0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08901f20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901f08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[3] + 0x00000000u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901f44; }
    { goto L_08901f20; }
L_08901f08:
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08902c94; }
    { goto L_08901f44; }
L_08901f20:
    c->r[4] = 0u + 0x00000010u;
    c->r[5] = 0u + 0x0000002au;
    c->r[6] = 0u + 0x000001cfu;
    c->r[7] = 0u + 0x000000d5u;
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x08901f3cu; c->f[12] = mem_rf32(ram, c->r[1] + 0xfffff530u); func_08900b08(c, ram); }
    { goto L_08902c94; }
L_08901f44:
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006568u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000656cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006570u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00006574u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08901f98u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006568u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006574u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006570u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00006578u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08901fecu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000657cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08902040u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006580u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006580u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006580u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x0000657cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08902094u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006584u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006584u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006584u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006584u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0890215cu; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08902184u; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x08902190u; c->r[4] = c->r[2] + 0u; func_088112e8(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00006558u;
    { c->r[31] = 0x089021a0u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089021b4u; c->r[5] = c->r[3] + 0u; func_08811340(c, ram); }
    { c->r[31] = 0x089021bcu; c->r[4] = 0u + 0x00000050u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089021d0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0890221cu; c->r[5] = c->r[5] | 0x0102u; func_0890325c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0xc8120000u;
    { c->r[31] = 0x08902268u; c->r[5] = c->r[5] | 0x0800u; func_089032a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0890227cu; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    { c->r[31] = 0x08902284u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08902298u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_0890229c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089022b4; }
    { goto L_089026bc; }
L_089022b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089022f4; }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    { mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]); goto L_08902300; }
L_089022f4:
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
L_08902300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x000002e1u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff52cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x000018c0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[5] = c->r[30] + 0x000000b0u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff52cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x000018c8u;
    c->r[4] = c->r[5] + 0u;
    { c->r[31] = 0x08902374u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_08901100(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c0u, 0u);
L_08902378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08902390; }
    { goto L_0890241c; }
L_08902390:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff52cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 5;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000018c0u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089023d4; }
    { goto L_0890241c; }
L_089023d4:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff52cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 5;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000018c0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000002d7u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08902378; }
L_0890241c:
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[6] = c->r[2] + 0x000002ceu;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902450u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x000002d3u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902484u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x000002d4u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x089024b8u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x000002d6u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x089024ecu; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff52cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089025b4; }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902544u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902578u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x089025acu; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    { goto L_089026ac; }
L_089025b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x000002ceu;
    { c->r[31] = 0x089025c4u; c->r[4] = c->r[2] + 0u; func_089241c8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089025d8u; c->r[6] = c->r[2] + 0u; func_089d004c(c, ram); }
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x000002d2u;
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902610u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000263u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902644u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0u + 0x00000263u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08902678u; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[3] = 0xc8120000u;
    c->r[3] = c->r[3] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0x00000263u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x089026acu; c->r[11] = 0u + 0u; func_08900c88(c, ram); }
L_089026ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_0890229c; }
L_089026bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902710; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00006524u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x089026e4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08902710; }
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[4]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x08902700u; c->r[4] = c->r[2] + 0u; func_08811320(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[16]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c8u);
    { c->r[31] = 0x08902710u; func_08a163b0(c, ram); }
L_08902710:
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0890271cu; c->r[4] = c->r[2] + 0u; func_08811320(c, ram); }
    { goto L_08902c94; }
L_08902724:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902c94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000658cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08902764u: goto L_08902764; case 0x0890277cu: goto L_0890277c; case 0x0890285cu: goto L_0890285c; case 0x089029fcu: goto L_089029fc; case 0x08902b38u: goto L_08902b38; case 0x08902bc4u: goto L_08902bc4; default: recomp_trap_unknown_indirect(c, ram, 0x0890275cu, _t); return; } }
L_08902764:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff530u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08902c94; }
L_0890277c:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089027a0; }
    { goto L_089027b8; }
L_089027a0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    { c->r[31] = 0x089027b8u; c->r[6] = c->r[6] | 0x0005u; func_089f69dc(c, ram); }
L_089027b8:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006588u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff530u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006580u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089027fc; }
    { goto L_0890280c; }
L_089027fc:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    { mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]); goto L_08902818; }
L_0890280c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006580u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
L_08902818:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff530u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006580u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890284c; }
    { goto L_08902c94; }
L_0890284c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08902c94; }
L_0890285c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08902874u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08902884u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089028f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089028d0u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089028f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
L_089028f4:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0890290cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0890291cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902990; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08902968u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08902990; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
L_08902990:
    { c->r[31] = 0x08902998u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089029ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_089029ac:
    { c->r[31] = 0x089029b4u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089029c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_089029c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089029ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x0000158eu;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_08902c94; }
L_089029ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x0000159du;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_08902c94; }
L_089029fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08902a30; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08902ab0; }
    { goto L_08902c94; }
L_08902a30:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff52cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902aa0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0x0000158fu;
    mem_w32(ram, c->r[2] + 0x00000008u, c->r[3]);
    { c->r[31] = 0x08902a6cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902a80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08902a80:
    { c->r[31] = 0x08902a88u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902c94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08902c94; }
L_08902aa0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08902c94; }
L_08902ab0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff52cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902b28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000159eu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x08902af4u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902b08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08902b08:
    { c->r[31] = 0x08902b10u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902c94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08902c94; }
L_08902b28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08902c94; }
L_08902b38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08902b6c; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08902b7c; }
    { goto L_08902b88; }
L_08902b6c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00001592u;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_08902b88; }
L_08902b7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000015a1u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
L_08902b88:
    { c->r[31] = 0x08902b90u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902ba4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08902ba4:
    { c->r[31] = 0x08902bacu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902c94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08902c94; }
L_08902bc4:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006580u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08902bec; }
    { goto L_08902c04; }
L_08902bec:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    { c->r[31] = 0x08902c04u; c->r[6] = c->r[6] | 0x0006u; func_089f69dc(c, ram); }
L_08902c04:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006588u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff530u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08902c44; }
    { goto L_08902c54; }
L_08902c44:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    { mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]); goto L_08902c58; }
L_08902c54:
    mem_w32(ram, c->r[30] + 0x000000dcu, 0u);
L_08902c58:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff530u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff530u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08902c88; }
    { goto L_08902c94; }
L_08902c88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08902c94:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000f8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000f4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000f0u);
    { c->r[29] = c->r[29] + 0x00000100u; return; }
    return; /* fell out of func_08901e54 */
}

/* func_08905410  0x08905410..0x089054f0  224 bytes, source=fde */
void func_08905410(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08905410u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x08905430u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0890ade4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890543cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08905454; }
    { c->r[31] = 0x08905454u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0890b0b4(c, ram); }
L_08905454:
    { c->r[31] = 0x0890545cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08909448(c, ram); }
    { c->r[31] = 0x08905464u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0890b39c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x08905478u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { c->r[31] = 0x08905480u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089198b8(c, ram); }
    { c->r[31] = 0x08905488u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08919138(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089054c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x089054a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0891b59c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089054c4u; c->r[7] = 0u + 0u; func_0890bd34(c, ram); }
L_089054c4:
    { c->r[31] = 0x089054ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0890aad4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089054dcu; c->r[6] = 0u + 0u; func_0890c51c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08905410 */
}

/* func_0890ee64  0x0890ee64..0x0890f1cc  872 bytes, source=fde */
void func_0890ee64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890ee64u);
    c->r[29] = c->r[29] + 0xfffffe80u;
    mem_w32(ram, c->r[29] + 0x00000178u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000174u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000170u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890ee88u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890eeb8; }
    { c->r[31] = 0x0890eea0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890eeb8; }
    { goto L_0890f1b4; }
L_0890eeb8:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff958u, 0u);
    { c->r[31] = 0x0890eec8u; mem_w32(ram, c->r[30] + 0x00000010u, 0u); func_0895bb24(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0890ef34; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890eedcu; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    { c->r[31] = 0x0890eee4u; c->r[16] = c->r[2] + 0u; func_0895bb24(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006824u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0890ef04u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0890ef2cu; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    { goto L_0890f1b4; }
L_0890ef34:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890ef40u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890f188; }
    { c->r[31] = 0x0890ef58u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890efa8; }
    { c->r[31] = 0x0890ef70u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0890ef78u; c->r[4] = c->r[2] + 0u; func_0896fe40(c, ram); }
    { c->r[31] = 0x0890ef80u; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006824u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0890efa0u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_0890efd4; }
L_0890efa8:
    { c->r[31] = 0x0890efb0u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0890efb8u; c->r[4] = c->r[2] + 0u; func_0896fe40(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000682cu;
    { c->r[31] = 0x0890efd4u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
L_0890efd4:
    { c->r[31] = 0x0890efdcu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000160u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890f00c; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000160u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890f04c; }
    { goto L_0890f08c; }
L_0890f00c:
    { c->r[31] = 0x0890f014u; func_0896db94(c, ram); }
    { c->r[31] = 0x0890f01cu; c->r[4] = c->r[2] + 0u; func_0896f988(c, ram); }
    { c->r[31] = 0x0890f024u; c->r[16] = c->r[2] + 0u; func_08979620(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006830u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0890f044u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_0890f090; }
L_0890f04c:
    { c->r[31] = 0x0890f054u; func_0896db94(c, ram); }
    { c->r[31] = 0x0890f05cu; c->r[4] = c->r[2] + 0u; func_08999048(c, ram); }
    { c->r[31] = 0x0890f064u; c->r[16] = c->r[2] + 0u; func_0897965c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006830u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0890f084u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_0890f090; }
L_0890f08c:
    mem_w8(ram, c->r[30] + 0x00000140u, 0u);
L_0890f090:
    { c->r[31] = 0x0890f098u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890f138; }
    { c->r[31] = 0x0890f0acu; func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890f138; }
    { c->r[31] = 0x0890f0bcu; func_08998dcc(c, ram); }
    { c->r[31] = 0x0890f0c4u; c->r[16] = c->r[2] + 0u; func_0896db94(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890f138; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890f138; }
    { c->r[31] = 0x0890f0f4u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890f120; }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0890f114u; c->r[6] = c->r[2] + 0u; func_089042ac(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    { mem_w8(ram, c->r[30] + 0x00000120u, 0u); goto L_0890f138; }
L_0890f120:
    { c->r[31] = 0x0890f128u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890f138; }
    mem_w8(ram, c->r[30] + 0x00000140u, 0u);
L_0890f138:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[7] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006838u;
    { c->r[31] = 0x0890f158u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890f180u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    { goto L_0890f1b4; }
L_0890f188:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890f194u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890f1b4u; c->r[9] = 0u + 0u; func_0890438c(c, ram); }
L_0890f1b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000178u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000174u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000170u);
    { c->r[29] = c->r[29] + 0x00000180u; return; }
    return; /* fell out of func_0890ee64 */
}

/* func_0891b888  0x0891b888..0x0891ba54  460 bytes, source=fde */
void func_0891b888(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891b888u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891b8bc; }
    { goto L_0891ba40; }
L_0891b8bc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891b8c8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891b8e0; }
    { goto L_0891ba40; }
L_0891b8e0:
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
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba3cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b14u);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x0891b924u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0891b940u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0891b95c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0891b954u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
L_0891b95c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0891b968u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba50u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b18u);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x0891b988u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0891b9a4u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0891b9c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x0891b9b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
L_0891b9c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x0891b9ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000005fu;
    c->r[5] = f2u(c->f[0]);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0891ba08u; c->r[9] = c->r[3] + 0u; func_0890438c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000060u;
    c->r[5] = f2u(c->f[0]);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0891ba40u; c->r[9] = c->r[3] + 0u; func_0890438c(c, ram); }
L_0891ba40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0891b888 */
}

/* func_08920bac  0x08920bac..0x08920ce8  316 bytes, source=sweep */
void func_08920bac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08920bacu);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_08920c04; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920c04u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_08920c04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08920c58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920c34u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920c58u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_08920c58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08920cac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920c88u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920cacu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_08920cac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920cd4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08920bac */
}

/* func_08921a18  0x08921a18..0x08921a40  40 bytes, source=sweep */
void func_08921a18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921a18u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000118u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921a18 */
}

/* func_0892459c  0x0892459c..0x08924620  132 bytes, source=sweep */
void func_0892459c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892459cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9c8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089245c4; }
    { goto L_08924610; }
L_089245c4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9c8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089245f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]); goto L_08924610; }
L_089245f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_08924610:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892459c */
}

/* func_08926118  0x08926118..0x0892615c  68 bytes, source=sweep */
void func_08926118(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08926118u);
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
    { c->r[31] = 0x08926148u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08926118 */
}

/* func_08928d00  0x08928d00..0x0892912c  1068 bytes, source=fde */
void func_08928d00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08928d00u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08928d3cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08928dbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08928d78; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08928d90; }
    { goto L_08928e1c; }
L_08928d78:
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08928d90; }
    { goto L_08928e1c; }
L_08928d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08928e1c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08928db0u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08928e1c; }
L_08928dbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08928e1c; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08928de8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08928e00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x07000000u;
    { c->r[31] = 0x08928e1cu; c->r[5] = c->r[5] | 0x0008u; func_0892ff54(c, ram); }
L_08928e1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08928e4c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08928e38u; c->r[5] = 0u | 0x8000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w16(ram, c->r[2] + 0x0000000eu, 0u); goto L_08929114; }
L_08928e4c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08928e58u; c->r[5] = 0u | 0x8000u; func_0892ffa8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08928e70; }
    { goto L_08929114; }
L_08928e70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08928ea4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000000eu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08929114; }
L_08928ea4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08928ee0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08928ee0; }
    { goto L_08928ee8; }
L_08928ee0:
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08928ee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929014; }
    { c->r[31] = 0x08928efcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08930048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08929114; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fe4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000cdu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = c->r[2] + 0u;
    { c->r[31] = 0x08928f4cu; c->r[11] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ce004(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929114; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08928fb8; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fe4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006fd8u;
    c->r[6] = 0u + 0x000013e1u;
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000edu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = c->r[2] + 0u;
    { c->r[31] = 0x08928fb0u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ce004(c, ram); }
    { goto L_08929114; }
L_08928fb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08929114; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fe4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006fd8u;
    c->r[6] = 0u + 0x000013e2u;
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000edu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = c->r[2] + 0u;
    { c->r[31] = 0x0892900cu; c->r[11] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ce004(c, ram); }
    { goto L_08929114; }
L_08929014:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fe4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000cdu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = c->r[2] + 0u;
    { c->r[31] = 0x08929054u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ce004(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929114; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089290c0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fe4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006fd8u;
    c->r[6] = 0u + 0x000013e1u;
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000edu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = c->r[2] + 0u;
    { c->r[31] = 0x089290b8u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ce004(c, ram); }
    { goto L_08929114; }
L_089290c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08929114; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006fe4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006fd8u;
    c->r[6] = 0u + 0x000013e2u;
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000edu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = c->r[2] + 0u;
    { c->r[31] = 0x08929114u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ce004(c, ram); }
L_08929114:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08928d00 */
}

/* func_0892ff00  0x0892ff00..0x0892ff54  84 bytes, source=sweep */
void func_0892ff00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892ff00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892ff38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0892ff40; }
L_0892ff38:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0892ff40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892ff00 */
}

/* func_08932b30  0x08932b30..0x08932b84  84 bytes, source=sweep */
void func_08932b30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932b30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08932b58; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08932b70; }
L_08932b58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08932b70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932b30 */
}

/* func_08934754  0x08934754..0x089347dc  136 bytes, source=fde */
void func_08934754(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08934754u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934784; }
    { goto L_089347c8; }
L_08934784:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089347b4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089347b4; }
    { goto L_089347c8; }
L_089347b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000004u;
    { c->r[31] = 0x089347c8u; c->r[7] = 0u + 0x00000001u; func_08935750(c, ram); }
L_089347c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08934754 */
}

/* func_0893a590  0x0893a590..0x0893a5d0  64 bytes, source=sweep */
void func_0893a590(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893a590u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffabcu);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffabeu);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893a590 */
}

/* func_0893c840  0x0893c840..0x0893c884  68 bytes, source=sweep */
void func_0893c840(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c840u);
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
    { c->r[31] = 0x0893c870u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c840 */
}

/* func_0893dc70  0x0893dc70..0x0893dcb4  68 bytes, source=sweep */
void func_0893dc70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893dc70u);
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
    { c->r[31] = 0x0893dca0u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893dc70 */
}

/* func_089401f4  0x089401f4..0x08940238  68 bytes, source=sweep */
void func_089401f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089401f4u);
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
    { c->r[31] = 0x08940224u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089401f4 */
}

/* func_089456d0  0x089456d0..0x08945708  56 bytes, source=sweep */
void func_089456d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089456d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089456f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08945940(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089456d0 */
}

/* func_089463b8  0x089463b8..0x089463fc  68 bytes, source=sweep */
void func_089463b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089463b8u);
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
    { c->r[31] = 0x089463e8u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089463b8 */
}

/* func_0894bfe0  0x0894bfe0..0x0894c024  68 bytes, source=sweep */
void func_0894bfe0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894bfe0u);
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
    { c->r[31] = 0x0894c010u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894bfe0 */
}

/* func_0894fe48  0x0894fe48..0x089501e4  924 bytes, source=fde */
void func_0894fe48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894fe48u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[17]);
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
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894ff0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894feb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894fed0; }
    { goto L_089501c8; }
L_0894feb8:
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08950078; }
    { goto L_089501c8; }
L_0894fed0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000044u;
    { c->r[31] = 0x0894feecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0894fefcu; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_089501c8; }
L_0894ff0c:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c40u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c44u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c48u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c4cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0894ff58u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08950018; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[17] = c->r[2] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0894ff7cu; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007c68u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[0] / c->f[1];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007c6cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894ffe8; }
    { goto L_0894fffc; }
L_0894ffe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]); goto L_08950008; }
L_0894fffc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007c6cu);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
L_08950008:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_089501c8; }
L_08950018:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007c70u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08950064; }
    { goto L_089501c8; }
L_08950064:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08950070u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_089501c8; }
L_08950078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_089500b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089500d0; }
    { goto L_089501c8; }
L_089500d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 7;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007c6cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c50u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c54u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c58u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c5cu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c60u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007c64u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089500b0; }
L_089501c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000007cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0894fe48 */
}

/* func_089555b8  0x089555b8..0x089555fc  68 bytes, source=sweep */
void func_089555b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089555b8u);
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
    { c->r[31] = 0x089555e8u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089555b8 */
}

/* func_08958370  0x08958370..0x089583b4  68 bytes, source=sweep */
void func_08958370(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958370u);
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
    { c->r[31] = 0x089583a0u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958370 */
}

/* func_0895a964  0x0895a964..0x0895aa34  208 bytes, source=sweep */
void func_0895a964(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895a964u);
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
    return; /* fell out of func_0895a964 */
}

/* func_0895c9b4  0x0895c9b4..0x0895cc24  624 bytes, source=fde */
void func_0895c9b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895c9b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895c9dcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x0895c9e4u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895cb84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8154u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0895ca18u: goto L_0895ca18; case 0x0895ca58u: goto L_0895ca58; case 0x0895ca98u: goto L_0895ca98; case 0x0895cad8u: goto L_0895cad8; case 0x0895cb04u: goto L_0895cb04; case 0x0895cb1cu: goto L_0895cb1c; case 0x0895cb48u: goto L_0895cb48; case 0x0895cb84u: goto L_0895cb84; default: recomp_trap_unknown_indirect(c, ram, 0x0895ca10u, _t); return; } }
L_0895ca18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8150u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895ca40; }
    { goto L_0895cb84; }
L_0895ca40:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895ca50u; c->r[5] = 0u + 0x000000dcu; func_089ca128(c, ram); }
    { goto L_0895cb84; }
L_0895ca58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8150u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895ca80; }
    { goto L_0895cb84; }
L_0895ca80:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895ca90u; c->r[5] = 0u + 0x000000ddu; func_089ca128(c, ram); }
    { goto L_0895cb84; }
L_0895ca98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8150u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895cac0; }
    { goto L_0895cb84; }
L_0895cac0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cad0u; c->r[5] = 0u + 0x000000deu; func_089ca128(c, ram); }
    { goto L_0895cb84; }
L_0895cad8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00002a30u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895cb84; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cafcu; c->r[5] = 0u + 0x000000dfu; func_089ca128(c, ram); }
    { goto L_0895cb84; }
L_0895cb04:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cb14u; c->r[5] = 0u + 0x000000e0u; func_089ca128(c, ram); }
    { goto L_0895cb84; }
L_0895cb1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00004650u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895cb84; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cb40u; c->r[5] = 0u + 0x000000e1u; func_089ca128(c, ram); }
    { goto L_0895cb84; }
L_0895cb48:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895cb54u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895cb84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895cb84; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cb84u; c->r[5] = 0u + 0x00000050u; func_089ca128(c, ram); }
L_0895cb84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895cc10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895cc10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895cbc8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cbc8u; c->r[5] = 0u + 0x000000ebu; func_089ca128(c, ram); }
L_0895cbc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895cbec; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cbecu; c->r[5] = 0u + 0x000000ecu; func_089ca128(c, ram); }
L_0895cbec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895cc10; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895cc10u; c->r[5] = 0u + 0x000000edu; func_089ca128(c, ram); }
L_0895cc10:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895c9b4 */
}

/* func_08960a5c  0x08960a5c..0x08960ab0  84 bytes, source=sweep */
void func_08960a5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960a5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004974u);
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004974u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08960a5c */
}

/* func_08963174  0x08963174..0x08963244  208 bytes, source=sweep */
void func_08963174(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08963174u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089631b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089631d0; }
    { goto L_08963234; }
L_089631d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963224; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08963234; }
L_08963218:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08963224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089631b4; }
L_08963234:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08963174 */
}

/* func_089658e4  0x089658e4..0x08965914  48 bytes, source=sweep */
void func_089658e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089658e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x0000014fu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089658e4 */
}

/* func_089690ec  0x089690ec..0x0896913c  80 bytes, source=sweep */
void func_089690ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089690ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9a5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089690ec */
}

/* func_0896a0ec  0x0896a0ec..0x0896a140  84 bytes, source=sweep */
void func_0896a0ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a0ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053d2u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896a124u; c->r[4] = c->r[4] + 0x00000af4u; func_0896a140(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a0ec */
}

/* func_0896c2e4  0x0896c2e4..0x0896c408  292 bytes, source=fde */
void func_0896c2e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896c2e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c388; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896c348; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f0u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896c3f0; }
L_0896c348:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896c37c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896c368u; c->r[4] = c->r[4] + 0x000027dcu; func_089d3828(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_0896c3f0; }
L_0896c37c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896c3f0; }
L_0896c388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896c3f0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896c3cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f0u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896c3f0; }
L_0896c3cc:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c3f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0896c3f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896c2e4 */
}

/* func_0896e044  0x0896e044..0x0896e0dc  152 bytes, source=fde */
void func_0896e044(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e044u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896e074u; c->r[6] = 0u + 0x00000200u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000208u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020bu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020du, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020eu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020fu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000204u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e044 */
}

/* func_0896ef9c  0x0896ef9c..0x0896f0e8  332 bytes, source=fde */
void func_0896ef9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896ef9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896efb4u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f050; }
    { c->r[31] = 0x0896efd0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a60000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff9edau);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9dd8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9dd0u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    c->r[1] = 0x08a60000u;
    { mem_w32(ram, c->r[1] + 0xffff9dd0u, c->r[2]); goto L_0896f0d4; }
L_0896f050:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f0b8; }
    { c->r[31] = 0x0896f068u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9ed0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9dd0u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[1] = 0x08a60000u;
    { mem_w32(ram, c->r[1] + 0xffff9dd0u, c->r[2]); goto L_0896f0d4; }
L_0896f0b8:
    c->r[2] = 0x08a60000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff9ed8u);
    c->r[3] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9dd0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffff9dd0u, c->r[2]);
L_0896f0d4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896ef9c */
}

/* func_0896fe78  0x0896fe78..0x08970114  668 bytes, source=fde */
void func_0896fe78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896fe78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    { c->r[31] = 0x0896fea4u; mem_w16(ram, c->r[30] + 0x00000004u, c->r[4]); func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896feb4; }
    { goto L_08970100; }
L_0896feb4:
    mem_w16(ram, c->r[30] + 0x00000006u, 0u);
    mem_w16(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896fedc; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    { mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]); goto L_0896fef8; }
L_0896fedc:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08970100; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]);
    c->r[2] = 0u + 0x0000012cu;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0896fef8:
    { c->r[31] = 0x0896ff00u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0896ff18u; c->r[5] = c->r[2] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896ff2c; }
    { goto L_08970100; }
L_0896ff2c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970050; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970050; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ffa4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
L_0896ffa4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x0896ffb0u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0896ffc8u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
    { c->r[31] = 0x0896ffd0u; func_0896db94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffffbbd1u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbbd1u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x0896fffcu; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08970014u; c->r[5] = c->r[2] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970100; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x0897002cu; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x08970034u; c->r[4] = c->r[2] + 0u; func_0896f350(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x08970040u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x08970048u; c->r[4] = c->r[2] + 0u; func_0896f680(c, ram); }
    { goto L_08970100; }
L_08970050:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089700a0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000005eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089700a0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x08970084u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970100; }
    { c->r[31] = 0x08970098u; c->r[4] = 0u + 0x00000008u; func_0896f350(c, ram); }
    { goto L_08970100; }
L_089700a0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970100; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089700c8u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffffbbd1u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbbd1u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970100; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x08970100u; c->r[4] = c->r[2] + 0u; func_0896f350(c, ram); }
L_08970100:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896fe78 */
}

/* func_08973b38  0x08973b38..0x08973bdc  164 bytes, source=fde */
void func_08973b38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08973b38u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08973b50u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08973b9c; }
    { c->r[31] = 0x08973b68u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08973b84; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08973bc4; }
L_08973b84:
    { c->r[31] = 0x08973b8cu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08973bc4; }
L_08973b9c:
    { c->r[31] = 0x08973ba4u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000385u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08973bc0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08973bc4; }
L_08973bc0:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08973bc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08973b38 */
}

/* func_08975fa8  0x08975fa8..0x08975fd8  48 bytes, source=sweep */
void func_08975fa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975fa8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08975fa8 */
}

/* func_089794e8  0x089794e8..0x0897950c  36 bytes, source=sweep */
void func_089794e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089794e8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9086u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089794e8 */
}

/* func_08980fac  0x08980fac..0x089810d8  300 bytes, source=fde */
void func_08980fac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08980facu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8f9cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fa0u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fa4u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fa8u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08980ff8:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981018; }
    { goto L_08981060; }
L_08981018:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08980ff8; }
L_08981060:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08981090u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08981094:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089810b4; }
    { goto L_089810c4; }
L_089810b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08981094; }
L_089810c4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08980fac */
}

/* func_0898adec  0x0898adec..0x0898b640  2132 bytes, source=fde */
void func_0898adec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898adecu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x0898ae10u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898ae6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0898ae6c:
    { c->r[31] = 0x0898ae74u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898aed0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x3000u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_0898af94; }
L_0898aed0:
    { c->r[31] = 0x0898aed8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898af30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x1000u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_0898af94; }
L_0898af30:
    { c->r[31] = 0x0898af38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898af94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0898af94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa578u);
    { c->r[31] = 0x0898aff0u; mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898b19c; }
    { c->r[31] = 0x0898b00cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898b19c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92ecu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92f0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003dcu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92ecu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa57au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92f4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92f8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92f4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa57cu);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0898b0ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898b104; }
    { goto L_0898b628; }
L_0898b104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa578u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0898b0ec; }
L_0898b19c:
    { c->r[31] = 0x0898b1a4u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898b374; }
    { c->r[31] = 0x0898b1bcu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0898b1d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898b1f0; }
    { goto L_0898b2b8; }
L_0898b1f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e8u;
    { c->r[31] = 0x0898b238u; c->r[16] = c->r[3] + c->r[2]; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000000fu;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000002fau;
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa578u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0898b1d0; }
L_0898b2b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0898b2c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898b2dc; }
    { goto L_0898b4a8; }
L_0898b2dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa578u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0898b2c4; }
L_0898b374:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92ecu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92f0u;
    { c->r[31] = 0x0898b3a4u; c->r[16] = c->r[3] + c->r[2]; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000002fau;
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92ecu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa57au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0898b3f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898b410; }
    { goto L_0898b4a8; }
L_0898b410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92e4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa578u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0898b3f8; }
L_0898b4a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff930cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9310u;
    { c->r[31] = 0x0898b4d8u; c->r[16] = c->r[3] + c->r[2]; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff930cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa582u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9314u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9318u;
    { c->r[31] = 0x0898b558u; c->r[16] = c->r[3] + c->r[2]; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9314u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa584u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff931cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9320u;
    { c->r[31] = 0x0898b5d8u; c->r[16] = c->r[3] + c->r[2]; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff931cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffa586u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
L_0898b628:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0898adec */
}

/* func_08994730  0x08994730..0x089950d4  2468 bytes, source=fde */
void func_08994730(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08994730u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08994750:
    { c->r[31] = 0x08994758u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08994774; }
    { goto L_089947fc; }
L_08994774:
    { c->r[31] = 0x0899477cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089947b4; }
    { goto L_089947ec; }
L_089947b4:
    { c->r[31] = 0x089947bcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    mem_w8(ram, c->r[2] + 0x0000000fu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089947ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08994750; }
L_089947fc:
    { c->r[31] = 0x08994804u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899481c; }
    { goto L_089950b8; }
L_0899481c:
    { c->r[31] = 0x08994824u; func_0896a284(c, ram); }
    { c->r[31] = 0x0899482cu; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0899483c:
    { c->r[31] = 0x08994844u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08994860; }
    { goto L_08994ce4; }
L_08994860:
    { c->r[31] = 0x08994868u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089948e4; }
    { c->r[31] = 0x089948a0u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089948c0u; c->r[4] = c->r[2] + 0u; func_089d454c(c, ram); }
    { c->r[31] = 0x089948c8u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08994cd4; }
L_089948e4:
    { c->r[31] = 0x089948ecu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[4] + c->r[2];
    { c->r[31] = 0x08994910u; c->r[16] = c->r[16] + 0x00000004u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[16] + 0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08994944u; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0899494cu; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08994964u; c->r[16] = c->r[16] + 0x00000010u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[16] + 0u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08994990u; mem_w8(ram, c->r[3] + 0x00000001u, c->r[5]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x089949a8u; c->r[16] = c->r[2] + 0x00000020u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089949c8u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[4] + c->r[2];
    { c->r[31] = 0x089949ecu; c->r[16] = c->r[16] + 0x00000010u; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[16] + 0u;
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
    { c->r[31] = 0x08994a44u; mem_swr(ram, c->r[3] + 0x00000008u, c->r[6]); func_08980edc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08994a5cu; c->r[16] = c->r[2] + 0x00000070u; func_08980edc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08994a7cu; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08994a94u; c->r[16] = c->r[16] + 0x00000010u; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[16] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x08994ac0u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08994ad8u; c->r[16] = c->r[2] + 0x00000030u; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08994af8u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08994b1c; }
    { c->r[31] = 0x08994b10u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x000009c2u, c->r[2]);
L_08994b1c:
    { c->r[31] = 0x08994b24u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08994b3cu; c->r[16] = c->r[2] + 0x00000070u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08994b5cu; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[16] = c->r[4] + c->r[2];
    { c->r[31] = 0x08994b80u; c->r[16] = c->r[16] + 0x00000080u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08994ba0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0896e044(c, ram); }
    { c->r[31] = 0x08994ba8u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x08994bc4u; c->r[17] = mem_r32(ram, c->r[2] + 0x00000000u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x08994becu; c->r[16] = c->r[2] + 0x00000004u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = c->r[2] + 0x00000104u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08994c24u; c->r[7] = 0u + 0x00000100u; func_089d44f8(c, ram); }
    { c->r[31] = 0x08994c2cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08994c54u; mem_w8(ram, c->r[2] + 0x00000005u, 0u); func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08994c7cu; mem_w8(ram, c->r[2] + 0x00000004u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    { c->r[31] = 0x08994ca4u; mem_w8(ram, c->r[2] + 0x0000000fu, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    mem_w8(ram, c->r[2] + 0x0000000eu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08994cd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899483c; }
L_08994ce4:
    { c->r[31] = 0x08994cecu; func_0896a284(c, ram); }
    { c->r[31] = 0x08994cf4u; mem_w8(ram, c->r[2] + 0x000009c4u, 0u); func_0896a284(c, ram); }
    mem_w8(ram, c->r[2] + 0x000008c7u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08994d00:
    { c->r[31] = 0x08994d08u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08994d24; }
    { goto L_08994d64; }
L_08994d24:
    { c->r[31] = 0x08994d2cu; func_0896a284(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08994d00; }
L_08994d64:
    { c->r[31] = 0x08994d6cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08994d74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08994d8c; }
    { goto L_08994f58; }
L_08994d8c:
    { c->r[31] = 0x08994d94u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08994dacu; c->r[16] = c->r[16] + 0x00000010u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[16] + 0u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08994dd8u; mem_w8(ram, c->r[3] + 0x00000001u, c->r[5]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08994df0u; c->r[16] = c->r[2] + 0x00000020u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08994e10u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[4] + c->r[2];
    { c->r[31] = 0x08994e34u; c->r[16] = c->r[16] + 0x00000010u; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[16] + 0u;
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
    { c->r[31] = 0x08994e8cu; mem_swr(ram, c->r[3] + 0x00000008u, c->r[6]); func_08980edc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08994ea4u; c->r[16] = c->r[2] + 0x00000070u; func_08980edc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08994ec4u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08994edcu; c->r[16] = c->r[16] + 0x00000010u; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[16] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x08994f08u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08994f20u; c->r[16] = c->r[2] + 0x00000030u; func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08994d74; }
L_08994f58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995024; }
    c->r[3] = 0u + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08994f80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08994f98; }
    { goto L_08995024; }
L_08994f98:
    { c->r[31] = 0x08994fa0u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08994fbcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a2e0(c, ram); }
    { c->r[31] = 0x08994fc4u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08980edc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x08994fe0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a2e0(c, ram); }
    { c->r[31] = 0x08994fe8u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08995004u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a2e0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08994f80; }
L_08995024:
    { c->r[31] = 0x0899502cu; func_0896a3c0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0899503c:
    { c->r[31] = 0x08995044u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08995060; }
    { goto L_089950b8; }
L_08995060:
    { c->r[31] = 0x08995068u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a4d4(c, ram); }
    { c->r[31] = 0x08995070u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9ef0u;
    { c->r[31] = 0x089950a8u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0899503c; }
L_089950b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08994730 */
}

/* func_08998e74  0x08998e74..0x08998e98  36 bytes, source=sweep */
void func_08998e74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998e74u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002b7cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998e74 */
}

/* func_08999634  0x08999634..0x089999f4  960 bytes, source=fde */
void func_08999634(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999634u);
L_08999634:
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
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999690; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999950; }
    { goto L_089999dc; }
L_08999690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089999dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa314u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08999634u: goto L_08999634; case 0x089996ccu: goto L_089996cc; case 0x08999720u: goto L_08999720; case 0x08999754u: goto L_08999754; case 0x08999828u: goto L_08999828; case 0x089998e4u: goto L_089998e4; case 0x08999940u: goto L_08999940; case 0x089999dcu: goto L_089999dc; default: recomp_trap_unknown_indirect(c, ram, 0x089996c4u, _t); return; } }
L_089996cc:
    { c->r[31] = 0x089996d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    { c->r[31] = 0x089996dcu; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    { c->r[31] = 0x089996e4u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { c->r[31] = 0x08999700u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000bu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08999718u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { goto L_089999dc; }
L_08999720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0899973c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0899973c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089999dc; }
L_08999754:
    { c->r[31] = 0x0899975cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08999768u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x08999770u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899a280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x00000047u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0899979cu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089997e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089997b8u; c->r[5] = 0x00020000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa30cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089997ccu; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000088u, c->r[2]);
L_089997e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { c->r[31] = 0x089997f4u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08999800u; c->r[5] = 0u + 0x000002eeu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x08999808u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000080u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08999820u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { goto L_089999dc; }
L_08999828:
    { c->r[31] = 0x08999830u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000080u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x08999844u; c->r[7] = 0u + 0x000000ffu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999878; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089998ac; }
    { goto L_089999dc; }
L_08999878:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08999890u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089998a4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089999dc; }
L_089998ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x089998bcu; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000080u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089998d4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089999dc; }
L_089998e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08999928; }
    { c->r[31] = 0x089998fcu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa688u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08999920u; c->r[5] = c->r[2] + 0u; func_0896a7b8(c, ram); }
    { goto L_089999dc; }
L_08999928:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089999dc; }
L_08999940:
    { c->r[31] = 0x08999948u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089999dc; }
L_08999950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999994; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999994; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000002bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999994; }
    { goto L_089999dc; }
L_08999994:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa310u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089999acu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x089999b4u; c->r[4] = 0u + 0x00000003u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffa300u;
    c->r[5] = 0u + 0x00001706u;
    { c->r[31] = 0x089999c8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { c->r[31] = 0x089999d0u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089999dcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089999dc:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08999634 */
}

/* func_0899f9e0  0x0899f9e0..0x0899fb14  308 bytes, source=fde */
void func_0899f9e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899f9e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0899fa14u; mem_w8(ram, c->r[2] + 0x00000011u, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    { c->r[31] = 0x0899fa20u; c->r[4] = c->r[2] + 0u; func_0880b118(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0899fa2cu; c->r[4] = c->r[4] + 0xffff9720u; func_0885b4b0(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0899fa38u; c->r[4] = c->r[4] + 0xffff9720u; func_0880d6d4(c, ram); }
    { c->r[31] = 0x0899fa40u; func_0884dee8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0899fa44:
    { c->r[31] = 0x0899fa4cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fa68; }
    { goto L_0899fa88; }
L_0899fa68:
    { c->r[31] = 0x0899fa70u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896a458(c, ram); }
    { c->r[31] = 0x0899fa78u; c->r[4] = c->r[2] + 0u; func_08998748(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899fa44; }
L_0899fa88:
    { c->r[31] = 0x0899fa90u; func_0896ef40(c, ram); }
    { c->r[31] = 0x0899fa98u; func_0896ef64(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899faa4u; c->r[4] = c->r[4] + 0x00000af4u; func_089a1b88(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899fab4u; c->r[5] = 0u + 0x00000001u; func_0880d318(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899fac4u; c->r[5] = 0u + 0u; func_088216f8(c, ram); }
    { c->r[31] = 0x0899faccu; func_08979698(c, ram); }
    { c->r[31] = 0x0899fad4u; c->r[4] = c->r[2] + 0u; func_0899907c(c, ram); }
    { c->r[31] = 0x0899fadcu; c->r[4] = 0u + 0u; func_0899915c(c, ram); }
    { c->r[31] = 0x0899fae4u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa63cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0899fb00u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899f9e0 */
}

/* func_089a35f4  0x089a35f4..0x089a3974  896 bytes, source=fde */
void func_089a35f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a35f4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a3610u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_089710e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089a3614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a362c; }
    { goto L_089a36b0; }
L_089a362c:
    { c->r[31] = 0x089a3634u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a3668; }
    { c->r[31] = 0x089a3654u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a36a0; }
L_089a3668:
    { c->r[31] = 0x089a3670u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xff670000u;
    c->r[2] = c->r[2] | 0x6981u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a36a0; }
    { c->r[31] = 0x089a3690u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0xff670000u;
    c->r[2] = c->r[2] | 0x6981u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a36a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a3614; }
L_089a36b0:
    { c->r[31] = 0x089a36b8u; c->r[4] = 0u + 0u; func_089ac86c(c, ram); }
    { c->r[31] = 0x089a36c0u; c->r[16] = c->r[2] + 0u; func_0897965c(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3718; }
    { c->r[31] = 0x089a36d4u; c->r[4] = 0u + 0x00000001u; func_089ac86c(c, ram); }
    { c->r[31] = 0x089a36dcu; c->r[16] = c->r[2] + 0u; func_0897965c(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3700; }
    { c->r[31] = 0x089a36f0u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a370c; }
L_089a3700:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000041u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a370c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a3718:
    { c->r[31] = 0x089a3720u; c->r[4] = 0u + 0x00000001u; func_089ac86c(c, ram); }
    { c->r[31] = 0x089a3728u; c->r[16] = c->r[2] + 0u; func_0897965c(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a374c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000042u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a374c:
    { c->r[31] = 0x089a3754u; c->r[4] = 0u + 0u; func_08971434(c, ram); }
    { c->r[31] = 0x089a375cu; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a378c; }
    { c->r[31] = 0x089a3770u; c->r[4] = 0u + 0x00000001u; func_08971434(c, ram); }
    { c->r[31] = 0x089a3778u; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a378c; }
    { goto L_089a37ac; }
L_089a378c:
    { c->r[31] = 0x089a3794u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a37ac:
    { c->r[31] = 0x089a37b4u; c->r[4] = 0u + 0u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3860; }
    { c->r[31] = 0x089a37c4u; c->r[4] = 0u + 0x00000001u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3848; }
    { c->r[31] = 0x089a37d4u; c->r[4] = 0u + 0u; func_089ac86c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a37e0u; c->r[4] = 0u + 0x00000001u; func_089ac86c(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089a3800; }
    { c->r[31] = 0x089a37f0u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a383c; }
L_089a3800:
    { c->r[31] = 0x089a3808u; c->r[4] = 0u + 0u; func_089ac86c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a3814u; c->r[4] = 0u + 0x00000001u; func_089ac86c(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a3830; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000041u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a383c; }
L_089a3830:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000042u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a383c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a3848:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a3860:
    { c->r[31] = 0x089a3868u; c->r[4] = 0u + 0x00000001u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3888; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a3888:
    { c->r[31] = 0x089a3890u; func_089990dc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a392c; }
    { c->r[31] = 0x089a38a0u; c->r[4] = 0u + 0u; func_089ac86c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a38acu; c->r[4] = 0u + 0x00000001u; func_089ac86c(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089a38cc; }
    { c->r[31] = 0x089a38bcu; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a3908; }
L_089a38cc:
    { c->r[31] = 0x089a38d4u; c->r[4] = 0u + 0u; func_089ac86c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a38e0u; c->r[4] = 0u + 0x00000001u; func_089ac86c(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a38fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000041u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a3908; }
L_089a38fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000042u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a3908:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3958; }
L_089a392c:
    { c->r[31] = 0x089a3934u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089a3958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a35f4 */
}

/* func_089a93c4  0x089a93c4..0x089a93f4  48 bytes, source=sweep */
void func_089a93c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a93c4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x089a93e0u; c->r[5] = 0u | 0xffffu; func_089a8cc0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089a93c4 */
}

/* func_089adda4  0x089adda4..0x089ade88  228 bytes, source=fde */
void func_089adda4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089adda4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089addbcu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ade74; }
    { c->r[31] = 0x089addd4u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ade74; }
    { c->r[31] = 0x089addf0u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ade74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000038u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ade40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x000030ecu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
L_089ade40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ade74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x000030f0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
L_089ade74:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089adda4 */
}

/* func_089b2e80  0x089b2e80..0x089b2ec4  68 bytes, source=sweep */
void func_089b2e80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2e80u);
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
    { c->r[31] = 0x089b2eb0u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2e80 */
}

/* func_089b4170  0x089b4170..0x089b4194  36 bytes, source=residue */
void func_089b4170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b4170u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003110u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089b4170 */
}

/* func_089b721c  0x089b721c..0x089b724c  48 bytes, source=fde */
void func_089b721c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b721cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089b7238u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b94b0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b721c */
}

/* func_089b8658  0x089b8658..0x089b87b8  352 bytes, source=sweep */
void func_089b8658(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8658u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x089b868cu; c->f[12] = c->f[0]; func_08859e90(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b86c8; }
    { goto L_089b86d4; }
L_089b86c8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_089b87a0; }
L_089b86d4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb250u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b86f8; }
    { goto L_089b870c; }
L_089b86f8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb254u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_089b870c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb258u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b8730; }
    { goto L_089b8744; }
L_089b8730:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb25cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_089b8744:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b8764; }
    { goto L_089b8784; }
L_089b8764:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    { c->r[31] = 0x089b877cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_08859e90(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_089b87a0; }
L_089b8784:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    { c->r[31] = 0x089b879cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_08859e90(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_089b87a0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b8658 */
}

/* func_089c16c8  0x089c16c8..0x089c1724  92 bytes, source=fde */
void func_089c16c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c16c8u);
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
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089c1710u; c->r[10] = 0u + 0u; func_089c177c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c16c8 */
}

/* func_089c5fbc  0x089c5fbc..0x089c607c  192 bytes, source=fde */
void func_089c5fbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c5fbcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089c5fe8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c6028; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089c6010u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c6028; }
    { goto L_089c6060; }
L_089c6028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6054; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0002u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089c6054u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_089c6054:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089c6064; }
L_089c6060:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089c6064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c5fbc */
}

/* func_089c7aac  0x089c7aac..0x089c7b3c  144 bytes, source=sweep */
void func_089c7aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c7aacu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xdfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c7b24; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c7b20u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000b8u, c->f[0]);
L_089c7b24:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c7aac */
}

/* func_089ca6d0  0x089ca6d0..0x089ca9cc  764 bytes, source=fde */
void func_089ca6d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ca6d0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb4bcu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb4c0u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb4c4u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb4c8u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000011cu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000118u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ca740u; c->r[5] = c->r[2] + 0u; func_0884613c(c, ram); }
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000011cu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000118u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000348u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[6] + 0x00000348u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000348u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca794; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x00000348u, c->r[2]);
L_089ca794:
    { c->r[31] = 0x089ca79cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001404u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089ca7e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896586c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089ca804u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08965894(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000008u, c->r[2]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089ca824u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089658bc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x0000000cu, c->r[2]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089ca844u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08969964(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca880; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089ca880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca8ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089ca8ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca8d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
L_089ca8d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca904; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089ca904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca930; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
L_089ca930:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000118u);
    c->f[20] = (f32)(s32)f2u(c->f[0]);
    { c->r[31] = 0x089ca94cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0881a2a4(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[20] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000014u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x089ca97cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0880d410(c, ram); }
    { c->r[31] = 0x089ca984u; c->r[4] = c->r[2] + 0u; func_089034d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca9ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089ca9ac:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089ca6d0 */
}

/* func_089cbe9c  0x089cbe9c..0x089cbf1c  128 bytes, source=fde */
void func_089cbe9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cbe9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089cbeb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cbec8; }
    { goto L_089cbef8; }
L_089cbec8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff244u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089cbee4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24a44u); /* sceFontClose */ }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089cbeb0; }
L_089cbef8:
    c->r[4] = 0x08b80000u;
    { c->r[31] = 0x089cbf04u; c->r[4] = mem_r32(ram, c->r[4] + 0xfffff240u); hle_dispatch_stub(c, ram, 0x08a24a4cu); /* sceFontDoneLib */ }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cbe9c */
}

/* func_089d20f0  0x089d20f0..0x089d2134  68 bytes, source=sweep */
void func_089d20f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d20f0u);
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
    return; /* fell out of func_089d20f0 */
}

/* func_089d2fa8  0x089d2fa8..0x089d2fec  68 bytes, source=sweep */
void func_089d2fa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2fa8u);
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
    { c->r[31] = 0x089d2fd8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2fa8 */
}

/* func_089d44f8  0x089d44f8..0x089d454c  84 bytes, source=sweep */
void func_089d44f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d44f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d44f8 */
}

/* func_089d5a7c  0x089d5a7c..0x089d5acc  80 bytes, source=fde */
void func_089d5a7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5a7cu);
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
    { c->r[31] = 0x089d5ab8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_0897608c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5a7c */
}

/* func_089d7650  0x089d7650..0x089d76a0  80 bytes, source=sweep */
void func_089d7650(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7650u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000053cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d768cu; c->r[5] = c->r[2] + 0u; func_089d7018(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7650 */
}

/* func_089d8c98  0x089d8c98..0x089d8d50  184 bytes, source=fde */
void func_089d8c98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8c98u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d8cd4u; c->r[8] = 0u + 0u; func_089d9034(c, ram); }
    c->r[2] = 0u + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000684u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d8cf0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000660u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d8d08u; c->r[6] = 0u + 0x00000024u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000684u);
    mem_w32(ram, c->r[3] + 0x00000678u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000660u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000660u;
    mem_w32(ram, c->r[3] + 0x00000648u, c->r[2]);
    { c->r[31] = 0x089d8d3cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d8c98 */
}

/* func_089d9d90  0x089d9d90..0x089d9e08  120 bytes, source=fde */
void func_089d9d90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9d90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000004u;
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x089d9db4u; c->r[5] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24dacu); /* sceUtilityGetSystemParamInt */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[3] < 0); if (_c) goto L_089d9de8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9df0; }
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d9df0; }
L_089d9de8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089d9df0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9d90 */
}

/* func_089db204  0x089db204..0x089db2d8  212 bytes, source=fde */
void func_089db204(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db204u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x089db234u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089db1dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089db240u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089da6b4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089db250u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089db1a8(c, ram); }
    { c->r[31] = 0x089db258u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089db180(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089db2ac; }
    { c->r[31] = 0x089db268u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089db1dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089db2c0; }
    { c->r[31] = 0x089db280u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089db2d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006a4u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b90000u;
    { mem_w32(ram, c->r[1] + 0x000006a4u, c->r[2]); goto L_089db2c0; }
L_089db2ac:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006a8u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006a8u, c->r[2]);
L_089db2c0:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db204 */
}

/* func_089dc380  0x089dc380..0x089dc3c4  68 bytes, source=sweep */
void func_089dc380(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc380u);
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
    { c->r[31] = 0x089dc3b0u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc380 */
}

/* func_089de4a8  0x089de4a8..0x089de4d0  40 bytes, source=sweep */
void func_089de4a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de4a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de4a8 */
}

/* func_089e16d0  0x089e16d0..0x089e17dc  268 bytes, source=fde */
void func_089e16d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e16d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089e16f0u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a1cu); /* sceGeDrawSync */ }
    { c->r[31] = 0x089e16f8u; hle_dispatch_stub(c, ram, 0x08a249d4u); /* sceDisplayIsVblank */ }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e1708; }
    { c->r[31] = 0x089e1708u; hle_dispatch_stub(c, ram, 0x08a249e4u); /* sceDisplayWaitVblankStart */ }
L_089e1708:
    { c->r[31] = 0x089e1710u; hle_dispatch_stub(c, ram, 0x08a24a24u); /* sceGeEdramGetAddr */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000700u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e1740; }
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[2] | 0x4000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
L_089e1740:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000058c4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e1764; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089e1764:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000200u;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x089e1778u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); hle_dispatch_stub(c, ram, 0x08a249ccu); /* sceDisplaySetFrameBuf */ }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000058c4u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b90000u;
    { c->r[31] = 0x089e1790u; mem_w32(ram, c->r[1] + 0x000058c4u, c->r[2]); func_089e4e64(c, ram); }
    { c->r[31] = 0x089e1798u; func_089e4ee0(c, ram); }
    { c->r[31] = 0x089e17a0u; func_089e4f3c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e17c8; }
    { c->r[31] = 0x089e17b8u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a1cu); /* sceGeDrawSync */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { u32 _t = c->r[2]; c->r[31] = 0x089e17c8u; recomp_call_indirect(c, ram, 0x089e17c0u, _t); }
L_089e17c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e16d0 */
}

/* func_089e22c4  0x089e22c4..0x089e2300  60 bytes, source=sweep */
void func_089e22c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e22c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e22ecu; c->r[6] = 0u + 0u; func_089e4344(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e22c4 */
}

/* func_089e3544  0x089e3544..0x089e35dc  152 bytes, source=sweep */
void func_089e3544(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3544u);
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
    { c->r[31] = 0x089e359cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e35c0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    { c->r[31] = 0x089e35c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e398c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e3544 */
}

/* func_089e4800  0x089e4800..0x089e4844  68 bytes, source=sweep */
void func_089e4800(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4800u);
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
    { c->r[31] = 0x089e4830u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4800 */
}

/* func_089e79e0  0x089e79e0..0x089e87b4  3540 bytes, source=fde */
void func_089e79e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e79e0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089e7a60u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x089e7a98u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e7aecu; c->r[5] = 0u + 0x0000000au; func_089ea1e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e7b34u; c->r[5] = 0u + 0x0000000bu; func_089ea1e4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[1] + 0xffffe8a8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e7b94; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e7b94u; c->r[5] = 0u + 0x0000000du; func_089ea1e4(c, ram); }
L_089e7b94:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0x00010000u;
    c->r[6] = c->r[6] + c->r[3];
    { c->r[31] = 0x089e7becu; c->r[6] = mem_r32(ram, c->r[6] + 0xffffe884u); func_089ea338(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089e7bf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e7c0c; }
    { goto L_089e87a0; }
L_089e7c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e7c74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[1] + 0x000008dau);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e7c74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089e7bf4; }
L_089e7c74:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000012u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_089e7ca8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x089e7ca8u; c->r[6] = c->r[2] + 0u; func_089e0bd8(c, ram); }
L_089e7ca8:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e8080; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e7ea8; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffc340u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089e7d00u: goto L_089e7d00; case 0x089e7d20u: goto L_089e7d20; case 0x089e7d40u: goto L_089e7d40; case 0x089e7d60u: goto L_089e7d60; case 0x089e7d88u: goto L_089e7d88; case 0x089e7db0u: goto L_089e7db0; case 0x089e7e04u: goto L_089e7e04; case 0x089e7e58u: goto L_089e7e58; case 0x089e7ea8u: goto L_089e7ea8; default: recomp_trap_unknown_indirect(c, ram, 0x089e7cf8u, _t); return; } }
L_089e7d00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089e7d10u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089e7ea8; }
L_089e7d20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089e7d30u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089e7ea8; }
L_089e7d40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089e7d50u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089e7ea8; }
L_089e7d60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089e7d70u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089e7ea8; }
L_089e7d88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x089e7d98u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089e7ea8; }
L_089e7db0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089e7dc0u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1cu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089e7ea8; }
L_089e7e04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089e7e14u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1du);
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1du);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1du);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089e7ea8; }
L_089e7e58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089e7e68u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1eu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1eu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf1eu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089e7ea8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e7ec0; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089e7ec0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e8028; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e7f8c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e7f2cu; c->r[5] = 0u + 0x0000000au; func_089ea1e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0x00010000u;
    c->r[6] = c->r[6] + c->r[3];
    { c->r[31] = 0x089e7f84u; c->r[6] = mem_r32(ram, c->r[6] + 0xffffe884u); func_089ea338(c, ram); }
    { goto L_089e8080; }
L_089e7f8c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e7fd4u; c->r[5] = 0u + 0x0000000au; func_089ea220(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e8020u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u); func_089ea338(c, ram); }
    { goto L_089e8080; }
L_089e8028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e8080; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e8080u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u); func_089ea338(c, ram); }
L_089e8080:
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
L_089e8084:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e809c; }
    { goto L_089e8190; }
L_089e809c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e80c4; }
    { goto L_089e8190; }
L_089e80c4:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e8180; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000012c0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { c->r[31] = 0x089e8180u; c->r[6] = c->r[2] + 0u; func_089ea1a4(c, ram); }
L_089e8180:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_089e8084; }
L_089e8190:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e820c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089e820cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
L_089e820c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x089e8220u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000038u); func_089eb728(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x00f0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e8788; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e827cu; c->r[5] = 0u + 0x0000000bu; func_089ea220(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[1] + 0xffffe8a8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e82dc; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e82dcu; c->r[5] = 0u + 0x0000000du; func_089ea220(c, ram); }
L_089e82dc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e8324u; c->r[5] = 0u + 0x0000000cu; func_089ea1e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x089e8374u; c->r[7] = 0u + 0x00000001u; func_089ea3c0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e83c0u; c->r[6] = 0u + 0x00000001u; func_089ea12c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000005u;
    { c->r[31] = 0x089e83d0u; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    { c->r[31] = 0x089e83d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089eb6ac(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x00f0u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e8414; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000001fbu;
    { c->r[31] = 0x089e840cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { goto L_089e844c; }
L_089e8414:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e843c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000001fau;
    { c->r[31] = 0x089e8434u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { goto L_089e844c; }
L_089e843c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000001fbu;
    { c->r[31] = 0x089e844cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
L_089e844c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e84f8; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e84a0u; c->r[5] = 0u + 0x0000000au; func_089ea1e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0x00010000u;
    c->r[6] = c->r[6] + c->r[3];
    { c->r[31] = 0x089e84f8u; c->r[6] = mem_r32(ram, c->r[6] + 0xffffe884u); func_089ea338(c, ram); }
L_089e84f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x089e850cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000038u); func_089eb728(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e855cu; c->r[7] = 0u + 0u; func_089ea3c0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e85a4u; c->r[5] = 0u + 0x0000000bu; func_089ea1e4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[1] + 0xffffe8a8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e8604; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e8604u; c->r[5] = 0u + 0x0000000du; func_089ea1e4(c, ram); }
L_089e8604:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e864cu; c->r[5] = 0u + 0x0000000cu; func_089ea220(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e8698u; c->r[6] = 0u + 0u; func_089ea12c(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000040u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e86acu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089e86bcu; c->r[6] = 0u + 0xffffffffu; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e875c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e8710u; c->r[5] = 0u + 0x0000000au; func_089ea220(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089e875cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u); func_089ea338(c, ram); }
L_089e875c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e8780; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x089e8780u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000038u); func_089eb728(c, ram); }
L_089e8780:
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089e8788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089e7bf4; }
L_089e87a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089e79e0 */
}

/* func_089ead98  0x089ead98..0x089eaddc  68 bytes, source=sweep */
void func_089ead98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ead98u);
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
    { c->r[31] = 0x089eadc8u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ead98 */
}

/* func_089ecce4  0x089ecce4..0x089ed44c  1896 bytes, source=fde */
void func_089ecce4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ecce4u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    c->r[2] = 0u + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089ecd1cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ed108; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ecd74; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000050u, c->f[1]); goto L_089ecd98; }
L_089ecd74:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
L_089ecd98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ecdec; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000060u, c->f[1]); goto L_089ece10; }
L_089ecdec:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[3]);
L_089ece10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ece68; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000070u, c->f[1]); goto L_089ece8c; }
L_089ece68:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[3]);
L_089ece8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000088u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ecee4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[1]); goto L_089ecf08; }
L_089ecee4:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[3]);
L_089ecf08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000098u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ecf60; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x00000090u, c->f[1]); goto L_089ecf84; }
L_089ecf60:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[3]);
L_089ecf84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ecfdc; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[1]); goto L_089ed000; }
L_089ecfdc:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[3]);
L_089ed000:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ed058; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[1]); goto L_089ed07c; }
L_089ed058:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[3]);
L_089ed07c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc444u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ed0d4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[1]); goto L_089ed0f8; }
L_089ed0d4:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[3]);
L_089ed0f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]); goto L_089ed160; }
L_089ed108:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
L_089ed160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ed1a8; }
    { c->r[31] = 0x089ed1a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888d9b8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]); goto L_089ed1bc; }
L_089ed1a8:
    c->r[3] = 0xff800000u;
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = c->r[2] | 0x8080u;
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
L_089ed1bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc448u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc448u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc448u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc448u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    { c->r[31] = 0x089ed278u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    { c->r[31] = 0x089ed284u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[2] | 0x019eu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = c->r[6] | 0x019eu;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089ed438u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ef030(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_089ecce4 */
}

/* func_089f07c0  0x089f07c0..0x089f0828  104 bytes, source=sweep */
void func_089f07c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f07c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[4] = c->r[2] << 24;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0814u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f07c0 */
}

/* func_089f1a54  0x089f1a54..0x089f1ac8  116 bytes, source=sweep */
void func_089f1a54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f1a54u);
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
    { c->r[31] = 0x089f1a90u; c->r[5] = c->r[2] + 0u; func_089f1afc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f1ab4u; c->r[5] = c->r[2] + 0u; func_089f1afc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f1a54 */
}

/* func_089f54f8  0x089f54f8..0x089f5524  44 bytes, source=residue */
void func_089f54f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f54f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f54f8 */
}

/* func_089f76e8  0x089f76e8..0x089f7724  60 bytes, source=sweep */
void func_089f76e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f76e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x0000000du, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f76e8 */
}

/* func_089f9068  0x089f9068..0x089f90a8  64 bytes, source=sweep */
void func_089f9068(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9068u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089f9078u; func_089fbd18(c, ram); }
    { c->r[31] = 0x089f9080u; func_089fba20(c, ram); }
    { c->r[31] = 0x089f9088u; func_089fe268(c, ram); }
    { c->r[31] = 0x089f9090u; func_089fabd4(c, ram); }
    { c->r[31] = 0x089f9098u; func_089fc708(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9068 */
}

/* func_089f9b70  0x089f9b70..0x089f9b8c  28 bytes, source=residue */
void func_089f9b70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9b70u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089f9b80u; func_089fa414(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9b70 */
}

/* func_089fa56c  0x089fa56c..0x089fa598  44 bytes, source=sweep */
void func_089fa56c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa56cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[6] == 0u); c->r[3] = 0x80000000u; if (_c) goto L_089fa588; }
    { c->r[31] = 0x089fa584u; func_089fac20(c, ram); }
    c->r[3] = c->r[2] + 0u;
L_089fa588:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa56c */
}

/* func_089faee8  0x089faee8..0x089fafc4  220 bytes, source=fde */
void func_089faee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089faee8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[2] = 0u + 0x000000ffu;
    c->r[16] = c->r[4] & 0x00ffu;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { int _c = (c->r[16] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]); if (_c) goto L_089faf7c; }
    { c->r[31] = 0x089faf0cu; c->r[4] = c->r[16] + 0u; func_089fb3b8(c, ram); }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0007u; if (_c) goto L_089faf64; }
    c->r[2] = 0x08b90000u;
    c->r[4] = c->r[16] << 5;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[6] = c->r[4] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[6] + 0x0000000au);
    c->r[4] = mem_r16(ram, c->r[3] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    mem_w8(ram, c->r[6] + 0x0000000cu, c->r[2]);
    mem_w16(ram, c->r[6] + 0x00000008u, c->r[4]);
    c->r[3] = mem_r16(ram, c->r[3] + 0x0000000eu);
    c->r[2] = alx_seh(c->r[3]);
    { int _c = (c->r[5] == c->r[2]); mem_wf32(ram, c->r[6] + 0x00000004u, c->f[0]); if (_c) goto L_089faf60; }
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[6] + 0x0000000au, c->r[3]);
    mem_w32(ram, c->r[6] + 0x0000001cu, c->r[2]);
L_089faf60:
    c->r[3] = 0u + 0u;
L_089faf64:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_089faf68:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089faf7c:
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[17] = c->r[2] + 0x0000000cu;
    c->r[16] = 0u + 0u;
L_089faf8c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[17] + 0x00000000u);
    c->r[4] = c->r[16] & 0x00ffu;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0x00000001u; if (_c) goto L_089fafb4; }
    c->r[2] = ((s32)c->r[16] < (s32)0x00000020u) ? 1u : 0u;
L_089fafa0:
    c->r[17] = c->r[17] + 0x00000020u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0u; if (_c) goto L_089faf8c; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_089faf68; }
L_089fafb4:
    { c->r[31] = 0x089fafbcu; func_089faee8(c, ram); }
    { c->r[2] = ((s32)c->r[16] < (s32)0x00000020u) ? 1u : 0u; goto L_089fafa0; }
    return; /* fell out of func_089faee8 */
}

/* func_089fbd60  0x089fbd60..0x089fbd84  36 bytes, source=fde */
void func_089fbd60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbd60u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    { c->r[31] = 0x089fbd78u; c->r[4] = mem_r32(ram, c->r[2] + 0x00007eacu); func_089fba80(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fbd60 */
}

/* func_089fc98c  0x089fc98c..0x089fc9e8  92 bytes, source=sweep */
void func_089fc98c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc98cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[7] = c->r[7] & 0xffffu;
    c->r[8] = alx_seh(c->r[8]);
    c->r[9] = alx_seh(c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fc9acu; c->r[16] = c->r[4] + 0u; func_089fc8d4(c, ram); }
    c->r[5] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x000047c4u);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[3]);
    { int _c = (c->r[4] == c->r[2]); mem_w32(ram, c->r[5] + 0x000047c4u, c->r[4]); if (_c) goto L_089fc9dc; }
L_089fc9cc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fc9dc:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[5] + 0x000047c4u, c->r[2]); goto L_089fc9cc; }
    return; /* fell out of func_089fc98c */
}

/* func_089fdfc0  0x089fdfc0..0x089fdff8  56 bytes, source=sweep */
void func_089fdfc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fdfc0u);
    c->r[2] = c->r[7] << 5;
    c->r[2] = c->r[2] + c->r[7];
    c->r[7] = c->r[2] << 3;
    c->r[7] = c->r[7] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[6];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    mem_w32(ram, c->r[2] + 0x00000088u, c->r[5]);
    { mem_w32(ram, c->r[2] + 0x00000008u, c->r[8]); return; }
    return; /* fell out of func_089fdfc0 */
}

/* func_089fed50  0x089fed50..0x089feddc  140 bytes, source=sweep */
void func_089fed50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fed50u);
    c->r[2] = c->r[4] << 3;
    c->r[2] = c->r[2] - c->r[4];
    c->r[3] = 0x08ba0000u;
    c->r[6] = c->r[3] + 0x0000008cu;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[6];
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[4] = 0x80000000u;
    c->r[3] = (c->r[3] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[4] | 0x000cu; if (_c) goto L_089fedd4; }
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000038u);
    { int _c = ((s32)c->r[6] <= 0); c->r[7] = ((s32)c->r[5] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_089fedd4; }
    c->r[2] = (u32)((s32)c->r[5] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[5] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[3] = c->r[2] << 3;
    c->r[3] = c->r[3] - c->r[2];
    c->r[4] = 0u + 0u;
    { int _c = (c->r[7] != 0u); c->r[2] = c->r[3] << 2; if (_c) goto L_089fedd4; }
    c->f[1] = u2f(c->r[2]);
    c->f[2] = u2f(c->r[6]);
    c->r[2] = 0x08a50000u;
    c->f[0] = (f32)(s32)f2u(c->f[1]);
    c->f[1] = (f32)(s32)f2u(c->f[2]);
    c->f[0] = c->f[0] / c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd2a4u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
L_089fedd4:
    { c->r[2] = c->r[4] + 0u; return; }
    return; /* fell out of func_089fed50 */
}

/* func_08a013e0  0x08a013e0..0x08a01508  296 bytes, source=residue */
void func_08a013e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a013e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    c->r[21] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[21] + 0x00000184u;
    c->r[2] = c->r[2] + c->r[17];
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[20] = c->r[17] + 0x00000054u;
    c->r[16] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    c->r[2] = 0x80000000u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[5] + 0u; if (_c) goto L_08a014d0; }
    { c->r[31] = 0x08a01440u; func_08a1b008(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[6] = c->r[2] + 0u;
    alx_mult(c, c->r[4], c->r[18]);
    c->r[5] = c->r[16] + 0u;
    c->r[4] = c->lo;
    { c->r[31] = 0x08a01460u; c->r[4] = c->r[4] + c->r[20]; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd320u;
    alx_mult(c, c->r[2], c->r[18]);
    c->r[6] = 0u + 0x00000002u;
    c->r[2] = c->lo;
    c->r[4] = c->r[2] + c->r[20];
    c->r[2] = c->r[2] + c->r[17];
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
    mem_w32(ram, c->r[2] + 0x00000030u, c->r[19]);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
    { c->r[31] = 0x08a01494u; mem_w32(ram, c->r[2] + 0x00000000u, c->r[19]); func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a014f4; }
    alx_mult(c, c->r[4], c->r[18]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    mem_w32(ram, c->r[2] + 0x00000040u, c->r[19]);
L_08a014ac:
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->r[21] + 0x00000184u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = c->r[29] + 0u;
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08a014d0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
L_08a014d0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a014f4:
    alx_mult(c, c->r[4], c->r[18]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    { mem_w32(ram, c->r[2] + 0x00000040u, 0u); goto L_08a014ac; }
    return; /* fell out of func_08a013e0 */
}

/* func_08a02a28  0x08a02a28..0x08a02aa0  120 bytes, source=sweep */
void func_08a02a28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02a28u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[6] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->f[2] = mem_rf32(ram, c->r[6] + 0x00000004u);
    c->r[3] = c->r[3] << 4;
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = c->r[3] + 0x00000150u;
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[1]);
    c->r[4] = c->r[3] + 0x00000160u;
    c->r[6] = c->r[3] + 0x00000170u;
    mem_wf32(ram, c->r[3] + 0x00000150u, c->f[0]);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[2]);
    c->r[2] = 0u + 0x00000001u;
    c->f[0] = mem_rf32(ram, c->r[7] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[7] + 0x00000004u);
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000160u, c->f[1]);
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[2]);
    c->f[0] = mem_rf32(ram, c->r[8] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[8] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[8] + 0x00000004u);
    mem_wf32(ram, c->r[6] + 0x00000008u, c->f[0]);
    mem_w32(ram, c->r[3] + 0x00000180u, c->r[5]);
    mem_w32(ram, c->r[3] + 0x00000140u, c->r[2]);
    mem_wf32(ram, c->r[3] + 0x00000170u, c->f[1]);
    { mem_wf32(ram, c->r[6] + 0x00000004u, c->f[2]); return; }
    return; /* fell out of func_08a02a28 */
}

/* func_08a03424  0x08a03424..0x08a0342c  8 bytes, source=sweep */
void func_08a03424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03424u);
    { mem_w32(ram, c->r[4] + 0x00001600u, 0u); return; }
    return; /* fell out of func_08a03424 */
}

/* func_08a04640  0x08a04640..0x08a046dc  156 bytes, source=residue */
void func_08a04640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04640u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0x08ba0000u;
    c->r[3] = 0x80440000u;
    c->r[2] = mem_r32(ram, c->r[19] + 0xffff9bf0u);
    c->r[5] = 0u + 0x00000003u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[4] = c->r[3] | 0x0004u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[2] != c->r[5]); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a046bc; }
    c->r[16] = 0u + 0u;
    c->r[4] = c->r[16] + 0u;
L_08a04678:
    { c->r[31] = 0x08a04680u; c->r[16] = c->r[16] + 0x00000001u; func_08a043bc(c, ram); }
    c->r[4] = ((s32)c->r[16] < (s32)0x00000008u) ? 1u : 0u;
    if (c->r[4] != 0u) { c->r[4] = c->r[16] + 0u; goto L_08a04678; }
    c->r[16] = 0x08ba0000u;
    c->r[4] = mem_r32(ram, c->r[16] + 0xffffaf38u);
    c->r[17] = 0x08ba0000u;
    c->r[18] = 0u + 0x00000001u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a046a8u; mem_w32(ram, c->r[17] + 0xffff9bf4u, c->r[18]); hle_dispatch_stub(c, ram, 0x08a24814u); /* sceKernelWaitThreadEnd */ }
    { c->r[31] = 0x08a046b0u; c->r[4] = mem_r32(ram, c->r[16] + 0xffffaf38u); hle_dispatch_stub(c, ram, 0x08a248b4u); /* sceKernelDeleteThread */ }
    mem_w32(ram, c->r[17] + 0xffff9bf4u, 0u);
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[19] + 0xffff9bf0u, c->r[18]);
L_08a046bc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a04640 */
}

/* func_08a05f3c  0x08a05f3c..0x08a05f78  60 bytes, source=residue */
void func_08a05f3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05f3cu);
    c->r[5] = 0x08ba0000u;
    c->r[6] = mem_r32(ram, c->r[5] + 0xffffaf80u);
    c->r[2] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    c->r[5] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a05f6c; }
    { c->r[31] = 0x08a05f6cu; hle_dispatch_stub(c, ram, 0x08a24cbcu); /* __sceSasGetEnvelopeHeight */ }
L_08a05f6c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05f3c */
}

/* func_08a06e28  0x08a06e28..0x08a06e64  60 bytes, source=residue */
void func_08a06e28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06e28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
L_08a06e3c:
    { c->r[31] = 0x08a06e44u; c->r[4] = c->r[29] + 0u; func_08a0635c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[16] + 0u; if (_c) goto L_08a06e54; }
    { c->r[16] = c->r[16] + 0x00000001u; goto L_08a06e3c; }
L_08a06e54:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a06e28 */
}

/* func_08a0d3d8  0x08a0d3d8..0x08a0d51c  324 bytes, source=sweep */
void func_08a0d3d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0d3d8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[2] = 0u + 0x00000050u;
    c->r[16] = c->r[4] & 0x00ffu;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[7] + 0u;
    { int _c = (c->r[16] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]); if (_c) goto L_08a0d500; }
    c->r[3] = c->r[16] & 0x000fu;
    c->r[2] = (c->r[3] < 0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] << 2; if (_c) goto L_08a0d514; }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x000004b8u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a0d430u: goto L_08a0d430; case 0x08a0d494u: goto L_08a0d494; case 0x08a0d4acu: goto L_08a0d4ac; case 0x08a0d4c0u: goto L_08a0d4c0; case 0x08a0d4dcu: goto L_08a0d4dc; case 0x08a0d4ecu: goto L_08a0d4ec; case 0x08a0d514u: goto L_08a0d514; default: recomp_trap_unknown_indirect(c, ram, 0x08a0d428u, _t); return; } }
L_08a0d430:
    c->r[4] = c->r[6] + 0u;
    { c->r[31] = 0x08a0d43cu; c->r[5] = c->r[29] + 0u; func_08a0d34c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a0d440:
    c->r[6] = c->r[2] + 0u;
L_08a0d444:
    if (c->r[4] == 0u) { mem_w32(ram, c->r[17] + 0x00000000u, c->r[4]); goto L_08a0d46c; }
    c->r[2] = c->r[16] & 0x0070u;
    c->r[5] = c->r[4] + c->r[19];
    c->r[2] = c->r[2] ^ 0x0010u;
    c->r[4] = c->r[4] + c->r[18];
    c->r[3] = alx_seb(c->r[16]);
    { int _c = ((s32)c->r[3] < 0); if (c->r[2] != 0u) c->r[4] = c->r[5]; if (_c) goto L_08a0d48c; }
L_08a0d468:
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[4]);
L_08a0d46c:
    c->r[2] = c->r[6] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a0d48c:
    { c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u); goto L_08a0d468; }
L_08a0d494:
    c->r[2] = mem_r8(ram, c->r[6] + 0x00000001u);
    c->r[3] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000002u;
    c->r[2] = c->r[2] << 8;
    { c->r[4] = c->r[2] | c->r[3]; goto L_08a0d444; }
L_08a0d4ac:
    c->r[4] = c->r[6] + 0u;
    { c->r[31] = 0x08a0d4b8u; c->r[5] = c->r[29] + 0x00000004u; func_08a0d380(c, ram); }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a0d440; }
L_08a0d4c0:
    c->r[2] = mem_r8(ram, c->r[6] + 0x00000001u);
    c->r[3] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000002u;
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[4] = alx_seh(c->r[2]); goto L_08a0d444; }
L_08a0d4dc:
    c->r[4] = mem_lwl(ram, c->r[6] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[6] + 0x00000000u, c->r[4]);
    { c->r[6] = c->r[6] + 0x00000004u; goto L_08a0d444; }
L_08a0d4ec:
    c->r[2] = mem_lwl(ram, c->r[6] + 0x00000003u, c->r[2]);
    c->r[2] = mem_lwr(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000008u;
    { c->r[4] = c->r[2] + 0u; goto L_08a0d444; }
L_08a0d500:
    c->r[2] = c->r[6] + 0x00000003u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[6] = c->r[2] + 0x00000004u; goto L_08a0d468; }
L_08a0d514:
    { c->r[31] = 0x08a0d51cu; func_08a19084(c, ram); }
    return; /* fell out of func_08a0d3d8 */
}

/* func_08a0e414  0x08a0e414..0x08a0e444  48 bytes, source=fde */
void func_08a0e414(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e414u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e424u; func_08a0e408(c, ram); }
    c->r[2] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00004a54u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000000u) ? 1u : 0u;
    if (c->r[4] != 0u) c->r[3] = 0u;
    mem_w32(ram, c->r[2] + 0x00004a54u, c->r[3]);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e414 */
}

/* func_08a0e950  0x08a0e950..0x08a0e9a0  80 bytes, source=fde */
void func_08a0e950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e950u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    { int _c = (c->r[8] == c->r[6]); mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]); if (_c) goto L_08a0e988; }
L_08a0e95c:
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0e974u; recomp_call_indirect(c, ram, 0x08a0e96cu, _t); }
    c->r[9] = c->r[2] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a0e97c:
    c->r[2] = c->r[9] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0e988:
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); c->r[9] = 0u + 0x00000006u; if (_c) goto L_08a0e95c; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a0e97c; }
    return; /* fell out of func_08a0e950 */
}

/* func_08a128d0  0x08a128d0..0x08a12b2c  604 bytes, source=sweep */
void func_08a128d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a128d0u);
    c->r[5] = f2u(c->f[12]);
    c->r[2] = 0x317f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[5] = alx_ins(c->r[5], 0u, 31u, 31u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[5]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[6] = f2u(c->f[12]);
    { int _c = (c->r[2] != 0u); c->f[7] = c->f[12]; if (_c) goto L_08a12950; }
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[12]));
    c->r[2] = f2u(c->f[0]);
    { int _c = (c->r[2] != 0u); c->r[2] = 0x3f2c0000u; if (_c) goto L_08a12954; }
    c->r[2] = c->r[4] + 0x00000001u;
    c->r[2] = c->r[5] | c->r[2];
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a12938; }
    { int _c = (c->r[4] == c->r[2]); c->f[0] = c->f[12]; if (_c) goto L_08a1292c; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000f5cu);
    c->f[0] = c->f[0] / c->f[12];
L_08a1292c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a12938:
    { c->r[31] = 0x08a12940u; func_08a13008(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000f58u);
    { c->f[0] = c->f[1] / c->f[0]; goto L_08a1292c; }
L_08a12950:
    c->r[2] = 0x3f2c0000u;
L_08a12954:
    c->r[2] = c->r[2] | 0xa13fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[5]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->f[6] = c->f[7] * c->f[7]; goto L_08a12990; }
    if ((s32)c->r[6] < 0) { c->f[7] = -c->f[7]; goto L_08a12b24; }
L_08a1296c:
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000f60u);
    c->r[2] = 0x08a50000u;
    c->f[6] = c->f[0] - c->f[7];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000f64u);
    c->f[5] = c->f[0] - c->f[13];
    c->f[13] = u2f(0u);
    c->f[7] = c->f[6] + c->f[5];
    c->f[6] = c->f[7] * c->f[7];
L_08a12990:
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000f80u);
    c->r[2] = 0x08a50000u;
    c->f[5] = c->f[6] * c->f[6];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000f68u);
    c->r[2] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f84u);
    c->f[0] = c->f[5] * c->f[0];
    c->f[1] = c->f[5] * c->f[1];
    c->r[2] = 0x08a50000u;
    c->r[3] = 0x3f2c0000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f6cu);
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[3] | 0xa13fu;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[5] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f88u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[5] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f70u);
    c->r[2] = 0x08a50000u;
    c->r[3] = ((s32)c->r[3] < (s32)c->r[5]) ? 1u : 0u;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[5] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f8cu);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[5] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f74u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[5] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f90u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[5] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f78u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[5] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f94u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[5] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000f7cu);
    c->f[5] = c->f[6] * c->f[7];
    c->r[2] = 0x08a50000u;
    c->f[4] = c->f[1] + c->f[2];
    c->f[12] = c->f[6] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000f98u);
    c->f[0] = c->f[4] + c->f[12];
    c->f[1] = c->f[5] * c->f[1];
    c->f[0] = c->f[5] * c->f[0];
    c->f[0] = c->f[0] + c->f[13];
    c->f[0] = c->f[6] * c->f[0];
    c->f[4] = c->f[13] + c->f[0];
    c->f[4] = c->f[4] + c->f[1];
    { int _c = (c->r[3] == 0u); c->f[5] = c->f[7] + c->f[4]; if (_c) goto L_08a12ac8; }
    c->f[0] = u2f(c->r[4]);
    c->r[2] = (u32)((s32)c->r[6] >> 30);
    c->r[2] = c->r[2] & 0x0002u;
    c->f[12] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[5] * c->f[5];
    c->r[3] = 0u + 0x00000001u;
    c->r[3] = c->r[3] - c->r[2];
    c->f[2] = c->f[5] + c->f[12];
    c->f[1] = u2f(c->r[3]);
    c->f[0] = c->f[0] / c->f[2];
    c->f[3] = (f32)(s32)f2u(c->f[1]);
    c->f[0] = c->f[0] - c->f[4];
    c->f[0] = c->f[7] - c->f[0];
    c->f[0] = c->f[0] + c->f[0];
    c->f[0] = c->f[12] - c->f[0];
    { c->f[0] = c->f[3] * c->f[0]; goto L_08a1292c; }
L_08a12ac8:
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[4] == c->r[2]); c->f[0] = c->f[5]; if (_c) goto L_08a1292c; }
    c->r[3] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[3] + 0x00000f5cu);
    c->r[2] = f2u(c->f[5]);
    c->f[2] = c->f[2] / c->f[5];
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 11u);
    c->f[6] = u2f(c->r[2]);
    c->f[1] = c->f[6] - c->f[7];
    c->r[2] = f2u(c->f[2]);
    c->f[12] = c->f[4] - c->f[1];
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 11u);
    c->f[3] = u2f(c->r[2]);
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000f58u);
    c->f[4] = c->f[3] * c->f[6];
    c->f[1] = c->f[3] * c->f[12];
    c->f[5] = c->f[4] + c->f[0];
    c->f[1] = c->f[5] + c->f[1];
    c->f[2] = c->f[2] * c->f[1];
    { c->f[0] = c->f[3] + c->f[2]; goto L_08a1292c; }
L_08a12b24:
    { c->f[13] = -c->f[13]; goto L_08a1296c; }
    return; /* fell out of func_08a128d0 */
}

/* func_08a148f0  0x08a148f0..0x08a148f8  8 bytes, source=sweep */
void func_08a148f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a148f0u);
    { c->r[2] = mem_r32(ram, c->r[4] + 0x00000354u); return; }
    return; /* fell out of func_08a148f0 */
}

/* func_08a16e84  0x08a16e84..0x08a16ea4  32 bytes, source=fde */
void func_08a16e84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16e84u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[6] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a16e98u; c->r[7] = 0u + 0u; func_08a16e14(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a16e84 */
}

/* func_08a18e30  0x08a18e30..0x08a18ed4  164 bytes, source=sweep */
void func_08a18e30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18e30u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    { int _c = (c->r[4] == c->r[3]); mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]); if (_c) goto L_08a18ec4; }
    c->r[3] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[5] = 0u + 0x00000002u; if (_c) goto L_08a18eac; }
    { int _c = (c->r[4] == c->r[5]); if (_c) goto L_08a18e9c; }
    c->r[2] = c->r[4] + 0u;
L_08a18e68:
    { int _c = ((s32)c->r[2] < 0); c->r[3] = 0u + 0xfffffff7u; if (_c) goto L_08a18e84; }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a18e80u; c->r[6] = c->r[17] + 0u; hle_dispatch_stub(c, ram, 0x08a246c4u); /* sceIoWrite */ }
    c->r[3] = c->r[2] + 0u;
L_08a18e84:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a18e9c:
    { c->r[31] = 0x08a18ea4u; hle_dispatch_stub(c, ram, 0x08a24794u); /* sceKernelStderr */ }
    { goto L_08a18e68; }
L_08a18eac:
    if (c->r[4] != 0u) { c->r[2] = c->r[4] + 0u; goto L_08a18e68; }
    { c->r[31] = 0x08a18ebcu; hle_dispatch_stub(c, ram, 0x08a24784u); /* sceKernelStdin */ }
    { goto L_08a18e68; }
L_08a18ec4:
    { c->r[31] = 0x08a18eccu; hle_dispatch_stub(c, ram, 0x08a2478cu); /* sceKernelStdout */ }
    { goto L_08a18e68; }
    return; /* fell out of func_08a18e30 */
}

/* func_08a193dc  0x08a193dc..0x08a19564  392 bytes, source=sweep */
void func_08a193dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a193dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = (c->r[5] < 0x00000011u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]); if (_c) goto L_08a19554; }
    c->r[2] = c->r[5] + 0x00000013u;
    c->r[6] = 0u + 0x00000010u;
    c->r[3] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    c->r[19] = c->r[6] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 3u);
    if (c->r[3] == 0u) c->r[19] = c->r[2];
    c->r[5] = (c->r[19] < c->r[5]) ? 1u : 0u;
    c->r[3] = c->r[19] >> 31;
    c->r[2] = (c->r[16] < 0x00000010u) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[5];
    if (c->r[2] != 0u) c->r[16] = c->r[6];
    { int _c = (c->r[3] != 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a19508; }
    c->r[5] = c->r[19] + c->r[16];
    { c->r[31] = 0x08a1944cu; c->r[5] = c->r[5] + 0x00000010u; func_08a197ec(c, ram); }
    c->r[17] = c->r[2] + 0u;
    { int _c = (c->r[17] == 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a19508; }
    { c->r[31] = 0x08a19460u; c->r[4] = c->r[20] + 0u; func_08a19f7c(c, ram); }
    alx_divu(c, c->r[17], c->r[16]);
    if (c->r[16] == 0u) { recomp_break(c, ram, 0x08a19468u, 0x7u); goto L_08a1946c; }
L_08a1946c:
    c->r[2] = c->hi;
    { int _c = (c->r[2] == 0u); c->r[18] = c->r[17] + 0xfffffff8u; if (_c) goto L_08a194e4; }
    c->r[2] = c->r[17] + c->r[16];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = 0u - c->r[16];
    c->r[2] = c->r[2] & c->r[3];
    c->r[7] = c->r[2] + 0xfffffff8u;
    c->r[8] = c->r[7] - c->r[18];
    c->r[2] = ((s32)c->r[8] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[18] + 0x00000004u); if (_c) goto L_08a194a4; }
    c->r[7] = c->r[7] + c->r[16];
    c->r[8] = c->r[7] - c->r[18];
L_08a194a4:
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[20] + 0u;
    c->r[6] = alx_ins(c->r[6], 0u, 0u, 1u);
    c->r[6] = c->r[6] - c->r[8];
    c->r[2] = c->r[6] | 0x0001u;
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[2]);
    c->r[6] = c->r[7] + c->r[6];
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[6] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000004u);
    c->r[3] = c->r[3] & 0x0001u;
    c->r[3] = c->r[3] | c->r[8];
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]);
    { c->r[31] = 0x08a194e4u; c->r[18] = c->r[7] + 0u; func_08a21690(c, ram); }
L_08a194e4:
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000004u);
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[2] = c->r[2] - c->r[19];
    c->r[3] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[2] | 0x0001u; if (_c) goto L_08a19528; }
L_08a194fc:
    { c->r[31] = 0x08a19504u; c->r[4] = c->r[20] + 0u; func_08a19fb8(c, ram); }
    c->r[2] = c->r[18] + 0x00000008u;
L_08a19508:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
L_08a1950c:
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a19528:
    c->r[5] = c->r[18] + c->r[19];
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[5] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] | c->r[19];
    { c->r[31] = 0x08a1954cu; mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]); func_08a21690(c, ram); }
    { goto L_08a194fc; }
L_08a19554:
    { c->r[31] = 0x08a1955cu; func_08a197ec(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u); goto L_08a1950c; }
    return; /* fell out of func_08a193dc */
}

/* func_08a1acb0  0x08a1acb0..0x08a1accc  28 bytes, source=sweep */
void func_08a1acb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1acb0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a1acc0u; func_08a18fb4(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1acb0 */
}

/* func_08a1f6e8  0x08a1f6e8..0x08a1f748  96 bytes, source=residue */
void func_08a1f6e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1f6e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1f714u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[17] + 0u;
    c->r[7] = c->r[18] + 0u;
    { c->r[31] = 0x08a1f72cu; c->r[8] = c->r[19] + 0u; func_08a1f590(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a1f6e8 */
}

/* func_08a22c60  0x08a22c60..0x08a22d78  280 bytes, source=sweep */
void func_08a22c60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a22c60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[3] = c->r[6] & 0x0003u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a22d54; }
L_08a22c90:
    c->r[18] = (u32)((s32)c->r[18] >> 2);
    { int _c = (c->r[18] == 0u); c->r[2] = c->r[19] + 0u; if (_c) goto L_08a22cfc; }
    c->r[17] = mem_r32(ram, c->r[20] + 0x00000048u);
    { int _c = (c->r[17] == 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a22d3c; }
L_08a22ca8:
    c->r[2] = c->r[18] & 0x0001u;
    c->r[6] = c->r[17] + 0u;
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[19] + 0u;
    { int _c = (c->r[2] != 0u); c->r[18] = (u32)((s32)c->r[18] >> 1); if (_c) goto L_08a22d1c; }
L_08a22cc0:
    c->r[5] = c->r[17] + 0u;
    c->r[6] = c->r[17] + 0u;
    { int _c = (c->r[18] == 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a22cf8; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a22ce4; }
L_08a22cdc:
    { c->r[17] = c->r[2] + 0u; goto L_08a22ca8; }
L_08a22ce4:
    { c->r[31] = 0x08a22cecu; func_08a22a48(c, ram); }
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08a22cdc; }
L_08a22cf8:
    c->r[2] = c->r[19] + 0u;
L_08a22cfc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a22d1c:
    { c->r[31] = 0x08a22d24u; func_08a22a48(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a22d34u; c->r[4] = c->r[20] + 0u; func_08a22678(c, ram); }
    { c->r[19] = c->r[16] + 0u; goto L_08a22cc0; }
L_08a22d3c:
    { c->r[31] = 0x08a22d44u; c->r[5] = 0u + 0x00000271u; func_08a22a14(c, ram); }
    mem_w32(ram, c->r[20] + 0x00000048u, c->r[2]);
    c->r[17] = c->r[2] + 0u;
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08a22ca8; }
L_08a22d54:
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d48u;
    c->r[3] = c->r[3] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[3] + 0xfffffffcu);
    { c->r[31] = 0x08a22d70u; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    { c->r[19] = c->r[2] + 0u; goto L_08a22c90; }
    return; /* fell out of func_08a22c60 */
}
