#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08805f00  0x08805f00..0x08805f3c  60 bytes, source=sweep */
void func_08805f00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08805f00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08805f28u; c->r[6] = 0u + 0x00000001u; func_088067a4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08805f00 */
}

/* func_0880723c  0x0880723c..0x088072e8  172 bytes, source=sweep */
void func_0880723c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880723cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880729c; }
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
    { c->r[31] = 0x08807294u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_088073bc(c, ram); }
    { goto L_088072d4; }
L_0880729c:
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
    { c->r[31] = 0x088072d4u; c->r[8] = c->r[2] + 0u; func_088073bc(c, ram); }
L_088072d4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880723c */
}

/* func_0880819c  0x0880819c..0x088081bc  32 bytes, source=sweep */
void func_0880819c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880819cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880819c */
}

/* func_0880ab8c  0x0880ab8c..0x0880abac  32 bytes, source=indirect */
void func_0880ab8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ab8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ab8c */
}

/* func_0880d3dc  0x0880d3dc..0x0880d410  52 bytes, source=sweep */
void func_0880d3dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d3dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000149u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d3dc */
}

/* func_0880e538  0x0880e538..0x0880e5b0  120 bytes, source=fde */
void func_0880e538(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e538u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e578; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015a3u;
    { c->r[31] = 0x0880e570u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880e59c; }
L_0880e578:
    { c->r[31] = 0x0880e580u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e59c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0880e59cu; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0880e59c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880e538 */
}

/* func_088113f8  0x088113f8..0x0881143c  68 bytes, source=sweep */
void func_088113f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088113f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088113f8 */
}

/* func_088142a8  0x088142a8..0x0881456c  708 bytes, source=fde */
void func_088142a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088142a8u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08814558; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088142f4; }
    { goto L_08814558; }
L_088142f4:
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881436c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881432cu; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    { c->r[31] = 0x08814334u; c->r[4] = 0u + 0x0000000au; func_089691c4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08814344u; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08814350u; c->r[4] = c->r[4] + 0x00000af4u; func_088145dc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08814364u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08814558; }
L_0881436c:
    { c->r[31] = 0x08814374u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08967acc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814398; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08814398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088143ac; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088143ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088143c4; }
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088143c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088143dc; }
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088143dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088143f4; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088143f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881440c; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0881440c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814424; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08814424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08814494; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08814444u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[30] + 0x00000025u, c->r[2]);
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08814474u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0881448cu; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08814558; }
L_08814494:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088144bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088144bc; }
    { goto L_0881452c; }
L_088144bc:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x088144d0u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[30] + 0x00000025u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    { c->r[31] = 0x088144f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_0896933c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814504; }
    c->r[2] = 0u + 0x0000000au;
    mem_w8(ram, c->r[30] + 0x00000025u, c->r[2]);
L_08814504:
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x08814524u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08814558; }
L_0881452c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08814544u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000du;
    { c->r[31] = 0x08814558u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08814558:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088142a8 */
}

/* func_088194c4  0x088194c4..0x088195c4  256 bytes, source=sweep */
void func_088194c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088194c4u);
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
    return; /* fell out of func_088194c4 */
}

/* func_0881ced0  0x0881ced0..0x0881dc58  3464 bytes, source=fde */
void func_0881ced0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881ced0u);
    c->r[29] = c->r[29] + 0xfffffea0u;
    mem_w32(ram, c->r[29] + 0x00000158u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000154u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000150u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w8(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0881cf24; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0881cf24:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0881cf30u; c->r[4] = c->r[4] + 0xfffff5acu; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003e34u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0xfffff6e0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0881cf58u; c->r[6] = 0u + 0x00000108u; func_08a19db8(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0881cf7c; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881cf7c; }
    { goto L_0881cf88; }
L_0881cf7c:
    c->r[4] = 0u + 0x00000015u;
    { c->r[31] = 0x0881cf88u; c->r[5] = 0u + 0x00000003u; func_08932454(c, ram); }
L_0881cf88:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0881cf8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881dc3c; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881cfc8; }
    { goto L_0881dc3c; }
L_0881cfc8:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000025u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d020; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0x0000007eu;
    c->r[7] = 0u + 0x00000042u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881d018u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0881d204; }
L_0881d020:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000039u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d078; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0x00000143u;
    c->r[7] = 0u + 0x00000042u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881d070u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0881d204; }
L_0881d078:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000008eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d0c0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d0acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881d0b8u; c->r[5] = c->r[2] + 0u; func_088fcccc(c, ram); }
    { goto L_0881dc2c; }
L_0881d0c0:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d160; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d0f4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d10c; }
    { goto L_0881dc2c; }
L_0881d10c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881d144u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x0881d158u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    { goto L_0881d204; }
L_0881d160:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000002au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d1c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d1c8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000000c7u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881d1c0u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0881d204; }
L_0881d1c8:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881d200u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0881d204:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881dc00; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881dafc; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff7e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0881d248u: goto L_0881d248; case 0x0881d4b4u: goto L_0881d4b4; case 0x0881d694u: goto L_0881d694; case 0x0881d8f0u: goto L_0881d8f0; case 0x0881dafcu: goto L_0881dafc; case 0x0881dc00u: goto L_0881dc00; default: recomp_trap_unknown_indirect(c, ram, 0x0881d240u, _t); return; } }
L_0881d248:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0881d24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d264; }
    { goto L_0881d418; }
L_0881d264:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881d280u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x0881d29cu; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d2a8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d2c8; }
    { c->r[31] = 0x0881d2c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896dd64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]); goto L_0881d2ec; }
L_0881d2c8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d2dcu; c->r[6] = 0u + 0x00000002u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
L_0881d2ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d30c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d344; }
L_0881d30c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d324u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d33cu; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    { goto L_0881d408; }
L_0881d344:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d358u; c->r[6] = 0u + 0x00000001u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d3ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881d378u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d384u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d408; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d3a4u; c->r[5] = 0u + 0xffffffffu; func_0880d438(c, ram); }
    { goto L_0881d408; }
L_0881d3ac:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d3b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d3d8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d3d8u; c->r[5] = 0u + 0xffffffffu; func_0880d438(c, ram); }
L_0881d3d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d3f0u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d408u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881d408:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0881d24c; }
L_0881d418:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d424u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0881d44c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d438u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000029u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881d44c; }
    { goto L_0881dc00; }
L_0881d44c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881d480u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881d498u; c->r[5] = 0u + 0u; func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d4acu; c->r[5] = 0u + 0x0000000bu; func_0880d438(c, ram); }
    { goto L_0881dc00; }
L_0881d4b4:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0881d4b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d4d0; }
    { goto L_0881d62c; }
L_0881d4d0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881d4ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x0881d508u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d51cu; c->r[6] = 0u + 0x00000002u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d530; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d58c; }
L_0881d530:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d548u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d560u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d56cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d61c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]); goto L_0881d61c; }
L_0881d58c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d5a0u; c->r[6] = 0u + 0x00000001u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d5c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881d5c0u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881d5c0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d5ccu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d5ec; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d5ecu; c->r[5] = 0u + 0xffffffffu; func_0880d438(c, ram); }
L_0881d5ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d604u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d61cu; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881d61c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0881d4b8; }
L_0881d62c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d638u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881dc00; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881d67cu; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d68cu; c->r[5] = 0u + 0x0000000bu; func_0880d438(c, ram); }
    { goto L_0881dc00; }
L_0881d694:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d6a0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000170u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881d6fcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881456c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0881d700:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d718; }
    { goto L_0881dc00; }
L_0881d718:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881d734u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x0881d750u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d778; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881d778; }
    { goto L_0881d798; }
L_0881d778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881d790u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    { goto L_0881d8e0; }
L_0881d798:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d7acu; c->r[6] = 0u + 0x00000002u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881d874; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d7ccu; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d7e4u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d7f0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d81c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d808u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881d81c; }
    { goto L_0881d864; }
L_0881d81c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881d850u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0881456c(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d864u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
L_0881d864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0881d8e0; }
L_0881d874:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d888u; c->r[6] = 0u + 0x00000001u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d8b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881d8a8u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    { goto L_0881d8e0; }
L_0881d8b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d8c8u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d8e0u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881d8e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0881d700; }
L_0881d8f0:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0881d8f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d90c; }
    { goto L_0881da58; }
L_0881d90c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881d928u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x0881d944u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d958u; c->r[6] = 0u + 0x00000002u; func_08820e5c(c, ram); }
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d978; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881d9b0; }
L_0881d978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881d990u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881d9a8u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    { goto L_0881da48; }
L_0881d9b0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881d9bcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881d9dc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881d9dcu; c->r[5] = 0u + 0xffffffffu; func_0880d438(c, ram); }
L_0881d9dc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881d9f0u; c->r[6] = 0u + 0x00000001u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881da18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881da10u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    { goto L_0881da48; }
L_0881da18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881da30u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881da48u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881da48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0881d8f4; }
L_0881da58:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881da64u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881da90; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881da7cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881da90; }
    { goto L_0881dc00; }
L_0881da90:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881dac4u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881dadcu; c->r[5] = 0u + 0u; func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881daf4u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    { goto L_0881dc00; }
L_0881dafc:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0881db20; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881db20; }
    { goto L_0881dc00; }
L_0881db20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881db30u; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0881db38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881db50; }
    { goto L_0881dc00; }
L_0881db50:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881db5cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881db80u; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881dbc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881dba0u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881dbb8u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    { goto L_0881dbf0; }
L_0881dbc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0881dbd8u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0881dbf0u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881dbf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0881db38; }
L_0881dc00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881dc20u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0881dc2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0881cf8c; }
L_0881dc3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000158u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000154u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000150u);
    { c->r[29] = c->r[29] + 0x00000160u; return; }
    return; /* fell out of func_0881ced0 */
}

/* func_08820f58  0x08820f58..0x08820f7c  36 bytes, source=sweep */
void func_08820f58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820f58u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08820f58 */
}

/* func_08826b58  0x08826b58..0x08826b80  40 bytes, source=sweep */
void func_08826b58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826b58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b8eu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826b58 */
}

/* func_08828974  0x08828974..0x08828a14  160 bytes, source=fde */
void func_08828974(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08828974u);
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
    { c->r[31] = 0x088289b8u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9d14(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088289d8; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088289fc; }
L_088289d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003fu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088289f4; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088289fc; }
L_088289f4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088289fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08828974 */
}

/* func_0882c1ec  0x0882c1ec..0x0882c35c  368 bytes, source=fde */
void func_0882c1ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882c1ecu);
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
    c->r[5] = 0u + 0x00000042u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0882c230u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882c24cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882c344; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882c270u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00001f0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x0882c2a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_089034d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0882c2c8u, 0x7u); goto L_0882c2cc; }
L_0882c2cc:
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882c2e8; }
    c->r[2] = 0u + 0x00000064u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0882c2e8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004608u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000016f8u;
    { c->r[31] = 0x0882c300u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x0882c310u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00030000u;
    { c->r[31] = 0x0882c320u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00004608u;
    { c->r[31] = 0x0882c334u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x0882c344u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_0882c344:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0882c1ec */
}

/* func_088310d4  0x088310d4..0x08831230  348 bytes, source=fde */
void func_088310d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088310d4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w16(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[30] + 0x00000026u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08831168; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08831168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08831188; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08831188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[10] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000026u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = 0xff000000u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x088311d4u; c->r[11] = 0u + 0xffffffffu; func_08938f94(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[10] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000026u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = 0xff640000u;
    c->r[7] = c->r[7] | 0x3b1eu;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0883121cu; c->r[11] = 0u + 0xffffffffu; func_08938f94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088310d4 */
}

/* func_08832cc4  0x08832cc4..0x08832d58  148 bytes, source=fde */
void func_08832cc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832cc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002eb4u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08832d04u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08832d14u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08832d40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08832d40u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
L_08832d40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832cc4 */
}

/* func_08835088  0x08835088..0x08835128  160 bytes, source=fde */
void func_08835088(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835088u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
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
    { c->r[31] = 0x088350d4u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088350f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088350f0u; c->r[5] = 0u + 0x00000010u; func_08937a50(c, ram); }
L_088350f0:
    { c->r[31] = 0x088350f8u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08835114; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835114u; c->r[5] = 0u + 0x0000000eu; func_08937a50(c, ram); }
L_08835114:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08835088 */
}

/* func_08838cc0  0x08838cc0..0x08838d34  116 bytes, source=fde */
void func_08838cc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08838cc0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08838cf4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08838d20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08838d18u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
    { c->r[31] = 0x08838d20u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
L_08838d20:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08838cc0 */
}

/* func_0883bf44  0x0883bf44..0x0883c078  308 bytes, source=fde */
void func_0883bf44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883bf44u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c040; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883bf74u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = 0x7fee0000u;
    c->r[3] = c->r[3] | 0xfcdfu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c064; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001cf4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0883bfb4u: goto L_0883bfb4; case 0x0883bfd0u: goto L_0883bfd0; case 0x0883bfecu: goto L_0883bfec; case 0x0883c008u: goto L_0883c008; case 0x0883c024u: goto L_0883c024; case 0x0883c064u: goto L_0883c064; default: recomp_trap_unknown_indirect(c, ram, 0x0883bfacu, _t); return; } }
L_0883bfb4:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x00001595u;
    { c->r[31] = 0x0883bfc8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883c064; }
L_0883bfd0:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x000015b0u;
    { c->r[31] = 0x0883bfe4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883c064; }
L_0883bfec:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x000015b5u;
    { c->r[31] = 0x0883c000u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883c064; }
L_0883c008:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x000015a7u;
    { c->r[31] = 0x0883c01cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883c064; }
L_0883c024:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x000015a5u;
    { c->r[31] = 0x0883c038u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883c064; }
L_0883c040:
    { c->r[31] = 0x0883c048u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c064; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883c064u; c->r[5] = c->r[5] + 0xffffbd04u; func_0880f03c(c, ram); }
L_0883c064:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883bf44 */
}

/* func_088455a8  0x088455a8..0x08845724  380 bytes, source=sweep */
void func_088455a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088455a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000015u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000016u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088455d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088455e8; }
    { goto L_08845710; }
L_088455e8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088455ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845604; }
    { goto L_08845644; }
L_08845604:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08845624u; c->r[7] = 0u + 0x00000001u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845634; }
    { goto L_08845644; }
L_08845634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088455ec; }
L_08845644:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845674; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000015u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x00000015u, c->r[2]);
L_08845674:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08845678:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845690; }
    { goto L_088456d0; }
L_08845690:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088456b0u; c->r[7] = 0u + 0x00000002u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088456c0; }
    { goto L_088456d0; }
L_088456c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08845678; }
L_088456d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845700; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000016u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x00000016u, c->r[2]);
L_08845700:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088455d0; }
L_08845710:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088455a8 */
}

/* func_08847534  0x08847534..0x08847558  36 bytes, source=sweep */
void func_08847534(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08847534u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f10u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08847534 */
}

/* func_0884c6d4  0x0884c6d4..0x0884c73c  104 bytes, source=sweep */
void func_0884c6d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c6d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    vfpu_exec(c, ram, 0xd8640000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8650010u); /* lv.q */
    vfpu_exec(c, ram, 0xd8660020u); /* lv.q */
    vfpu_exec(c, ram, 0xd8670030u); /* lv.q */
    vfpu_exec(c, ram, 0xd8480000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8490010u); /* lv.q */
    vfpu_exec(c, ram, 0xd84a0020u); /* lv.q */
    vfpu_exec(c, ram, 0xd84b0030u); /* lv.q */
    vfpu_exec(c, ram, 0xf02884a0u); /* vmmul.q */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8810010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8820020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8830030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c6d4 */
}

/* func_0884dee8  0x0884dee8..0x0884dfd8  240 bytes, source=fde */
void func_0884dee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884dee8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884dfc4; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884dfc4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b30u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884df30u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8b3cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884df44u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8b3eu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884df58u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0884df64u; mem_w16(ram, c->r[1] + 0xffff8b40u, c->r[2]); func_0895b184(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e74u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x0884df80u; c->r[5] = mem_r32(ram, c->r[5] + 0xffff8c54u); func_0885a7fc(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8e4cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884df94u; c->r[6] = 0u + 0x00001000u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8e50u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884dfa8u; c->r[6] = 0u | 0x9808u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0884dfb0u; func_0884d640(c, ram); }
    { c->r[31] = 0x0884dfb8u; func_08850398(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884dfc4u; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a44c(c, ram); }
L_0884dfc4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884dee8 */
}

/* func_08854034  0x08854034..0x088540d4  160 bytes, source=residue */
void func_08854034(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854034u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885406c; }
    { goto L_088540c0; }
L_0885406c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0885408cu; c->f[12] = mem_rf32(ram, c->r[1] + 0xffff90b4u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088540a4u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000292cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
L_088540c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08854034 */
}

/* func_08858880  0x08858880..0x08858920  160 bytes, source=fde */
void func_08858880(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858880u);
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
    { c->r[31] = 0x088588c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9d14(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088588e4; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08858908; }
L_088588e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003fu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08858900; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08858908; }
L_08858900:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08858908:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08858880 */
}

/* func_0885a754  0x0885a754..0x0885a77c  40 bytes, source=sweep */
void func_0885a754(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a754u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a754 */
}

/* func_0885b398  0x0885b398..0x0885b4b0  280 bytes, source=fde */
void func_0885b398(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b398u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885b3ec; }
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
L_0885b3ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x000d0000u;
    c->r[2] = c->r[2] | 0x8000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x6800u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x8000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885b488; }
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
L_0885b488:
    { c->r[31] = 0x0885b490u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885b4b0(c, ram); }
    { c->r[31] = 0x0885b498u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885b700(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885b398 */
}

/* func_088612d4  0x088612d4..0x08861394  192 bytes, source=residue */
void func_088612d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088612d4u);
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
    return; /* fell out of func_088612d4 */
}

/* func_08862314  0x08862314..0x08862344  48 bytes, source=sweep */
void func_08862314(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862314u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08862330u; c->r[5] = 0u | 0xffffu; func_08860a74(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08862314 */
}

/* func_0886672c  0x0886672c..0x088669d0  676 bytes, source=fde */
void func_0886672c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886672cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886675c; }
    { goto L_088669b8; }
L_0886675c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08866774u; c->r[4] = c->r[2] + 0u; func_08866378(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d1u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088667fc; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba38u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088667a0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088669b8; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000005u;
    { c->r[31] = 0x088667c0u; c->r[5] = c->r[2] + 0u; func_088663bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088667ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088669b8; }
L_088667fc:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x02000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866830; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x08866828u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088662e0(c, ram); }
    { goto L_088669b8; }
L_08866830:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d1u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866990; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866850u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08866864; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08866864:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886687cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088668cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088668b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_088668cc; }
L_088668b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
L_088668cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088668ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_0886696c; }
L_088668ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866964; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08866920; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_0886696c; }
L_08866920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886696c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0886696c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_0886696c; }
L_08866964:
    { c->r[31] = 0x0886696cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088662e0(c, ram); }
L_0886696c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088669b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_088669b8; }
L_08866990:
    { c->r[31] = 0x08866998u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088662e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088669b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000018u, 0u);
L_088669b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0886672c */
}

/* func_0886df34  0x0886df34..0x0886e214  736 bytes, source=fde */
void func_0886df34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886df34u);
    c->r[29] = c->r[29] + 0xfffffab0u;
    mem_w32(ram, c->r[29] + 0x00000548u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000544u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000540u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[8] + 0u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000034a0u;
    { c->r[31] = 0x0886df84u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000034b0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0886dfa0u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000034c0u;
    { c->r[31] = 0x0886dfb8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000320u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000034d0u;
    { c->r[31] = 0x0886dfd0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000420u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000034dcu;
    { c->r[31] = 0x0886dfe8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[7] = c->r[30] + 0x00000220u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0886e014u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e0dc; }
    c->r[4] = 0u + 0x0000004cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886e03cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886e058u; c->r[9] = 0u + 0x00000001u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000520u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000520u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e088; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886e07cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000520u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000524u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000524u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0886e088:
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886e0a4u; c->r[9] = 0u + 0x00000002u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000520u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000520u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e1e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886e0ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000520u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000528u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000528u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_0886e1e4; }
L_0886e0dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000018u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0886e0f0u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000011u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0886e104u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886e11cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886e170; }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886e140u; c->r[9] = 0u + 0x00000001u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000520u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000520u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e170; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886e164u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000520u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000052cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000052cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0886e170:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886e18cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886e1e4; }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886e1b0u; c->r[9] = 0u + 0x00000002u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000520u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000520u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e1e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0886e1d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000520u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000530u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000530u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0886e1e4:
    c->r[2] = c->r[30] + 0x00000320u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886e1f4u; c->r[5] = c->r[2] + 0u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb9c4u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000548u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000544u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000540u);
    { c->r[29] = c->r[29] + 0x00000550u; return; }
    return; /* fell out of func_0886df34 */
}

/* func_08871e90  0x08871e90..0x0887211c  652 bytes, source=fde */
void func_08871e90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08871e90u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000fcu);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000d4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036c4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { c->r[31] = 0x08871f28u; c->r[4] = 0u + 0u; func_0887b998(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000134u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000fcu);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000d4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036c8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036ccu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08871f80; }
    { goto L_0887201c; }
L_08871f80:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036d0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08872030; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036d4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036d4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872004; }
    { goto L_08872030; }
L_08872004:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000036d8u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_08872030; }
L_0887201c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08872030:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036c8u);
    c->f[20] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0887204cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000040u); func_08a0f5bc(c, ram); }
    c->f[0] = c->f[20] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036dcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872078; }
    { goto L_08872088; }
L_08872078:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036dcu);
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088720b8; }
L_08872088:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036e0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088720ac; }
    { goto L_088720b8; }
L_088720ac:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036e0u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088720b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000068u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000138u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = mem_rf32(ram, c->r[3] + 0x0000006cu);
    { c->r[31] = 0x088720fcu; c->r[4] = 0u + 0u; func_0887b998(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000138u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08871e90 */
}

/* func_0887bf28  0x0887bf28..0x0887bf60  56 bytes, source=sweep */
void func_0887bf28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887bf28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x0887bf4cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887bf28 */
}

/* func_0887fed0  0x0887fed0..0x08880b84  3252 bytes, source=fde */
void func_0887fed0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887fed0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887ff14u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[16] + 0x000003e0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000141u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887ff3c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0887ff3c:
    mem_w8(ram, c->r[30] + 0x00000018u, 0u);
L_0887ff40:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887ff58; }
    { goto L_08880b6c; }
L_0887ff58:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0887ffb8; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08880b5c; }
L_0887ffb8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0887fff0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
L_0887fff0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000039fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08880020u: goto L_08880020; case 0x08880100u: goto L_08880100; case 0x088801e4u: goto L_088801e4; case 0x088802c8u: goto L_088802c8; case 0x088803a4u: goto L_088803a4; case 0x088804b0u: goto L_088804b0; case 0x088805c0u: goto L_088805c0; case 0x088806a4u: goto L_088806a4; case 0x08880790u: goto L_08880790; case 0x08880864u: goto L_08880864; case 0x08880958u: goto L_08880958; case 0x08880a2cu: goto L_08880a2c; default: recomp_trap_unknown_indirect(c, ram, 0x08880018u, _t); return; } }
L_08880020:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880084; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08880b44; }
L_08880084:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_08880100:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880168; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880168; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_08880168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_088801e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888024c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888024c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_0888024c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_088802c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888032c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888032c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_0888032c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_088803a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880438; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880438; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbe0u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888040c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbe0u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888040c; }
    { goto L_08880b44; }
L_0888040c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_08880438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_088804b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088804d8; }
    { goto L_08880528; }
L_088804d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880528; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_08880528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000039f4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888055c; }
    { goto L_08880b44; }
L_0888055c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_088805c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880628; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880628; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000006u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_08880628:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_088806a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880718; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_08880718:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_08880790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088807f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088807f0; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_088807f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_08880864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000013u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088808dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000013u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088808dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088808dc; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000009u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_088808dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000013u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_08880958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000013u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088809b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088809b8; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08880b44; }
L_088809b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000013u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08880b44; }
L_08880a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08880b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000039f8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08880a68; }
    { goto L_08880abc; }
L_08880a68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880abc; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x08880ab4u; c->r[4] = 0u + 0x000004dbu; func_089347dc(c, ram); }
    { goto L_08880b44; }
L_08880abc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000039f8u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08880ae4; }
    { goto L_08880b44; }
L_08880ae4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08880b44; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbec4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000005dcu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08880b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08880b5c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08880b5cu; c->r[5] = 0u + 0x00000004u; func_08934754(c, ram); }
L_08880b5c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0887ff40; }
L_08880b6c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887fed0 */
}

/* func_088833b8  0x088833b8..0x088833dc  36 bytes, source=residue */
void func_088833b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088833b8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe6bcu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088833b8 */
}

/* func_0888b810  0x0888b810..0x0888b858  72 bytes, source=sweep */
void func_0888b810(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b810u);
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
    { c->r[31] = 0x0888b844u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0888bcf8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b810 */
}

/* func_0888c460  0x0888c460..0x0888c4a4  68 bytes, source=sweep */
void func_0888c460(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c460u);
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
    { c->r[31] = 0x0888c490u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c460 */
}

/* func_0888d05c  0x0888d05c..0x0888d108  172 bytes, source=sweep */
void func_0888d05c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d05cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004160u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000080u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888d0ac; }
    c->r[2] = 0u + 0x0000007fu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0888d0c4; }
L_0888d0ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0xffffff80u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888d0c4; }
    c->r[2] = 0u + 0xffffff80u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0888d0c4:
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
    { c->r[31] = 0x0888d0f4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d05c */
}

/* func_0888eae4  0x0888eae4..0x0888f638  2900 bytes, source=fde */
void func_0888eae4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888eae4u);
    c->r[29] = c->r[29] + 0xfffffda0u;
    mem_w32(ram, c->r[29] + 0x0000025cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000258u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000254u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000250u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000098u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000a4u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0888eb1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888eb3c; }
    { goto L_0888ebb8; }
L_0888eb3c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000094u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888ebb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888ebb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888ebb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888ebb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0888eb1c; }
L_0888ebb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888ebd4; }
    { goto L_0888f61c; }
L_0888ebd4:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0888ebe0u; c->r[4] = c->r[4] + 0xffffb660u; func_0888d9b8(c, ram); }
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
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xcf000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0888ec40u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ec8cu; c->r[5] = mem_r32(ram, c->r[3] + 0x00000068u); func_0888b6b4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ecd8u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000070u); func_0888b6b4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000002b0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0888ed2cu; func_0888bdec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ed78u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000060u); func_0888bdb4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0888edd8u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0888ee38u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000000b0u;
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004068u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004068u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888ee74u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0888ee88u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000000c0u;
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000406cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004068u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888eee4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0888eef8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000000d0u;
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000406cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000406cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888ef54u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0888ef68u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000000e0u;
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004068u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000406cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888efc4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0888efd8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000001b0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888f020u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004070u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888f070u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000001d0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004070u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004070u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888f0c8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004070u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888f118u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000001b0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0x0000003fu;
    { c->r[31] = 0x0888f164u; c->r[8] = 0u + 0x00000001u; func_089c42dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f5d0; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0888f180:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f198; }
    { goto L_0888f5d0; }
L_0888f198:
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0888f1f0; }
L_0888f1c0:
    { c->r[31] = 0x0888f1c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000134u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888f1c0; }
L_0888f1f0:
    c->r[2] = c->r[30] + 0x00000140u;
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0888f248; }
L_0888f218:
    { c->r[31] = 0x0888f220u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000134u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888f218; }
L_0888f248:
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[2] = c->r[2] << 4;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0888f26cu; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[4] = c->r[30] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x000001b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[2] = c->r[2] << 4;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0888f290u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[30] + 0x00000140u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000000a4u);
    c->r[7] = 0u + 0x00000030u;
    { c->r[31] = 0x0888f2b8u; c->r[8] = c->r[2] + 0u; func_089c42dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888f2d4; }
    { goto L_0888f5c0; }
L_0888f2d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000134u);
    { c->r[31] = 0x0888f2f8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004060u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004064u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000240u, 0u);
L_0888f318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f334; }
    { goto L_0888f3fc; }
L_0888f334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000140u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888f364; }
    { goto L_0888f370; }
L_0888f364:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    { mem_wf32(ram, c->r[30] + 0x00000248u, c->f[0]); goto L_0888f388; }
L_0888f370:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000140u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000248u, c->f[0]);
L_0888f388:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000248u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000140u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888f3c0; }
    { goto L_0888f3cc; }
L_0888f3c0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { mem_wf32(ram, c->r[30] + 0x0000024cu, c->f[0]); goto L_0888f3e4; }
L_0888f3cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000140u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x0000024cu, c->f[0]);
L_0888f3e4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000024cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]); goto L_0888f318; }
L_0888f3fc:
    { c->r[31] = 0x0888f404u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_08a0f684(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    { c->r[31] = 0x0888f410u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f684(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000240u, 0u);
L_0888f418:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f434; }
    { goto L_0888f558; }
L_0888f434:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000140u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000140u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]); goto L_0888f418; }
L_0888f558:
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]);
    c->r[2] = 0u + 0x00000183u;
    mem_w32(ram, c->r[30] + 0x00000244u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0u + 0x00000183u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0888f5c0u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000130u); func_0888bd5c(c, ram); }
L_0888f5c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0888f180; }
L_0888f5d0:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888f61cu; c->r[5] = mem_r32(ram, c->r[3] + 0x0000006cu); func_0888b6b4(c, ram); }
L_0888f61c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000025cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000258u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000254u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000250u);
    { c->r[29] = c->r[29] + 0x00000260u; return; }
    return; /* fell out of func_0888eae4 */
}

/* func_08893a20  0x08893a20..0x08893a80  96 bytes, source=sweep */
void func_08893a20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08893a20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08893a20 */
}

/* func_0889967c  0x0889967c..0x088998c8  588 bytes, source=fde */
void func_0889967c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889967cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    { c->r[31] = 0x088996a0u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088996c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088996f0; }
    { goto L_088998b4; }
L_088996f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    { c->r[31] = 0x0889971cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08899738u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0889973c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000feu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889975c; }
    { goto L_088998a4; }
L_0889975c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000007cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08899784u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889979c; }
    { goto L_08899894; }
L_0889979c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08899894; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088997dcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000424cu);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0889986cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08899894:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0889973c; }
L_088998a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088996c0; }
L_088998b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0889967c */
}

/* func_0889a654  0x0889a654..0x0889a6c4  112 bytes, source=sweep */
void func_0889a654(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a654u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889a688; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0889a690; }
L_0889a688:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0889a690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x0889a6b0u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_0889a6c4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a654 */
}

/* func_0889f00c  0x0889f00c..0x0889f050  68 bytes, source=sweep */
void func_0889f00c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f00cu);
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
    { c->r[31] = 0x0889f03cu; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f00c */
}

/* func_0889fe8c  0x0889fe8c..0x0889ff5c  208 bytes, source=sweep */
void func_0889fe8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fe8cu);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889ff44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0889ff04u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_088a01b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889ff44; }
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
L_0889ff44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889fe8c */
}

/* func_088a41a8  0x088a41a8..0x088a41ec  68 bytes, source=sweep */
void func_088a41a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a41a8u);
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
    { c->r[31] = 0x088a41d8u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a41a8 */
}

/* func_088adad0  0x088adad0..0x088adb14  68 bytes, source=sweep */
void func_088adad0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adad0u);
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
    { c->r[31] = 0x088adb00u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adad0 */
}

/* func_088b1664  0x088b1664..0x088b1e5c  2040 bytes, source=fde */
void func_088b1664(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b1664u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf20u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088b168c; }
    { goto L_088b1e48; }
L_088b168c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047f0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b16a4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b16f0u; c->r[5] = c->r[5] | 0x011eu; func_088b1ee0(c, ram); }
    { c->r[31] = 0x088b16f8u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b170cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088b1720u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1768u; c->r[5] = 0u + 0u; func_088b1f24(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = 0u + 0x00000090u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 5;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b178cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088b179c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b17b4; }
    { goto L_088b18a8; }
L_088b17b4:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088b17b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b17d0; }
    { goto L_088b1898; }
L_088b17d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 5;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 5;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000a9u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000cau;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + 0x00000007u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + 0x00000007u;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000000b0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000000d1u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088b17b8; }
L_088b1898:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b179c; }
L_088b18a8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088b1904u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088b1960u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088b1964:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b1980; }
    { goto L_088b19dc; }
L_088b1980:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b19ccu; c->r[5] = c->r[5] | 0x0002u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b1964; }
L_088b19dc:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088b19e8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047f4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b1a00u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x088b1a14u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088b1a28u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1a74u; c->r[5] = c->r[5] | 0x011eu; func_088b1ee0(c, ram); }
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x088b1a80u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x33b80000u;
    c->r[2] = c->r[2] | 0xae64u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x0000000au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x33b80000u;
    c->r[2] = c->r[2] | 0xae64u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000116u;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088b1b5cu; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088b1bb8u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1c04u; c->r[5] = c->r[5] | 0x0002u; func_088b1ee0(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088b1c10u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000047f8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088b1c28u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1c74u; c->r[5] = c->r[5] | 0x011eu; func_088b1ee0(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088b1c80u; c->r[4] = c->r[4] + 0x000047e0u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b1c94u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088b1ca8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x088b1cb4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x0000000au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000000c4u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000116u;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000003fu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000000ffu;
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
    { c->r[31] = 0x088b1d94u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088b1df0u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088b1e3cu; c->r[5] = c->r[5] | 0x0002u; func_088b1ee0(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088b1e48u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088b1e48:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088b1664 */
}

/* func_088b2c30  0x088b2c30..0x088b2c74  68 bytes, source=sweep */
void func_088b2c30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2c30u);
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
    { c->r[31] = 0x088b2c60u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2c30 */
}

/* func_088b94f4  0x088b94f4..0x088b9bd0  1756 bytes, source=fde */
void func_088b94f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b94f4u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088b952cu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000084u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    { c->r[31] = 0x088b9578u; mem_w32(ram, c->r[30] + 0x00000048u, 0u); func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9590; }
    { c->r[31] = 0x088b9588u; func_08854c28(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_088b95a0; }
L_088b9590:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088b959cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
L_088b95a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x0000001cu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a54u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9638; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a58u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9638; }
    { goto L_088b9644; }
L_088b9638:
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088b96b0; }
L_088b9644:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b966c; }
    { goto L_088b9674; }
L_088b966c:
    { mem_w32(ram, c->r[30] + 0x0000002cu, 0u); goto L_088b96b0; }
L_088b9674:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b969c; }
    { goto L_088b96a8; }
L_088b969c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088b96b0; }
L_088b96a8:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088b96b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b9940; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b96f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9708; }
    { goto L_088b9bb8; }
L_088b96f0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b9b90; }
    { goto L_088b9bb8; }
L_088b9708:
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b973c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b9738u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b973c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b9774; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a40u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b9bb8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a40u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b9bb8; }
L_088b9774:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9794; }
    { goto L_088b9810; }
L_088b9794:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b97b8; }
    { goto L_088b9810; }
L_088b97b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a5cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b97e0; }
    { goto L_088b9810; }
L_088b97e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000080u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9808; }
    { goto L_088b9810; }
L_088b9808:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088b9810:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9bb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9930; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000005cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088b98bc; }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
L_088b98bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a60u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b98e0; }
    { goto L_088b9920; }
L_088b98e0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[3] + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x088b991cu; c->r[10] = 0u + 0xffffffffu; func_089f65a8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b9920:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088b9bb8; }
L_088b9930:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088b9bb8; }
L_088b9940:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b9960u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b9974u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f762c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b99b4; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x088b99acu; c->r[8] = c->r[3] + 0u; func_089f6b84(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088b99d0; }
L_088b99b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088b9bb8; }
L_088b99d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b99f0; }
    { goto L_088b9bb8; }
L_088b99f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9a14; }
    { goto L_088b9bb8; }
L_088b9a14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a5cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9a3c; }
    { goto L_088b9bb8; }
L_088b9a3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9b80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000054u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088b9adc; }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
L_088b9adc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b9b0c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b9b08u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b9b0c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a60u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9b30; }
    { goto L_088b9b70; }
L_088b9b30:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000005cu);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[3] + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x088b9b6cu; c->r[10] = 0u + 0xffffffffu; func_089f65a8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b9b70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088b9bb8; }
L_088b9b80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088b9bb8; }
L_088b9b90:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9bb0; }
    { goto L_088b9bb8; }
L_088b9bb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_088b9bb8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_088b94f4 */
}

/* func_088be6c4  0x088be6c4..0x088be794  208 bytes, source=sweep */
void func_088be6c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be6c4u);
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
    return; /* fell out of func_088be6c4 */
}

/* func_088bf340  0x088bf340..0x088bf3d0  144 bytes, source=sweep */
void func_088bf340(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf340u);
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
    { c->r[31] = 0x088bf380u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xb1000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf3a4u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xc4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf3bcu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf340 */
}

/* func_088c2460  0x088c2460..0x088c2498  56 bytes, source=sweep */
void func_088c2460(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2460u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x088c2484u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c2460 */
}

/* func_088c87fc  0x088c87fc..0x088c8834  56 bytes, source=sweep */
void func_088c87fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c87fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8820u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c8af0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c87fc */
}

/* func_088c9618  0x088c9618..0x088c964c  52 bytes, source=sweep */
void func_088c9618(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c9618u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffcba4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c9618 */
}

/* func_088d13a0  0x088d13a0..0x088d14f0  336 bytes, source=fde */
void func_088d13a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d13a0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d13d4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d14d8; }
L_088d13d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d13f4; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088d14d8; }
L_088d13f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d14d0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d1410u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c0414(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d14d0; }
    { c->r[31] = 0x088d142cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1468; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1460; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088d1468; }
L_088d1460:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d1468:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d1484u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d14d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d14d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088d14d0u; c->r[7] = c->r[2] + 0u; func_088c099c(c, ram); }
L_088d14d0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088d14d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d13a0 */
}

/* func_088d41e0  0x088d41e0..0x088d4264  132 bytes, source=fde */
void func_088d41e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d41e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[20] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000058a4u);
    { c->r[31] = 0x088d4220u; c->f[12] = c->f[0]; func_08940870(c, ram); }
    alx_c_cond_s(c, 12, c->f[0], c->f[20]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d4238; }
    { goto L_088d4244; }
L_088d4238:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d4248; }
L_088d4244:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088d4248:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d41e0 */
}

/* func_088d9878  0x088d9878..0x088d98a8  48 bytes, source=sweep */
void func_088d9878(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d9878u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000009bu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000009cu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d9878 */
}

/* func_088de480  0x088de480..0x088de570  240 bytes, source=sweep */
void func_088de480(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de480u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de520; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b70u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088de4dcu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088de4fcu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088de554; }
L_088de520:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_088de554:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088de480 */
}

/* func_088df414  0x088df414..0x088df45c  72 bytes, source=sweep */
void func_088df414(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df414u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df438; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df448; }
L_088df438:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088df448:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df414 */
}

/* func_088e4cdc  0x088e4cdc..0x088e5290  1460 bytes, source=fde */
void func_088e4cdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e4cdcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e4fd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4d48; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e4ef8; }
    { goto L_088e5278; }
L_088e4d48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d04u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d08u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d08u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
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
    { c->r[31] = 0x088e4e14u; func_0880d140(c, ram); }
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
    { c->r[31] = 0x088e4e44u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000028u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d0cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[5] + 0x0000003cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e4e7cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d10u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5278; }
L_088e4ef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d14u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d0cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e4f34; }
    { goto L_088e4f40; }
L_088e4f34:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d0cu);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_088e4f40:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d18u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e4f64; }
    { goto L_088e4f70; }
L_088e4f64:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d18u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_088e4f70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000044u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e5278; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000034u, 0u); goto L_088e5278; }
L_088e4fd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e51dc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e5014; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e502c; }
    { goto L_088e5278; }
L_088e5014:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e5234; }
    { goto L_088e5278; }
L_088e502c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d04u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d08u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d08u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
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
    { c->r[31] = 0x088e50f8u; func_0880d140(c, ram); }
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
    { c->r[31] = 0x088e5128u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000028u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d0cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[5] + 0x0000003cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e5160u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d10u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5278; }
L_088e51dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e5200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088e5200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5224; }
    { goto L_088e5278; }
L_088e5224:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5278; }
L_088e5234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d1cu);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e5278; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e5278:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e4cdc */
}

/* func_088ea3e8  0x088ea3e8..0x088ea628  576 bytes, source=fde */
void func_088ea3e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ea3e8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ea470; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea448; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea460; }
    { goto L_088ea614; }
L_088ea448:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ea4d0; }
    { goto L_088ea614; }
L_088ea460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a0u, c->r[3]);
L_088ea470:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[3] + 0x000000b0u, c->f[0]); goto L_088ea614; }
L_088ea4d0:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ea4dcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ea4fcu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ea508u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ea530; }
    { goto L_088ea548; }
L_088ea530:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ea540u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e9658(c, ram); }
    { goto L_088ea560; }
L_088ea548:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ea560u; c->r[6] = c->r[2] + 0u; func_088d6f10(c, ram); }
L_088ea560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ea594; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ea5cc; }
    { goto L_088ea614; }
L_088ea594:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088ea614; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ea5c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    { goto L_088ea614; }
L_088ea5cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088ea5f0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_088d3a1c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea614; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ea614u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088ea614:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ea3e8 */
}

/* func_088efa68  0x088efa68..0x088efd20  696 bytes, source=fde */
void func_088efa68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088efa68u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088efa94u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088efaa0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x088efaacu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efad0; }
    { goto L_088efb10; }
L_088efad0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efaf4; }
    { goto L_088efb10; }
L_088efaf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efd08; }
L_088efb10:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x088efb34u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000008u); func_0885a0b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088efb4cu; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088efb64u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efb94; }
    { goto L_088efba0; }
L_088efb94:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a4u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
L_088efba0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efbc4; }
    { goto L_088efbd0; }
L_088efbc4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a8u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
L_088efbd0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088efbdcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d0u); func_08a0fb24(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x088efbf0u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088efc10u; c->f[12] = c->f[0]; func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088efc28u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088efc44u; c->f[12] = c->f[0]; func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088efc5cu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efc88; }
    { goto L_088efc94; }
L_088efc88:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a4u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
L_088efc94:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efcb8; }
    { goto L_088efcc4; }
L_088efcb8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060a8u);
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
L_088efcc4:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088efcd0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d0u); func_08a0fa04(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efcf4; }
    { goto L_088efd08; }
L_088efcf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_088efd08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_088efa68 */
}

/* func_088f4f4c  0x088f4f4c..0x088f4f98  76 bytes, source=sweep */
void func_088f4f4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4f4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x088f4f68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088f4f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f4f4c */
}

/* func_088fa180  0x088fa180..0x088fa43c  700 bytes, source=fde */
void func_088fa180(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fa180u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088fa1b0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088fa1c0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fa238; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000012u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fa208; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
L_088fa208:
    { c->r[31] = 0x088fa210u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088fa230u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_088fa424; }
L_088fa238:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088fa250u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088fa260u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fa2d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088fa2a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000011u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_088fa2a8:
    { c->r[31] = 0x088fa2b0u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088fa2d0u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_088fa424; }
L_088fa2d8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088fa2f0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088fa300u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fa384; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000012u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fa354; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0xffffffeeu;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_088fa354:
    { c->r[31] = 0x088fa35cu; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088fa37cu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_088fa424; }
L_088fa384:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088fa39cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088fa3acu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fa424; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088fa3fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000012u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_088fa3fc:
    { c->r[31] = 0x088fa404u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088fa424u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_088fa424:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088fa180 */
}

/* func_08900940  0x08900940..0x089009c0  128 bytes, source=sweep */
void func_08900940(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900940u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08900984; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08900984; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08900984u; c->r[4] = c->r[4] + 0xfffff498u; func_088112e8(c, ram); }
L_08900984:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089009ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089009ac; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x089009acu; c->r[4] = c->r[4] + 0xfffff498u; func_08811320(c, ram); }
L_089009ac:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08900940 */
}

/* func_089032a0  0x089032a0..0x089032d8  56 bytes, source=sweep */
void func_089032a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089032a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089032c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089032d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089032a0 */
}

/* func_08906904  0x08906904..0x08906d9c  1176 bytes, source=sweep */
void func_08906904(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08906904u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08906938; }
    { goto L_08906d88; }
L_08906938:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0890694cu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089069a8; }
    { goto L_089069bc; }
L_089069a8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006680u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_089069bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006684u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006688u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x089069f0u; c->r[5] = 0u + 0x00000008u; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089069f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08906a14; }
    { goto L_08906d88; }
L_08906a14:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08906a28u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08906a38:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08906a6c; }
    { goto L_08906a7c; }
L_08906a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffff00u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08906a38; }
L_08906a7c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08906d78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08906ac4; }
    c->r[2] = 0u + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_08906acc; }
L_08906ac4:
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08906acc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[30] + 0x0000003au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08906b68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08906ba4; }
L_08906b68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08906ba4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000003au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000003au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_08906ba4:
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08906bb0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000038u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003au);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08906cd0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08906d2cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08906d78u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_08906d78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089069f8; }
L_08906d88:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08906904 */
}

/* func_0890fb98  0x0890fb98..0x0890fd24  396 bytes, source=sweep */
void func_0890fb98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890fb98u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006888u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006888u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890fc48; }
    { goto L_0890fc54; }
L_0890fc48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_0890fc9c; }
L_0890fc54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890fc84; }
    { goto L_0890fc9c; }
L_0890fc84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_0890fc9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890fcc0; }
    { goto L_0890fccc; }
L_0890fcc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_0890fd14; }
L_0890fccc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890fcfc; }
    { goto L_0890fd14; }
L_0890fcfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_0890fd14:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0890fb98 */
}

/* func_0891ce94  0x0891ce94..0x0891cfec  344 bytes, source=fde */
void func_0891ce94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891ce94u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891cec0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891ced8; }
    { goto L_0891cfd4; }
L_0891ced8:
    { c->r[31] = 0x0891cee0u; func_0896db64(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0891cee8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891cf04; }
    { goto L_0891cfcc; }
L_0891cf04:
    { c->r[31] = 0x0891cf0cu; func_0896db94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0891cf34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0891cf2cu; c->r[6] = 0u + 0u; func_0891c43c(c, ram); }
    { goto L_0891cfbc; }
L_0891cf34:
    { c->r[31] = 0x0891cf3cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891cf68; }
    { c->r[31] = 0x0891cf50u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x0891cf58u; c->r[16] = c->r[2] + 0u; func_0896dc4c(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_0891cf68; }
    { goto L_0891cf90; }
L_0891cf68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0891cf80u; c->r[6] = c->r[2] + 0u; func_0891c43c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0891cfbc; }
L_0891cf90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0891cfb0u; c->r[6] = c->r[2] + 0u; func_0891c43c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0891cfbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0891cee8; }
L_0891cfcc:
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbbd0u, 0u);
L_0891cfd4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0891ce94 */
}

/* func_089212dc  0x089212dc..0x08921320  68 bytes, source=sweep */
void func_089212dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089212dcu);
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
    { c->r[31] = 0x0892130cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089212dc */
}

/* func_08922080  0x08922080..0x08922114  148 bytes, source=sweep */
void func_08922080(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08922080u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089220e0; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007bacu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00007bacu, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00007bacu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089220d4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08922100; }
L_089220d4:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08922100; }
L_089220e0:
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00007bacu, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08922100:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08922080 */
}

/* func_08925510  0x08925510..0x08925598  136 bytes, source=sweep */
void func_08925510(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925510u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff9ecu, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff9eeu, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff9e8u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff9eau, 0u);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08925540:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08925558; }
    { goto L_08925580; }
L_08925558:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff9ccu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08925540; }
L_08925580:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9e4u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925510 */
}

/* func_089264a0  0x089264a0..0x08926550  176 bytes, source=sweep */
void func_089264a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089264a0u);
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
    { c->r[31] = 0x089264e8u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892650cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08926518u; c->r[5] = 0x15000000u; func_089258bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892653cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089264a0 */
}

/* func_0892a044  0x0892a044..0x0892a504  1216 bytes, source=fde */
void func_0892a044(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892a044u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[9]);
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
    { c->r[31] = 0x0892a0c8u; c->r[5] = c->r[5] | 0x0102u; func_0893365c(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892a0ec; }
    c->r[2] = 0xaa7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0892a0ec:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0892a0fcu; c->r[5] = c->r[2] + 0u; func_08933804(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0892a144u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089336a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0892a158u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x0892a160u; c->r[4] = 0u + 0x00000050u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892a174u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x0000003cu;
    { c->r[31] = 0x0892a180u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892a1b4; }
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0892a1b4:
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a60000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff8000u);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892a1e4; }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_0892a1e4:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0892a1e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892a200; }
    { goto L_0892a3c0; }
L_0892a200:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892a21c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0892a240; }
L_0892a21c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0892a240:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007f6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0892a1e8; }
L_0892a3c0:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892a41cu; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892a478u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_0892a47c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892a494; }
    { goto L_0892a4f0; }
L_0892a494:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0892a4e0u; c->r[5] = c->r[5] | 0x0002u; func_0893365c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0892a47c; }
L_0892a4f0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0892a044 */
}

/* func_08930208  0x08930208..0x0893029c  148 bytes, source=sweep */
void func_08930208(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930208u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893028c; }
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
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
L_0893028c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08930208 */
}

/* func_08932f40  0x08932f40..0x08932fb4  116 bytes, source=sweep */
void func_08932f40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932f40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932f88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]);
L_08932f88:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932fa4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000022u, c->r[2]);
L_08932fa4:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932f40 */
}

/* func_08935750  0x08935750..0x08935944  500 bytes, source=fde */
void func_08935750(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935750u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893578c; }
    { goto L_08935930; }
L_0893578c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08935798u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089358a8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000384u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089357bc; }
    { goto L_08935930; }
L_089357bc:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089357ec; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000496cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000384u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089357ec; }
    { goto L_08935930; }
L_089357ec:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935808; }
    { goto L_08935930; }
L_08935808:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935838; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935838; }
    { goto L_08935930; }
L_08935838:
    { c->r[31] = 0x08935840u; func_08966c64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089358a8; }
    { c->r[31] = 0x08935850u; func_0883a25c(c, ram); }
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
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089358a8; }
    { goto L_08935930; }
L_089358a8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935900; }
    { c->r[31] = 0x089358c0u; func_089344c4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935930; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x089358f8u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
    { goto L_08935930; }
L_08935900:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x08935930u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
L_08935930:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08935750 */
}

/* func_0893b488  0x0893b488..0x0893b704  636 bytes, source=fde */
void func_0893b488(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893b488u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b4b8u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b4c8u; c->r[5] = 0u + 0u; func_089dfeb4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0893b514u; c->r[5] = c->r[5] | 0x0102u; func_0893bf80(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893b528u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0893b544u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
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
    { c->r[31] = 0x0893b590u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0893c01c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893b5e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000748cu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = 0u + 0x0000003cu;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0893b5dcu; c->r[9] = 0u + 0x00000001u; func_08923508(c, ram); }
    { goto L_0893b620; }
L_0893b5e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000748cu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = 0u + 0x00000037u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0893b620u; c->r[9] = 0u + 0x00000001u; func_08923508(c, ram); }
L_0893b620:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893b63c; }
    c->r[2] = 0u + 0x00000038u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893b63c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893b654; }
    c->r[2] = 0u + 0x00000039u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893b654:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893b66c; }
    c->r[2] = 0u + 0x0000003au;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893b66c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893b684; }
    c->r[2] = 0u + 0x0000003bu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893b684:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893b6d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000748cu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0893b6d0u; c->r[9] = 0u + 0x00000001u; func_08923508(c, ram); }
L_0893b6d0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b6e0u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b6f0u; c->r[5] = 0u + 0x00000001u; func_089dfeb4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893b488 */
}

/* func_0893ca90  0x0893ca90..0x0893cb00  112 bytes, source=sweep */
void func_0893ca90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893ca90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893cac4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0893cacc; }
L_0893cac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0893cacc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x0893caecu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_0893cb00(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893ca90 */
}

/* func_0893df00  0x0893df00..0x0893dfb0  176 bytes, source=sweep */
void func_0893df00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893df00u);
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
    { c->r[31] = 0x0893df48u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893df6cu; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893df78u; c->r[5] = 0x15000000u; func_0893d560(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893df9cu; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893df00 */
}

/* func_089403d0  0x089403d0..0x08940414  68 bytes, source=sweep */
void func_089403d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089403d0u);
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
    { c->r[31] = 0x08940400u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089403d0 */
}

/* func_089458a0  0x089458a0..0x089458dc  60 bytes, source=sweep */
void func_089458a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089458a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089458c8u; c->r[6] = 0u + 0x00000001u; func_08945e18(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089458a0 */
}

/* func_08946648  0x08946648..0x089466f8  176 bytes, source=sweep */
void func_08946648(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08946648u);
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
    { c->r[31] = 0x08946690u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089466b4u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089466c0u; c->r[5] = 0x15000000u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089466e4u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08946648 */
}

/* func_0894c1bc  0x0894c1bc..0x0894c200  68 bytes, source=sweep */
void func_0894c1bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c1bcu);
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
    { c->r[31] = 0x0894c1ecu; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c1bc */
}

/* func_08953404  0x08953404..0x08953448  68 bytes, source=sweep */
void func_08953404(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08953404u);
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
    return; /* fell out of func_08953404 */
}

/* func_08955794  0x08955794..0x089557d8  68 bytes, source=sweep */
void func_08955794(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955794u);
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
    { c->r[31] = 0x089557c4u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955794 */
}

/* func_0895854c  0x0895854c..0x08958590  68 bytes, source=sweep */
void func_0895854c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895854cu);
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
    { c->r[31] = 0x0895857cu; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895854c */
}

/* func_0895b110  0x0895b110..0x0895b15c  76 bytes, source=sweep */
void func_0895b110(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b110u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0895b140; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_0895b148; }
L_0895b140:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895b148:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b110 */
}

/* func_0895dea0  0x0895dea0..0x0895e390  1264 bytes, source=sweep */
void func_0895dea0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895dea0u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00800000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e260; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00400000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e260; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x0000000eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895df10; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0895df10:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895df2c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0895df2c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895df48; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0895df48:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895df64; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0895df64:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895df90; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895df90; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0895df90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0895e260; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049d2u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049d2u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8914u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049d2u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e260; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8918u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895e028; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895e028; }
    { goto L_0895e05c; }
L_0895e028:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    { c->r[31] = 0x0895e038u; c->r[4] = c->r[2] + 0u; func_0895b1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_0895e05c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895e084; }
    { goto L_0895e23c; }
L_0895e084:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895e1dc; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81f4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff81f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895e0d0u; func_0880d140(c, ram); }
    c->r[16] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81fcu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0895e0f4u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[17] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8200u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8200u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895e128u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x0895e13cu; c->r[6] = c->r[2] + 0u; func_08859f30(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895e184u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0895e1b0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8204u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895e1d8; }
    { goto L_0895e1dc; }
L_0895e1d8:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0895e1dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e23c; }
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8914u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x000000b0u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[5] + 0x000000b0u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0895e23c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
L_0895e23c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0xffbf0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049d2u, 0u);
L_0895e260:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x0000000eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895e36c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e2a4; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895e2bc; }
    { goto L_0895e36c; }
L_0895e2a4:
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895e2bc; }
    { goto L_0895e36c; }
L_0895e2bc:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895e2ec; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895e2ec; }
    { goto L_0895e36c; }
L_0895e2ec:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    { c->r[31] = 0x0895e2fcu; c->r[4] = c->r[2] + 0u; func_0895b1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e36c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e36c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
L_0895e36c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000044u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000007cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0895dea0 */
}

/* func_08960fbc  0x08960fbc..0x08961050  148 bytes, source=fde */
void func_08960fbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960fbcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08960fe4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08960ff4; }
    { goto L_0896103c; }
L_08960ff4:
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
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x000000d4u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x000000d4u, c->r[2]);
L_0896103c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08960fbc */
}

/* func_08963b38  0x08963b38..0x08963da0  616 bytes, source=fde */
void func_08963b38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08963b38u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08963b70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963b8c; }
    { goto L_08963d8c; }
L_08963b8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08963bb8u; c->r[5] = c->r[2] + 0u; func_08961ee8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963bc8; }
    { goto L_08963d7c; }
L_08963bc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x08963c18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963c28; }
    { goto L_08963d7c; }
L_08963c28:
    { c->r[31] = 0x08963c30u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963c40; }
    { goto L_08963d7c; }
L_08963c40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963d7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963d10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963d10; }
    { goto L_08963d7c; }
L_08963d10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    { c->r[31] = 0x08963d58u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_08963d7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08963b70; }
L_08963d8c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08963b38 */
}

/* func_08966c64  0x08966c64..0x08966cbc  88 bytes, source=sweep */
void func_08966c64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08966c64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005200u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08966c88; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08966ca8; }
L_08966c88:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052e8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08966ca0; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08966ca8; }
L_08966ca0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08966ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08966c64 */
}

/* func_0896948c  0x0896948c..0x0896955c  208 bytes, source=sweep */
void func_0896948c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896948cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089694acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089694e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08969510; }
L_089694e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969510; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08969510:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969544; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049c0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x08969534u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0896933c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08969544; }
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08969544:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896948c */
}

/* func_0896a2a8  0x0896a2a8..0x0896a2e0  56 bytes, source=sweep */
void func_0896a2a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a2a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9d9cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a2a8 */
}

/* func_0896cc50  0x0896cc50..0x0896ccf0  160 bytes, source=fde */
void func_0896cc50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896cc50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[8]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x000008c0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x000008c2u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    mem_w8(ram, c->r[3] + 0x000008c3u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ccdc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ccdc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000008c8u;
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000006u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ccdcu; c->r[6] = c->r[3] + 0u; func_08a19db8(c, ram); }
L_0896ccdc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896cc50 */
}

/* func_0896e3dc  0x0896e3dc..0x0896e40c  48 bytes, source=sweep */
void func_0896e3dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e3dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000057u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000056u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e3dc */
}

/* func_0896f350  0x0896f350..0x0896f3dc  140 bytes, source=sweep */
void func_0896f350(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f350u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006880u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000063u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f3cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006880u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006880u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000686au);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x0000686au, c->r[2]);
L_0896f3cc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f350 */
}

/* func_08970efc  0x08970efc..0x08970f6c  112 bytes, source=fde */
void func_08970efc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08970efcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08970f1cu; mem_w32(ram, c->r[30] + 0x00000004u, 0u); func_089795a0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08970f48; }
    { c->r[31] = 0x08970f2cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896f9c0(c, ram); }
    { c->r[31] = 0x08970f34u; c->r[16] = c->r[2] + 0u; func_089795a0(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970f48; }
    { goto L_08970f50; }
L_08970f48:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08970f50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08970efc */
}

/* func_089746b0  0x089746b0..0x08974a10  864 bytes, source=sweep */
void func_089746b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089746b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089746cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089746e4; }
    { goto L_08974a00; }
L_089746e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f14u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f14u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xff8c0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089747b8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f10u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0897486c; }
L_089747b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897481c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f10u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0897486c; }
L_0897481c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f10u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0897486c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089748bc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f18u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089749f0; }
L_089748bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974920; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f18u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089749f0; }
L_08974920:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f14u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f14u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f18u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089749f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089746cc; }
L_08974a00:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089746b0 */
}

/* func_08976230  0x08976230..0x08976260  48 bytes, source=residue */
void func_08976230(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08976230u);
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
    return; /* fell out of func_08976230 */
}

/* func_089796dc  0x089796dc..0x08979948  620 bytes, source=fde */
void func_089796dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089796dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897971c; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9078u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08979714u; c->r[6] = 0u + 0x00000013u; func_08a19ec4(c, ram); }
    { goto L_08979934; }
L_0897971c:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907au, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907cu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907eu, 0u);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9081u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907fu, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9080u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08979934; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8b34u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08979788u: goto L_08979788; case 0x089797c0u: goto L_089797c0; case 0x08979808u: goto L_08979808; case 0x08979860u: goto L_08979860; case 0x089798a8u: goto L_089798a8; case 0x089798ecu: goto L_089798ec; default: recomp_trap_unknown_indirect(c, ram, 0x08979780u, _t); return; } }
L_08979788:
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9079u, 0u);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907bu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907du, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9082u, c->r[2]); goto L_08979934; }
L_089797c0:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9079u, 0u);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9084u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907bu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907du, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9082u, c->r[2]); goto L_08979934; }
L_08979808:
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9079u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907bu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9085u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907du, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907fu, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9082u, c->r[2]); goto L_08979934; }
L_08979860:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9079u, 0u);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907bu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907du, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9082u, c->r[2]); goto L_08979934; }
L_089798a8:
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9079u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9083u, 0u);
    c->r[2] = 0u + 0x00000005u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907bu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907du, c->r[2]);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9082u, 0u); goto L_08979934; }
L_089798ec:
    c->r[2] = 0u + 0x00000005u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9086u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9079u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9083u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907bu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff907du, c->r[2]);
    c->r[2] = 0u + 0x00000006u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9082u, c->r[2]);
L_08979934:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089796dc */
}

/* func_08981cc0  0x08981cc0..0x08983398  5848 bytes, source=fde */
void func_08981cc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08981cc0u);
L_08981cc0:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898311c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08981d40; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08981d58; }
    { goto L_08983378; }
L_08981d40:
    c->r[2] = 0u + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08983320; }
    { goto L_08983378; }
L_08981d58:
    { c->r[31] = 0x08981d60u; func_08981b8c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089830e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8fd0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08981cc0u: goto L_08981cc0; case 0x08981d9cu: goto L_08981d9c; case 0x08981f70u: goto L_08981f70; case 0x08981f90u: goto L_08981f90; case 0x089825f8u: goto L_089825f8; case 0x0898271cu: goto L_0898271c; case 0x08982880u: goto L_08982880; case 0x08982d34u: goto L_08982d34; case 0x08982d8cu: goto L_08982d8c; case 0x08982ea8u: goto L_08982ea8; case 0x08982fa8u: goto L_08982fa8; case 0x0898307cu: goto L_0898307c; case 0x089830c0u: goto L_089830c0; case 0x089830e0u: goto L_089830e0; case 0x08983158u: goto L_08983158; case 0x08983210u: goto L_08983210; case 0x08983250u: goto L_08983250; case 0x089832a0u: goto L_089832a0; case 0x089832e0u: goto L_089832e0; case 0x08983378u: goto L_08983378; default: recomp_trap_unknown_indirect(c, ram, 0x08981d94u, _t); return; } }
L_08981d9c:
    { c->r[31] = 0x08981da4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08981dc0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981e14; }
    c->r[4] = 0u + 0x00000036u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08981decu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000002cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08981e08u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08981e14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08981e30u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981e84; }
    c->r[4] = 0u + 0x00000037u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08981e5cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08981e78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08981e84:
    { c->r[31] = 0x08981e8cu; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08981e9cu; mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08981ee4; }
    { c->r[31] = 0x08981eb4u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981ee4; }
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]);
L_08981ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981efc; }
    { c->r[31] = 0x08981efcu; func_089810d8(c, ram); }
L_08981efc:
    { c->r[31] = 0x08981f04u; func_089812fc(c, ram); }
    { c->r[31] = 0x08981f0cu; func_089814c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x08981f34u; c->r[5] = c->r[5] + 0xffff91f0u; func_08973bdc(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9234u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9235u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9236u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9237u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08981f70:
    { c->r[31] = 0x08981f78u; func_08973f28(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089830e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08981f90:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08981fa8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08981fb8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982004; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08981fdcu; mem_w16(ram, c->r[1] + 0xffff9238u, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08981ff4u; c->r[4] = c->r[2] + 0u; func_08980ea4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089824f0; }
L_08982004:
    { c->r[31] = 0x0898200cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982228; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9235u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9234u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898203cu; mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x08982044u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x08982050u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x08982058u; mem_w8(ram, c->r[30] + 0x00000029u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898208c; }
    { c->r[31] = 0x08982074u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0898208c; }
    { goto L_089824f0; }
L_0898208c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000029u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089824f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089820b8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089824f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089824f0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089820f8u; mem_w8(ram, c->r[1] + 0xffff9236u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9236u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898211cu; c->r[4] = c->r[2] + 0u; func_08980e68(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9228u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08982154u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922cu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922cu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922du);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922du, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922eu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922eu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922fu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922fu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9230u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9230u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9231u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9231u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9232u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9232u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9233u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9233u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08982204u; mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]); func_08973e38(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9227u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089824f0; }
L_08982228:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08982240u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08982250u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089822d0; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9234u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9234u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9234u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089822a0; }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9234u, c->r[2]);
L_089822a0:
    { c->r[31] = 0x089822a8u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089822c8u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_089824f0; }
L_089822d0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089822e8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089822f8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982378; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9234u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9234u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9234u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982348; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9234u, 0u);
L_08982348:
    { c->r[31] = 0x08982350u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08982370u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_089824f0; }
L_08982378:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08982390u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089823a0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982438; }
    { c->r[31] = 0x089823c0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089824f0; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9235u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9235u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9235u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08982408; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9235u, c->r[2]);
L_08982408:
    { c->r[31] = 0x08982410u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08982430u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_089824f0; }
L_08982438:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08982450u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08982460u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089824f0; }
    { c->r[31] = 0x08982480u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089824f0; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9235u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9235u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9235u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089824c8; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9235u, 0u);
L_089824c8:
    { c->r[31] = 0x089824d0u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089824f0u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_089824f0:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff9238u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982534; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08982510u; mem_w16(ram, c->r[1] + 0xffff9238u, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08982528u; c->r[4] = c->r[2] + 0u; func_08980ea4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08982534:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff9238u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982570; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff9238u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08982568u; c->r[6] = c->r[3] + 0u; func_089737f8(c, ram); }
    { goto L_08982580; }
L_08982570:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x08982580u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
L_08982580:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9238u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff9238u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089830e0; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9235u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9234u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089825d0u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x089825d8u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089825f0u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_089830e0; }
L_089825f8:
    { c->r[31] = 0x08982600u; func_08973f98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089830e0; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0xffff9228u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0898262cu; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xffff922cu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08982654u; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xffff9230u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0898267cu; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fb4u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fb8u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[16] = 0x08ab0000u;
    { c->r[31] = 0x089826a0u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9236u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089826b8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_089826b8:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0u + 0x0000000bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089826d8u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898270c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08982700u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0898270c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_0898271c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08982738u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089830e0; }
    c->r[16] = 0x08ab0000u;
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9227u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0898275cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w8(ram, c->r[1] + 0xffff9228u, c->r[2]);
    c->r[16] = 0x08ab0000u;
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9227u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0898277cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w8(ram, c->r[1] + 0xffff922cu, c->r[2]);
    c->r[16] = 0x08ab0000u;
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9227u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0898279cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w8(ram, c->r[1] + 0xffff9230u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08982818; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9227u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089827fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_089827fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982818:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9227u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9227u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982864; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982864:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08982cd8; }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9228u;
    { c->r[31] = 0x089828ccu; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[16] = 0x08ab0000u;
    { c->r[31] = 0x089828d8u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9236u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08982c90; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089828e4:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982904; }
    { goto L_08982c90; }
L_08982904:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982c80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982c80; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0898296cu; c->r[6] = 0u + 0x00000002u; func_08985d08(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08982a28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089829a8; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089829c0; }
    { goto L_08982af4; }
L_089829a8:
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08982a90; }
    { goto L_08982af4; }
L_089829c0:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0010u;
    { mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]); goto L_08982af4; }
L_08982a28:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0020u;
    { mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]); goto L_08982af4; }
L_08982a90:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0030u;
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
L_08982af4:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[17] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08982b60u; c->r[6] = 0u + 0x00000003u; func_08985d08(c, ram); }
    c->r[2] = c->r[2] << 4;
    c->r[3] = mem_r8(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[17] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08982b84u; c->r[6] = 0u + 0x00000004u; func_08985d08(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08982bb0; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08982c18; }
    { goto L_08982c80; }
L_08982bb0:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0040u;
    { mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]); goto L_08982c80; }
L_08982c18:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9236u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
L_08982c80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089828e4; }
L_08982c90:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9236u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08982cb0u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x08982cc8u; c->r[5] = c->r[5] + 0xffff91f0u; func_08973bdc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982cd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089830e0; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9236u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08982d0cu; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x08982d24u; c->r[5] = c->r[5] + 0xffff91f0u; func_08973bdc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982d34:
    { c->r[31] = 0x08982d3cu; func_08973f28(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089830e0; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9236u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08982d5cu; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08982d64u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08982d7cu; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982d8c:
    { c->r[31] = 0x08982d94u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982dc8; }
    { c->r[31] = 0x08982da4u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08982dbcu; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08982dc8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08982dd4:
    { c->r[31] = 0x08982ddcu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982df8; }
    { goto L_08982e54; }
L_08982df8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08982e44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08982e44; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08982e44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08982dd4; }
L_08982e54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08982e70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08982e70:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08982e80u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08982e88u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08982ea0u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_089830e0; }
L_08982ea8:
    { c->r[31] = 0x08982eb0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982ee4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x08982ec8u; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_08973e38(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982ee4:
    { c->r[31] = 0x08982eecu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982f70; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08982ef8:
    { c->r[31] = 0x08982f00u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08982f1c; }
    { goto L_08982f48; }
L_08982f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08982f38u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08982ef8; }
L_08982f48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_08982f70:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08982f80u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08982f88u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08982fa0u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_089830e0; }
L_08982fa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08983058; }
    { c->r[31] = 0x08982fc0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08983030; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08982ffc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983014; }
    { goto L_0898306c; }
L_08982ffc:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08983044; }
    { goto L_0898306c; }
L_08983014:
    { c->r[31] = 0x0898301cu; func_08986220(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08983028u; c->r[5] = 0u + 0x0000001du; func_0896a7b8(c, ram); }
    { goto L_0898306c; }
L_08983030:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898303cu; c->r[5] = 0u + 0x00000019u; func_0896a7b8(c, ram); }
    { goto L_0898306c; }
L_08983044:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08983050u; c->r[5] = 0u + 0x0000001bu; func_0896a7b8(c, ram); }
    { goto L_0898306c; }
L_08983058:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_0898306c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); goto L_089830e0; }
L_0898307c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089830a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089830e0; }
L_089830a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089830e0; }
L_089830c0:
    { c->r[31] = 0x089830c8u; func_08973f98(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089830d8; }
    { goto L_089830e0; }
L_089830d8:
    { c->r[31] = 0x089830e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_089830e0:
    { c->r[31] = 0x089830e8u; func_0896a284(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000070u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0898310cu; c->r[8] = c->r[8] + 0xffff9180u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08983114u; func_08974fb4(c, ram); }
    { goto L_08983378; }
L_0898311c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983378; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9080u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08981cc0u: goto L_08981cc0; case 0x08981d9cu: goto L_08981d9c; case 0x08981f70u: goto L_08981f70; case 0x08981f90u: goto L_08981f90; case 0x089825f8u: goto L_089825f8; case 0x0898271cu: goto L_0898271c; case 0x08982880u: goto L_08982880; case 0x08982d34u: goto L_08982d34; case 0x08982d8cu: goto L_08982d8c; case 0x08982ea8u: goto L_08982ea8; case 0x08982fa8u: goto L_08982fa8; case 0x0898307cu: goto L_0898307c; case 0x089830c0u: goto L_089830c0; case 0x089830e0u: goto L_089830e0; case 0x08983158u: goto L_08983158; case 0x08983210u: goto L_08983210; case 0x08983250u: goto L_08983250; case 0x089832a0u: goto L_089832a0; case 0x089832e0u: goto L_089832e0; case 0x08983378u: goto L_08983378; default: recomp_trap_unknown_indirect(c, ram, 0x08983150u, _t); return; } }
L_08983158:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8fc8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08983170u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x00001540u;
    { c->r[31] = 0x08983184u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983190u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8fccu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089831a8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9234u);
    c->r[2] = 0u + 0x00000073u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000043u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9235u);
    c->r[2] = 0u + 0x00000058u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000035u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x089831fcu; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983208u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08983378; }
L_08983210:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8fccu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08983228u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0898323cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983248u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08983378; }
L_08983250:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8fccu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08983268u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08983270u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x00001504u;
    { c->r[31] = 0x08983284u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x0898328cu; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983298u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08983378; }
L_089832a0:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8fccu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089832b8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x0000153bu;
    { c->r[31] = 0x089832ccu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089832d8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08983378; }
L_089832e0:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8fc8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089832f8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x0898330cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983318u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08983378; }
L_08983320:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983378; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983358; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]); goto L_08983378; }
L_08983358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983378; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
L_08983378:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08981cc0 */
}

/* func_0898f2a0  0x0898f2a0..0x0898f328  136 bytes, source=sweep */
void func_0898f2a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898f2a0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0898f2a0 */
}

/* func_089987ac  0x089987ac..0x089987d0  36 bytes, source=sweep */
void func_089987ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089987acu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a64u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089987ac */
}

/* func_08998fc0  0x08998fc0..0x0899900c  76 bytes, source=sweep */
void func_08998fc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998fc0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b84u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998fc0 */
}

/* func_0899c07c  0x0899c07c..0x0899cc54  3032 bytes, source=fde */
void func_0899c07c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899c07cu);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0899c098u; c->r[4] = c->r[30] + 0u; func_08808240(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5e0u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa5e4u);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffa5e0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c0f8u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899c108u; c->r[5] = c->r[30] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c128u; func_0880d140(c, ram); }
    { c->r[31] = 0x0899c130u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899c190; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5e8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa5e8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c170u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_0899c190:
    { c->r[31] = 0x0899c198u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa6fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0899c1b8u; mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa714u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    { c->r[31] = 0x0899c1dcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    { c->r[31] = 0x0899c1e8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_0899c1f4:
    { c->r[31] = 0x0899c1fcu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899c218; }
    { goto L_0899c45c; }
L_0899c218:
    { c->r[31] = 0x0899c220u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0xffffffc0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899c44c; }
    { c->r[31] = 0x0899c258u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000060u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899c26cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000006cu); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[16] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0899c27cu; c->r[4] = 0u + 0u; func_089987d0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa6dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899c2b0u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0899c2bcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899c320u; c->r[5] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c360u; func_0880d140(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899c3f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb14u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb18u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb1cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb20u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb24u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb28u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb2cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899c3e8u; c->r[5] = c->r[3] + 0u; func_0887a1b8(c, ram); }
    { goto L_0899c440; }
L_0899c3f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0899c440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0899c44c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_0899c1f4; }
L_0899c45c:
    { c->r[31] = 0x0899c464u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_0899c46c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899c484; }
    { goto L_0899c700; }
L_0899c484:
    { c->r[31] = 0x0899c48cu; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0xffffffc0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899c6f0; }
    { c->r[31] = 0x0899c4c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899c4d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000090u); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[16] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0899c4e8u; c->r[4] = 0u + 0u; func_089987d0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa6dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899c51cu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0899c59cu; c->r[6] = c->r[2] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c5e4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
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
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899c6e4; }
    c->r[16] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5e0u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa5e0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c674u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899c690u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    mem_wf32(ram, c->r[3] + 0x00000018u, c->f[0]);
L_0899c6e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0899c6f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]); goto L_0899c46c; }
L_0899c700:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000094u, 0u);
L_0899c708:
    { c->r[31] = 0x0899c710u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899c72c; }
    { goto L_0899c984; }
L_0899c72c:
    { c->r[31] = 0x0899c734u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0xffffffc0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000064u);
    c->r[2] = 0u + 0x00000040u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899c974; }
    { c->r[31] = 0x0899c770u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899c784u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000098u); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[16] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0899c794u; c->r[4] = 0u + 0x00000001u; func_089987d0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa6dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899c7c8u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0899c7d4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899c838u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5ecu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899c888u; func_0880d140(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899c918; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb14u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb18u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb1cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb20u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb24u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb28u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbb2cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899c910u; c->r[5] = c->r[3] + 0u; func_0887a1b8(c, ram); }
    { goto L_0899c968; }
L_0899c918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0899c968:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0899c974:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_0899c708; }
L_0899c984:
    { c->r[31] = 0x0899c98cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
L_0899c994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899c9ac; }
    { goto L_0899cc3c; }
L_0899c9ac:
    { c->r[31] = 0x0899c9b4u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0xffffffc0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000064u);
    c->r[2] = 0u + 0x00000040u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899cc2c; }
    { c->r[31] = 0x0899c9f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899ca04u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000009cu); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[16] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0899ca14u; c->r[4] = 0u + 0x00000001u; func_089987d0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa6dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899ca48u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0899cac8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5ecu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899cb20u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
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
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899cc20; }
    c->r[16] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa5e0u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa5e0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0899cbb0u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899cbccu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    mem_wf32(ram, c->r[3] + 0x00000018u, c->f[0]);
L_0899cc20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0899cc2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_0899c994; }
L_0899cc3c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_0899c07c */
}

/* func_089a09a0  0x089a09a0..0x089a0d08  872 bytes, source=fde */
void func_089a09a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a09a0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (c->r[3] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0cf4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa648u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089a09fcu: goto L_089a09fc; case 0x089a0a40u: goto L_089a0a40; case 0x089a0a84u: goto L_089a0a84; case 0x089a0c08u: goto L_089a0c08; case 0x089a0c88u: goto L_089a0c88; case 0x089a0cf4u: goto L_089a0cf4; default: recomp_trap_unknown_indirect(c, ram, 0x089a09f4u, _t); return; } }
L_089a09fc:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002b89u, c->r[2]);
    { c->r[31] = 0x089a0a10u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    { c->r[31] = 0x089a0a18u; c->r[4] = 0u + 0x000000ffu; func_08999204(c, ram); }
    { c->r[31] = 0x089a0a20u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0cf4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a0a34u; c->r[5] = 0u + 0x00000022u; func_0896a7b8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0x00002b89u, 0u); goto L_089a0cf4; }
L_089a0a40:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002b89u, c->r[2]);
    { c->r[31] = 0x089a0a54u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    { c->r[31] = 0x089a0a5cu; c->r[4] = 0u + 0u; func_08999204(c, ram); }
    { c->r[31] = 0x089a0a64u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0cf4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a0a78u; c->r[5] = 0u + 0x00000022u; func_0896a7b8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0x00002b89u, 0u); goto L_089a0cf4; }
L_089a0a84:
    { c->r[31] = 0x089a0a8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x089a0a94u; c->r[4] = 0u + 0x00000080u; func_089991b0(c, ram); }
    { c->r[31] = 0x089a0a9cu; func_0899fe44(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089a0ab0:
    { c->r[31] = 0x089a0ab8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a0ad4; }
    { goto L_089a0bcc; }
L_089a0ad4:
    { c->r[31] = 0x089a0adcu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089a0af4; }
    { goto L_089a0bbc; }
L_089a0af4:
    { c->r[31] = 0x089a0afcu; func_0896a3c0(c, ram); }
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
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a0b34; }
    { goto L_089a0bbc; }
L_089a0b34:
    { c->r[31] = 0x089a0b3cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000097u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a0b54; }
    { goto L_089a0bbc; }
L_089a0b54:
    { c->r[31] = 0x089a0b5cu; func_0896a284(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0b80; }
    { goto L_089a0bbc; }
L_089a0b80:
    { c->r[31] = 0x089a0b88u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0bb0; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089a0bbc; }
L_089a0bb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089a0bbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089a0ab0; }
L_089a0bcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a0bf4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000096u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089a0bf4:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089a0c00u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b96c(c, ram); }
    { goto L_089a0cf4; }
L_089a0c08:
    { c->r[31] = 0x089a0c10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x089a0c18u; c->r[4] = 0u + 0x00000080u; func_089991b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089a0c60; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa644u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089a0c44u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a0c74; }
L_089a0c60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089a0c74:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089a0c80u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b96c(c, ram); }
    { goto L_089a0cf4; }
L_089a0c88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089a0ce0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a0ca4u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0cb4; }
    { goto L_089a0cf4; }
L_089a0cb4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x089a0cc4u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x089a0cccu; func_0899d924(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a0cd8u; c->r[5] = 0u + 0x00000030u; func_0896a7b8(c, ram); }
    { goto L_089a0cf4; }
L_089a0ce0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089a0cf4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a09a0 */
}

/* func_089a4bbc  0x089a4bbc..0x089a4c9c  224 bytes, source=fde */
void func_089a4bbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a4bbcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a4bd8u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    { c->r[31] = 0x089a4be0u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x089a4be8u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a4c04; }
    { c->r[31] = 0x089a4c00u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089a4c04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->f[0] = u2f(c->r[2]);
    { c->r[31] = 0x089a4c18u; c->f[20] = (f32)(s32)f2u(c->f[0]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[20] / c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa998u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa998u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a4c70; }
    { goto L_089a4c7c; }
L_089a4c70:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa998u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_089a4c7c:
    { c->r[31] = 0x089a4c84u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_088f4d3c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a4bbc */
}

/* func_089a9e0c  0x089a9e0c..0x089aa2c4  1208 bytes, source=fde */
void func_089a9e0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a9e0cu);
L_089a9e0c:
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa24c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a9e7c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a9e94; }
    { goto L_089aa2a8; }
L_089a9e7c:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa2a0; }
    { goto L_089aa2a8; }
L_089a9e94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa23c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffad68u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089a9e0cu: goto L_089a9e0c; case 0x089a9ed0u: goto L_089a9ed0; case 0x089a9f58u: goto L_089a9f58; case 0x089aa03cu: goto L_089aa03c; case 0x089aa0a0u: goto L_089aa0a0; case 0x089aa224u: goto L_089aa224; case 0x089aa23cu: goto L_089aa23c; default: recomp_trap_unknown_indirect(c, ram, 0x089a9ec8u, _t); return; } }
L_089a9ed0:
    { c->r[31] = 0x089a9ed8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f8d0(c, ram); }
    { c->r[31] = 0x089a9ee0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899b088(c, ram); }
    { c->r[31] = 0x089a9ee8u; func_089a9b94(c, ram); }
    { c->r[31] = 0x089a9ef0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9f0c; }
    { c->r[31] = 0x089a9f04u; func_0899bdac(c, ram); }
    { goto L_089a9f14; }
L_089a9f0c:
    { c->r[31] = 0x089a9f14u; func_0899c07c(c, ram); }
L_089a9f14:
    { c->r[31] = 0x089a9f1cu; func_0899d820(c, ram); }
    { c->r[31] = 0x089a9f24u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x089a9f2cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a9f38u; c->r[5] = 0u + 0x00000384u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089a9f40u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a9f48u; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089aa2a8; }
L_089a9f58:
    { c->r[31] = 0x089a9f60u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a9f68u; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    { c->r[31] = 0x089a9f70u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x089a9f84u; c->r[7] = 0u + 0x000000feu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a9fb8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a9ff4; }
    { goto L_089aa2a8; }
L_089a9fb8:
    { c->r[31] = 0x089a9fc0u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a9fd8u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a9fecu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089aa2a8; }
L_089a9ff4:
    { c->r[31] = 0x089a9ffcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089aa010u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad5cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089aa02cu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089aa2a8; }
L_089aa03c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089aa048u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa058; }
    { goto L_089aa2a8; }
L_089aa058:
    { c->r[31] = 0x089aa060u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089aa068u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f9e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089aa074u; mem_w32(ram, c->r[2] + 0x00000008u, 0u); func_08979698(c, ram); }
    { c->r[31] = 0x089aa07cu; c->r[4] = c->r[2] + 0u; func_0899907c(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002ff0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089aa090u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089aa2a8; }
L_089aa0a0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089aa0b4u; c->r[4] = c->r[2] + 0u; func_089a99f4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa16c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad60u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089aa108; }
    { goto L_089aa148; }
L_089aa108:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad64u);
    { c->r[31] = 0x089aa118u; c->f[12] = c->f[0]; func_08998ebc(c, ram); }
    { c->r[31] = 0x089aa120u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa12cu; c->r[5] = 0u + 0x00000005u; func_0896fc10(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad60u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_089aa148:
    { c->r[31] = 0x089aa150u; c->r[4] = 0u + 0x00000001u; func_08999258(c, ram); }
    { c->r[31] = 0x089aa158u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa164u; c->r[5] = 0u + 0x00000001u; func_08998a30(c, ram); }
    { goto L_089aa190; }
L_089aa16c:
    { c->r[31] = 0x089aa174u; c->r[4] = 0u + 0u; func_08999258(c, ram); }
    { c->r[31] = 0x089aa17cu; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa188u; c->r[5] = 0u + 0u; func_08998a30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
L_089aa190:
    { c->r[31] = 0x089aa198u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089aa204; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089aa1ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aa1c4; }
    { goto L_089aa204; }
L_089aa1c4:
    { c->r[31] = 0x089aa1ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08971434(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089aa1d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08998c08(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x089aa1e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08998cec(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089aa1f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_089714dc(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089aa1ac; }
L_089aa204:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x089b0000u;
    { c->r[31] = 0x089aa214u; c->r[5] = c->r[5] + 0xffff9980u; func_0899ffac(c, ram); }
    { c->r[31] = 0x089aa21cu; func_089a9cd8(c, ram); }
    { goto L_089aa2a8; }
L_089aa224:
    { c->r[31] = 0x089aa22cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x089aa234u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089aa2a8; }
L_089aa23c:
    { c->r[31] = 0x089aa244u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0558(c, ram); }
    { goto L_089aa2a8; }
L_089aa24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa290; }
    { goto L_089aa2a8; }
L_089aa290:
    { c->r[31] = 0x089aa298u; func_0899dcf4(c, ram); }
    { goto L_089aa2a8; }
L_089aa2a0:
    { c->r[31] = 0x089aa2a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0d08(c, ram); }
L_089aa2a8:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089a9e0c */
}

/* func_089afa8c  0x089afa8c..0x089afd70  740 bytes, source=fde */
void func_089afa8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089afa8cu);
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
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000033u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000007u;
    { c->r[31] = 0x089afad0u; mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089afb34u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
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
    c->r[2] = 0u + 0x00000007u;
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
    { c->r[31] = 0x089afb90u; c->r[4] = c->r[2] + 0u; func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089afbb8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089afc0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089afc0c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0xfbff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbdcu, c->r[2]);
L_089afc0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089afc34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_089afd50; }
L_089afc34:
    { c->r[31] = 0x089afc3cu; func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089afc70u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089afcbcu; mem_w8(ram, c->r[4] + 0x00000001u, c->r[2]); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089afcf4u; mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); func_0896a3e4(c, ram); }
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
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089afd50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000039u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089afa8c */
}

/* func_089b3068  0x089b3068..0x089b30ac  68 bytes, source=sweep */
void func_089b3068(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3068u);
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
    { c->r[31] = 0x089b3098u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3068 */
}

/* func_089b46d4  0x089b46d4..0x089b49d4  768 bytes, source=fde */
void func_089b46d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b46d4u);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[16]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b477cu; c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u); func_089b6f80(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089b4780:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b47a0; }
    { goto L_089b49bc; }
L_089b47a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b47d0u; func_089b65dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b4804u; func_089b65dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b4838u; func_089b65dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b48bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089b4888u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    { c->r[31] = 0x089b48bcu; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_089b6710(c, ram); }
L_089b48bc:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4920; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089b48ecu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x089b4920u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_089b6710(c, ram); }
L_089b4920:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b498c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000090u;
    { c->r[31] = 0x089b4958u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x089b498cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_089b6710(c, ram); }
L_089b498c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089b4780; }
L_089b49bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_089b46d4 */
}

/* func_089b73e0  0x089b73e0..0x089b7430  80 bytes, source=fde */
void func_089b73e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b73e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089b740cu; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089b741cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb1e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b73e0 */
}

/* func_089b8b08  0x089b8b08..0x089b8b50  72 bytes, source=sweep */
void func_089b8b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8b08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000085u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000085u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000086u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000086u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b8b08 */
}

/* func_089c2520  0x089c2520..0x089c27fc  732 bytes, source=fde */
void func_089c2520(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c2520u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[5]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c2558u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089c2564u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089c2578u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820ca4(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c2594u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c25b8u; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c25dc; }
    { goto L_089c25e4; }
L_089c25dc:
    { mem_w32(ram, c->r[30] + 0x00000080u, 0u); goto L_089c27e4; }
L_089c25e4:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089c25f0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2604u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2c0u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2624u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c263cu; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2660; }
    { goto L_089c2668; }
L_089c2660:
    { mem_w32(ram, c->r[30] + 0x00000080u, 0u); goto L_089c27e4; }
L_089c2668:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c26b0; }
    { goto L_089c26b8; }
L_089c26b0:
    { mem_w32(ram, c->r[30] + 0x00000080u, 0u); goto L_089c27e4; }
L_089c26b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    { c->r[31] = 0x089c26d0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u); func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    { c->r[31] = 0x089c26dcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000005cu); func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000064u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2714; }
    { goto L_089c271c; }
L_089c2714:
    { mem_w32(ram, c->r[30] + 0x00000080u, 0u); goto L_089c27e4; }
L_089c271c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000068u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2740; }
    { goto L_089c2748; }
L_089c2740:
    { mem_w32(ram, c->r[30] + 0x00000080u, 0u); goto L_089c27e4; }
L_089c2748:
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089c2754u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c2774u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000068u); func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c2794u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c27b0u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c27d0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    mem_wf32(ram, c->r[2] + 0x00000068u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
L_089c27e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_089c2520 */
}

/* func_089c62f8  0x089c62f8..0x089c6330  56 bytes, source=sweep */
void func_089c62f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c62f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c631cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c655c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c62f8 */
}

/* func_089c8a18  0x089c8a18..0x089c8b60  328 bytes, source=fde */
void func_089c8a18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8a18u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c8a60; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c8a6c; }
    { goto L_089c8a90; }
L_089c8a60:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_089c8b48; }
L_089c8a6c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb470u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb474u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb478u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_089c8a90:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c8ab0; }
    { goto L_089c8abc; }
L_089c8ab0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_089c8ac4; }
L_089c8abc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_089c8ac4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb47cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = c->f[0];
    { c->r[31] = 0x089c8ae8u; c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_08a0ff08(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb47cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c8b1c; }
    { goto L_089c8b28; }
L_089c8b1c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_089c8b48; }
L_089c8b28:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_089c8b48:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089c8a18 */
}

/* func_089caabc  0x089caabc..0x089caae8  44 bytes, source=sweep */
void func_089caabc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089caabcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000128u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089caabc */
}

/* func_089cd570  0x089cd570..0x089cd600  144 bytes, source=fde */
void func_089cd570(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cd570u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffb678u;
    { c->r[31] = 0x089cd5a4u; c->r[6] = 0x00040000u; func_089d673c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089cd5b8u; c->r[5] = c->r[5] + 0xffffb678u; func_089d705c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089cd5c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089cd5d4u; c->r[6] = 0u + 0x00000001u; func_089ccd7c(c, ram); }
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffffc6cu, 0u);
    { c->r[31] = 0x089cd5e4u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24884u); /* sceKernelExitDeleteThread */ }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cd570 */
}

/* func_089d22fc  0x089d22fc..0x089d2354  88 bytes, source=fde */
void func_089d22fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d22fcu);
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
    { c->r[31] = 0x089d2340u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089d28e0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d22fc */
}

/* func_089d31f8  0x089d31f8..0x089d3268  112 bytes, source=sweep */
void func_089d31f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d31f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d322c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_089d3234; }
L_089d322c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_089d3234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x089d3254u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_089d3268(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d31f8 */
}

/* func_089d49ec  0x089d49ec..0x089d4b18  300 bytes, source=fde */
void func_089d49ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d49ecu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d4a2cu; c->r[8] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24b8cu); /* sceNetAdhocPtpAccept */ }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d4a4c; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_089d4af8; }
L_089d4a4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4a60; }
    { goto L_089d4af8; }
L_089d4a60:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089d4a64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4a7c; }
    { goto L_089d4aec; }
L_089d4a7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4adc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d4b00; }
L_089d4adc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089d4a64; }
L_089d4aec:
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d4b00; }
L_089d4af8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089d4b00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d49ec */
}

/* func_089d5c84  0x089d5c84..0x089d5ee0  604 bytes, source=fde */
void func_089d5c84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5c84u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000648u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x003fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d5ce8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = c->r[2] << 6;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089d5ce8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d5cf8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000534u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000538u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0x8000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x0000053cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0x8000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffff8000u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffff8000u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbaa8u;
    { c->r[31] = 0x089d5d88u; c->r[5] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24704u); /* sceIoGetstat */ }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d5d9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x000060e4u, 0u); goto L_089d5dbc; }
L_089d5d9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x000060e4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060e4u);
    c->r[2] = c->r[2] << 11;
    mem_w32(ram, c->r[3] + 0x000060e4u, c->r[2]);
L_089d5dbc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbaccu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x089d5dd8u; c->r[8] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a247e4u); /* sceKernelCreateSema */ }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000648u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00006010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d5e10u; c->r[6] = 0u + 0x000000c0u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d5e28u; c->r[6] = 0u + 0x00006000u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00006010u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000070u);
    { c->r[31] = 0x089d5e70u; c->r[7] = c->r[2] + 0u; func_089d70c4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d5e7cu; c->r[5] = 0u + 0u; func_089d7194(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d5e88u; c->r[5] = 0u + 0u; func_089d7f3c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x00010000u;
    mem_w32(ram, c->r[3] + 0x000060dcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x00010000u;
    mem_w32(ram, c->r[3] + 0x000060e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000644u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003bd8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_089d5c84 */
}

/* func_089d7cac  0x089d7cac..0x089d7cf0  68 bytes, source=fde */
void func_089d7cac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7cacu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089d7cc4u; hle_dispatch_stub(c, ram, 0x08a249d4u); /* sceDisplayIsVblank */ }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7cd4; }
    { c->r[31] = 0x089d7cd4u; hle_dispatch_stub(c, ram, 0x08a249e4u); /* sceDisplayWaitVblankStart */ }
L_089d7cd4:
    { c->r[31] = 0x089d7cdcu; func_08805910(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089d7cac */
}

/* func_089d9034  0x089d9034..0x089d93d0  924 bytes, source=fde */
void func_089d9034(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9034u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    { c->r[31] = 0x089d9060u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9d90(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d907c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089d907c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d9094u; c->r[6] = 0u + 0x00000600u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000600u;
    mem_w32(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[3] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000013u;
    mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000012u;
    mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000068u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000640u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000062cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a60000u;
    c->r[5] = c->r[5] + 0xffffae28u;
    { c->r[31] = 0x089d912cu; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[3] + 0x000000c8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    mem_w32(ram, c->r[3] + 0x000000ccu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000c4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d916c; }
L_089d916c:
    c->r[2] = 0u + 0x00000009u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffbb64u;
    { c->r[31] = 0x089d9190u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000009cu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d91a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a1af70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000b4u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d91d0; }
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffbb54u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_089d91d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x089d91dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a1af70(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000d0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffbb70u;
    { c->r[31] = 0x089d921cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d9298; }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089d9230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9254; }
    { goto L_089d928c; }
L_089d9254:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000150u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089d9230; }
L_089d928c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089d9298:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d9314; }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089d92ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d92d0; }
    { goto L_089d9308; }
L_089d92d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x000001d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089d92ac; }
L_089d9308:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089d9314:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x000005d0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    mem_w8(ram, c->r[3] + 0x000005d1u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000005d4u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d9344u; c->r[6] = 0u + 0u; func_089d93d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000005e4u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d935cu; c->r[6] = 0u + 0x00000001u; func_089d93d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000005f4u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d9374u; c->r[6] = 0u + 0x00000002u; func_089d93d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000604u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d938cu; c->r[6] = 0u + 0x00000003u; func_089d93d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d93b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000048u);
    { mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]); goto L_089d93bc; }
L_089d93b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002du;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089d93bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089d9034 */
}

/* func_089da2b8  0x089da2b8..0x089da31c  100 bytes, source=sweep */
void func_089da2b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da2b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da2b8 */
}

/* func_089db934  0x089db934..0x089db98c  88 bytes, source=fde */
void func_089db934(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db934u);
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
    { c->r[31] = 0x089db978u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089dbc2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089db934 */
}

/* func_089dc6c8  0x089dc6c8..0x089dd064  2460 bytes, source=fde */
void func_089dc6c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc6c8u);
    c->r[29] = c->r[29] + 0xfffffe60u;
    mem_w32(ram, c->r[29] + 0x00000194u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000190u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000100u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[3] = c->r[30] + 0x0000001cu;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089dc730u; c->r[7] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a249fcu); /* sceDisplayGetFrameBuf */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006bcu, c->r[2]);
    { c->r[31] = 0x089dc744u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_089dd870(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000016cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000170u, 0u);
    mem_w32(ram, c->r[30] + 0x00000174u, 0u);
    mem_w32(ram, c->r[30] + 0x00000178u, 0u);
    mem_w32(ram, c->r[30] + 0x0000017cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000180u, 0u);
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
    mem_w32(ram, c->r[30] + 0x00000188u, 0u);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    mem_w32(ram, c->r[30] + 0x000000b4u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b90000u;
    { c->r[31] = 0x089dc77cu; mem_w32(ram, c->r[1] + 0x000006c8u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a24ac4u); /* sceMpegInit */ }
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dc7a4; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbc7cu;
    { c->r[31] = 0x089dc79cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000168u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc7a4:
    { c->r[31] = 0x089dc7acu; c->r[4] = 0u + 0x00000264u; hle_dispatch_stub(c, ram, 0x08a24b14u); /* sceMpegRingbufferQueryMemSize */ }
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dc7d4; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbc9cu;
    { c->r[31] = 0x089dc7ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000150u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc7d4:
    { c->r[31] = 0x089dc7dcu; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24b04u); /* sceMpegQueryMemSize */ }
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dc804; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbcccu;
    { c->r[31] = 0x089dc7fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000154u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc804:
    { c->r[31] = 0x089dc80cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u); func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000180u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000180u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dc830; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dc828u; c->r[4] = c->r[4] + 0xffffbcf4u; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc830:
    { c->r[31] = 0x089dc838u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000154u); func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000184u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dc85c; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dc854u; c->r[4] = c->r[4] + 0xffffbd18u; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc85c:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000264u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000180u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[8] = 0x089e0000u;
    c->r[8] = c->r[8] + 0xffffd064u;
    { c->r[31] = 0x089dc884u; c->r[9] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24a94u); /* sceMpegRingbufferConstruct */ }
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dc8ac; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbd38u;
    { c->r[31] = 0x089dc8a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000168u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc8ac:
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = 0u + 0x00000200u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089dc8d4u; c->r[10] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24b1cu); /* sceMpegCreate */ }
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dc8fc; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbd68u;
    { c->r[31] = 0x089dc8f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000168u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc8fc:
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089dc90cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089dd980(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dc928; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dc920u; c->r[4] = c->r[4] + 0xffffbd8cu; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc928:
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dc93cu; c->r[6] = 0u + 0x00000001u; func_089dda84(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dc958; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dc950u; c->r[4] = c->r[4] + 0xffffbdacu; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc958:
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[6] = c->r[30] + 0x00000158u;
    c->r[7] = c->r[30] + 0x00000164u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089dc974u; c->r[5] = c->r[3] + 0u; func_089dd138(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dc990; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dc988u; c->r[4] = c->r[4] + 0xffffbdccu; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc990:
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089dc9a4u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a9cu); /* sceMpegRegistStream */ }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dc9c8; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dc9c0u; c->r[4] = c->r[4] + 0xffffbde8u; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dc9c8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dca14; }
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089dc9f0u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a9cu); /* sceMpegRegistStream */ }
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dca14; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dca0cu; c->r[4] = c->r[4] + 0xffffbe14u; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dca14:
    c->r[2] = c->r[30] + 0x00000024u;
    { c->r[31] = 0x089dca20u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24aecu); /* sceMpegMallocAvcEsBuf */ }
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dca44; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dca3cu; c->r[4] = c->r[4] + 0xffffbe40u; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dca44:
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000017cu);
    { c->r[31] = 0x089dca5cu; c->r[6] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24a84u); /* sceMpegInitAu */ }
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]); if (_c) goto L_089dca80; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbe68u;
    { c->r[31] = 0x089dca78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000168u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dca80:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcb40; }
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[3] = c->r[30] + 0x0000015cu;
    c->r[6] = c->r[30] + 0x00000160u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089dcaacu; c->r[5] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24b2cu); /* sceMpegQueryAtracEsSize */ }
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcad4; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbe90u;
    { c->r[31] = 0x089dcaccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000168u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dcad4:
    { c->r[31] = 0x089dcadcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000015cu); func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000188u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dcb00; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dcaf8u; c->r[4] = c->r[4] + 0xffffbebcu; func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dcb00:
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000188u);
    { c->r[31] = 0x089dcb18u; c->r[6] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24a84u); /* sceMpegInitAu */ }
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcb40; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbee0u;
    { c->r[31] = 0x089dcb38u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000168u); func_08a1a4c0(c, ram); }
    { goto L_089dcf34; }
L_089dcb40:
    { c->r[31] = 0x089dcb48u; c->r[4] = 0u + 0x00000010u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000178u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dcb60; }
    { goto L_089dcebc; }
L_089dcb60:
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000178u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { c->r[31] = 0x089dcb80u; c->r[8] = c->r[3] + 0u; func_089da7e0(c, ram); }
    { c->r[31] = 0x089dcb88u; c->r[4] = 0u + 0x00000028u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000016cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000016cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dcba0; }
    { goto L_089dcebc; }
L_089dcba0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000016cu);
    c->r[5] = 0x00080000u;
    c->r[5] = c->r[5] | 0x8000u;
    { c->r[31] = 0x089dcbb4u; c->r[6] = 0u + 0x00000004u; func_089dab94(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dcbd0; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dcbc8u; c->r[4] = c->r[4] + 0xffffbf04u; func_08a1a4c0(c, ram); }
    { goto L_089dcebc; }
L_089dcbd0:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcc30; }
    { c->r[31] = 0x089dcbecu; c->r[4] = 0u + 0x00000028u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dcc04; }
    { goto L_089dcebc; }
L_089dcc04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000160u);
    { c->r[31] = 0x089dcc14u; c->r[6] = 0u + 0x00000005u; func_089ddd58(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dcc30; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dcc28u; c->r[4] = c->r[4] + 0xffffbf24u; func_08a1a4c0(c, ram); }
    { goto L_089dcebc; }
L_089dcc30:
    { c->r[31] = 0x089dcc38u; c->r[4] = 0u + 0x00000020u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dcc50; }
    { goto L_089dcebc; }
L_089dcc50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000174u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000016cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000170u);
    { c->r[31] = 0x089dcc64u; c->r[7] = 0u + 0x00000006u; func_089da3e4(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dcc80; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dcc78u; c->r[4] = c->r[4] + 0xffffbf44u; func_08a1a4c0(c, ram); }
    { goto L_089dcebc; }
L_089dcc80:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcccc; }
    { c->r[31] = 0x089dcc9cu; hle_dispatch_stub(c, ram, 0x08a248a4u); /* sceKernelGetThreadCurrentPriority */ }
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbf64u;
    c->r[5] = 0x089e0000u;
    c->r[5] = c->r[5] + 0xffffe5f8u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0x00000800u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089dccc4u; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006d0u, c->r[2]);
L_089dcccc:
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006ccu, 0u);
    c->r[5] = c->r[30] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[4] = (u32)((s32)c->r[2] >> 31);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[3] = c->r[4] + 0u;
    c->r[4] = c->r[5] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x089dccfcu; c->r[8] = 0u + 0u; func_089ddce0(c, ram); }
    { int _c = ((s32)c->r[3] < 0); if (_c) goto L_089dcd0c; }
    { goto L_089dcd20; }
L_089dcd0c:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dcd18u; c->r[4] = c->r[4] + 0xffffbf70u; func_08a1a4c0(c, ram); }
    { goto L_089dce8c; }
L_089dcd20:
    { c->r[31] = 0x089dcd28u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000016cu); func_089dae40(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcd44; }
    { c->r[31] = 0x089dcd44u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000170u); func_089de0e4(c, ram); }
L_089dcd44:
    { c->r[31] = 0x089dcd4cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000174u); func_089da4a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcd78; }
    c->r[2] = c->r[30] + 0x00000174u;
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000006d0u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x089dcd78u; c->r[6] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
L_089dcd78:
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000178u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000174u);
    { c->r[31] = 0x089dcd98u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000158u); func_089dd3f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dcdd4; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dce8c; }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000006d0u);
    { c->r[31] = 0x089dcdccu; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24814u); /* sceKernelWaitThreadEnd */ }
    { goto L_089dce8c; }
L_089dcdd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000168u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dcdf4; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dcdecu; c->r[4] = c->r[4] + 0xffffbf90u; func_08a1a4c0(c, ram); }
    { goto L_089dce8c; }
L_089dcdf4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006ccu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dce6c; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dce14u; c->r[4] = c->r[4] + 0xffffbfacu; func_08a1a4c0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dce38; }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000006d0u);
    { c->r[31] = 0x089dce38u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24814u); /* sceKernelWaitThreadEnd */ }
L_089dce38:
    c->r[2] = c->r[30] + 0x00000024u;
    { c->r[31] = 0x089dce44u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24accu); /* sceMpegFlushAllStream */ }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dce60; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dce58u; c->r[4] = c->r[4] + 0xffffbfb8u; func_08a1a4c0(c, ram); }
    { goto L_089dce8c; }
L_089dce60:
    c->r[1] = 0x08b90000u;
    { mem_w32(ram, c->r[1] + 0x000006ccu, 0u); goto L_089dce8c; }
L_089dce6c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006ccu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dce8c; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089dce8cu; c->r[4] = c->r[4] + 0xffffbfe0u; func_08a1a4c0(c, ram); }
L_089dce8c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcebc; }
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000006d0u);
    { c->r[31] = 0x089dceb0u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24814u); /* sceKernelWaitThreadEnd */ }
    c->r[4] = 0x08b90000u;
    { c->r[31] = 0x089dcebcu; c->r[4] = mem_r32(ram, c->r[4] + 0x000006d0u); hle_dispatch_stub(c, ram, 0x08a24844u); /* sceKernelTerminateDeleteThread */ }
L_089dcebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcedc; }
    { c->r[31] = 0x089dced0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000174u); func_089da4e0(c, ram); }
    { c->r[31] = 0x089dced8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000174u); func_089dd960(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000174u, 0u);
L_089dcedc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcefc; }
    { c->r[31] = 0x089dcef0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000170u); func_089de150(c, ram); }
    { c->r[31] = 0x089dcef8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000170u); func_089dd960(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000170u, 0u);
L_089dcefc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000016cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcf1c; }
    { c->r[31] = 0x089dcf10u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000016cu); func_089daed0(c, ram); }
    { c->r[31] = 0x089dcf18u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000016cu); func_089dd960(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000170u, 0u);
L_089dcf1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcf34; }
    { c->r[31] = 0x089dcf30u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000178u); func_089dd960(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000178u, 0u);
L_089dcf34:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcf5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcf5c; }
    { c->r[31] = 0x089dcf5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000188u); func_089dd960(c, ram); }
L_089dcf5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcf78; }
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089dcf78u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000017cu); hle_dispatch_stub(c, ram, 0x08a24b0cu); /* sceMpegFreeAvcEsBuf */ }
L_089dcf78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcf94; }
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089dcf94u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u); hle_dispatch_stub(c, ram, 0x08a24aacu); /* sceMpegUnRegistStream */ }
L_089dcf94:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dcfc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dcfc4; }
    c->r[2] = c->r[30] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089dcfc4u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000b4u); hle_dispatch_stub(c, ram, 0x08a24aacu); /* sceMpegUnRegistStream */ }
L_089dcfc4:
    c->r[2] = c->r[30] + 0x00000140u;
    { c->r[31] = 0x089dcfd0u; c->r[4] = c->r[2] + 0u; func_089ddbc0(c, ram); }
    c->r[2] = c->r[30] + 0x00000140u;
    { c->r[31] = 0x089dcfdcu; c->r[4] = c->r[2] + 0u; func_089ddc24(c, ram); }
    c->r[2] = c->r[30] + 0x00000024u;
    { c->r[31] = 0x089dcfe8u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24ab4u); /* sceMpegDelete */ }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089dcff4u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24a7cu); /* sceMpegRingbufferDestruct */ }
    { c->r[31] = 0x089dcffcu; hle_dispatch_stub(c, ram, 0x08a24ae4u); /* sceMpegFinish */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd010; }
    { c->r[31] = 0x089dd010u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000184u); func_089dd960(c, ram); }
L_089dd010:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000180u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd024; }
    { c->r[31] = 0x089dd024u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000180u); func_089dd960(c, ram); }
L_089dd024:
    c->r[4] = 0u + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089dd038u; c->r[7] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a249ccu); /* sceDisplaySetFrameBuf */ }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006acu, 0u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006b0u, 0u);
    { c->r[31] = 0x089dd050u; c->r[4] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24884u); /* sceKernelExitDeleteThread */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000194u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000190u);
    { c->r[29] = c->r[29] + 0x000001a0u; return; }
    return; /* fell out of func_089dc6c8 */
}

/* func_089de82c  0x089de82c..0x089de884  88 bytes, source=fde */
void func_089de82c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de82cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089de86cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089de758(c, ram); }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de82c */
}

/* func_089e1b68  0x089e1b68..0x089e1bb0  72 bytes, source=sweep */
void func_089e1b68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1b68u);
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
    { c->r[31] = 0x089e1b9cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089e2920(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1b68 */
}

/* func_089e2624  0x089e2624..0x089e26cc  168 bytes, source=sweep */
void func_089e2624(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2624u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e26a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e2678; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e26b0; }
    { goto L_089e26b8; }
L_089e2678:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e2690; }
    { goto L_089e26b8; }
L_089e2690:
    { c->r[31] = 0x089e2698u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e32a8(c, ram); }
    { goto L_089e26b8; }
L_089e26a0:
    { c->r[31] = 0x089e26a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e32dc(c, ram); }
    { goto L_089e26b8; }
L_089e26b0:
    { c->r[31] = 0x089e26b8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e3314(c, ram); }
L_089e26b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2624 */
}

/* func_089e37c4  0x089e37c4..0x089e38bc  248 bytes, source=sweep */
void func_089e37c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e37c4u);
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
    { c->r[31] = 0x089e3840u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
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
    { c->r[31] = 0x089e3874u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e38a0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    { c->r[31] = 0x089e38a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e398c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e37c4 */
}

/* func_089e49dc  0x089e49dc..0x089e4a2c  80 bytes, source=sweep */
void func_089e49dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e49dcu);
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
    { c->r[31] = 0x089e4a18u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e49dc */
}

/* func_089ea03c  0x089ea03c..0x089ea080  68 bytes, source=sweep */
void func_089ea03c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea03cu);
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
    return; /* fell out of func_089ea03c */
}

/* func_089eaf74  0x089eaf74..0x089eafb8  68 bytes, source=sweep */
void func_089eaf74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eaf74u);
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
    { c->r[31] = 0x089eafa4u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eaf74 */
}

/* func_089eefc8  0x089eefc8..0x089eefec  36 bytes, source=residue */
void func_089eefc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eefc8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0x00000010u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eefc8 */
}

/* func_089f0bc0  0x089f0bc0..0x089f0c04  68 bytes, source=sweep */
void func_089f0bc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0bc0u);
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
    { c->r[31] = 0x089f0bf0u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0bc0 */
}

/* func_089f22d8  0x089f22d8..0x089f23b0  216 bytes, source=fde */
void func_089f22d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f22d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x000002e0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x000005e0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000001e0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089f2318u; func_089f2544(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000340u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000640u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000220u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089f2344u; func_089f2544(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x000003a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x000006a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000260u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089f2370u; func_089f2544(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000400u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000700u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000002a0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089f239cu; func_089f2544(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f22d8 */
}

/* func_089f5658  0x089f5658..0x089f5690  56 bytes, source=sweep */
void func_089f5658(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5658u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f5658 */
}

/* func_089f7d84  0x089f7d84..0x089f8068  740 bytes, source=sweep */
void func_089f7d84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f7d84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x31000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8004; }
    c->r[2] = 0x31000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7ec8; }
    c->r[2] = 0x03000000u;
    c->r[2] = c->r[2] | 0x0005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7e44; }
    c->r[2] = 0x03000000u;
    c->r[2] = c->r[2] | 0x0001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8004; }
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[2] | 0x0003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8010; }
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[2] | 0x0005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8004; }
    c->r[2] = 0xfe000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] < 0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8010; }
    { goto L_089f8004; }
L_089f7e44:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7ea4; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8004; }
    c->r[2] = 0x06000000u;
    c->r[2] = c->r[2] | 0x0004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8004; }
    c->r[2] = 0x06000000u;
    c->r[2] = c->r[2] | 0x000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8004; }
    { goto L_089f8010; }
L_089f7ea4:
    c->r[2] = 0xcfff0000u;
    c->r[2] = c->r[2] | 0xfff8u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8010; }
    { goto L_089f8004; }
L_089f7ec8:
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x007au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8004; }
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x007au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7f6c; }
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x005du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7f48; }
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x005bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8004; }
    c->r[2] = 0xceff0000u;
    c->r[2] = c->r[2] | 0xffb3u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8010; }
    { goto L_089f8004; }
L_089f7f48:
    c->r[2] = 0xceff0000u;
    c->r[2] = c->r[2] | 0xff93u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8010; }
    { goto L_089f8004; }
L_089f7f6c:
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x0081u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8004; }
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x0081u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f7fbc; }
    c->r[2] = 0xceff0000u;
    c->r[2] = c->r[2] | 0xff84u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8010; }
    { goto L_089f8004; }
L_089f7fbc:
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x0083u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8004; }
    c->r[2] = 0x31000000u;
    c->r[2] = c->r[2] | 0x0083u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8010; }
    c->r[2] = 0xccff0000u;
    c->r[2] = c->r[2] | 0xfffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8010; }
L_089f8004:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089f8010:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[2] | 0x0009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8048; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8048; }
    { goto L_089f8054; }
L_089f8048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089f8054:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f7d84 */
}

/* func_089f9200  0x089f9200..0x089f921c  28 bytes, source=residue */
void func_089f9200(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9200u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089f9210u; c->r[4] = 0u + 0u; func_089fb39c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9200 */
}

/* func_089fa048  0x089fa048..0x089fa0b8  112 bytes, source=fde */
void func_089fa048(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa048u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fa05cu; c->r[16] = c->r[4] + 0u; func_08a05f00(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = 0u + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0x00000003u;
L_089fa070:
    c->r[2] = c->r[5] << (c->r[3] & 31u);
    c->r[2] = c->r[4] & c->r[2];
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r8(ram, c->r[16] + 0x00000000u); if (_c) goto L_089fa0a8; }
    if (c->r[2] == c->r[6]) { mem_w8(ram, c->r[16] + 0x00000000u, c->r[7]); goto L_089fa088; }
L_089fa088:
    c->r[3] = c->r[3] + 0x00000001u;
L_089fa08c:
    c->r[2] = (c->r[3] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0x0000004cu; if (_c) goto L_089fa070; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fa0a8:
    if (c->r[2] == c->r[5]) { mem_w8(ram, c->r[16] + 0x00000000u, c->r[6]); goto L_089fa088; }
    { c->r[3] = c->r[3] + 0x00000001u; goto L_089fa08c; }
    return; /* fell out of func_089fa048 */
}

/* func_089fa720  0x089fa720..0x089fa95c  572 bytes, source=fde */
void func_089fa720(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa720u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[2] = 0u | 0x8000u;
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    c->r[20] = c->r[18] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[8] = mem_r32(ram, c->r[2] + 0x00004700u);
    { int _c = ((s32)c->r[8] <= 0); c->r[17] = c->r[4] + 0u; if (_c) goto L_089fa77c; }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004704u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x0000000cu);
    c->r[4] = 0x80000000u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = ((s32)c->r[8] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[4] | 0x0021u; if (_c) goto L_089fa8c0; }
L_089fa77c:
    c->r[6] = 0u + 0u;
    c->r[3] = 0u + 0xffffffffu;
    c->r[4] = c->r[17] + 0u;
L_089fa788:
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    if (c->r[2] == c->r[3]) { c->r[2] = mem_r16(ram, c->r[18] + 0x00000006u); goto L_089fa928; }
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[2] = ((s32)c->r[6] < (s32)0x00000040u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[4] + 0x0000000cu; if (_c) goto L_089fa788; }
L_089fa7a4:
    c->r[2] = 0u + 0x00000040u;
    { int _c = (c->r[6] == c->r[2]); c->r[2] = 0u + 0x00000033u; if (_c) goto L_089fa910; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000001u);
    { int _c = (c->r[3] == c->r[2]); c->r[3] = 0u | 0xc70cu; if (_c) goto L_089fa8f4; }
    c->r[2] = mem_r16(ram, c->r[19] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[17];
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089fa7d0:
    c->r[2] = 0u | 0x8000u;
    c->r[16] = c->r[17] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[16] + 0x00004700u);
    if ((s32)c->r[3] <= 0) { c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000003u); goto L_089fa80c; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00004704u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00004708u);
    c->r[6] = mem_r32(ram, c->r[18] + 0x0000000cu);
    { c->r[31] = 0x089fa7f8u; c->r[4] = c->r[4] + c->r[2]; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00004704u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[16] + 0x00004704u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000003u);
L_089fa80c:
    c->r[2] = 0u + 0x00000070u;
    { int _c = (c->r[3] == c->r[2]); c->r[9] = 0u + 0u; if (_c) goto L_089fa8e4; }
L_089fa818:
    c->r[7] = mem_r16(ram, c->r[20] + 0x00000008u);
    c->r[18] = c->r[18] + 0x00000010u;
    { int _c = (c->r[7] == 0u); c->r[6] = 0u + 0u; if (_c) goto L_089fa8bc; }
    c->r[2] = 0x08a50000u;
    c->f[4] = mem_rf32(ram, c->r[2] + 0xffffd17cu);
    c->r[3] = 0x08a50000u;
    c->r[2] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[3] + 0xffffd180u);
    c->f[2] = mem_rf32(ram, c->r[2] + 0xffffd184u);
    c->r[5] = c->r[18] + 0u;
    c->r[8] = 0u + 0x000000c4u;
L_089fa848:
    c->r[3] = mem_r16(ram, c->r[19] + 0x00000000u);
    alx_mult(c, c->r[3], c->r[8]);
    c->r[2] = c->r[3] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[17];
    c->r[4] = c->lo;
    c->r[4] = c->r[4] + c->r[6];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[4] << 2;
    c->r[4] = c->r[4] + c->r[17];
    c->r[6] = c->r[6] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000300u, c->r[5]);
    { int _c = (c->r[9] == 0u); mem_w32(ram, c->r[5] + 0x00000034u, c->r[3]); if (_c) goto L_089fa8ac; }
    c->r[2] = mem_r16(ram, c->r[5] + 0x00000018u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[4];
    c->f[1] = c->f[1] / c->f[3];
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[1]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[5] + 0x00000018u, c->r[2]);
    c->r[7] = mem_r16(ram, c->r[20] + 0x00000008u);
L_089fa8ac:
    c->r[2] = c->r[7] & 0xffffu;
    c->r[2] = ((s32)c->r[6] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[5] + 0x00000050u; if (_c) goto L_089fa848; }
L_089fa8bc:
    c->r[4] = 0u + 0u;
L_089fa8c0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fa8e4:
    c->r[2] = 0u + 0x00000050u;
    mem_w8(ram, c->r[18] + 0x00000003u, c->r[2]);
    { c->r[9] = 0u + 0x00000001u; goto L_089fa818; }
L_089fa8f4:
    c->r[2] = mem_r16(ram, c->r[19] + 0x00000000u);
    c->r[4] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[17];
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[4]); goto L_089fa7d0; }
L_089fa910:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089fa91cu; c->r[4] = c->r[4] + 0xffffd15cu; func_089fd89c(c, ram); }
    c->r[4] = 0x80000000u;
    { c->r[4] = c->r[4] | 0x001cu; goto L_089fa8c0; }
L_089fa928:
    c->r[3] = 0u | 0x8000u;
    c->r[7] = c->r[17] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[7] + 0x00004700u);
    if ((s32)c->r[3] <= 0) { mem_w32(ram, c->r[4] + 0x00000004u, c->r[5]); goto L_089fa950; }
    c->r[3] = mem_r32(ram, c->r[7] + 0x00004704u);
    c->r[2] = mem_r32(ram, c->r[7] + 0x00004708u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
L_089fa950:
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[18]);
    { mem_w16(ram, c->r[19] + 0x00000000u, c->r[6]); goto L_089fa7a4; }
    return; /* fell out of func_089fa720 */
}

/* func_089fb1f4  0x089fb1f4..0x089fb264  112 bytes, source=sweep */
void func_089fb1f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb1f4u);
    c->r[2] = 0x08b90000u;
    c->r[3] = c->r[2] + 0x00006594u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x0000001fu;
L_089fb208:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000000cu);
    if (c->r[2] == c->r[6]) { c->r[2] = mem_r32(ram, c->r[3] + 0x00000010u); goto L_089fb228; }
L_089fb214:
    c->r[5] = c->r[5] + 0xffffffffu;
    { int _c = ((s32)c->r[5] >= 0); c->r[3] = c->r[3] + 0x00000020u; if (_c) goto L_089fb208; }
    { c->r[2] = 0u + 0u; return; }
L_089fb228:
    c->r[2] = c->r[2] - c->r[4];
    { int _c = ((s32)c->r[2] <= 0); mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]); if (_c) goto L_089fb254; }
    c->f[1] = u2f(c->r[4]);
    c->f[2] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = (f32)(s32)f2u(c->f[1]);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000004u, c->f[2]); goto L_089fb214; }
L_089fb254:
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[7]);
    { mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]); goto L_089fb214; }
    return; /* fell out of func_089fb1f4 */
}

/* func_089fbf88  0x089fbf88..0x089fbfcc  68 bytes, source=sweep */
void func_089fbf88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbf88u);
    c->r[2] = c->r[4] ^ 0x0001u;
    c->r[5] = c->r[5] ^ 0xffffu;
    c->r[5] = (c->r[5] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = 0x08b90000u;
    c->r[5] = c->r[5] & c->r[2];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[5] != 0u); c->r[4] = c->r[4] + 0x00007eb0u; if (_c) goto L_089fbfbc; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_089fbfb4:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fbfbc:
    { c->r[31] = 0x089fbfc4u; func_089fba34(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_089fbfb4; }
    return; /* fell out of func_089fbf88 */
}

/* func_089fcdf0  0x089fcdf0..0x089fceb0  192 bytes, source=sweep */
void func_089fcdf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fcdf0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[18] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[16] = alx_seh(c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { c->r[31] = 0x089fce20u; mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]); func_089fa398(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[17] + 0x00000030u);
    mem_w16(ram, c->r[17] + 0x0000003au, c->r[16]);
    c->f[0] = u2f(c->r[2]);
    c->r[2] = mem_r16(ram, c->r[17] + 0x0000002au);
    c->f[20] = (f32)(s32)f2u(c->f[0]);
    c->r[16] = c->r[16] + c->r[2];
    c->r[16] = alx_seh(c->r[16]);
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x089fce50u; c->f[20] = c->f[20] * c->f[1]; func_089fcc88(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[20] * c->f[0];
    c->f[20] = mem_rf32(ram, c->r[2] + 0xffffd268u);
    alx_c_cond_s(c, 14, c->f[20], c->f[0]);
    if ((c->fcr31 & FCR31_C) != 0u) { c->f[0] = c->f[0] - c->f[20]; goto L_089fce9c; }
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
L_089fce74:
    mem_w16(ram, c->r[17] + 0x00000048u, c->r[3]);
    { c->r[31] = 0x089fce80u; c->r[4] = c->r[18] + 0u; func_089fa460(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fce9c:
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    { c->r[3] = c->r[3] | c->r[2]; goto L_089fce74; }
    return; /* fell out of func_089fcdf0 */
}

/* func_089fe108  0x089fe108..0x089fe13c  52 bytes, source=fde */
void func_089fe108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe108u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08ba0000u;
    c->r[8] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff92dcu);
    c->r[3] = c->r[5] + 0u;
    c->r[7] = c->r[6] + 0u;
    c->r[5] = c->r[8] + 0u;
    { c->r[31] = 0x089fe130u; c->r[6] = c->r[3] + 0u; func_089fdd50(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fe108 */
}

/* func_089fefa0  0x089fefa0..0x089fefd0  48 bytes, source=sweep */
void func_089fefa0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fefa0u);
    c->r[3] = c->r[4] << 3;
    c->r[3] = c->r[3] - c->r[4];
    c->r[2] = 0x08ba0000u;
    c->r[3] = c->r[3] << 5;
    c->r[2] = c->r[2] + 0x0000008cu;
    { int _c = (c->r[5] == 0u); c->r[3] = c->r[3] + c->r[2]; if (_c) goto L_089fefc8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x0000006cu, c->r[2]); return; }
L_089fefc8:
    { mem_w32(ram, c->r[3] + 0x0000006cu, 0u); return; }
    return; /* fell out of func_089fefa0 */
}

/* func_08a017dc  0x08a017dc..0x08a0181c  64 bytes, source=residue */
void func_08a017dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a017dcu);
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000184u;
    c->r[4] = c->lo;
    c->r[4] = c->r[4] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000010u);
    { c->r[31] = 0x08a01808u; c->r[5] = c->r[29] + 0u; hle_dispatch_stub(c, ram, 0x08a24944u); /* sceAtracGetNextDecodePosition */ }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    if (c->r[2] == 0u) c->r[2] = c->r[3];
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a017dc */
}

/* func_08a02cb8  0x08a02cb8..0x08a02cf8  64 bytes, source=sweep */
void func_08a02cb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02cb8u);
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
    return; /* fell out of func_08a02cb8 */
}

/* func_08a03888  0x08a03888..0x08a038a8  32 bytes, source=sweep */
void func_08a03888(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03888u);
    c->r[2] = c->r[4] + 0u;
    vfpu_exec(c, ram, 0xd8b00000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8d10000u); /* lv.q */
    vfpu_exec(c, ram, 0x60919012u); /* vsub.t */
    vfpu_exec(c, ram, 0xe8920000u); /* sv.s */
    vfpu_exec(c, ram, 0xe8920005u); /* sv.s */
    { vfpu_exec(c, ram, 0xe892000au); /* sv.s */ return; }
    return; /* fell out of func_08a03888 */
}

/* func_08a048d0  0x08a048d0..0x08a0490c  60 bytes, source=sweep */
void func_08a048d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a048d0u);
    c->r[3] = 0x08ba0000u;
    c->r[5] = c->r[4] << 2;
    c->r[7] = c->r[3] + 0xffffaf4cu;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = c->r[5] + c->r[7];
    c->r[6] = 0x80440000u;
    c->r[5] = (c->r[4] < 0x00000004u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[5] == 0u); c->r[2] = c->r[6] | 0x0010u; if (_c) goto L_08a04900; }
    { c->r[31] = 0x08a04900u; c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a2497cu); /* sceAudioGetChannelRestLength */ }
L_08a04900:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a048d0 */
}

/* func_08a060dc  0x08a060dc..0x08a06144  104 bytes, source=sweep */
void func_08a060dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a060dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[5] = c->r[4] + 0u;
    c->r[16] = c->r[4] + 0u;
    c->r[7] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[4] = 0u + 0x0000001eu;
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[3] + 0u; if (_c) goto L_08a06130; }
    { c->r[31] = 0x08a0610cu; hle_dispatch_stub(c, ram, 0x08a246acu); /* sceKernelRegisterSubIntrHandler */ }
    c->r[5] = c->r[16] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[4] = 0u + 0x0000001eu; if (_c) goto L_08a06120; }
    { c->r[31] = 0x08a06120u; hle_dispatch_stub(c, ram, 0x08a246bcu); /* sceKernelEnableSubIntr */ }
L_08a06120:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
L_08a06124:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a06130:
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a0613cu; c->r[4] = 0u + 0x0000001eu; hle_dispatch_stub(c, ram, 0x08a246b4u); /* sceKernelReleaseSubIntrHandler */ }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a06124; }
    return; /* fell out of func_08a060dc */
}

/* func_08a0721c  0x08a0721c..0x08a074a0  644 bytes, source=sweep */
void func_08a0721c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0721cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a072a4; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000028u);
    c->r[5] = c->r[2] + 0u;
    { u32 _t = c->r[3]; c->r[31] = 0x08a07284u; c->r[6] = 0u + 0x00000001u; recomp_call_indirect(c, ram, 0x08a0727cu, _t); }
    mem_w32(ram, c->r[16] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a072a4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a07484; }
L_08a072a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a072dc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    mem_w32(ram, c->r[4] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
L_08a072dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07350; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    c->r[2] = c->r[4] - c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[5] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a07334u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000020u); func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]); goto L_08a07480; }
L_08a07350:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000028u);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07384; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08a07384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000028u);
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a073b4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07414; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a073f4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]); goto L_08a07480; }
L_08a07414:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08a0744c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
L_08a0744c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07480; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
L_08a07480:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08a07484:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a0721c */
}

/* func_08a0dca0  0x08a0dca0..0x08a0dd9c  252 bytes, source=fde */
void func_08a0dca0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0dca0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    c->r[16] = c->r[16] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    { c->r[31] = 0x08a0dcc8u; mem_w32(ram, c->r[29] + 0x00000038u, c->r[18]); func_08a0e188(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000024u);
    c->r[19] = mem_r32(ram, c->r[16] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[16] + 0x00000020u);
    c->r[20] = mem_r32(ram, c->r[16] + 0x0000000cu);
    { c->r[31] = 0x08a0dce4u; mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]); func_08a0dddc(c, ram); }
    { c->r[31] = 0x08a0dcecu; func_08a0e188(c, ram); }
    { c->r[31] = 0x08a0dcf4u; func_08a0e444(c, ram); }
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[18] = c->r[29] + 0x00000010u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = 0u + 0u;
    c->r[17] = c->r[16] + 0x00000050u;
    { c->r[31] = 0x08a0dd10u; c->r[6] = c->r[18] + 0u; func_08a0d51c(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[6] = c->r[17] + 0u;
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a0dd24u; c->r[7] = c->r[19] + 0u; func_08a0d70c(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a0dd7c; }
    c->r[16] = c->r[2] + 0x00000528u;
    c->r[4] = c->r[18] + 0u;
    c->r[7] = c->r[19] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a0dd44u; c->r[6] = 0u + 0u; func_08a0d70c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0dd74; }
    { c->r[31] = 0x08a0dd54u; c->r[4] = 0u + 0x00000004u; func_08a0e028(c, ram); }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x000004f8u;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[6] = 0x08a10000u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a0dd74u; c->r[6] = c->r[6] + 0xffffe378u; func_08a0de80(c, ram); }
L_08a0dd74:
    { c->r[31] = 0x08a0dd7cu; c->r[4] = c->r[20] + 0u; func_08a0dd9c(c, ram); }
L_08a0dd7c:
    { c->r[31] = 0x08a0dd84u; func_08a0df00(c, ram); }
    { c->r[31] = 0x08a0dd8cu; c->r[16] = c->r[4] + 0u; func_08a0e22c(c, ram); }
    { c->r[31] = 0x08a0dd94u; func_08a0e22c(c, ram); }
    { c->r[31] = 0x08a0dd9cu; c->r[4] = c->r[16] + 0u; func_08a163b0(c, ram); }
    return; /* fell out of func_08a0dca0 */
}

/* func_08a0e55c  0x08a0e55c..0x08a0e56c  16 bytes, source=sweep */
void func_08a0e55c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e55cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000660u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); return; }
    return; /* fell out of func_08a0e55c */
}

/* func_08a0f12c  0x08a0f12c..0x08a0f3a0  628 bytes, source=fde */
void func_08a0f12c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f12cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[23]);
    c->r[23] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[22]);
    c->r[22] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[18] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    { c->r[31] = 0x08a0f16cu; mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]); func_08a0f07c(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[7] = 0u + 0x00000001u; if (_c) goto L_08a0f1f4; }
    c->r[21] = mem_r32(ram, c->r[18] + 0x00000008u);
    c->r[2] = c->r[21] & 0x0010u;
    if (c->r[2] != 0u) { c->r[21] = mem_r32(ram, c->r[22] + 0x00000008u); goto L_08a0f184; }
L_08a0f184:
    c->r[16] = mem_r32(ram, c->r[22] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    c->r[16] = c->r[16] + 0xffffffffu;
    { int _c = (c->r[16] == c->r[2]); c->r[2] = c->r[21] ^ 0x0001u; if (_c) goto L_08a0f1ec; }
    c->r[2] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    c->r[3] = c->r[16] << 3;
    c->r[17] = c->r[3] + c->r[22];
L_08a0f1a8:
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    c->r[6] = c->r[23] + 0u;
    c->r[20] = alx_ext(c->r[2], 1u, 0u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[3] = (u32)((s32)c->r[2] >> 8);
    c->r[19] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[21]);
    { int _c = (c->r[20] != 0u); mem_w32(ram, c->r[29] + 0x0000000cu, 0u); if (_c) goto L_08a0f228; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0f228; }
L_08a0f1dc:
    c->r[16] = c->r[16] + 0xffffffffu;
L_08a0f1e0:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[16] != c->r[2]); c->r[17] = c->r[17] + 0xfffffff8u; if (_c) goto L_08a0f1a8; }
L_08a0f1ec:
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000004u);
    c->r[7] = (0u < c->r[2]) ? 1u : 0u;
L_08a0f1f4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
L_08a0f1f8:
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[7] + 0u;
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a0f228:
    if (c->r[6] == 0u) { c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u); goto L_08a0f24c; }
    if (c->r[19] == 0u) { c->r[6] = c->r[6] + c->r[3]; goto L_08a0f248; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[6] + c->r[3];
L_08a0f248:
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u);
L_08a0f24c:
    c->r[5] = c->r[30] + 0u;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0f260u; c->r[7] = c->r[29] + 0u; recomp_call_indirect(c, ram, 0x08a0f258u, _t); }
    if (c->r[2] == 0u) { c->r[16] = c->r[16] + 0xffffffffu; goto L_08a0f1e0; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0f38c; }
L_08a0f278:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
L_08a0f27c:
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    if (c->r[2] == 0u) { c->r[4] = mem_r32(ram, c->r[18] + 0x0000000cu); goto L_08a0f2a0; }
    if (c->r[20] != 0u) { c->r[4] = mem_r32(ram, c->r[18] + 0x0000000cu); goto L_08a0f2a0; }
    c->r[3] = alx_ins(c->r[3], 0u, 1u, 1u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[18] + 0x0000000cu);
L_08a0f2a0:
    if (c->r[4] != 0u) { c->r[3] = mem_r32(ram, c->r[18] + 0x00000000u); goto L_08a0f320; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = ((s32)c->r[6] < (s32)0x00000004u) ? 1u : 0u;
    c->r[3] = c->r[3] ^ 0x0001u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[7] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000008u, c->r[4]);
    mem_w32(ram, c->r[18] + 0x0000000cu, c->r[5]);
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[18] + 0x00000004u, c->r[6]); if (_c) goto L_08a0f1f4; }
    c->r[2] = c->r[6] & 0x0002u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[6] & 0x0001u; if (_c) goto L_08a0f300; }
    c->r[2] = mem_r8(ram, c->r[22] + 0x00000008u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[16] = c->r[16] + 0xffffffffu; if (_c) goto L_08a0f1e0; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u); goto L_08a0f1f8; }
L_08a0f300:
    { int _c = (c->r[2] == 0u); c->r[7] = 0u + 0x00000001u; if (_c) goto L_08a0f1f4; }
    c->r[2] = mem_r32(ram, c->r[22] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0xffffffffu; if (_c) goto L_08a0f1e0; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u); goto L_08a0f1f8; }
L_08a0f320:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a0f37c; }
    if (c->r[3] != 0u) { c->r[2] = mem_r32(ram, c->r[18] + 0x00000004u); goto L_08a0f360; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[3] = 0u + 0x00000008u;
    if (c->r[2] == c->r[3]) { c->r[2] = 0u + 0x00000002u; goto L_08a0f370; }
    if (c->r[4] == c->r[3]) { c->r[2] = 0u + 0x00000002u; goto L_08a0f370; }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a0f370; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000004u);
L_08a0f360:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]); goto L_08a0f1dc; }
L_08a0f370:
    c->r[7] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]); goto L_08a0f1f4; }
L_08a0f37c:
    c->r[7] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    { mem_w32(ram, c->r[18] + 0x00000000u, 0u); goto L_08a0f1f4; }
L_08a0f38c:
    { int _c = (c->r[19] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u); if (_c) goto L_08a0f27c; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000010u);
    { mem_w32(ram, c->r[29] + 0x0000000cu, c->r[2]); goto L_08a0f278; }
    return; /* fell out of func_08a0f12c */
}

/* func_08a13038  0x08a13038..0x08a1304c  20 bytes, source=sweep */
void func_08a13038(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13038u);
    c->r[3] = f2u(c->f[12]);
    c->r[2] = 0x7f800000u;
    c->r[3] = alx_ins(c->r[3], 0u, 31u, 31u);
    { c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u; return; }
    return; /* fell out of func_08a13038 */
}

/* func_08a14fbc  0x08a14fbc..0x08a154c8  1292 bytes, source=fde */
void func_08a14fbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14fbcu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    c->r[2] = (c->r[4] < c->r[5]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[22]);
    c->r[22] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[21]);
    c->r[21] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    c->r[20] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[7] + 0x00000698u, 0u); if (_c) goto L_08a150b0; }
    c->r[4] = mem_r32(ram, c->r[7] + 0x000006acu);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000350u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[4] + 0u; if (_c) goto L_08a150b0; }
L_08a1501c:
    c->r[5] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[2] = 0u + 0x00000040u;
    c->r[3] = c->r[5] & 0x00c0u;
    { int _c = (c->r[3] == c->r[2]); c->r[18] = c->r[18] + 0x00000001u; if (_c) goto L_08a154a8; }
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x000000c0u; if (_c) goto L_08a15494; }
    { int _c = (c->r[3] == c->r[2]); c->r[2] = (c->r[5] < 0x00000030u) ? 1u : 0u; if (_c) goto L_08a1547c; }
    { int _c = (c->r[2] == 0u); c->r[3] = 0x08a50000u; if (_c) goto L_08a154c0; }
    c->r[2] = c->r[5] << 2;
    c->r[3] = c->r[3] + 0x00001378u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a15064u: goto L_08a15064; case 0x08a15090u: goto L_08a15090; case 0x08a150e0u: goto L_08a150e0; case 0x08a15100u: goto L_08a15100; case 0x08a15120u: goto L_08a15120; case 0x08a15134u: goto L_08a15134; case 0x08a15180u: goto L_08a15180; case 0x08a151a4u: goto L_08a151a4; case 0x08a151bcu: goto L_08a151bc; case 0x08a151f8u: goto L_08a151f8; case 0x08a15264u: goto L_08a15264; case 0x08a152c4u: goto L_08a152c4; case 0x08a152f4u: goto L_08a152f4; case 0x08a15310u: goto L_08a15310; case 0x08a1532cu: goto L_08a1532c; case 0x08a15358u: goto L_08a15358; case 0x08a1538cu: goto L_08a1538c; case 0x08a153b0u: goto L_08a153b0; case 0x08a153d0u: goto L_08a153d0; case 0x08a153e4u: goto L_08a153e4; case 0x08a15428u: goto L_08a15428; case 0x08a15434u: goto L_08a15434; case 0x08a154c0u: goto L_08a154c0; default: recomp_trap_unknown_indirect(c, ram, 0x08a1505cu, _t); return; } }
L_08a15064:
    c->r[16] = mem_r8(ram, c->r[19] + 0x000006bdu);
    c->r[5] = c->r[20] + 0u;
    c->r[17] = c->r[19] + 0x000006acu;
    { c->r[31] = 0x08a15078u; c->r[4] = c->r[16] + 0u; func_08a14670(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[4] = c->r[16] + 0u;
    c->r[6] = c->r[18] + 0u;
    { c->r[31] = 0x08a1508cu; c->r[7] = c->r[17] + 0u; func_08a147a4(c, ram); }
    c->r[18] = c->r[2] + 0u;
L_08a15090:
    c->r[2] = (c->r[18] < c->r[21]) ? 1u : 0u;
L_08a15094:
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a150b0; }
    c->r[4] = mem_r32(ram, c->r[19] + 0x000006acu);
    c->r[2] = mem_r32(ram, c->r[20] + 0x00000350u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[4] + 0u; if (_c) goto L_08a1501c; }
L_08a150b0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a150e0:
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[19] + 0x000006b8u);
    c->r[18] = c->r[18] + 0x00000001u;
L_08a150ec:
    alx_mult(c, c->r[2], c->r[3]);
L_08a150f0:
    c->r[2] = c->lo;
    c->r[2] = c->r[6] + c->r[2];
L_08a150f8:
    { mem_w32(ram, c->r[19] + 0x000006acu, c->r[2]); goto L_08a15090; }
L_08a15100:
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000001u);
    c->r[3] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[19] + 0x000006b8u);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] | c->r[3];
    alx_mult(c, c->r[2], c->r[4]);
    { c->r[18] = c->r[18] + 0x00000002u; goto L_08a150f0; }
L_08a15120:
    c->r[3] = mem_r32(ram, c->r[19] + 0x000006b8u);
    c->r[2] = mem_lwl(ram, c->r[18] + 0x00000003u, c->r[2]);
    c->r[2] = mem_lwr(ram, c->r[18] + 0x00000000u, c->r[2]);
    { c->r[18] = c->r[18] + 0x00000004u; goto L_08a150ec; }
L_08a15134:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a15140u; c->r[5] = c->r[30] + 0x00000004u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[30] + 0u;
L_08a15148:
    { c->r[31] = 0x08a15150u; func_08a14718(c, ram); }
    c->r[4] = mem_r32(ram, c->r[19] + 0x000006b4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
L_08a15158:
    c->r[18] = c->r[2] + 0u;
    alx_mult(c, c->r[3], c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[19];
    c->r[4] = c->lo;
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]);
L_08a15178:
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[4]); goto L_08a15090; }
L_08a15180:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a1518cu; c->r[5] = c->r[30] + 0x00000004u; func_08a14718(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[19];
    { mem_w32(ram, c->r[2] + 0x00000004u, 0u); goto L_08a15090; }
L_08a151a4:
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[30] + 0x00000004u;
L_08a151ac:
    { c->r[31] = 0x08a151b4u; func_08a14718(c, ram); }
    { c->r[18] = c->r[2] + 0u; goto L_08a15090; }
L_08a151bc:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a151c8u; c->r[5] = c->r[30] + 0x00000004u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a151d4u; c->r[5] = c->r[30] + 0x00000008u; func_08a14718(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0u + 0x00000002u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[19];
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    { mem_w32(ram, c->r[2] + 0x00000004u, c->r[4]); goto L_08a15090; }
L_08a151f8:
    c->r[29] = c->r[29] + 0xfffff960u;
    { int _c = (c->r[22] == 0u); c->r[9] = c->r[29] + 0u; if (_c) goto L_08a1520c; }
    c->r[9] = c->r[22] + 0u;
    c->r[22] = mem_r32(ram, c->r[22] + 0x00000698u);
L_08a1520c:
    c->r[7] = c->r[9] + 0u;
    c->r[6] = c->r[19] + 0u;
    c->r[8] = c->r[19] + 0x00000690u;
L_08a15218:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a15218; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[4]);
    { mem_w32(ram, c->r[19] + 0x00000698u, c->r[9]); goto L_08a15090; }
L_08a15264:
    c->r[9] = mem_r32(ram, c->r[19] + 0x00000698u);
    c->r[7] = c->r[19] + 0u;
    c->r[6] = c->r[9] + 0u;
    c->r[8] = c->r[9] + 0x00000690u;
L_08a15274:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a15274; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[4]);
    mem_w32(ram, c->r[9] + 0x00000698u, c->r[22]);
    { c->r[22] = c->r[9] + 0u; goto L_08a15090; }
L_08a152c4:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a152d0u; c->r[5] = c->r[19] + 0x000006a0u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a152dcu; c->r[5] = c->r[30] + 0u; func_08a14718(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[18] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[19] + 0x000006a8u, c->r[2]);
    { mem_w32(ram, c->r[19] + 0x0000069cu, c->r[3]); goto L_08a15090; }
L_08a152f4:
    c->r[5] = c->r[19] + 0x000006a0u;
    { c->r[31] = 0x08a15300u; c->r[4] = c->r[18] + 0u; func_08a14718(c, ram); }
    c->r[18] = c->r[2] + 0u;
L_08a15304:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[19] + 0x000006a8u, c->r[2]); goto L_08a15090; }
L_08a15310:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a1531cu; c->r[5] = c->r[30] + 0u; func_08a14718(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[19] + 0x0000069cu, c->r[2]); goto L_08a15090; }
L_08a1532c:
    c->r[2] = 0u + 0x00000002u;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[30] + 0u;
    mem_w32(ram, c->r[19] + 0x000006a8u, c->r[2]);
    mem_w32(ram, c->r[19] + 0x000006a4u, c->r[18]);
L_08a15340:
    { c->r[31] = 0x08a15348u; func_08a14718(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[18] = c->r[18] + c->r[2]; goto L_08a15090; }
L_08a15358:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a15364u; c->r[5] = c->r[30] + 0x00000004u; func_08a14718(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0x00000003u;
    c->r[5] = c->r[30] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[19];
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[18]); goto L_08a15340; }
L_08a1538c:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a15398u; c->r[5] = c->r[30] + 0x00000004u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a153a4u; c->r[5] = c->r[30] + 0x0000000cu; func_08a1474c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[19] + 0x000006b4u);
    { c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu); goto L_08a15158; }
L_08a153b0:
    c->r[5] = c->r[19] + 0x000006a0u;
    { c->r[31] = 0x08a153bcu; c->r[4] = c->r[18] + 0u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a153c8u; c->r[5] = c->r[19] + 0x0000069cu; func_08a1474c(c, ram); }
    { c->r[18] = c->r[2] + 0u; goto L_08a15304; }
L_08a153d0:
    c->r[5] = c->r[19] + 0x0000069cu;
    { c->r[31] = 0x08a153dcu; c->r[4] = c->r[18] + 0u; func_08a1474c(c, ram); }
    { c->r[18] = c->r[2] + 0u; goto L_08a15090; }
L_08a153e4:
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[6] = 0u + 0x00000010u;
    c->r[7] = 0u + 0x00000001u;
    c->r[5] = 0u + 0u;
    c->r[4] = c->r[19] + 0x00000080u;
L_08a153fc:
    c->r[2] = c->r[6] + 0x00000001u;
    c->r[3] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[5]);
    c->r[6] = c->r[2] + 0u;
    c->r[5] = c->r[5] + 0x00000004u;
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[7]);
    c->r[4] = c->r[4] + 0x00000008u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); if (_c) goto L_08a153fc; }
    { c->r[2] = (c->r[18] < c->r[21]) ? 1u : 0u; goto L_08a15094; }
L_08a15428:
    c->r[5] = c->r[20] + 0x00000364u;
    { c->r[4] = c->r[18] + 0u; goto L_08a151ac; }
L_08a15434:
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a15440u; c->r[5] = c->r[30] + 0x00000004u; func_08a14718(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a1544cu; c->r[5] = c->r[30] + 0u; func_08a14718(c, ram); }
    c->r[4] = mem_r32(ram, c->r[19] + 0x000006b4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[18] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_mult(c, c->r[3], c->r[4]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[19];
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[4] = c->lo;
    { c->r[4] = 0u - c->r[4]; goto L_08a15178; }
L_08a1547c:
    c->r[3] = c->r[5] & 0x003fu;
    c->r[2] = c->r[3] << 3;
    c->r[2] = c->r[2] + c->r[19];
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]); goto L_08a15090; }
L_08a15494:
    c->r[2] = c->r[5] & 0x003fu;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[30] + 0u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08a15148; }
L_08a154a8:
    c->r[3] = mem_r32(ram, c->r[19] + 0x000006b8u);
    c->r[2] = c->r[5] & 0x003fu;
    alx_mult(c, c->r[2], c->r[3]);
    c->r[2] = c->lo;
    { c->r[2] = c->r[4] + c->r[2]; goto L_08a150f8; }
L_08a154c0:
    { c->r[31] = 0x08a154c8u; func_08a19084(c, ram); }
    return; /* fell out of func_08a14fbc */
}

/* func_08a170b4  0x08a170b4..0x08a170ec  56 bytes, source=fde */
void func_08a170b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a170b4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[3] != 0u); if (_c) goto L_08a170d4; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a170cc:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a170d4:
    { c->r[31] = 0x08a170dcu; func_08a17098(c, ram); }
    { c->r[31] = 0x08a170e4u; c->r[4] = c->r[2] + 0u; func_08a19594(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a170cc; }
    return; /* fell out of func_08a170b4 */
}

/* func_08a18f9c  0x08a18f9c..0x08a18fa4  8 bytes, source=residue */
void func_08a18f9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18f9cu);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18f9c */
}

/* func_08a19ec4  0x08a19ec4..0x08a19f7c  184 bytes, source=sweep */
void func_08a19ec4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19ec4u);
    c->r[2] = (c->r[6] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[4] + 0u; if (_c) goto L_08a19f5c; }
    c->r[7] = c->r[4] & 0x0003u;
    if (c->r[7] == 0u) { c->r[5] = c->r[5] & 0x00ffu; goto L_08a19f04; }
    c->r[2] = (c->r[7] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a19f00; }
L_08a19ee8:
    c->r[2] = (c->r[7] < 0x00000004u) ? 1u : 0u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[5]);
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[3] = c->r[3] + 0x00000001u;
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a19ee8; }
L_08a19f00:
    c->r[5] = c->r[5] & 0x00ffu;
L_08a19f04:
    c->r[7] = c->r[3] + 0u;
    { int _c = (c->r[5] == 0u); c->r[8] = c->r[5] + 0u; if (_c) goto L_08a19f20; }
    c->r[2] = c->r[5] << 8;
    c->r[8] = c->r[5] | c->r[2];
    c->r[3] = c->r[8] << 16;
    c->r[8] = c->r[8] | c->r[3];
L_08a19f20:
    c->r[2] = c->r[6] >> 3;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] & 0x0007u; if (_c) goto L_08a19f40; }
L_08a19f2c:
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[8]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[8]);
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[7] + 0x00000008u; if (_c) goto L_08a19f2c; }
L_08a19f40:
    c->r[2] = (c->r[6] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[7] + 0u; if (_c) goto L_08a19f5c; }
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[8]);
    c->r[6] = c->r[6] + 0xfffffffcu;
    c->r[7] = c->r[7] + 0x00000004u;
    c->r[3] = c->r[7] + 0u;
L_08a19f5c:
    { int _c = (c->r[6] == 0u); if (_c) goto L_08a19f74; }
L_08a19f64:
    c->r[6] = c->r[6] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[5]);
    { int _c = (c->r[6] != 0u); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a19f64; }
L_08a19f74:
    { c->r[2] = c->r[4] + 0u; return; }
    return; /* fell out of func_08a19ec4 */
}

/* func_08a1b008  0x08a1b008..0x08a1b020  24 bytes, source=sweep */
void func_08a1b008(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1b008u);
    c->r[2] = c->r[4] + 0x00000001u;
L_08a1b00c:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a1b00c; }
    { c->r[2] = c->r[4] - c->r[2]; return; }
    return; /* fell out of func_08a1b008 */
}

/* func_08a21470  0x08a21470..0x08a214e4  116 bytes, source=sweep */
void func_08a21470(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21470u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0u + 0x0000005cu;
    alx_mult(c, c->r[5], c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[16] = c->lo;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x08a2149cu; c->r[5] = c->r[16] + 0x0000000cu; func_08a197ec(c, ram); }
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[17] = c->r[2] + 0u;
    c->r[4] = c->r[3] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[5] = 0u + 0u;
    { int _c = (c->r[17] == 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a214cc; }
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[18]);
    mem_w32(ram, c->r[17] + 0x00000000u, 0u);
    { c->r[31] = 0x08a214c8u; mem_w32(ram, c->r[17] + 0x00000008u, c->r[3]); func_08a19ec4(c, ram); }
    c->r[2] = c->r[17] + 0u;
L_08a214cc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a21470 */
}

/* func_08a2338c  0x08a2338c..0x08a2342c  160 bytes, source=sweep */
void func_08a2338c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a2338cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    { c->r[31] = 0x08a233b4u; c->r[17] = c->r[4] + 0u; func_08a23104(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[29] + 0x00000004u;
    c->r[18] = c->r[2] + 0u;
    { c->r[31] = 0x08a233c8u; c->r[19] = c->r[3] + 0u; func_08a23104(c, ram); }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[6] = c->r[6] - c->r[4];
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[6] = c->r[6] << 5;
    c->r[4] = c->r[4] - c->r[5];
    c->r[4] = c->r[4] + c->r[6];
    { int _c = ((s32)c->r[4] <= 0); c->r[5] = c->r[4] << 20; if (_c) goto L_08a23424; }
    c->r[19] = c->r[5] + c->r[19];
L_08a233f4:
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08a23408u; c->r[7] = c->r[3] + 0u; func_08a13ee0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a23424:
    { c->r[3] = c->r[3] - c->r[5]; goto L_08a233f4; }
    return; /* fell out of func_08a2338c */
}
