#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08806528  0x08806528..0x088066dc  436 bytes, source=sweep */
void func_08806528(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806528u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08806588; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088065d4; }
L_08806588:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088065b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 31;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088065d4; }
L_088065b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088065d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 28;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_088065d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088065e0u; c->r[5] = 0u + 0x00000018u; func_08806bb0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000040u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000040u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 9;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd3000000u;
    c->r[2] = c->r[2] | 0x0001u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880669cu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0x12800000u;
    c->r[6] = c->r[6] | 0x011cu;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088066bcu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000020u); func_08807100(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088066c8u; c->r[5] = 0xd3000000u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08806528 */
}

/* func_0880749c  0x0880749c..0x088074cc  48 bytes, source=sweep */
void func_0880749c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880749cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088074b8u; c->r[5] = 0u | 0xffffu; func_08805b24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0880749c */
}

/* func_088082b8  0x088082b8..0x088082d8  32 bytes, source=sweep */
void func_088082b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088082b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088082b8 */
}

/* func_0880af9c  0x0880af9c..0x0880b068  204 bytes, source=fde */
void func_0880af9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880af9cu);
    c->r[29] = c->r[29] + 0xfffffdd0u;
    mem_w32(ram, c->r[29] + 0x00000228u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffeae0u;
    { c->r[31] = 0x0880afd0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0880afdcu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x0880afecu; c->r[4] = c->r[4] + 0x00005260u; func_089d76a0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0880b008u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 21;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 11);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffea28u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0880b038u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000004u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880b050u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_089f8920(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[29] = c->r[29] + 0x00000230u; return; }
    return; /* fell out of func_0880af9c */
}

/* func_0880d4c8  0x0880d4c8..0x0880d4fc  52 bytes, source=sweep */
void func_0880d4c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d4c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x0000014du, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d4c8 */
}

/* func_0880ebcc  0x0880ebcc..0x0880ec78  172 bytes, source=fde */
void func_0880ebcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ebccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ec40; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ebfcu; c->r[4] = c->r[4] + 0x00000330u; func_089d99c4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x000000c9u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880ec24; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015bbu;
    { c->r[31] = 0x0880ec1cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ec64; }
L_0880ec24:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015b7u;
    { c->r[31] = 0x0880ec38u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ec64; }
L_0880ec40:
    { c->r[31] = 0x0880ec48u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ec64; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880ec64u; c->r[5] = c->r[5] + 0xffffec78u; func_0880f03c(c, ram); }
L_0880ec64:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ebcc */
}

/* func_08812380  0x08812380..0x088123ac  44 bytes, source=fde */
void func_08812380(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812380u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08812398u; func_0895c14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08812380 */
}

/* func_08814784  0x08814784..0x08814858  212 bytes, source=fde */
void func_08814784(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08814784u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088147c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814840; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003du;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088147f0u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[16] = c->r[2] + 0x00000014u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08814810u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08814828u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[2] = c->r[2] + 0x0000001au;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08814840u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_08814840:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08814784 */
}

/* func_08819a54  0x08819a54..0x08819a98  68 bytes, source=sweep */
void func_08819a54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819a54u);
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
    { c->r[31] = 0x08819a84u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819a54 */
}

/* func_0881eb78  0x0881eb78..0x0881ee94  796 bytes, source=fde */
void func_0881eb78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881eb78u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0881ebacu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881ebbcu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881edd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881edd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881edd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0881ec00:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000015u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ec34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w8(ram, c->r[2] + 0x00000015u, 0u); goto L_0881ec70; }
L_0881ec34:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ec40u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000010u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ec68u; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881ec00; }
L_0881ec70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0881ec8c; }
    { goto L_0881ee7c; }
L_0881ec8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881eca0u; c->r[5] = c->r[2] + 0u; func_0881cda8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ecacu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881ecc0u; c->r[6] = 0u + 0x00007000u; func_08820df8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881ed04; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ecdcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ed04u; c->r[6] = c->r[2] + 0u; func_08820d98(c, ram); }
L_0881ed04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ed3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881ed3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_0881ed64; }
L_0881ed3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881ed64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
L_0881ed64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ed94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0881eda0; }
L_0881ed94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
L_0881eda0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881edb8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000265u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881edd8u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_0881edd8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0881edf0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881ee00u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881ee7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881ee7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ee7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ee7c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881ee70u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0881ee7cu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_0881ee7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0881eb78 */
}

/* func_08821788  0x08821788..0x088218cc  324 bytes, source=fde */
void func_08821788(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08821788u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08821878; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088217f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882180c; }
    { goto L_088218b4; }
L_088217f4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088218b4; }
    { goto L_088218b4; }
L_0882180c:
    { c->r[31] = 0x08821814u; func_08928be0(c, ram); }
    c->r[4] = 0u + 0x00000045u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08821830u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821864; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08821854u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088218b4; }
L_08821864:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08821870u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088218b4; }
L_08821878:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08821890u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088218b4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x088218b4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_088218b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08821788 */
}

/* func_08826c44  0x08826c44..0x08826c6c  40 bytes, source=sweep */
void func_08826c44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826c44u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b95u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826c44 */
}

/* func_088294a4  0x088294a4..0x088298b8  1044 bytes, source=fde */
void func_088294a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088294a4u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003f20u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088294d4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088294f8; }
    { c->r[31] = 0x088294f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089324c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088294f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829568; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08829530; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882954c; }
    { goto L_088298a4; }
L_08829530:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x0000155eu;
    { c->r[31] = 0x08829544u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_088298a4; }
L_0882954c:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x0000155fu;
    { c->r[31] = 0x08829560u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_088298a4; }
L_08829568:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829788; }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003ec8u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003fa4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08829598u; c->r[6] = 0u + 0x00000022u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003fc8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088295acu; c->r[6] = 0u + 0x00000012u; func_08a19ec4(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ed4u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829640; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e08u;
    { c->r[31] = 0x088295d8u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e1cu;
    { c->r[31] = 0x088295f0u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08829600u; c->r[5] = 0u + 0x00000040u; func_0882925c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08829610u; c->r[5] = 0u + 0x00000040u; func_0882925c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003fa4u;
    c->r[5] = 0u + 0x00000022u;
    { c->r[31] = 0x08829628u; c->r[6] = c->r[2] + 0u; func_08a06664(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003fc8u;
    c->r[5] = 0u + 0x00000012u;
    { c->r[31] = 0x08829640u; c->r[6] = c->r[2] + 0u; func_08a06664(c, ram); }
L_08829640:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882969c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829674; }
    { goto L_08829714; }
L_08829674:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088296c4; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088296ec; }
    { goto L_08829714; }
L_0882969c:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003ed4u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x088296bcu; c->r[5] = c->r[5] + 0xffff9d28u; func_0880f03c(c, ram); }
    { goto L_088298a4; }
L_088296c4:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003ed4u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x088296e4u; c->r[5] = c->r[5] + 0xffffa408u; func_0880f03c(c, ram); }
    { goto L_088298a4; }
L_088296ec:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003ed4u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0882970cu; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
    { goto L_088298a4; }
L_08829714:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08829770; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08829770; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000044u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08829750u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08829760u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003f20u, c->r[2]);
L_08829770:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829788; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08829788u; c->r[5] = 0x00010000u; func_0892ff54(c, ram); }
L_08829788:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088298a4; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088297b4; }
    { goto L_088297dc; }
L_088297b4:
    { c->r[31] = 0x088297bcu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829884; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb8u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003eb8u, c->r[2]); goto L_08829884; }
L_088297dc:
    c->r[3] = 0x08a80000u;
    c->r[3] = c->r[3] + 0x00003eb8u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08829884; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829884; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829828; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08829828u; c->r[5] = 0x00010000u; func_0892ffa8(c, ram); }
L_08829828:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08829854; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829870; }
    { goto L_08829884; }
L_08829854:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829868u; c->r[5] = c->r[5] + 0xffff98b8u; func_0880f03c(c, ram); }
    { goto L_08829884; }
L_08829870:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829884u; c->r[5] = c->r[5] + 0xffff9d28u; func_0880f03c(c, ram); }
L_08829884:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088298a4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x088298a4u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_088298a4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088294a4 */
}

/* func_0882cb44  0x0882cb44..0x0882cf28  996 bytes, source=sweep */
void func_0882cb44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882cb44u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0882cb68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882cb80; }
    { goto L_0882cdd4; }
L_0882cb80:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882cbc4; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882cba8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0882eb98(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882cbbcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0882eb5c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882cbec; }
L_0882cbc4:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882cbd4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0882eae8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882cbe8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0882eaac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0882cbec:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882cc10; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882cc0cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0882eb20(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0882cc10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882ccf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000456cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cbcu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000003du;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004574u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cc0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004570u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004570u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004490u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cb8u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882cdc4; }
L_0882ccf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000456cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000003du;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00004000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004574u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004570u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004570u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00003001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004490u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0882cdc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882cb68; }
L_0882cdd4:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ce18; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882cdfcu; c->r[5] = 0u + 0x00000009u; func_0882eb98(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882ce10u; c->r[5] = 0u + 0x00000009u; func_0882eb5c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882ce40; }
L_0882ce18:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882ce28u; c->r[5] = 0u + 0x00000009u; func_0882eae8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882ce3cu; c->r[5] = 0u + 0x00000009u; func_0882eaac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0882ce40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882ceb8; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cbcu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000045fcu, c->r[2]);
    c->r[2] = 0u + 0x0000003du;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x000045fau, c->r[2]);
    c->r[2] = 0u + 0x00001000u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x000045f8u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cc0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004604u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00004602u, 0u);
    c->r[2] = 0u + 0x00001001u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00004600u, c->r[2]);
    c->r[2] = 0x00420000u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x0000455cu, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cb8u);
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004558u, c->r[2]); goto L_0882cf14; }
L_0882ceb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000045fcu, c->r[2]);
    c->r[2] = 0u + 0x0000003du;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x000045fau, c->r[2]);
    c->r[2] = 0u + 0x00004000u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x000045f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004604u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00004602u, 0u);
    c->r[2] = 0u + 0x00003001u;
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00004600u, c->r[2]);
    c->r[2] = 0x00400000u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x0000455cu, c->r[2]);
    c->r[2] = 0u + 0x000002c2u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004558u, c->r[2]);
L_0882cf14:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0882cb44 */
}

/* func_08831454  0x08831454..0x08831490  60 bytes, source=fde */
void func_08831454(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831454u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x0883147cu; c->r[7] = 0u + 0x00000002u; func_088310d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08831454 */
}

/* func_0883327c  0x0883327c..0x08833320  164 bytes, source=fde */
void func_0883327c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883327cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088332a4u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088332b8u; c->r[5] = 0u + 0x00000001u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088332c4u; c->r[5] = 0u + 0x00000001u; func_0882f514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088332d4u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088332e4u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x088332fcu; c->r[6] = 0u + 0x00000001u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08833304u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882f418(c, ram); }
    { c->r[31] = 0x0883330cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883327c */
}

/* func_08835580  0x08835580..0x088355b8  56 bytes, source=fde */
void func_08835580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835580u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088355a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08830940(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08835580 */
}

/* func_0883a25c  0x0883a25c..0x0883a288  44 bytes, source=sweep */
void func_0883a25c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a25cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0883a274u; func_08a1a548(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0883a25c */
}

/* func_0883c47c  0x0883c47c..0x0883c608  396 bytes, source=fde */
void func_0883c47c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c47cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0883c494u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883c5ec; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001d5cu);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001d60u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001d64u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001d68u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001d6cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0883c4dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883c4f4; }
    { goto L_0883c5e0; }
L_0883c4f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0883c510u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e50u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e64u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883c5d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e50u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e64u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e50u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x0883c5d0u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
L_0883c5d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0883c4dc; }
L_0883c5e0:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0883c5f0; }
L_0883c5ec:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0883c5f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0883c47c */
}

/* func_08845d80  0x08845d80..0x08845eac  300 bytes, source=fde */
void func_08845d80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08845d80u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08845d9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845db4; }
    { goto L_08845e90; }
L_08845db4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08845dc0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08845dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845de0; }
    { goto L_08845e80; }
L_08845de0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08845df4u; c->r[6] = 0u + 0x00000002u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845e70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845e3c; }
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08845e28u; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845e70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08845e94; }
L_08845e3c:
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08845e5cu; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845e70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08845e94; }
L_08845e70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08845dc8; }
L_08845e80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08845d9c; }
L_08845e90:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08845e94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08845d80 */
}

/* func_088498e4  0x088498e4..0x08849b20  572 bytes, source=fde */
void func_088498e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088498e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088498f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849918; }
    { goto L_0884997c; }
L_08849918:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884996c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007788u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0884996cu; c->r[4] = c->r[2] + 0u; func_089b4d18(c, ram); }
L_0884996c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088498f8; }
L_0884997c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000223cu);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00002e4cu, c->f[0]);
    { c->r[31] = 0x08849994u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f38u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002240u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088499bc; }
    { goto L_088499cc; }
L_088499bc:
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f38u);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb640u, c->f[0]);
L_088499cc:
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f3cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002240u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088499f4; }
    { goto L_08849a04; }
L_088499f4:
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f3cu);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb644u, c->f[0]);
L_08849a04:
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f10u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f1cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002f90u, c->r[2]);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08849a28u; c->r[4] = c->r[4] + 0xffff8930u; func_0884d8f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08849a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849a44; }
    { goto L_08849ab8; }
L_08849a44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8968u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849aa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8968u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08849a8cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8968u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08849aa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08849a2c; }
L_08849ab8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x08849ac8u; c->r[5] = 0u + 0u; func_089f8a7c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f2cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849afc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08849ae8u; c->r[5] = 0u + 0u; func_089f76e8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08849af4u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7af4(c, ram); }
    { goto L_08849b0c; }
L_08849afc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08849b0cu; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
L_08849b0c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088498e4 */
}

/* func_0884c988  0x0884c988..0x0884cc18  656 bytes, source=fde */
void func_0884c988(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c988u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884c9f8; }
L_0884c9c8:
    { c->r[31] = 0x0884c9d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884c9c8; }
L_0884c9f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884ca1c; }
    { goto L_0884cab0; }
L_0884ca1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884ca40; }
    { goto L_0884cab0; }
L_0884ca40:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002630u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002630u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0884ca8cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0884cb0c; }
L_0884cab0:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002630u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0884caecu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0884cb0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884cb50u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0884cb70u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0884cb8cu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0884cba8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    { c->r[31] = 0x0884cbb0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884cbc8u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884cbe8u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0884cc04u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0884c988 */
}

/* func_0884e2a0  0x0884e2a0..0x0884e2c4  36 bytes, source=sweep */
void func_0884e2a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884e2a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884e2a0 */
}

/* func_08854544  0x08854544..0x0885470c  456 bytes, source=fde */
void func_08854544(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854544u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885457c; }
    { goto L_088546f8; }
L_0885457c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0x000029f4u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08854598u; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_0885459c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088545b4; }
    { goto L_088546f8; }
L_088545b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088545d0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088545e8; }
    { goto L_088546e8; }
L_088545e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854694; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854604u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854614u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885463c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885463c; }
    { goto L_088546e8; }
L_0885463c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854660; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08854660; }
    { goto L_088546e8; }
L_08854660:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a18u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002a18u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0885468cu; c->f[13] = c->f[1]; func_089b5804(c, ram); }
    { goto L_088546e8; }
L_08854694:
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088546a0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a1cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088546c4u; func_0884c4f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088546d0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_089b9be8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { c->r[31] = 0x088546e8u; c->r[6] = c->r[2] + 0u; func_0884c314(c, ram); }
L_088546e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_0885459c; }
L_088546f8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08854544 */
}

/* func_08858b4c  0x08858b4c..0x08858fe8  1180 bytes, source=fde */
void func_08858b4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858b4cu);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858b78; }
    { goto L_08858fd4; }
L_08858b78:
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9230u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858bb8; }
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x08858b98u; c->r[4] = c->r[4] + 0x00005260u; func_0882b778(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002c94u;
    { c->r[31] = 0x08858bb0u; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9234u, 0u);
L_08858bb8:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9230u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858fd4; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9234u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08858c4c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858c0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858c24; }
    { goto L_08858fd4; }
L_08858c0c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08858fa4; }
    { goto L_08858fd4; }
L_08858c24:
    { c->r[31] = 0x08858c2cu; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858fd4; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9234u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff9234u, c->r[2]); goto L_08858fd4; }
L_08858c4c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08858c60u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08858c6cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08858c7cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08858c8cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858f4c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858cc8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858cc8; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858cc8u; c->r[5] = c->r[5] + 0x00002c9cu; func_08a1af70(c, ram); }
L_08858cc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858cfc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858cfc; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858cfcu; c->r[5] = c->r[5] + 0x00002ca8u; func_08a1af70(c, ram); }
L_08858cfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858d30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858d30; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858d30u; c->r[5] = c->r[5] + 0x00002cb4u; func_08a1af70(c, ram); }
L_08858d30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858d60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858d60; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858d60u; c->r[5] = c->r[5] + 0x00002cc0u; func_08a1af70(c, ram); }
L_08858d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858d90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858d90; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858d90u; c->r[5] = c->r[5] + 0x00002cccu; func_08a1af70(c, ram); }
L_08858d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858dc0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858dc0; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858dc0u; c->r[5] = c->r[5] + 0x00002cd8u; func_08a1af70(c, ram); }
L_08858dc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858df0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858df0; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858df0u; c->r[5] = c->r[5] + 0x00002ce4u; func_08a1af70(c, ram); }
L_08858df0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858e24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858e24; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858e24u; c->r[5] = c->r[5] + 0x00002cf0u; func_08a1af70(c, ram); }
L_08858e24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858e58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858e58; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858e58u; c->r[5] = c->r[5] + 0x00002cfcu; func_08a1af70(c, ram); }
L_08858e58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858e8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858e8c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858e8cu; c->r[5] = c->r[5] + 0x00002d08u; func_08a1af70(c, ram); }
L_08858e8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858ebc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858ebc; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858ebcu; c->r[5] = c->r[5] + 0x00002d14u; func_08a1af70(c, ram); }
L_08858ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858eec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858eec; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858eecu; c->r[5] = c->r[5] + 0x00002d20u; func_08a1af70(c, ram); }
L_08858eec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858f1c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858f1c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858f1cu; c->r[5] = c->r[5] + 0x00002d2cu; func_08a1af70(c, ram); }
L_08858f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858f4c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08858f4c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08858f4cu; c->r[5] = c->r[5] + 0x00002d38u; func_08a1af70(c, ram); }
L_08858f4c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08858f74; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002d44u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000110u);
    { c->r[31] = 0x08858f74u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000114u); func_08a1ad34(c, ram); }
L_08858f74:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08858f8cu; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9234u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff9234u, c->r[2]); goto L_08858fd4; }
L_08858fa4:
    { c->r[31] = 0x08858facu; func_0885851c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858fd4; }
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x08858fc0u; c->r[4] = c->r[4] + 0x00005260u; func_0882b7b0(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08860000u;
    { c->r[31] = 0x08858fd4u; c->r[5] = c->r[5] + 0xffff8fe8u; func_0880f03c(c, ram); }
L_08858fd4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_08858b4c */
}

/* func_0885a834  0x0885a834..0x0885a864  48 bytes, source=sweep */
void func_0885a834(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a834u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a834 */
}

/* func_0885c3b0  0x0885c3b0..0x0885c4f0  320 bytes, source=sweep */
void func_0885c3b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885c3b0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0885c3cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c3ec; }
    { goto L_0885c480; }
L_0885c3ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c470; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000001u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001460u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0885c470:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0885c3cc; }
L_0885c480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00001489u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c4dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00001489u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000147eu);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0885c4dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885c3b0 */
}

/* func_08861694  0x08861694..0x08861794  256 bytes, source=sweep */
void func_08861694(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861694u);
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
    return; /* fell out of func_08861694 */
}

/* func_08862788  0x08862788..0x0886289c  276 bytes, source=sweep */
void func_08862788(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862788u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[4] ^ c->r[2];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000002u);
    c->r[2] = c->r[4] ^ c->r[2];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] << 1;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] ^ c->r[2];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] << 2;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] >> 6;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] << 3;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000006u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08862874; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000007u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08862874; }
    { goto L_08862880; }
L_08862874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08862880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862788 */
}

/* func_08866aa8  0x08866aa8..0x08866af0  72 bytes, source=sweep */
void func_08866aa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866aa8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000012cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866ae0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
L_08866ae0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08866aa8 */
}

/* func_0886e740  0x0886e740..0x0886e844  260 bytes, source=fde */
void func_0886e740(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886e740u);
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
    { c->r[31] = 0x0886e7acu; func_0880d140(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034f4u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886e7c4u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034f4u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886e7e4u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e82c; }
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
L_0886e82c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0886e740 */
}

/* func_088726ac  0x088726ac..0x088729ec  832 bytes, source=sweep */
void func_088726ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088726acu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000000a4u);
    c->f[1] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[5] + 0x000000ccu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000ccu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872728; }
    { goto L_08872734; }
L_08872728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000ccu, 0u); goto L_0887276c; }
L_08872734:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000ccu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887275c; }
    { goto L_0887276c; }
L_0887275c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    mem_wf32(ram, c->r[2] + 0x000000ccu, c->f[0]);
L_0887276c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000acu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000d0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000d0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088727b8; }
    { goto L_088727c4; }
L_088727b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000d0u, 0u); goto L_088727fc; }
L_088727c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000d0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088727ec; }
    { goto L_088727fc; }
L_088727ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    mem_wf32(ram, c->r[2] + 0x000000d0u, c->f[0]);
L_088727fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000acu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = c->f[2] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887284c; }
    { goto L_08872854; }
L_0887284c:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08872884; }
L_08872854:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872878; }
    { goto L_08872884; }
L_08872878:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_08872884:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000104u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f8u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088728d4; }
    { goto L_088728dc; }
L_088728d4:
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0887290c; }
L_088728dc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872900; }
    { goto L_0887290c; }
L_08872900:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_0887290c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887292c; }
    { goto L_08872934; }
L_0887292c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_08872934:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000d0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000d4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000ccu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088729ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000d0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088729ac; }
    { goto L_088729c4; }
L_088729ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] | 0x0008u;
    { mem_w32(ram, c->r[3] + 0x0000021cu, c->r[2]); goto L_088729dc; }
L_088729c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffff7u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_088729dc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088726ac */
}

/* func_0887c2e8  0x0887c2e8..0x0887c318  48 bytes, source=sweep */
void func_0887c2e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887c2e8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0887c304u; c->r[5] = 0u | 0xffffu; func_0887bed0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0887c2e8 */
}

/* func_088815c8  0x088815c8..0x08881760  408 bytes, source=fde */
void func_088815c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088815c8u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08881604u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08881620; }
    { c->r[31] = 0x08881618u; func_08820f58(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888162c; }
L_08881620:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_08881748; }
L_0888162c:
    { c->r[31] = 0x08881634u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0888164cu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08881658u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888167c; }
    { goto L_088816bc; }
L_0888167c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888169c; }
    { goto L_088816bc; }
L_0888169c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088816f8; }
L_088816bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088816dc; }
    { goto L_088816f8; }
L_088816dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088816f8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a74u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a78u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0888173cu; c->f[12] = c->f[0]; func_089f6fc4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_08881748:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088815c8 */
}

/* func_0888346c  0x0888346c..0x08883490  36 bytes, source=residue */
void func_0888346c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888346cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe6c4u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0888346c */
}

/* func_0888b984  0x0888b984..0x0888b9c8  68 bytes, source=sweep */
void func_0888b984(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b984u);
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
    return; /* fell out of func_0888b984 */
}

/* func_0888c5b4  0x0888c5b4..0x0888c604  80 bytes, source=sweep */
void func_0888c5b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c5b4u);
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
    { c->r[31] = 0x0888c5f0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c5b4 */
}

/* func_0888d260  0x0888d260..0x0888d2f0  144 bytes, source=sweep */
void func_0888d260(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d260u);
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
    { c->r[31] = 0x0888d2a0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xb1000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d2c4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xc4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d2dcu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d260 */
}

/* func_0888fd6c  0x0888fd6c..0x088900ac  832 bytes, source=fde */
void func_0888fd6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888fd6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
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
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000052c0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0888fde4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0888fe44u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0888fe54u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0888fe68u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0888fe80u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888fec8u; c->r[5] = 0u + 0x00000007u; func_0888b894(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x0888ff14u; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ff60u; c->r[6] = 0u + 0u; func_089debc4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0888ffacu; c->r[5] = mem_r32(ram, c->r[3] + 0x00000014u); func_0888bdb4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888ffb8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0889487c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08890000u; c->r[5] = 0u + 0x00000007u; func_0888b858(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x0889004cu; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08890098u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888fd6c */
}

/* func_0889487c  0x0889487c..0x08894d8c  1296 bytes, source=fde */
void func_0889487c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889487cu);
    c->r[29] = c->r[29] + 0xfffffd30u;
    mem_w32(ram, c->r[29] + 0x000002c4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002c0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088948a0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000008u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000413cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004140u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004144u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->f[1] = c->f[0] / c->f[1];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889498c; }
L_0889495c:
    { c->r[31] = 0x08894964u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889495c; }
L_0889498c:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000414cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    { c->r[31] = 0x088949c0u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000414cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000414cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    { c->r[31] = 0x08894a14u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000414cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    { c->r[31] = 0x08894a68u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    { c->r[31] = 0x08894abcu; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000140u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08894b34; }
L_08894b04:
    { c->r[31] = 0x08894b0cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08894b04; }
L_08894b34:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08894b54u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08894b9cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000015cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08894becu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000016cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08894c34u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000178u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000240u;
    { c->r[31] = 0x08894c60u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08894c74u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000280u;
    { c->r[31] = 0x08894c80u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000280u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004148u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x08894ca4u; c->f[14] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000280u;
    c->r[3] = c->r[30] + 0x00000280u;
    c->r[6] = c->r[30] + 0x00000240u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08894cbcu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08894cc8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08894ce4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_08a0f760(c, ram); }
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002b8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002b4u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000128u, 0u);
L_08894d08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08894d20; }
    { goto L_08894d60; }
L_08894d20:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000280u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08894d50u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]); goto L_08894d08; }
L_08894d60:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08894d78u; c->r[6] = c->r[3] + 0u; func_08894d8c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002c4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002c0u);
    { c->r[29] = c->r[29] + 0x000002d0u; return; }
    return; /* fell out of func_0889487c */
}

/* func_088999f0  0x088999f0..0x08899acc  220 bytes, source=sweep */
void func_088999f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088999f0u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08899a84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08899a48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08899a70; }
    { goto L_08899ab8; }
L_08899a48:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08899a98; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08899aac; }
    { goto L_08899ab8; }
L_08899a70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899a7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08899b88(c, ram); }
    { goto L_08899ab8; }
L_08899a84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899a90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08899c88(c, ram); }
    { goto L_08899ab8; }
L_08899a98:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899aa4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08899d58(c, ram); }
    { goto L_08899ab8; }
L_08899aac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899ab8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08899e28(c, ram); }
L_08899ab8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088999f0 */
}

/* func_0889a894  0x0889a894..0x0889a8c8  52 bytes, source=sweep */
void func_0889a894(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a894u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000122u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000122u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a894 */
}

/* func_0889f3c0  0x0889f3c0..0x0889f5e0  544 bytes, source=sweep */
void func_0889f3c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f3c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889f5cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000435cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0889f40cu: goto L_0889f40c; case 0x0889f420u: goto L_0889f420; case 0x0889f434u: goto L_0889f434; case 0x0889f448u: goto L_0889f448; case 0x0889f45cu: goto L_0889f45c; case 0x0889f470u: goto L_0889f470; case 0x0889f484u: goto L_0889f484; case 0x0889f498u: goto L_0889f498; case 0x0889f4acu: goto L_0889f4ac; case 0x0889f4c0u: goto L_0889f4c0; case 0x0889f4d4u: goto L_0889f4d4; case 0x0889f4e8u: goto L_0889f4e8; case 0x0889f4fcu: goto L_0889f4fc; case 0x0889f510u: goto L_0889f510; case 0x0889f528u: goto L_0889f528; case 0x0889f540u: goto L_0889f540; case 0x0889f558u: goto L_0889f558; case 0x0889f570u: goto L_0889f570; case 0x0889f584u: goto L_0889f584; case 0x0889f598u: goto L_0889f598; case 0x0889f5acu: goto L_0889f5ac; case 0x0889f5c0u: goto L_0889f5c0; default: recomp_trap_unknown_indirect(c, ram, 0x0889f404u, _t); return; } }
L_0889f40c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f418u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f718(c, ram); }
    { goto L_0889f5cc; }
L_0889f420:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f42cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f75c(c, ram); }
    { goto L_0889f5cc; }
L_0889f434:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f440u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fba8(c, ram); }
    { goto L_0889f5cc; }
L_0889f448:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f454u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f7a0(c, ram); }
    { goto L_0889f5cc; }
L_0889f45c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f468u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f7e4(c, ram); }
    { goto L_0889f5cc; }
L_0889f470:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f47cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f828(c, ram); }
    { goto L_0889f5cc; }
L_0889f484:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f490u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f86c(c, ram); }
    { goto L_0889f5cc; }
L_0889f498:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f4a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f8b0(c, ram); }
    { goto L_0889f5cc; }
L_0889f4ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f4b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f8f4(c, ram); }
    { goto L_0889f5cc; }
L_0889f4c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f4ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f938(c, ram); }
    { goto L_0889f5cc; }
L_0889f4d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f4e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f97c(c, ram); }
    { goto L_0889f5cc; }
L_0889f4e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f4f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889f9c0(c, ram); }
    { goto L_0889f5cc; }
L_0889f4fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f508u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fa04(c, ram); }
    { goto L_0889f5cc; }
L_0889f510:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0889f520u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fa48(c, ram); }
    { goto L_0889f5cc; }
L_0889f528:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0889f538u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fa48(c, ram); }
    { goto L_0889f5cc; }
L_0889f540:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889f550u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fa48(c, ram); }
    { goto L_0889f5cc; }
L_0889f558:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0889f568u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fa48(c, ram); }
    { goto L_0889f5cc; }
L_0889f570:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f57cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fa98(c, ram); }
    { goto L_0889f5cc; }
L_0889f584:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f590u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fadc(c, ram); }
    { goto L_0889f5cc; }
L_0889f598:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f5a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fb20(c, ram); }
    { goto L_0889f5cc; }
L_0889f5ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f5b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fb64(c, ram); }
    { goto L_0889f5cc; }
L_0889f5c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f5ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889fc54(c, ram); }
L_0889f5cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f3c0 */
}

/* func_088a0618  0x088a0618..0x088a063c  36 bytes, source=sweep */
void func_088a0618(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a0618u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001cd8u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088a0618 */
}

/* func_088a4308  0x088a4308..0x088a434c  68 bytes, source=sweep */
void func_088a4308(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4308u);
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
    { c->r[31] = 0x088a4338u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4308 */
}

/* func_088adc24  0x088adc24..0x088adc68  68 bytes, source=sweep */
void func_088adc24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adc24u);
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
    { c->r[31] = 0x088adc54u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adc24 */
}

/* func_088b1f98  0x088b1f98..0x088b1fd4  60 bytes, source=sweep */
void func_088b1f98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b1f98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088b1fc0u; c->r[6] = 0u + 0u; func_088b2608(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b1f98 */
}

/* func_088b2e38  0x088b2e38..0x088b2ee8  176 bytes, source=sweep */
void func_088b2e38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2e38u);
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
    { c->r[31] = 0x088b2e80u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2ea4u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2eb0u; c->r[5] = 0x15000000u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2ed4u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088b2e38 */
}

/* func_088ba2e8  0x088ba2e8..0x088ba4f4  524 bytes, source=fde */
void func_088ba2e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba2e8u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a74u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ba330u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ba33cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088ba348u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088ba354u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088ba360u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088ba374u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ba38cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ba3a0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ba3acu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    { c->r[31] = 0x088ba3b8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088ba3d4u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088ba3f0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c8u);
    { c->r[31] = 0x088ba3e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000ccu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[3]);
L_088ba3f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00004a78u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088ba40cu; c->r[7] = mem_r32(ram, c->r[7] + 0x00004a7cu); func_08a143ac(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088ba41c; }
    { goto L_088ba424; }
L_088ba41c:
    { mem_w32(ram, c->r[30] + 0x000000c0u, 0u); goto L_088ba4dc; }
L_088ba424:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ba438u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ba44cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ba460u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a74u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba488; }
    { goto L_088ba498; }
L_088ba488:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a74u);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_088ba4c8; }
L_088ba498:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a80u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba4bc; }
    { goto L_088ba4c8; }
L_088ba4bc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a80u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088ba4c8:
    { c->r[31] = 0x088ba4d0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_08a0fa04(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
L_088ba4dc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_088ba2e8 */
}

/* func_088be8a4  0x088be8a4..0x088be8e4  64 bytes, source=residue */
void func_088be8a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be8a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088be8d0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bf340(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be8a4 */
}

/* func_088bf600  0x088bf600..0x088bf634  52 bytes, source=sweep */
void func_088bf600(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf600u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    vfpu_exec(c, ram, 0xd8410000u); /* lv.q */
    vfpu_exec(c, ram, 0x64818100u); /* vdot.t */
    vfpu_exec(c, ram, 0xebc00004u); /* sv.s */
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf600 */
}

/* func_088c25d8  0x088c25d8..0x088c264c  116 bytes, source=fde */
void func_088c25d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c25d8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000040u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c2638u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c25d8 */
}

/* func_088c89b4  0x088c89b4..0x088c8af0  316 bytes, source=sweep */
void func_088c89b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c89b4u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c8a0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8a0cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
L_088c8a0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c8a60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8a3cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8a60u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
L_088c8a60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c8ab4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8a90u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8ab4u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
L_088c8ab4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8adcu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c89b4 */
}

/* func_088c9a44  0x088c9a44..0x088ca600  3004 bytes, source=fde */
void func_088c9a44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c9a44u);
    c->r[29] = c->r[29] + 0xfffffe50u;
    mem_w32(ram, c->r[29] + 0x000001acu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000001a8u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000001a4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x000001a0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088c9a70u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088c9a7cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005018u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000501cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005020u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c9acc; }
    { goto L_088c9b14; }
L_088c9acc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000501cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005020u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[4] + 0x00000038u, c->f[0]); goto L_088c9ba8; }
L_088c9b14:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000501cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005020u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000501cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005020u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c9b8c; }
    { goto L_088c9ba8; }
L_088c9b8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005024u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
L_088c9ba8:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c9bb4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088c9bccu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c9becu; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c9c08u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c9c3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088c9c3c; }
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088c9c3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ca410; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca410; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca410; }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c9c84u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c9c90u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088c9cb0u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e48u); func_0884c120(c, ram); }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c9d30; }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088c9d00u; func_0880d140(c, ram); }
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
    { mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]); goto L_088c9d6c; }
L_088c9d30:
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088c9d4cu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
L_088c9d6c:
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005028u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c9e1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c9dec; }
    { mem_w32(ram, c->r[30] + 0x00000090u, 0u); goto L_088c9e1c; }
L_088c9dec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000005u;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000502cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
L_088c9e1c:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088c9e28u; c->r[4] = c->r[2] + 0u; func_088d0dbc(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005028u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c9e9cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005028u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c9edcu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005028u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c9f1cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c9f78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    { mem_wf32(ram, c->r[30] + 0x00000190u, c->f[0]); goto L_088c9f84; }
L_088c9f78:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005030u);
    mem_wf32(ram, c->r[30] + 0x00000190u, c->f[0]);
L_088c9f84:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000190u);
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c9fb0; }
    { goto L_088ca248; }
L_088c9fb0:
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c9fbcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c9fd0u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    { c->r[31] = 0x088c9fdcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c9ff8u; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000044u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ca018u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x088ca024u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000110u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ca044u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x088ca050u; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000130u;
    { c->r[31] = 0x088ca060u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca074u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca088u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000140u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005034u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca0b4; }
    { goto L_088ca158; }
L_088ca0b4:
    c->r[2] = c->r[30] + 0x00000150u;
    { c->r[31] = 0x088ca0c0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000150u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[6] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca0d8u; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000160u;
    { c->r[31] = 0x088ca0e4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000160u;
    c->r[3] = c->r[30] + 0x00000150u;
    c->r[6] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca0fcu; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000160u;
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca110u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x088ca11cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ca138u; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000048u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ca158u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
L_088ca158:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088ca164u; c->r[4] = c->r[2] + 0u; func_088caa0c(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x088ca170u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ca188u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca19cu; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000180u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca1c4; }
    { goto L_088ca370; }
L_088ca1c4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005038u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca1e8; }
    { goto L_088ca370; }
L_088ca1e8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005034u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca22c; }
    { c->r[31] = 0x088ca20cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000180u); func_08a0fa04(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca22c; }
    { goto L_088ca370; }
L_088ca22c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088ca370; }
L_088ca248:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088ca254u; c->r[4] = c->r[2] + 0u; func_088caa0c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ca2ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000052u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088ca370; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000052u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ca2a4u; c->r[6] = c->r[2] + 0u; func_0899ebf0(c, ram); }
    { goto L_088ca370; }
L_088ca2ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca370; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088ca2d0u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca358; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ca310; }
    { c->r[31] = 0x088ca2f4u; func_089345dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca358; }
    c->r[4] = 0u + 0x00000009u;
    { c->r[31] = 0x088ca308u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
    { goto L_088ca358; }
L_088ca310:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ca358; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ca358; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca358; }
    c->r[4] = 0u + 0x00000019u;
    { c->r[31] = 0x088ca358u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088ca358:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
L_088ca370:
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
    c->r[17] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[5] = c->r[30] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ca3b8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000160u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005028u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ca3e0u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x088ca408u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ca870(c, ram); }
    { goto L_088ca440; }
L_088ca410:
    { c->r[31] = 0x088ca418u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ca870(c, ram); }
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
L_088ca440:
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000184u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088ca460u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c96f8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ca54c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ca54c; }
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x088ca490u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ca4acu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x088ca4b8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000180u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca4dc; }
    { goto L_088ca504; }
L_088ca4dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088ca4f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000184u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000188u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088ca54c; }
L_088ca504:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088ca51cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000018cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000018cu);
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
L_088ca54c:
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088ca56cu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca584u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca598u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ca5bcu; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000001acu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000001a8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000001a4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000001a0u);
    { c->r[29] = c->r[29] + 0x000001b0u; return; }
    return; /* fell out of func_088c9a44 */
}

/* func_088d1e64  0x088d1e64..0x088d2064  512 bytes, source=fde */
void func_088d1e64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d1e64u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d1e94u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088d1ea8u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052f8u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052f8u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d1f40; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052fcu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]); goto L_088d1f50; }
L_088d1f40:
    c->f[0] = u2f(0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
L_088d1f50:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005300u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d1f84u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d1fa0u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088d1fb0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d1fccu; c->r[5] = 0u + 0x00000001u; func_08885c0c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d1fe0u; c->r[5] = 0u + 0u; func_089c1bf4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1ff8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
L_088d1ff8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d204c; }
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
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
L_088d204c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_088d1e64 */
}

/* func_088d5f9c  0x088d5f9c..0x088d6270  724 bytes, source=fde */
void func_088d5f9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d5f9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aeu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088d5fccu; c->r[5] = c->r[2] + 0u; func_088daed0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000021u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d6008; }
    { goto L_088d625c; }
L_088d6008:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6020; }
    { goto L_088d625c; }
L_088d6020:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6038; }
    { goto L_088d625c; }
L_088d6038:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6050; }
    { goto L_088d625c; }
L_088d6050:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6068; }
    { goto L_088d625c; }
L_088d6068:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6080; }
    { goto L_088d625c; }
L_088d6080:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6098; }
    { goto L_088d625c; }
L_088d6098:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d60b0; }
    { goto L_088d625c; }
L_088d60b0:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088d60d0u; c->r[5] = c->r[2] + 0u; func_089ca128(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088d60d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d60ec; }
    { goto L_088d61f8; }
L_088d60ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6104; }
    { goto L_088d61e8; }
L_088d6104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d6118; }
    { goto L_088d61e8; }
L_088d6118:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6130; }
    { goto L_088d61e8; }
L_088d6130:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6148; }
    { goto L_088d61e8; }
L_088d6148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6160; }
    { goto L_088d61e8; }
L_088d6160:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6178; }
    { goto L_088d61e8; }
L_088d6178:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6190; }
    { goto L_088d61e8; }
L_088d6190:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d61a8; }
    { goto L_088d61e8; }
L_088d61a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d61c0; }
    { goto L_088d61e8; }
L_088d61c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088d61d8u; c->r[5] = c->r[2] + 0u; func_089c9d8c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d61e8; }
    { goto L_088d61f8; }
L_088d61e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088d60d4; }
L_088d61f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000028u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6218; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088d6218u; c->r[5] = 0u + 0x00000028u; func_089ca128(c, ram); }
L_088d6218:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001fu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088d6254; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001fu);
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088d6254u; c->r[5] = c->r[2] + 0u; func_089ca128(c, ram); }
L_088d6254:
    { c->r[31] = 0x088d625cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dae98(c, ram); }
L_088d625c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d5f9c */
}

/* func_088da5a4  0x088da5a4..0x088da5f4  80 bytes, source=sweep */
void func_088da5a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088da5a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088da5d8; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088da5e0; }
L_088da5d8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088da5e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088da5a4 */
}

/* func_088de7dc  0x088de7dc..0x088de8f8  284 bytes, source=sweep */
void func_088de7dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de7dcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de8ac; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088de844u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b7cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088de864u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088de888u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088de8e0; }
L_088de8ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_088de8e0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088de7dc */
}

/* func_088df670  0x088df670..0x088df784  276 bytes, source=sweep */
void func_088df670(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df670u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df694; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df770; }
L_088df694:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088df6b4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df770; }
L_088df6b4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df6e4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df770; }
L_088df6e4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df714; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df770; }
L_088df714:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088df748; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df770; }
L_088df748:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
L_088df770:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df670 */
}

/* func_088e5e88  0x088e5e88..0x088e60b4  556 bytes, source=sweep */
void func_088e5e88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e5e88u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6000; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e5eec; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e5f04; }
    { goto L_088e609c; }
L_088e5eec:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6054; }
    { goto L_088e609c; }
L_088e5f04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d98u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x0000003cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d9cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e5f74u; func_0880d140(c, ram); }
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005da0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005da0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005da4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e5fd0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e609c; }
L_088e6000:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e6034; }
    { goto L_088e609c; }
L_088e6034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d9cu);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e609c; }
L_088e6054:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e608c; }
    { goto L_088e609c; }
L_088e608c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e609c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e5e88 */
}

/* func_088ea94c  0x088ea94c..0x088eb394  2632 bytes, source=fde */
void func_088ea94c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ea94cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088eaeec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088ea994u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088ea998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ea9ac; }
    { goto L_088eaa78; }
L_088ea9ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088eaa60; }
    { c->r[31] = 0x088ea9c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089c35d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0005u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088eaa60; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ea9f8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088eaa04u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005e94u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eaa2c; }
    { goto L_088eaa60; }
L_088eaa2c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005e98u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eaa50; }
    { goto L_088eaa60; }
L_088eaa50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]); goto L_088eaa78; }
L_088eaa60:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088eaa70u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088ea998; }
L_088eaa78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088eaacc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000072u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
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
    { mem_w16(ram, c->r[2] + 0x000000aau, 0u); goto L_088eb37c; }
L_088eaacc:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088eaad8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088eaafcu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088eab14u; c->r[5] = c->r[3] + 0u; func_088f0e54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eab3c; }
    { goto L_088eab4c; }
L_088eab3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_088eab4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eab74; }
    { goto L_088eab84; }
L_088eab74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_088eab84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eabac; }
    { goto L_088eabbc; }
L_088eabac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088eabbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eabe4; }
    { goto L_088eabf4; }
L_088eabe4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088eabf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088eac18u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eac40; }
    { goto L_088eac98; }
L_088eac40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eac84; }
    { goto L_088ead2c; }
L_088eac84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_088ead2c; }
L_088eac98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eacc4; }
    { goto L_088ead1c; }
L_088eacc4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ead08; }
    { goto L_088ead2c; }
L_088ead08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_088ead2c; }
L_088ead1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088ead2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ead54; }
    { goto L_088eadac; }
L_088ead54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ead98; }
    { goto L_088eae40; }
L_088ead98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_088eae40; }
L_088eadac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eadd8; }
    { goto L_088eae30; }
L_088eadd8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eae1c; }
    { goto L_088eae40; }
L_088eae1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_088eae40; }
L_088eae30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088eae40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088eae9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088eae9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088eae9c; }
    { goto L_088eaec8; }
L_088eae9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000030u);
    { c->r[31] = 0x088eaec8u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0885a0b8(c, ram); }
L_088eaec8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088eaee4u; c->r[7] = 0u + 0x00000007u; func_088db4a0(c, ram); }
    { goto L_088eb2a0; }
L_088eaeec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eaf14; }
    { goto L_088eaf24; }
L_088eaf14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_088eaf24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eaf4c; }
    { goto L_088eaf5c; }
L_088eaf4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_088eaf5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eaf84; }
    { goto L_088eaf94; }
L_088eaf84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088eaf94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eafbc; }
    { goto L_088eafcc; }
L_088eafbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088eafcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088eaff0u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb018; }
    { goto L_088eb070; }
L_088eb018:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb05c; }
    { goto L_088eb104; }
L_088eb05c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_088eb104; }
L_088eb070:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb09c; }
    { goto L_088eb0f4; }
L_088eb09c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb0e0; }
    { goto L_088eb104; }
L_088eb0e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_088eb104; }
L_088eb0f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088eb104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb12c; }
    { goto L_088eb184; }
L_088eb12c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb170; }
    { goto L_088eb218; }
L_088eb170:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_088eb218; }
L_088eb184:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb1b0; }
    { goto L_088eb208; }
L_088eb1b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb1f4; }
    { goto L_088eb218; }
L_088eb1f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_088eb218; }
L_088eb208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088eb218:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088eb274; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088eb274; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088eb274; }
    { goto L_088eb2a0; }
L_088eb274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000030u);
    { c->r[31] = 0x088eb2a0u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0885a0b8(c, ram); }
L_088eb2a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005e9cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb2c8; }
    { goto L_088eb36c; }
L_088eb2c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088eb320; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x000000bcu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000bcu, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088eb318u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000bcu); func_088ef5b0(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x000000bcu, c->f[0]); goto L_088eb330; }
L_088eb320:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
L_088eb330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088eb37c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x000000c0u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088eb364u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000c0u); func_088ef5b0(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x000000c0u, c->f[0]); goto L_088eb37c; }
L_088eb36c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000bcu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000c0u, 0u);
L_088eb37c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ea94c */
}

/* func_088f0f28  0x088f0f28..0x088f1020  248 bytes, source=sweep */
void func_088f0f28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f0f28u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0f6c; }
    { goto L_088f0f88; }
L_088f0f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000008u, 0u); goto L_088f1008; }
L_088f0f88:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x088f0fb4u; c->f[14] = mem_rf32(ram, c->r[5] + 0x00000008u); func_0885a0b8(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f0fd8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f1008u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c26c(c, ram); }
L_088f1008:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088f0f28 */
}

/* func_088f5668  0x088f5668..0x088f582c  452 bytes, source=fde */
void func_088f5668(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f5668u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088f568cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f56a4; }
    { goto L_088f5818; }
L_088f56a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e4u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f56c4; }
    { goto L_088f5818; }
L_088f56c4:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f56f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088f56f0u; c->r[5] = c->r[5] + 0x00006208u; func_089b9864(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f5720; }
L_088f56f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088f5708u; c->r[5] = c->r[5] + 0x00006210u; func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088f571cu; c->r[5] = c->r[5] + 0x00006218u; func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088f5720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088f579c; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f5738u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f5758u; func_0880d140(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f5764u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089b9b8c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f5774u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f5788u; c->r[5] = c->r[3] + 0u; func_088f9fec(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f579cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0884c6d4(c, ram); }
L_088f579c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088f5818; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f57b4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f57d4u; func_0880d140(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f57e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089b9b8c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f57f0u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f5804u; c->r[5] = c->r[3] + 0u; func_088f9fec(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f5818u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0884c6d4(c, ram); }
L_088f5818:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088f5668 */
}

/* func_088faf58  0x088faf58..0x088faf90  56 bytes, source=sweep */
void func_088faf58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088faf58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088faf7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088faf90(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088faf58 */
}

/* func_08900ad8  0x08900ad8..0x08900b08  48 bytes, source=sweep */
void func_08900ad8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900ad8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08900af4u; c->r[5] = 0u | 0xffffu; func_08900940(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08900ad8 */
}

/* func_08903438  0x08903438..0x089034d4  156 bytes, source=sweep */
void func_08903438(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903438u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0890344c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08903464; }
    { goto L_089034b8; }
L_08903464:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b18u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089034a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b18u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089034c0; }
L_089034a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0890344c; }
L_089034b8:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089034c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08903438 */
}

/* func_08907a98  0x08907a98..0x08908018  1408 bytes, source=fde */
void func_08907a98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08907a98u);
    c->r[29] = c->r[29] + 0xfffffea0u;
    mem_w32(ram, c->r[29] + 0x00000154u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000150u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[8] + 0u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08907ae0; }
    { goto L_08908004; }
L_08907ae0:
    mem_w32(ram, c->r[30] + 0x00000120u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
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
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
L_08907b14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xffffff7eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0xffffff9cu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08907b40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0xffffff9cu;
    { mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]); goto L_08907b14; }
L_08907b40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0xffffff9cu;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08907b60u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000012cu, 0u);
L_08907b68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff860u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08907b98; }
    { goto L_08908004; }
L_08907b98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000064u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907bfc; }
    { goto L_08907c4c; }
L_08907bfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066bcu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907ff4; }
L_08907c4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907cb0; }
    { goto L_08907dd0; }
L_08907cb0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066c0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907d08; }
    { goto L_08907dd0; }
L_08907d08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066c4u);
    c->f[0] = c->f[0] - c->f[1];
    { c->r[31] = 0x08907d54u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000013cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08907d70u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08907d8c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u);
    { c->r[31] = 0x08907d84u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000013cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[3]);
L_08907d8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000013cu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000066c8u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08907da8u; c->r[7] = mem_r32(ram, c->r[7] + 0x000066ccu); func_08a13ee0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08907db4u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x08907dc8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000134u); func_08903b2c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]); goto L_08907f3c; }
L_08907dd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066d0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907e1c; }
    { goto L_08907f3c; }
L_08907e1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066d4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907e68; }
    { goto L_08907f3c; }
L_08907e68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000066bcu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x08907ea8u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08907ec4u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08907ee0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    { c->r[31] = 0x08907ed8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000144u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[3]);
L_08907ee0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000066c8u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08907efcu; c->r[7] = mem_r32(ram, c->r[7] + 0x000066ccu); func_08a13ee0(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000066d8u);
    c->r[5] = 0x08a40000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x000066dcu);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08907f18u; c->r[7] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08907f24u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x08907f38u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000134u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
L_08907f3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[7] = 0u + 0x00000002u;
    c->r[9] = c->r[2] + 0u;
    c->r[10] = c->r[3] + 0u;
    { c->r[31] = 0x08907ff4u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000130u); func_089ce330(c, ram); }
L_08907ff4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]); goto L_08907b68; }
L_08908004:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000154u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000150u);
    { c->r[29] = c->r[29] + 0x00000160u; return; }
    return; /* fell out of func_08907a98 */
}

/* func_08912ea4  0x08912ea4..0x089133ec  1352 bytes, source=sweep */
void func_08912ea4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08912ea4u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xfffff960u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08913038; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff970u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006950u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006954u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006958u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08912f30u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006958u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006954u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006958u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08912f7cu; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006958u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000695cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006958u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08912fc8u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006950u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000695cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006958u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913014u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff960u, c->r[2]);
L_08913038:
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08913090; }
L_08913060:
    { c->r[31] = 0x08913068u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08913060; }
L_08913090:
    c->r[4] = 0x7f7f0000u;
    { c->r[31] = 0x0891309cu; c->r[4] = c->r[4] | 0x7f7fu; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000028u;
    { c->r[31] = 0x089130a8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089130b8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089130d4u; c->f[12] = c->f[0]; func_0884c8f0(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089130e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c6d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089130f8u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff970u;
    { c->r[31] = 0x08913110u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff980u;
    { c->r[31] = 0x0891312cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff990u;
    { c->r[31] = 0x08913148u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff9a0u;
    { c->r[31] = 0x08913164u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c26c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000001e4u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000001e5u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0x000001e5u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0x00000009u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = 0u + 0x000001e4u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = 0u + 0x00000009u;
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
    { c->r[31] = 0x08913330u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891338cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089133d8u; c->r[5] = c->r[5] | 0x0004u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_08912ea4 */
}

/* func_0891d354  0x0891d354..0x0891d41c  200 bytes, source=sweep */
void func_0891d354(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891d354u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891d388u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891d3a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0891d3a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d404; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d3ec; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891d404; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0891d404; }
L_0891d3ec:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891d404; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0891d404:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0891d354 */
}

/* func_08921430  0x08921430..0x08921474  68 bytes, source=sweep */
void func_08921430(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921430u);
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
    { c->r[31] = 0x08921460u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921430 */
}

/* func_08922628  0x08922628..0x089226a0  120 bytes, source=sweep */
void func_08922628(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08922628u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922684; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08922684; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0892268c; }
L_08922684:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0892268c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08922628 */
}

/* func_08925938  0x08925938..0x08925974  60 bytes, source=sweep */
void func_08925938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925938u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08925960u; c->r[6] = 0u + 0x00000001u; func_08925b34(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925938 */
}

/* func_08927144  0x08927144..0x08927164  32 bytes, source=residue */
void func_08927144(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08927144u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08927144 */
}

/* func_0892b8bc  0x0892b8bc..0x0892b91c  96 bytes, source=fde */
void func_0892b8bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892b8bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[7] = 0xff000000u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007050u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0892b908u; func_0892b42c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892b8bc */
}

/* func_08930cd0  0x08930cd0..0x089310fc  1068 bytes, source=fde */
void func_08930cd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930cd0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    c->r[5] = c->r[8] + 0u;
    c->r[6] = c->r[9] + 0u;
    c->r[7] = c->r[10] + 0u;
    c->r[8] = c->r[11] + 0u;
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000016u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[5]);
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[6]);
    mem_w8(ram, c->r[30] + 0x0000001eu, c->r[7]);
    mem_w8(ram, c->r[30] + 0x0000001fu, c->r[8]);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[9]);
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[10]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08930d44; }
    { goto L_089310e4; }
L_08930d44:
    { c->r[31] = 0x08930d4cu; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08930d60u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08930d68:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001fu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08930d84; }
    { goto L_08930e20; }
L_08930d84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08930e10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08930dd0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000016u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071c0u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08930df0u; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08930e10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08930e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08930d68; }
L_08930e20:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001eu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08930ec8; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001eu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08930ec8; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001eu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08930e78u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = 0xff0c0000u;
    { c->r[31] = 0x08930e8cu; c->r[5] = c->r[5] | 0x094cu; func_08933888(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000016u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001au);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08930ec8u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_08930ec8:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000016u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08930f14:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08930f30; }
    { goto L_089310a4; }
L_08930f30:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000008au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08930f64; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08930f64; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000034u);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[2] + 0x0000000fu;
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
L_08930f64:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08930fbc; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001eu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08930fbc; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08930fbcu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000058u); func_08930848(c, ram); }
L_08930fbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08930ff8; }
    c->r[2] = 0u + 0x00000006u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_0893106c; }
L_08930ff8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931030; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_0893106c; }
L_08931030:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893106c; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000000au;
    { mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08931094; }
L_0893106c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x08931088u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000058u); func_08930848(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08931094:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08930f14; }
L_089310a4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000021u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089310e4; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000032u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x089310e4u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
L_089310e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08930cd0 */
}

/* func_08933498  0x08933498..0x08933508  112 bytes, source=sweep */
void func_08933498(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933498u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089334c4; }
    { goto L_089334f8; }
L_089334c4:
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
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
L_089334f8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933498 */
}

/* func_08935cb0  0x08935cb0..0x08935ce8  56 bytes, source=fde */
void func_08935cb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935cb0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa94u);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08935cd4u; mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]); func_0893443c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08935cb0 */
}

/* func_0893bf80  0x0893bf80..0x0893bfc4  68 bytes, source=sweep */
void func_0893bf80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893bf80u);
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
    return; /* fell out of func_0893bf80 */
}

/* func_0893cc74  0x0893cc74..0x0893ccb8  68 bytes, source=fde */
void func_0893cc74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893cc74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0u + 0x0000005eu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893cca4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893cc74 */
}

/* func_0893e254  0x0893e254..0x0893e354  256 bytes, source=fde */
void func_0893e254(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e254u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffadcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0893e298u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893e2b0; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0893e33c; }
L_0893e2b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffffdcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0893e2d8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893e480(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893e334; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffadcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffedcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffffdcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0893e334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893e33c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893e254 */
}

/* func_08940530  0x08940530..0x08940574  68 bytes, source=sweep */
void func_08940530(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940530u);
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
    { c->r[31] = 0x08940560u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08940530 */
}

/* func_08945a98  0x08945a98..0x08945b90  248 bytes, source=sweep */
void func_08945a98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945a98u);
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
    { c->r[31] = 0x08945b14u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
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
    { c->r[31] = 0x08945b48u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945b74u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    { c->r[31] = 0x08945b7cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08945c60(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08945a98 */
}

/* func_08947e08  0x08947e08..0x089484f0  1768 bytes, source=fde */
void func_08947e08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08947e08u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078d0u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078d4u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947e68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_089484d4; }
L_08947e68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = (c->r[3] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08948398; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000078e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08947ea4u: goto L_08947ea4; case 0x08947eecu: goto L_08947eec; case 0x08947f5cu: goto L_08947f5c; case 0x08947f98u: goto L_08947f98; case 0x08947fd8u: goto L_08947fd8; case 0x08948018u: goto L_08948018; case 0x08948030u: goto L_08948030; case 0x08948048u: goto L_08948048; case 0x08948060u: goto L_08948060; case 0x08948074u: goto L_08948074; case 0x08948124u: goto L_08948124; case 0x08948398u: goto L_08948398; default: recomp_trap_unknown_indirect(c, ram, 0x08947e9cu, _t); return; } }
L_08947ea4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000402u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08947ec8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08947edcu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_089c77f4(c, ram); }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x008eu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08948398; }
L_08947eec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff84bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08947f34u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08947f48u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_089c77f4(c, ram); }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0028u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08948398; }
L_08947f5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = (c->r[3] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08948074; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00007938u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08947ea4u: goto L_08947ea4; case 0x08947eecu: goto L_08947eec; case 0x08947f5cu: goto L_08947f5c; case 0x08947f98u: goto L_08947f98; case 0x08947fd8u: goto L_08947fd8; case 0x08948018u: goto L_08948018; case 0x08948030u: goto L_08948030; case 0x08948048u: goto L_08948048; case 0x08948060u: goto L_08948060; case 0x08948074u: goto L_08948074; case 0x08948124u: goto L_08948124; case 0x08948398u: goto L_08948398; default: recomp_trap_unknown_indirect(c, ram, 0x08947f90u, _t); return; } }
L_08947f98:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x001fu;
    { c->r[31] = 0x08947fa8u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08947fc4; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_08947fcc; }
L_08947fc4:
    c->r[3] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[3]);
L_08947fcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08948074; }
L_08947fd8:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0024u;
    { c->r[31] = 0x08947fe8u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08948004; }
    c->r[3] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000068u, c->r[3]); goto L_0894800c; }
L_08948004:
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_0894800c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]); goto L_08948074; }
L_08948018:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0028u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08948074; }
L_08948030:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x002bu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08948074; }
L_08948048:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0028u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000010u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08948074; }
L_08948060:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x002bu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08948074:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089480a4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089480b8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_089c77f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0028u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089480e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x002bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089480e8; }
    { goto L_08948114; }
L_089480e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078d8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000024u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08948114:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    { mem_w16(ram, c->r[3] + 0x00000046u, c->r[2]); goto L_08948398; }
L_08948124:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffff7u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[16] = c->r[2] + c->r[3];
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08948168u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[16] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff84ccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000047u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089481a8; }
    { goto L_089481f4; }
L_089481a8:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0x0000004fu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089481d8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x089481ecu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_089c77f4(c, ram); }
    { goto L_08948238; }
L_089481f4:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08948224u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08948238u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_089c77f4(c, ram); }
L_08948238:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8604u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894834c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8604u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0045u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948320; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0045u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089482f0; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x003eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948320; }
    { goto L_0894834c; }
L_089482f0:
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0048u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948320; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x004fu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948320; }
    { goto L_0894834c; }
L_08948320:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000031d0u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[2] + 0u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000031d0u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894834c; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0894834c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948394; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894838c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[3] + 0xffffffedu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08948394; }
L_0894838c:
    { c->r[31] = 0x08948394u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_089467b8(c, ram); }
L_08948394:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08948398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089484cc; }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089483b4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089483c0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089483dcu; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000038u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[2] | 0x0009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948434; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948434; }
    { goto L_0894847c; }
L_08948434:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] | 0x4000u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078dcu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[3] + 0u;
    c->r[8] = c->r[2] + 0u;
    c->r[9] = 0u + 0x0000000au;
    { c->r[31] = 0x08948474u; c->f[12] = c->f[0]; func_089f6fc4(c, ram); }
    { goto L_089484a8; }
L_0894847c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089484a8u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000018u); func_088815c8(c, ram); }
L_089484a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000054u, c->f[0]);
L_089484cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_089484d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08947e08 */
}

/* func_0894c31c  0x0894c31c..0x0894c360  68 bytes, source=sweep */
void func_0894c31c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c31cu);
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
    { c->r[31] = 0x0894c34cu; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c31c */
}

/* func_089536c8  0x089536c8..0x08953798  208 bytes, source=sweep */
void func_089536c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089536c8u);
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
    return; /* fell out of func_089536c8 */
}

/* func_089558f4  0x089558f4..0x08955938  68 bytes, source=sweep */
void func_089558f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089558f4u);
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
    { c->r[31] = 0x08955924u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089558f4 */
}

/* func_089586ac  0x089586ac..0x089586f0  68 bytes, source=sweep */
void func_089586ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089586acu);
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
    { c->r[31] = 0x089586dcu; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089586ac */
}

/* func_0895b2d4  0x0895b2d4..0x0895b460  396 bytes, source=sweep */
void func_0895b2d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b2d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b444; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895b310; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b310:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b32c; }
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b32c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b348; }
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b348:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b364; }
    c->r[2] = 0u + 0x00000005u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b364:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b380; }
    c->r[2] = 0u + 0x00000006u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b380:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b39c; }
    c->r[2] = 0u + 0x00000007u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b39c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b3b8; }
    c->r[2] = 0u + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b3b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b3d4; }
    c->r[2] = 0u + 0x00000009u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b3d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b3f0; }
    c->r[2] = 0u + 0x0000000au;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b3f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b40c; }
    c->r[2] = 0u + 0x0000000bu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b40c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b428; }
    c->r[2] = 0u + 0x0000000cu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b428:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b444; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b44c; }
L_0895b444:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895b44c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b2d4 */
}

/* func_0895ed34  0x0895ed34..0x0895ee18  228 bytes, source=fde */
void func_0895ed34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895ed34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0895ed48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ed60; }
    { goto L_0895eda0; }
L_0895ed60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0895ed48; }
L_0895eda0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895edacu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895edd8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895edc0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895edd8; }
    { goto L_0895ee04; }
L_0895edd8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x1400u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895edf4; }
    { c->r[31] = 0x0895edf4u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
L_0895edf4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0895ee04u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
L_0895ee04:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895ed34 */
}

/* func_089613b4  0x089613b4..0x08961440  140 bytes, source=fde */
void func_089613b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089613b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089613dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089613ec; }
    { goto L_0896142c; }
L_089613ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_0896142c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089613b4 */
}

/* func_089643dc  0x089643dc..0x089644c4  232 bytes, source=sweep */
void func_089643dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089643dcu);
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
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0896441c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964438; }
    { goto L_089644b4; }
L_08964438:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089644a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08964498; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_089644b4; }
L_08964498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089644a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896441c; }
L_089644b4:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089643dc */
}

/* func_08966ef4  0x08966ef4..0x0896793c  2632 bytes, source=fde */
void func_08966ef4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08966ef4u);
    c->r[29] = c->r[29] + 0xfffffe30u;
    mem_w32(ram, c->r[29] + 0x000001c4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000001c0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052e8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08966f18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08966f30; }
    { goto L_08966f50; }
L_08966f30:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08966f18; }
L_08966f50:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x000000b4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08966f68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08966f84; }
    { goto L_08967788; }
L_08966f84:
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967070; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005358u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005358u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_08967070:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896712c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052f4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000535cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_0896712c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089671e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052f8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005360u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_089671e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089672a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052fcu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005364u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_089672a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896735c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005300u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005368u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_0896735c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967418; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005304u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000536cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_08967418:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089674c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005308u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005370u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_089674c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967578; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000530cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005374u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08967630; }
L_08967578:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967630; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005310u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005378u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
L_08967630:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967778; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967754; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000b4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08967680u; c->r[6] = c->r[3] + 0u; func_088da4e4(c, ram); }
    mem_w16(ram, c->r[30] + 0x000000b6u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000b6u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089676b4; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089676b4:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000b6u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089676e8; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089676e8:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000b6u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896771c; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0896771c:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000b6u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967778; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0008u;
    { mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08967778; }
L_08967754:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08967778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08966f68; }
L_08967788:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0896778c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089677a4; }
    { goto L_08967928; }
L_089677a4:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967918; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089678fc; }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff845cu;
    { c->r[31] = 0x089677e4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x089677f0u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967834; }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff8468u;
    { c->r[31] = 0x08967828u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x08967834u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
L_08967834:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967874; }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff8474u;
    { c->r[31] = 0x08967868u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x08967874u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
L_08967874:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089678b4; }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff8480u;
    { c->r[31] = 0x089678a8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x089678b4u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
L_089678b4:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967918; }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff848cu;
    { c->r[31] = 0x089678e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x089678f4u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    { goto L_08967918; }
L_089678fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08967918u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
L_08967918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0896778c; }
L_08967928:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000001c4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000001c0u);
    { c->r[29] = c->r[29] + 0x000001d0u; return; }
    return; /* fell out of func_08966ef4 */
}

/* func_089697a0  0x089697a0..0x08969804  100 bytes, source=sweep */
void func_089697a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089697a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089697f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9a5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089697f0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089697a0 */
}

/* func_0896a3e4  0x0896a3e4..0x0896a414  48 bytes, source=sweep */
void func_0896a3e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a3e4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896a3fcu; func_0896a284(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000009c2u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896a3e4 */
}

/* func_0896d35c  0x0896d35c..0x0896d67c  800 bytes, source=sweep */
void func_0896d35c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896d35cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0896d390:
    { c->r[31] = 0x0896d398u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d3b4; }
    { goto L_0896d510; }
L_0896d3b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000009c2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896d3d0; }
    { goto L_0896d500; }
L_0896d3d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d408; }
    { goto L_0896d500; }
L_0896d408:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d440; }
    { goto L_0896d500; }
L_0896d440:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000284u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d4c8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000284u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d4c8; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[4] + 0x000009c3u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x000009c3u, c->r[2]);
L_0896d4c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c3u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896d4f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0896d4f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0896d500:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0896d390; }
L_0896d510:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d52c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896d660; }
L_0896d52c:
    { c->r[31] = 0x0896d534u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896e5a8(c, ram); }
    { c->r[31] = 0x0896d53cu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d55c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896d660; }
L_0896d55c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000009c0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896d580; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000009c0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000009c0u, c->r[2]);
L_0896d580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000009c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d65c; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0896d594:
    { c->r[31] = 0x0896d59cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d5b8; }
    { goto L_0896d65c; }
L_0896d5b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000009c2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896d5d4; }
    { goto L_0896d64c; }
L_0896d5d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d64c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c3u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896d64c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_0896d64c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0896d594; }
L_0896d65c:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0896d660:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896d35c */
}

/* func_0896e4b4  0x0896e4b4..0x0896e534  128 bytes, source=sweep */
void func_0896e4b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e4b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896e520; }
L_0896e4f0:
    { c->r[31] = 0x0896e4f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896df9c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000001cu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896e4f0; }
L_0896e520:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e4b4 */
}

/* func_0896f494  0x0896f494..0x0896f500  108 bytes, source=fde */
void func_0896f494(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f494u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896f4acu; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0896f4b4u; c->r[4] = c->r[2] + 0u; func_0899ce8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068b4u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896f494 */
}

/* func_089714a4  0x089714a4..0x089714dc  56 bytes, source=sweep */
void func_089714a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089714a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x0000695cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089714a4 */
}

/* func_089750b4  0x089750b4..0x08975150  156 bytes, source=fde */
void func_089750b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089750b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089750e0u; c->r[5] = 0u + 0x00000001u; func_0896e344(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x089750f0u; c->r[5] = 0u + 0x00000002u; func_089d7208(c, ram); }
    { c->r[31] = 0x089750f8u; func_0881231c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08975108u; c->r[5] = 0u + 0x00000003u; func_089d7194(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08975118u; c->r[5] = 0u + 0x00000003u; func_089d7208(c, ram); }
    { c->r[31] = 0x08975120u; c->r[4] = 0u + 0u; func_0880b0d4(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x0897512cu; c->r[4] = c->r[4] + 0xffff8944u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0897513cu; c->r[5] = 0u + 0x00000004u; func_089d7194(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089750b4 */
}

/* func_089780e8  0x089780e8..0x0897833c  596 bytes, source=fde */
void func_089780e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089780e8u);
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
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897812c; }
    { goto L_08978324; }
L_0897812c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089781b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978170; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978188; }
    { goto L_08978324; }
L_08978170:
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089782f0; }
    { goto L_08978324; }
L_08978188:
    { c->r[31] = 0x08978190u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0897819cu; c->r[4] = c->r[4] + 0x000027dcu; func_089d3c20(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    { c->r[31] = 0x089781acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089781b8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089781c4u; c->r[4] = c->r[4] + 0x000027dcu; func_089d3c60(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089781d0u; c->r[4] = c->r[4] + 0x000027dcu; func_089d3d4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089781dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089781f4; }
    { goto L_0897823c; }
L_089781f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897822c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0897822c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089781dc; }
L_0897823c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978270; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08978254u; c->r[5] = 0u + 0x0000000bu; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08978268u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089782e0; }
L_08978270:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000012cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089782e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089782c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089782b8u; c->r[5] = 0u + 0x0000000du; func_0896a7b8(c, ram); }
    { goto L_089782cc; }
L_089782c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089782ccu; c->r[5] = 0u + 0x0000000fu; func_0896a7b8(c, ram); }
L_089782cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089782e0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_089782e0:
    { c->r[31] = 0x089782e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_08978324; }
L_089782f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897830cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897831c; }
    { goto L_08978324; }
L_0897831c:
    { c->r[31] = 0x08978324u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_08978324:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089780e8 */
}

/* func_0897a6cc  0x0897a6cc..0x0897a73c  112 bytes, source=sweep */
void func_0897a6cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897a6ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897a708; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0897a728; }
L_0897a708:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa2d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0897a728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897a6cc */
}

/* func_08985d90  0x08985d90..0x08985dfc  108 bytes, source=sweep */
void func_08985d90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08985d90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[2] >> 3);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08985d90 */
}

/* func_08990d80  0x08990d80..0x08991634  2228 bytes, source=fde */
void func_08990d80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08990d80u);
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
    c->r[5] = 0u + 0x00000084u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = c->r[9] + 0xffff9754u;
    { c->r[31] = 0x08990dc8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000018u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08990de4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9754u;
    c->r[5] = 0u + 0x00000076u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x00000007u;
    c->r[8] = 0x00400000u;
    c->r[9] = 0u + 0x00000003u;
    c->r[10] = 0x08ab0000u;
    { c->r[31] = 0x08990e18u; c->r[10] = c->r[10] + 0xffff97b8u; func_0898f2a0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97b8u, c->r[2]);
    c->r[2] = 0u + 0x0000008cu;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97bau, c->r[2]);
    c->r[2] = 0u + 0x000003d7u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff97bcu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97c0u, c->r[2]);
    c->r[2] = 0u + 0x0000004au;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97c2u, c->r[2]);
    c->r[2] = 0u + 0x000003c4u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff97c4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97c8u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97cau, 0u);
    c->r[2] = 0u + 0x000003d6u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff97ccu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08990e84:
    { c->r[31] = 0x08990e8cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08990ea8; }
    { goto L_089915a4; }
L_08990ea8:
    c->r[2] = 0x00420000u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08990ec8u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08990edc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08990edc:
    { c->r[31] = 0x08990ee4u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[7] = c->r[2] + 0x00000014u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9768u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000076u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[9] = 0u + 0x00000003u;
    { c->r[31] = 0x08990f70u; c->r[10] = c->r[2] + 0u; func_0898f2a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0xffff98a0u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089911e4; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08990fbc; }
    { goto L_0899134c; }
L_08990fbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000008cu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003c9u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00002001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000004au;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08991120u; mem_w16(ram, c->r[2] + 0x00000002u, 0u); func_08998dcc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089911b8; }
    { c->r[31] = 0x08991154u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899118c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b9u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08991594; }
L_0899118c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b7u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08991594; }
L_089911b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b8u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08991594; }
L_089911e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000008cu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003dcu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000004au;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08991594; }
L_0899134c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00003001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000008cu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9850u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00002001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000004au;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089914d4u; mem_w16(ram, c->r[2] + 0x00000002u, 0u); func_08998dcc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899156c; }
    { c->r[31] = 0x08991508u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991540; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b9u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08991594; }
L_08991540:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b7u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08991594; }
L_0899156c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b8u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08991594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08990e84; }
L_089915a4:
    { c->r[31] = 0x089915acu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089915b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089915cc; }
    { goto L_0899161c; }
L_089915cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9768u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000076u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x00000007u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0899160cu; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089915b4; }
L_0899161c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08990d80 */
}

/* func_089988bc  0x089988bc..0x089988e0  36 bytes, source=residue */
void func_089988bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089988bcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002a91u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089988bc */
}

/* func_08999138  0x08999138..0x0899915c  36 bytes, source=sweep */
void func_08999138(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999138u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002aa8u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08999138 */
}

/* func_0899d628  0x0899d628..0x0899d820  504 bytes, source=fde */
void func_0899d628(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899d628u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
L_0899d640:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9970u, c->r[2]);
    { c->r[31] = 0x0899d654u; mem_w32(ram, c->r[30] + 0x00000008u, 0u); func_0896a284(c, ram); }
    { c->r[31] = 0x0899d65cu; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0899d660:
    { c->r[31] = 0x0899d668u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899d684; }
    { goto L_0899d7b4; }
L_0899d684:
    { c->r[31] = 0x0899d68cu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0899d6a4; }
    { goto L_0899d7a4; }
L_0899d6a4:
    { c->r[31] = 0x0899d6acu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d6ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d7a4; }
L_0899d6ec:
    { c->r[31] = 0x0899d6f4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d734; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d7a4; }
L_0899d734:
    { c->r[31] = 0x0899d73cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d77c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d7a4; }
L_0899d77c:
    { c->r[31] = 0x0899d784u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d7a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0899d7a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0899d660; }
L_0899d7b4:
    { c->r[31] = 0x0899d7bcu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0899d7e8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899d7dcu; c->r[4] = mem_r32(ram, c->r[4] + 0x00002f98u); hle_dispatch_stub(c, ram, 0x08a247dcu); /* sceKernelWakeupThread */ }
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00002f9cu, 0u); goto L_0899d7f8; }
L_0899d7e8:
    { c->r[31] = 0x0899d7f0u; c->r[4] = 0u | 0x8235u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0899d640; }
L_0899d7f8:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9970u, 0u);
    { c->r[31] = 0x0899d808u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24884u); /* sceKernelExitDeleteThread */ }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899d628 */
}

/* func_089a111c  0x089a111c..0x089a1ac8  2476 bytes, source=sweep */
void func_089a111c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a111cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a11b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a11b4; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002bd0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a119cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089a11b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1280; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1280; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002be0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1220u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1268u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a1280:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1394; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1394; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002c00u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a12ecu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1334u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a137cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a1394:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a14f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a14f0; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002c30u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1400u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1448u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1490u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a14d8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a14f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1694; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1694; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002c70u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a155cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a15a4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a15ecu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1634u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a167cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a1694:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1880; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1880; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002cc0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1700u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1748u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1790u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a17d8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1820u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1868u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a1880:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1ab4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a1ab4; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002d20u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a18ecu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1934u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a197cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a19c4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1a0cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1a54u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6acu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffa6a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a1a9cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089a1ab4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a111c */
}

/* func_089a58d8  0x089a58d8..0x089a58f8  32 bytes, source=residue */
void func_089a58d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a58d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a58d8 */
}

/* func_089ac00c  0x089ac00c..0x089ac1ac  416 bytes, source=fde */
void func_089ac00c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac00cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089ac064; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ac04cu; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ac064; }
    { goto L_089ac070; }
L_089ac064:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089ac190; }
L_089ac070:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ac08c; }
    c->r[3] = 0u + 0x00000064u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[3]); goto L_089ac190; }
L_089ac08c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0x089b0000u;
    c->r[2] = c->r[2] + 0xffffa72cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ac0cc; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089ac0c4u, 0x7u); goto L_089ac0c8; }
L_089ac0c8:
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
L_089ac0cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089ac104u; c->r[4] = c->r[2] + 0u; func_08886934(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf98u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ac138; }
    { goto L_089ac15c; }
L_089ac138:
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffaf98u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089ac15c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ac178; }
    c->r[2] = 0u + 0x00000064u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ac188; }
L_089ac178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089ac188; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089ac188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089ac190:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ac00c */
}

/* func_089b0fac  0x089b0fac..0x089b102c  128 bytes, source=fde */
void func_089b0fac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b0facu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089b0fc4u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00003094u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089b0ff0u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00003098u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089b0fac */
}

/* func_089b3270  0x089b3270..0x089b3320  176 bytes, source=sweep */
void func_089b3270(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3270u);
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
    { c->r[31] = 0x089b32b8u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b32dcu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b32e8u; c->r[5] = 0x15000000u; func_089b27cc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b330cu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b3270 */
}

/* func_089b5804  0x089b5804..0x089b5ac0  700 bytes, source=fde */
void func_089b5804(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b5804u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b585c; }
    c->r[2] = 0u + 0x00000010u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089b5aa8; }
L_089b585c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089b586c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5888; }
    { goto L_089b58a4; }
L_089b5888:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089b586c; }
L_089b58a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1f8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b58dc; }
    { goto L_089b590c; }
L_089b58dc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5900; }
    { goto L_089b590c; }
L_089b5900:
    c->r[2] = 0u + 0x00000010u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089b5aa8; }
L_089b590c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b592c; }
    { goto L_089b593c; }
L_089b592c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1fcu);
    { mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]); goto L_089b5948; }
L_089b593c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb200u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
L_089b5948:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5970; }
    { goto L_089b59a4; }
L_089b5970:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5994; }
    { goto L_089b59a4; }
L_089b5994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    { mem_wf32(ram, c->r[2] + 0x000000a0u, c->f[0]); goto L_089b59c4; }
L_089b59a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]);
L_089b59c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5a14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089b59f0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    { c->r[31] = 0x089b5a14u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a0u); func_089b6710(c, ram); }
L_089b5a14:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5a58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089b5a34u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x089b5a58u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a0u); func_089b6710(c, ram); }
L_089b5a58:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b5aa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000090u;
    { c->r[31] = 0x089b5a80u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x089b5aa4u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a0u); func_089b6710(c, ram); }
L_089b5aa4:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089b5aa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089b5804 */
}

/* func_089b76b8  0x089b76b8..0x089b7aec  1076 bytes, source=fde */
void func_089b76b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b76b8u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b7704; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7700u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c356c(c, ram); }
    mem_w16(ram, c->r[16] + 0x000000a8u, c->r[2]);
L_089b7704:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b7728; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7724u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c356c(c, ram); }
    mem_w16(ram, c->r[16] + 0x000000aau, c->r[2]);
L_089b7728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b7ad4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aau);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7750; }
    { goto L_089b7ad4; }
L_089b7750:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    mem_w16(ram, c->r[3] + 0x000000c4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aau);
    mem_w16(ram, c->r[3] + 0x000000c6u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089b77c4u; c->r[4] = c->r[2] + 0u; func_089c6ae4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089b77f0u; c->r[4] = c->r[2] + 0u; func_089c6aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[3] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb24cu);
    mem_wf32(ram, c->r[2] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b782cu; func_089b42f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7a08; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b4u);
    { c->r[31] = 0x089b7850u; c->r[4] = c->r[2] + 0u; func_089b3fd0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
    { c->r[31] = 0x089b785cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b4194(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089b7864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7884; }
    { goto L_089b78ac; }
L_089b7884:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089b7864; }
L_089b78ac:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089b78b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b78d0; }
    { goto L_089b78fc; }
L_089b78d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089b78b0; }
L_089b78fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089b790c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b792c; }
    { goto L_089b7a4c; }
L_089b792c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b7940u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089c6644(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x00000080u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x00000084u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000088u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[2] + 0x0000008cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb24cu);
    mem_wf32(ram, c->r[2] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb24cu);
    mem_wf32(ram, c->r[2] + 0x00000094u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb24cu);
    mem_wf32(ram, c->r[2] + 0x00000098u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[2] + 0x0000009cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    mem_w8(ram, c->r[3] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[2] + 0x000000a6u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089b790c; }
L_089b7a08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089b7a30u; c->r[4] = c->r[2] + 0u; func_089c6aac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b7a4cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089b4518(c, ram); }
L_089b7a4c:
    { c->r[31] = 0x089b7a54u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b8ff4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b7aa8; }
    { goto L_089b7ac0; }
L_089b7aa8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] | 0x0220u;
    { mem_w32(ram, c->r[3] + 0x00000088u, c->r[2]); goto L_089b7ad4; }
L_089b7ac0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] | 0x0820u;
    mem_w32(ram, c->r[3] + 0x00000088u, c->r[2]);
L_089b7ad4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089b76b8 */
}

/* func_089b94b0  0x089b94b0..0x089b95f8  328 bytes, source=sweep */
void func_089b94b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b94b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000006au);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089b94d8; }
    { goto L_089b95e8; }
L_089b94d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000068u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089b94f0; }
    { goto L_089b95e8; }
L_089b94f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000068u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000006au);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089b9518; }
L_089b9518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b95a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]); goto L_089b95e8; }
L_089b95a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000098u, 0u);
L_089b95e8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b94b0 */
}

/* func_089c3458  0x089c3458..0x089c34ac  84 bytes, source=fde */
void func_089c3458(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3458u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9e8cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c3484; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_089c3494; }
L_089c3484:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089c3490u; c->r[4] = mem_r32(ram, c->r[4] + 0xffff9e8cu); func_089f541c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089c3494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c3458 */
}

/* func_089c65c8  0x089c65c8..0x089c660c  68 bytes, source=sweep */
void func_089c65c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c65c8u);
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
    vfpu_exec(c, ram, 0x64028180u); /* vmul.q */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c65c8 */
}

/* func_089c8c24  0x089c8c24..0x089c8cdc  184 bytes, source=sweep */
void func_089c8c24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8c24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089c8c44u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c8da0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8c5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c8cc4; }
L_089c8c5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089c8c70; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089c8cc4; }
L_089c8c70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8c94; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089c8cc4; }
L_089c8c94:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089c8cc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c8c24 */
}

/* func_089cac30  0x089cac30..0x089cad84  340 bytes, source=sweep */
void func_089cac30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cac30u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cac98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089cac98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cad70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089cad70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089cac30 */
}

/* func_089ce0d0  0x089ce0d0..0x089ce1e8  280 bytes, source=fde */
void func_089ce0d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ce0d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    { c->r[31] = 0x089ce0f4u; c->r[4] = 0u + 0x00000054u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x000000f4u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ce178; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f1u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f2u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f3u);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089ce178:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089ce184u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = c->r[3] + c->r[2];
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089ce1d4u; c->r[11] = c->r[3] + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ce0d0 */
}

/* func_089d2470  0x089d2470..0x089d2530  192 bytes, source=residue */
void func_089d2470(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2470u);
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
    return; /* fell out of func_089d2470 */
}

/* func_089d3564  0x089d3564..0x089d35dc  120 bytes, source=fde */
void func_089d3564(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3564u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d3584u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u); hle_dispatch_stub(c, ram, 0x08a24c3cu); /* sceNetAdhocctlDelHandler */ }
    { c->r[31] = 0x089d358cu; hle_dispatch_stub(c, ram, 0x08a24c44u); /* sceNetAdhocctlTerm */ }
    { c->r[31] = 0x089d3594u; hle_dispatch_stub(c, ram, 0x08a24b94u); /* sceNetAdhocTerm */ }
    { c->r[31] = 0x089d359cu; hle_dispatch_stub(c, ram, 0x08a24b44u); /* sceNetTerm */ }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    { c->r[31] = 0x089d35a8u; c->r[4] = 0u + 0x00000002u; hle_dispatch_stub(c, ram, 0x08a24d94u); /* sceUtilityUnloadNetModule */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089d35b4u; c->r[4] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24d94u); /* sceUtilityUnloadNetModule */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3564 */
}

/* func_089d4f5c  0x089d4f5c..0x089d5034  216 bytes, source=fde */
void func_089d4f5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4f5cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4fa0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089d501c; }
L_089d4fa0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d4fc0u; c->r[6] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24b84u); /* sceNetAdhocPtpFlush */ }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d4fe4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d5014; }
L_089d4fe4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d500c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d500c; }
    { goto L_089d5014; }
L_089d500c:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089d5014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089d501c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d4f5c */
}

/* func_089d64dc  0x089d64dc..0x089d6718  572 bytes, source=fde */
void func_089d64dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d64dcu);
    c->r[29] = c->r[29] + 0xfffffe60u;
    mem_w32(ram, c->r[29] + 0x00000194u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000190u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6514; }
    { mem_w32(ram, c->r[30] + 0x00000180u, 0u); goto L_089d6700; }
L_089d6514:
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000648u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089d6528u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24864u); /* sceKernelWaitSema */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060e4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d65a4; }
L_089d6538:
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbaa8u;
    { c->r[31] = 0x089d654cu; c->r[5] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24704u); /* sceIoGetstat */ }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089d655c; }
    { goto L_089d6570; }
L_089d655c:
    c->r[4] = 0x000f0000u;
    { c->r[31] = 0x089d6568u; c->r[4] = c->r[4] | 0x4240u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { goto L_089d6538; }
L_089d6570:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    mem_w32(ram, c->r[3] + 0x000060e4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060e4u);
    c->r[2] = c->r[2] << 11;
    mem_w32(ram, c->r[3] + 0x000060e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060e4u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089d65a4:
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 21;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 11);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffbb08u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089d65d0u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a1ad34(c, ram); }
L_089d65d0:
    { c->r[31] = 0x089d65d8u; hle_dispatch_stub(c, ram, 0x08a24d54u); /* sceUmdGetDriveStat */ }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d65ec; }
    { goto L_089d66b4; }
L_089d65ec:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089d6600u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24714u); /* sceIoOpen */ }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d6618; }
    { goto L_089d66b4; }
L_089d6618:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d6628u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); hle_dispatch_stub(c, ram, 0x08a246fcu); /* sceIoReadAsync */ }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d6640; }
    { c->r[31] = 0x089d6638u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    { goto L_089d66b4; }
L_089d6640:
L_089d6644:
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089d6654u; c->r[5] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24724u); /* sceIoPollAsync */ }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6664; }
    { goto L_089d6698; }
L_089d6664:
    { c->r[31] = 0x089d666cu; hle_dispatch_stub(c, ram, 0x08a24d54u); /* sceUmdGetDriveStat */ }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6688; }
    { c->r[31] = 0x089d6680u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    { goto L_089d66b4; }
L_089d6688:
    { c->r[31] = 0x089d6690u; c->r[4] = 0u + 0x000003e8u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { goto L_089d6644; }
L_089d6698:
    { c->r[31] = 0x089d66a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089d66b4; }
    { goto L_089d66c8; }
L_089d66b4:
    c->r[4] = 0x000f0000u;
    { c->r[31] = 0x089d66c0u; c->r[4] = c->r[4] | 0x4240u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { goto L_089d65d0; }
L_089d66c8:
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000648u);
    { c->r[31] = 0x089d66d8u; c->r[5] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a2484cu); /* sceKernelSignalSema */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d66f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d66f4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d6910(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089d66f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000180u, c->r[2]);
L_089d6700:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000180u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000194u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000190u);
    { c->r[29] = c->r[29] + 0x000001a0u; return; }
    return; /* fell out of func_089d64dc */
}

/* func_089d7db0  0x089d7db0..0x089d7e78  200 bytes, source=fde */
void func_089d7db0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7db0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089d7dcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7df0; }
    { goto L_089d7e5c; }
L_089d7df0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d7e1cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7e4c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d7e60; }
L_089d7e4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d7dcc; }
L_089d7e5c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089d7e60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7db0 */
}

/* func_089d964c  0x089d964c..0x089d96c4  120 bytes, source=sweep */
void func_089d964c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d964cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000065cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000065cu);
    c->r[2] = c->r[2] + 0x00000900u;
    mem_w32(ram, c->r[3] + 0x00000684u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000684u);
    c->r[2] = c->r[2] + 0x00000050u;
    mem_w32(ram, c->r[3] + 0x000006c4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006c4u);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[3] + 0x0000070cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000070cu);
    c->r[2] = c->r[2] + 0x00000294u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d964c */
}

/* func_089da4e0  0x089da4e0..0x089da530  80 bytes, source=fde */
void func_089da4e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da4e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089da518; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089da510u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089dd960(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
L_089da518:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da4e0 */
}

/* func_089dbb28  0x089dbb28..0x089dbb94  108 bytes, source=sweep */
void func_089dbb28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dbb28u);
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
    { c->r[31] = 0x089dbb64u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbb80u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dbb28 */
}

/* func_089dd3f0  0x089dd3f0..0x089dd870  1152 bytes, source=fde */
void func_089dd3f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd3f0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_089dd438:
    { c->r[31] = 0x089dd440u; hle_dispatch_stub(c, ram, 0x08a249ecu); /* sceDisplayGetVcount */ }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd46c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089dd464u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000018u); func_089dd300(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089dd4e4; }
L_089dd46c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd48c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dd48cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089de5c0(c, ram); }
L_089dd48c:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006bcu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd4e4; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006bcu);
    { u32 _t = c->r[2]; c->r[31] = 0x089dd4acu; recomp_call_indirect(c, ram, 0x089dd4a4u, _t); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd4e4; }
    { c->r[31] = 0x089dd4bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24aa4u); /* sceMpegAvcDecodeFlush */ }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd830; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dd4dcu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089de4d0(c, ram); }
    { goto L_089dd830; }
L_089dd4e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089dd710; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd520; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd538; }
    { goto L_089dd778; }
L_089dd520:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089dd75c; }
    { goto L_089dd778; }
L_089dd538:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd578; }
    { c->r[31] = 0x089dd554u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dd2a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089dd578; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 11;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089dd578:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd598; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_089dd5a0; }
L_089dd598:
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
L_089dd5a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd64c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dd5d0u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000020u); func_089da844(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089dd5e8; }
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_089dd64c; }
L_089dd5e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0x80610000u;
    c->r[2] = c->r[2] | 0x8001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd634; }
    { c->r[31] = 0x089dd604u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dd2a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089dd64c; }
L_089dd634:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc094u;
    { c->r[31] = 0x089dd644u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_08a1a4c0(c, ram); }
    { goto L_089dd810; }
L_089dd64c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089dd65cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089da95c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089dd674; }
    { goto L_089dd778; }
L_089dd674:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0x80610000u;
    c->r[2] = c->r[2] | 0x8001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd6c0; }
    { c->r[31] = 0x089dd690u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dd2a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089dd6d8; }
L_089dd6c0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc0c0u;
    { c->r[31] = 0x089dd6d0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_08a1a4c0(c, ram); }
    { goto L_089dd810; }
L_089dd6d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd538; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd704; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dd704u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089de4d0(c, ram); }
L_089dd704:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_089dd778; }
L_089dd710:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dd71cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089daaa4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089dd744; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc0e8u;
    { c->r[31] = 0x089dd73cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_08a1a4c0(c, ram); }
    { goto L_089dd810; }
L_089dd744:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd778; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_089dd778; }
L_089dd75c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dd768u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db180(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd778; }
    { goto L_089dd830; }
L_089dd778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd438; }
L_089dd784:
    { c->r[31] = 0x089dd78cu; hle_dispatch_stub(c, ram, 0x08a249ecu); /* sceDisplayGetVcount */ }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd7ac; }
    { goto L_089dd800; }
L_089dd7ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd7f0; }
    { c->r[31] = 0x089dd7c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dd2a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089dd784; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 11;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089dd784; }
L_089dd7f0:
    { c->r[31] = 0x089dd7f8u; hle_dispatch_stub(c, ram, 0x08a249e4u); /* sceDisplayWaitVblankStart */ }
    { goto L_089dd784; }
L_089dd800:
    { c->r[31] = 0x089dd808u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089db204(c, ram); }
    { goto L_089dd438; }
L_089dd810:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd830; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089dd830u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089de4d0(c, ram); }
L_089dd830:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc114u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x089dd844u; c->r[5] = mem_r32(ram, c->r[5] + 0x000006a4u); func_08a1a4c0(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc128u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x089dd858u; c->r[5] = mem_r32(ram, c->r[5] + 0x000006a8u); func_08a1a4c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089dd3f0 */
}

/* func_089df4c4  0x089df4c4..0x089df588  196 bytes, source=fde */
void func_089df4c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089df4c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089df4dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000200u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089df4f4; }
    { goto L_089df528; }
L_089df4f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000048u;
    { c->r[31] = 0x089df518u; c->r[4] = c->r[2] + 0u; func_089f4c50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089df4dc; }
L_089df528:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089df52c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000200u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089df544; }
    { goto L_089df574; }
L_089df544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u | 0xd848u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089df564u; c->r[4] = c->r[2] + 0u; func_089f5690(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089df52c; }
L_089df574:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089df4c4 */
}

/* func_089e1d00  0x089e1d00..0x089e1d40  64 bytes, source=sweep */
void func_089e1d00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1d00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e1d2cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e3240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1d00 */
}

/* func_089e280c  0x089e280c..0x089e2878  108 bytes, source=sweep */
void func_089e280c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e280cu);
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
    { c->r[31] = 0x089e2854u; c->r[6] = mem_r32(ram, c->r[3] + 0x0000006cu); func_089e36e8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089e2864u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089e373c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e280c */
}

/* func_089e3a34  0x089e3a34..0x089e3ac4  144 bytes, source=sweep */
void func_089e3a34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3a34u);
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
    { c->r[31] = 0x089e3a74u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xb1000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3a98u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xc4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3ab0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3a34 */
}

/* func_089e4b3c  0x089e4b3c..0x089e4c78  316 bytes, source=sweep */
void func_089e4b3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4b3cu);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4b94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4b94u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
L_089e4b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4be8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4bc4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4be8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
L_089e4be8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4c3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4c18u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4c3cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
L_089e4c3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4c64u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e4b3c */
}

/* func_089ea1a4  0x089ea1a4..0x089ea1e4  64 bytes, source=sweep */
void func_089ea1a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea1a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089ea1d0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089eaa84(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea1a4 */
}

/* func_089eb0c8  0x089eb0c8..0x089eb118  80 bytes, source=sweep */
void func_089eb0c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb0c8u);
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
    { c->r[31] = 0x089eb104u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb0c8 */
}

/* func_089ef180  0x089ef180..0x089ef2bc  316 bytes, source=sweep */
void func_089ef180(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef180u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ef1d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef1d8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
L_089ef1d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ef22c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef208u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef22cu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
L_089ef22c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ef280; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef25cu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef280u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
L_089ef280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef2a8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ef180 */
}

/* func_089f0d14  0x089f0d14..0x089f0d58  68 bytes, source=sweep */
void func_089f0d14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0d14u);
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
    { c->r[31] = 0x089f0d44u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0d14 */
}

/* func_089f2b34  0x089f2b34..0x089f2f80  1100 bytes, source=fde */
void func_089f2b34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f2b34u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[15]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc588u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc58cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2b98; }
    { goto L_089f2c08; }
L_089f2b98:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    alx_c_cond_s(c, 12, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2bc8; }
    { goto L_089f2be8; }
L_089f2bc8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc58cu);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_089f2c50; }
L_089f2be8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc58cu);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_089f2c50; }
L_089f2c08:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc58cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2c34; }
    { goto L_089f2c50; }
L_089f2c34:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc58cu);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_089f2c50:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089f2cb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f2ccc; }
    { goto L_089f2e9c; }
L_089f2ccc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc588u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc588u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc588u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc590u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2db4; }
    { goto L_089f2dec; }
L_089f2db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f2e9c; }
L_089f2dec:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[2] * c->f[1];
    c->f[0] = c->f[0] + c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc590u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2e44; }
    { goto L_089f2e7c; }
L_089f2e44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f2e9c; }
L_089f2e7c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089f2cb4; }
L_089f2e9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f2ec8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc594u);
    { mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]); goto L_089f2f68; }
L_089f2ec8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f2f64u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
L_089f2f68:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089f2b34 */
}

/* func_089f5ab8  0x089f5ab8..0x089f5bd8  288 bytes, source=fde */
void func_089f5ab8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5ab8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f5b7c; }
L_089f5ae0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f5b00; }
    { goto L_089f5b74; }
L_089f5b00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f5b54; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f5b64; }
    { goto L_089f5ae0; }
L_089f5b54:
    { c->r[31] = 0x089f5b5cu; func_089fa598(c, ram); }
    { goto L_089f5ae0; }
L_089f5b64:
    { c->r[31] = 0x089f5b6cu; func_08a023e0(c, ram); }
    { goto L_089f5ae0; }
L_089f5b74:
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089f5bc0; }
L_089f5b7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f5bc0; }
    { c->r[31] = 0x089f5bb8u; func_089fa598(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089f5bc0; }
L_089f5bc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f5ab8 */
}

/* func_089f847c  0x089f847c..0x089f851c  160 bytes, source=sweep */
void func_089f847c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f847cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f84f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]); goto L_089f850c; }
L_089f84f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_089f850c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f847c */
}

/* func_089f92cc  0x089f92cc..0x089f9388  188 bytes, source=sweep */
void func_089f92cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f92ccu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    { c->r[31] = 0x089f9308u; c->f[20] = c->f[12]; func_089fad14(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = c->r[2] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_089f9360; }
    { c->r[31] = 0x089f9320u; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[3] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] & 0xffffu;
    c->f[12] = c->f[20];
    c->r[6] = c->r[18] + 0u;
    c->r[7] = c->r[19] + 0u;
    c->r[8] = c->r[20] + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0011u; if (_c) goto L_089f9360; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x089f935cu; c->f[13] = mem_rf32(ram, c->r[2] + 0xffffd138u); func_089fd034(c, ram); }
    c->r[3] = c->r[2] + 0u;
L_089f9360:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f92cc */
}

/* func_089fa188  0x089fa188..0x089fa1a8  32 bytes, source=sweep */
void func_089fa188(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa188u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[5] & 31u);
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0u; if (_c) goto L_089fa1a0; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000be4u);
    c->r[3] = c->r[2] & 0x0001u;
L_089fa1a0:
    { mem_w32(ram, c->r[4] + 0x00000be4u, c->r[3]); return; }
    return; /* fell out of func_089fa188 */
}

/* func_089faa80  0x089faa80..0x089faac8  72 bytes, source=sweep */
void func_089faa80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089faa80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0u + 0u;
    c->r[4] = c->r[17] + 0u;
L_089faa9c:
    { c->r[31] = 0x089faaa4u; c->r[16] = c->r[16] + 0x00000001u; func_089fa95c(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = ((s32)c->r[16] < (s32)0x00000040u) ? 1u : 0u; if (_c) goto L_089faab4; }
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[17] + 0u; if (_c) goto L_089faa9c; }
L_089faab4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089faa80 */
}

/* func_089fb39c  0x089fb39c..0x089fb3b8  28 bytes, source=sweep */
void func_089fb39c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb39cu);
    c->r[4] = c->r[4] & 0x00ffu;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[4] = c->r[4] << 5;
    c->r[4] = c->r[4] + c->r[2];
    { c->f[0] = mem_rf32(ram, c->r[4] + 0x00000004u); return; }
    return; /* fell out of func_089fb39c */
}

/* func_089fc048  0x089fc048..0x089fc070  40 bytes, source=residue */
void func_089fc048(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc048u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0xffffu;
    c->r[5] = c->r[5] & 0xffffu;
    c->r[6] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc064u; c->r[7] = alx_seh(c->r[7]); func_089fc2b0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc048 */
}

/* func_089fd034  0x089fd034..0x089fd64c  1560 bytes, source=sweep */
void func_089fd034(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd034u);
    c->r[29] = c->r[29] + 0xffffff00u;
    mem_w32(ram, c->r[29] + 0x000000dcu, c->r[23]);
    c->r[23] = c->r[5] & 0xffffu;
    c->r[5] = c->r[23] + 0u;
    mem_w32(ram, c->r[29] + 0x000000d8u, c->r[22]);
    c->r[22] = c->r[4] & 0xffffu;
    c->r[4] = c->r[22] + 0u;
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[30]);
    c->r[30] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[21]);
    c->r[21] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[20]);
    c->r[20] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x000000c8u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[17]);
    c->r[17] = c->r[9] + 0u;
    mem_wf32(ram, c->r[29] + 0x000000f4u, c->f[21]);
    c->f[21] = c->f[12];
    mem_wf32(ram, c->r[29] + 0x000000f0u, c->f[20]);
    c->f[20] = c->f[13];
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[10]);
    { c->r[31] = 0x089fd098u; mem_w32(ram, c->r[29] + 0x000000c0u, c->r[16]); func_089fad3c(c, ram); }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089fd0a4u; c->r[18] = c->r[2] + 0u; func_089fa3f0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[19] = c->r[2] + 0u; if (_c) goto L_089fd610; }
    { int _c = (c->r[18] == 0u); c->r[3] = 0x80000000u; if (_c) goto L_089fd1c0; }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[18] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd270u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    if ((c->fcr31 & FCR31_C) != 0u) { c->f[1] = mem_rf32(ram, c->r[18] + 0x00000028u); goto L_089fd0e4; }
    alx_c_cond_s(c, 12, c->f[1], c->f[21]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->f[12] = c->f[21]; if (_c) goto L_089fd5d4; }
    c->f[1] = mem_rf32(ram, c->r[18] + 0x00000028u);
L_089fd0e4:
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089fd108; }
    alx_c_cond_s(c, 12, c->f[21], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->f[12] = c->f[21]; if (_c) goto L_089fd5d4; }
L_089fd108:
    { c->r[31] = 0x089fd110u; func_089fd64c(c, ram); }
    c->r[3] = 0x51eb0000u;
    c->r[3] = c->r[3] | 0x851fu;
    alx_multu(c, c->r[2], c->r[3]);
    c->r[4] = 0u + 0x00000064u;
    c->r[5] = mem_r8(ram, c->r[18] + 0x00000005u);
    c->r[3] = c->hi;
    c->r[3] = c->r[3] >> 5;
    alx_mult(c, c->r[3], c->r[4]);
    c->r[3] = c->lo;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = (c->r[2] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0xffffffffu; if (_c) goto L_089fd594; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000b4u);
    if (c->r[3] == c->r[2]) { c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000003u); goto L_089fd58c; }
L_089fd150:
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000b4u);
    { c->r[31] = 0x089fd160u; c->r[5] = c->r[29] + 0x000000a4u; func_089fe108(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[16] = c->r[2] + 0u; if (_c) goto L_089fd564; }
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000006u);
    mem_w16(ram, c->r[29] + 0x000000a2u, 0u);
    mem_w16(ram, c->r[29] + 0x000000a0u, 0u);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x000000a8u, 0u); if (_c) goto L_089fd548; }
    c->r[2] = 0u + 0x00000001u;
L_089fd180:
    { int _c = (c->r[17] == c->r[2]); c->r[5] = c->r[19] + 0u; if (_c) goto L_089fd518; }
    c->r[4] = c->r[20] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    c->f[12] = c->f[21];
    c->r[8] = c->r[30] + 0u;
    { c->r[31] = 0x089fd1a4u; c->r[9] = c->r[21] + 0u; func_089fc98c(c, ram); }
L_089fd1a4:
    { c->r[31] = 0x089fd1acu; c->r[4] = c->r[20] + 0u; func_089fbd84(c, ram); }
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[2]);
    c->r[2] = 0x80000000u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000b8u);
    { int _c = (c->r[4] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_089fd1fc; }
L_089fd1c0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e0u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x000000dcu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x000000d8u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x000000c8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000c0u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x000000f4u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x000000f0u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000100u; return; }
L_089fd1fc:
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089fd208u; c->r[5] = c->r[19] + 0u; func_089fa398(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[2] = 0x08a50000u;
    c->r[3] = mem_r8(ram, c->r[18] + 0x0000001eu);
    c->f[2] = mem_rf32(ram, c->r[2] + 0xffffd274u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000a8u);
    c->r[5] = c->r[29] + 0u;
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->r[3] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[3] + 0xffffd270u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r16(ram, c->r[29] + 0x000000a0u);
    c->f[1] = c->f[1] / c->f[2];
    mem_wf32(ram, c->r[17] + 0x00000024u, c->f[1]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[17] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[29] + 0x000000a2u);
    c->r[3] = mem_r16(ram, c->r[18] + 0x0000001au);
    c->r[3] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[17] + 0x0000002au, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000010u);
    mem_w8(ram, c->r[17] + 0x0000000bu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[18] + 0x00000011u);
    mem_w8(ram, c->r[17] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000012u);
    mem_w8(ram, c->r[17] + 0x0000000du, c->r[4]);
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000002u);
    mem_w32(ram, c->r[17] + 0x00000004u, 0u);
    c->r[2] = c->r[2] >> 2;
    c->r[2] = c->r[2] & 0x0001u;
    mem_w8(ram, c->r[17] + 0x0000000fu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[18] + 0x00000007u);
    mem_w16(ram, c->r[17] + 0x00000038u, c->r[30]);
    mem_w8(ram, c->r[17] + 0x0000000au, c->r[3]);
    mem_w16(ram, c->r[17] + 0x0000003au, c->r[21]);
    c->f[0] = mem_rf32(ram, c->r[18] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[18] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000b4u);
    mem_wf32(ram, c->r[17] + 0x0000002cu, c->f[20]);
    mem_wf32(ram, c->r[17] + 0x00000018u, c->f[0]);
    mem_wf32(ram, c->r[17] + 0x00000030u, c->f[3]);
    mem_w16(ram, c->r[17] + 0x0000001cu, c->r[2]);
    mem_wf32(ram, c->r[17] + 0x00000034u, c->f[21]);
    mem_w8(ram, c->r[17] + 0x00000009u, c->r[4]);
    { c->r[31] = 0x089fd2c4u; c->r[4] = mem_r8(ram, c->r[18] + 0x00000010u); func_089fb264(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[16] = c->r[2] + 0u; if (_c) goto L_089fd4fc; }
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000011u);
    { c->r[31] = 0x089fd2d8u; c->r[5] = c->r[29] + 0x00000050u; func_089fb264(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[16] = c->r[2] + 0u; if (_c) goto L_089fd4fc; }
    c->r[2] = mem_r16(ram, c->r[17] + 0x0000001cu);
    c->r[4] = mem_r16(ram, c->r[17] + 0x0000002au);
    c->f[0] = u2f(c->r[2]);
    c->r[4] = c->r[21] + c->r[4];
    c->r[4] = alx_seh(c->r[4]);
    { c->r[31] = 0x089fd2fcu; c->f[20] = (f32)(s32)f2u(c->f[0]); func_089fcc88(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[20] * c->f[0];
    c->f[20] = mem_rf32(ram, c->r[2] + 0xffffd278u);
    alx_c_cond_s(c, 14, c->f[20], c->f[0]);
    if ((c->fcr31 & FCR31_C) != 0u) { c->f[0] = c->f[0] - c->f[20]; goto L_089fd4e8; }
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
L_089fd320:
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000024u);
    c->f[2] = mem_rf32(ram, c->r[17] + 0x0000002cu);
    c->f[3] = mem_rf32(ram, c->r[17] + 0x00000018u);
    c->f[0] = c->f[21] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[29] + 0x00000000u);
    c->r[3] = 0x08a50000u;
    mem_w16(ram, c->r[17] + 0x00000048u, c->r[2]);
    c->f[0] = c->f[0] + c->f[3];
    c->f[1] = c->f[1] * c->f[2];
    c->r[4] = mem_r16(ram, c->r[17] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[29] + 0x00000004u);
    c->r[21] = 0u + 0u;
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0xffffd27cu);
    c->r[4] = c->r[30] + c->r[4];
    c->r[2] = c->r[2] + c->r[4];
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = c->r[2] + 0xffffffc0u;
    mem_w16(ram, c->r[17] + 0x00000046u, c->r[2]);
    c->r[30] = 0u + 0u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[1]));
    c->r[5] = f2u(c->f[0]);
    { c->r[31] = 0x089fd380u; c->r[4] = mem_r8(ram, c->r[18] + 0x00000007u); func_089fd918(c, ram); }
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[17] + 0x00000046u);
    c->r[5] = c->r[29] + 0x000000acu;
    c->r[6] = c->r[29] + 0x000000b0u;
    { c->r[31] = 0x089fd394u; c->r[16] = c->r[2] << 4; func_089fd94c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000acu);
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000b0u);
    c->r[5] = mem_r8(ram, c->r[18] + 0x00000011u);
    alx_mult(c, c->r[4], c->r[16]);
    c->r[5] = c->r[5] + 0xffffffffu;
    c->r[5] = c->r[5] & 0x00ffu;
    c->r[5] = (c->r[5] < 0x00000002u) ? 1u : 0u;
    c->r[4] = c->lo;
    alx_mult(c, c->r[3], c->r[16]);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[4] = c->r[4] + c->r[2];
    c->r[4] = (u32)((s32)c->r[4] >> 8);
    c->r[3] = c->lo;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[3] >> 8);
    mem_w32(ram, c->r[29] + 0x000000acu, c->r[4]);
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[29] + 0x000000b0u, c->r[3]); if (_c) goto L_089fd438; }
    c->f[2] = u2f(c->r[3]);
    c->f[0] = u2f(c->r[4]);
    c->r[2] = mem_r8(ram, c->r[18] + 0x00000012u);
    c->f[4] = mem_rf32(ram, c->r[29] + 0x00000050u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = (f32)(s32)f2u(c->f[2]);
    c->f[3] = u2f(c->r[2]);
    c->r[3] = 0x08a50000u;
    c->f[1] = c->f[1] * c->f[4];
    c->f[2] = (f32)(s32)f2u(c->f[3]);
    c->f[0] = c->f[0] * c->f[4];
    c->f[5] = mem_rf32(ram, c->r[3] + 0xffffd274u);
    c->f[1] = c->f[1] * c->f[2];
    c->f[0] = c->f[0] * c->f[2];
    c->f[1] = c->f[1] / c->f[5];
    c->f[0] = c->f[0] / c->f[5];
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[21] = f2u(c->f[1]);
    c->r[30] = f2u(c->f[0]);
L_089fd438:
    c->r[2] = mem_r16(ram, c->r[29] + 0x000000acu);
    c->r[3] = mem_r32(ram, c->r[18] + 0x0000003cu);
    c->r[5] = mem_r32(ram, c->r[18] + 0x00000034u);
    mem_w16(ram, c->r[17] + 0x0000003cu, c->r[2]);
    c->r[7] = 0u + 0x00000001u;
    c->r[5] = c->r[5] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[29] + 0x000000b0u);
    c->r[6] = mem_r32(ram, c->r[18] + 0x00000038u);
    mem_w16(ram, c->r[17] + 0x00000040u, c->r[21]);
    c->r[4] = c->r[19] + 0u;
    mem_w16(ram, c->r[17] + 0x0000003eu, c->r[2]);
    { c->r[31] = 0x089fd46cu; mem_w16(ram, c->r[17] + 0x00000042u, c->r[30]); func_08a05ce0(c, ram); }
    c->r[5] = mem_r16(ram, c->r[18] + 0x00000030u);
    c->r[6] = mem_r16(ram, c->r[18] + 0x00000032u);
    { c->r[31] = 0x089fd47cu; c->r[4] = c->r[19] + 0u; func_08a05eac(c, ram); }
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000b0u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x000000acu);
    c->r[8] = c->r[30] + 0u;
    c->r[7] = c->r[21] + 0u;
    { c->r[31] = 0x089fd494u; c->r[4] = c->r[19] + 0u; func_08a05c2c(c, ram); }
    c->r[5] = mem_r16(ram, c->r[17] + 0x00000048u);
    { c->r[31] = 0x089fd4a0u; c->r[4] = c->r[19] + 0u; func_08a05c90(c, ram); }
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[19] + 0u;
    c->r[2] = mem_r32(ram, c->r[20] + 0x00000008u);
    { c->r[31] = 0x089fd4b8u; mem_w32(ram, c->r[17] + 0x00000020u, c->r[2]); func_089fa4ac(c, ram); }
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x000000a4u);
    { c->r[31] = 0x089fd4ccu; c->r[7] = c->r[19] + 0u; func_089fe13c(c, ram); }
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[7] = c->r[20] + 0u;
    { c->r[31] = 0x089fd4e0u; c->r[6] = 0u + 0x00000001u; func_089fcc3c(c, ram); }
    { c->r[3] = 0u + 0u; goto L_089fd1c0; }
L_089fd4e8:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    { c->r[2] = c->r[2] | c->r[3]; goto L_089fd320; }
L_089fd4fc:
    c->r[4] = c->r[22] + 0u;
L_089fd500:
    c->r[5] = c->r[23] + 0u;
    c->r[7] = c->r[20] + 0u;
    { c->r[31] = 0x089fd510u; c->r[6] = 0u + 0u; func_089fcc3c(c, ram); }
    { c->r[3] = c->r[16] + 0u; goto L_089fd1c0; }
L_089fd518:
    c->r[16] = mem_r32(ram, c->r[20] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[20] + 0x00000018u);
    c->r[4] = c->r[20] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    c->f[12] = c->f[21];
    c->r[8] = c->r[30] + 0u;
    { c->r[31] = 0x089fd53cu; c->r[9] = c->r[21] + 0u; func_089fc98c(c, ram); }
    mem_w32(ram, c->r[20] + 0x00000008u, c->r[16]);
    { mem_w32(ram, c->r[20] + 0x00000018u, c->r[17]); goto L_089fd1a4; }
L_089fd548:
    c->r[6] = c->r[29] + 0x000000a0u;
    c->r[7] = c->r[29] + 0x000000a2u;
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x089fd55cu; c->r[5] = c->r[29] + 0x000000a8u; func_089fc9e8(c, ram); }
    { c->r[2] = 0u + 0x00000001u; goto L_089fd180; }
L_089fd564:
    c->f[12] = c->f[21];
    c->r[8] = c->r[30] + 0u;
    c->r[9] = c->r[21] + 0u;
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    { c->r[31] = 0x089fd584u; c->r[4] = c->r[20] + 0u; func_089fc8d4(c, ram); }
    { c->r[4] = c->r[22] + 0u; goto L_089fd500; }
L_089fd58c:
    { mem_w32(ram, c->r[29] + 0x000000b4u, c->r[4]); goto L_089fd150; }
L_089fd594:
    c->f[12] = c->f[21];
    c->r[8] = c->r[30] + 0u;
    c->r[9] = c->r[21] + 0u;
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    { c->r[31] = 0x089fd5b4u; c->r[4] = c->r[20] + 0u; func_089fc8d4(c, ram); }
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[7] = c->r[20] + 0u;
    { c->r[31] = 0x089fd5c8u; c->r[6] = 0u + 0u; func_089fcc3c(c, ram); }
    c->r[3] = 0x80000000u;
    { c->r[3] = c->r[3] | 0x0018u; goto L_089fd1c0; }
L_089fd5d4:
    c->r[8] = c->r[30] + 0u;
    c->r[9] = c->r[21] + 0u;
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    { c->r[31] = 0x089fd5f0u; c->r[4] = c->r[20] + 0u; func_089fc8d4(c, ram); }
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[7] = c->r[20] + 0u;
    { c->r[31] = 0x089fd604u; c->r[6] = 0u + 0u; func_089fcc3c(c, ram); }
    c->r[3] = 0x80000000u;
    { c->r[3] = c->r[3] | 0x0017u; goto L_089fd1c0; }
L_089fd610:
    c->r[5] = c->r[2] + 0u;
    c->f[12] = c->f[21];
    c->r[8] = c->r[30] + 0u;
    c->r[9] = c->r[21] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    { c->r[31] = 0x089fd630u; c->r[4] = c->r[20] + 0u; func_089fc8d4(c, ram); }
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[7] = c->r[20] + 0u;
    { c->r[31] = 0x089fd644u; c->r[6] = 0u + 0u; func_089fcc3c(c, ram); }
    { c->r[3] = c->r[19] + 0u; goto L_089fd1c0; }
    return; /* fell out of func_089fd034 */
}

/* func_089fe2b0  0x089fe2b0..0x089fe394  228 bytes, source=sweep */
void func_089fe2b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe2b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[2] = 0x08ba0000u;
    c->r[3] = c->r[4] << 3;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[3] = c->r[3] - c->r[4];
    c->r[3] = c->r[3] << 5;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[18] = c->r[6] + 0u;
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[7] = mem_r32(ram, c->r[2] + 0x0000016cu);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[7] = ((s32)c->r[4] < (s32)c->r[7]) ? 1u : 0u;
    c->r[19] = c->r[3] + c->r[2];
    c->r[7] = c->r[7] ^ 0x0001u;
    c->r[2] = c->r[4] >> 31;
    c->r[7] = c->r[7] | c->r[2];
    c->r[2] = 0x80000000u;
    { int _c = (c->r[7] != 0u); c->r[2] = c->r[2] | 0x000au; if (_c) goto L_089fe358; }
    c->r[2] = mem_r16(ram, c->r[19] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089fe374; }
    c->r[2] = c->r[16] << 2;
L_089fe320:
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
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089fe358u; mem_w32(ram, c->r[2] + 0x00000008u, 0u); func_089ff2c8(c, ram); }
L_089fe358:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fe374:
    { c->r[31] = 0x089fe37cu; func_089fe394(c, ram); }
    c->r[3] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[3] + 0xffffd294u);
    { c->r[31] = 0x089fe38cu; mem_wf32(ram, c->r[19] + 0x000000bcu, c->f[0]); func_089ff600(c, ram); }
    { c->r[2] = c->r[16] << 2; goto L_089fe320; }
    return; /* fell out of func_089fe2b0 */
}

/* func_089ff2a0  0x089ff2a0..0x089ff2b0  16 bytes, source=residue */
void func_089ff2a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff2a0u);
    c->r[3] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000015cu);
    { c->r[2] = (0u < c->r[2]) ? 1u : 0u; return; }
    return; /* fell out of func_089ff2a0 */
}

/* func_08a019c4  0x08a019c4..0x08a01b00  316 bytes, source=fde */
void func_08a019c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a019c4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    c->r[23] = c->r[10] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    c->r[22] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[11] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000030u, c->f[20]);
    c->f[20] = c->f[12];
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    { c->r[31] = 0x08a01a1cu; mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]); func_089fad14(c, ram); }
    c->r[16] = c->r[2] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a01a48; }
    { c->r[31] = 0x08a01a34u; c->r[30] = 0x08ba0000u; func_089fad6c(c, ram); }
    c->r[5] = c->r[21] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[6] = c->r[16] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a01a80; }
L_08a01a48:
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
L_08a01a80:
    { c->r[31] = 0x08a01a88u; c->r[4] = mem_r32(ram, c->r[30] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd330u);
    c->r[3] = 0x80000000u;
    c->f[12] = c->f[20];
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    c->f[13] = c->f[0];
    c->r[6] = c->r[19] + 0u;
    c->r[7] = c->r[20] + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[8] = c->r[18] + 0u;
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a01a48; }
    { c->r[31] = 0x08a01accu; func_089fd034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0xffff9af0u);
    c->r[6] = c->r[21] + 0u;
    c->r[7] = c->r[22] + 0u;
    c->r[5] = c->r[18] + 0u;
    { c->r[31] = 0x08a01ae4u; c->r[8] = c->r[23] + 0u; func_08a02a28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a01af8u; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a01a48; }
    return; /* fell out of func_08a019c4 */
}

/* func_08a02f90  0x08a02f90..0x08a02f98  8 bytes, source=sweep */
void func_08a02f90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02f90u);
    { mem_w32(ram, c->r[4] + 0x000000acu, c->r[5]); return; }
    return; /* fell out of func_08a02f90 */
}

/* func_08a03930  0x08a03930..0x08a0394c  28 bytes, source=sweep */
void func_08a03930(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03930u);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = 0x08a60000u;
    vfpu_exec(c, ram, 0xd8b00000u); /* lv.q */
    vfpu_exec(c, ram, 0xc8704a4bu); /* lv.s */
    vfpu_exec(c, ram, 0xf190a091u); /* vtfm4.q */
    { vfpu_exec(c, ram, 0xf8910000u); /* sv.q */ return; }
    return; /* fell out of func_08a03930 */
}

/* func_08a04de8  0x08a04de8..0x08a05094  684 bytes, source=sweep */
void func_08a04de8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04de8u);
    c->r[3] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[3]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    c->r[7] = c->r[4] + 0u;
    c->r[4] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[8] = c->lo;
    c->r[2] = c->r[4] + 0xffffaa78u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[6] = c->r[8] + c->r[2];
    c->r[10] = c->r[5] + 0u;
    c->r[8] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = 0u + 0u;
L_08a04e20:
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[6] = (c->r[3] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, 0u);
    { int _c = (c->r[6] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a04e20; }
    c->r[5] = 0u + 0x0000004cu;
    alx_mult(c, c->r[7], c->r[5]);
    c->r[11] = c->r[4] + 0xffffaa78u;
    c->r[9] = 0u + 0x00000001u;
    c->r[12] = c->lo;
    c->r[5] = c->r[12] + c->r[11];
    c->r[3] = mem_r8(ram, c->r[5] + 0x00000018u);
    { int _c = (c->r[3] == c->r[9]); c->r[13] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a04ff0; }
    { int _c = (c->r[13] != 0u); if (_c) goto L_08a04f60; }
    c->r[4] = 0u + 0x00000002u;
    if (c->r[3] == c->r[4]) { c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u); goto L_08a04e80; }
L_08a04e6c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a04e70:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a04e80:
    c->r[4] = ((s32)c->r[3] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[4] != 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a04e70; }
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000020u);
    c->r[6] = c->r[4] + 0x00000010u;
    c->r[11] = ((s32)c->r[3] < (s32)c->r[6]) ? 1u : 0u;
    if (c->r[11] != 0u) { mem_w32(ram, c->r[5] + 0x0000001cu, 0u); goto L_08a04f58; }
    c->r[11] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[11] + 0xffffaf44u);
    c->r[4] = c->r[8] + c->r[4];
    c->r[6] = 0u + 0u;
L_08a04eb0:
    c->r[13] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[12] = (c->r[6] < 0x00000010u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[13]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[12] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a04eb0; }
    c->r[5] = 0u + 0x0000004cu;
L_08a04ed0:
    alx_mult(c, c->r[7], c->r[5]);
    c->r[7] = 0x08ba0000u;
    c->r[17] = c->r[7] + 0xffffaaa8u;
    c->r[5] = mem_r32(ram, c->r[11] + 0xffffaf44u);
    c->r[2] = c->r[17] + 0x00000004u;
    c->r[16] = c->lo;
    c->r[4] = c->r[10] + 0u;
    c->r[7] = c->r[16] + c->r[2];
    { c->r[31] = 0x08a04ef8u; c->r[6] = c->r[16] + c->r[17]; func_08a04cb0(c, ram); }
    c->r[10] = 0u + 0x00000003u;
    { int _c = (c->r[2] == c->r[10]); c->r[14] = 0u + 0x00000006u; if (_c) goto L_08a04f3c; }
    { int _c = (c->r[2] == c->r[14]); c->r[12] = c->r[17] + 0xffffffd0u; if (_c) goto L_08a04f20; }
    c->r[4] = c->r[16] + c->r[12];
    c->r[6] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[11] = c->r[6] + 0x00000010u;
    { mem_w32(ram, c->r[4] + 0x00000020u, c->r[11]); goto L_08a04e6c; }
L_08a04f20:
    c->r[24] = c->r[17] + 0xffffffd0u;
    c->r[15] = c->r[16] + c->r[24];
    c->r[16] = mem_r32(ram, c->r[15] + 0x00000020u);
    c->r[17] = c->r[16] + 0x00000010u;
    mem_w32(ram, c->r[15] + 0x00000020u, c->r[17]);
    { mem_w32(ram, c->r[15] + 0x00000010u, c->r[16]); goto L_08a04e6c; }
L_08a04f3c:
    c->r[3] = c->r[17] + 0xffffffd0u;
    c->r[25] = c->r[16] + c->r[3];
    c->r[8] = mem_r32(ram, c->r[25] + 0x00000020u);
    c->r[9] = mem_r32(ram, c->r[25] + 0x00000010u);
    mem_w32(ram, c->r[25] + 0x00000014u, c->r[8]);
    { mem_w32(ram, c->r[25] + 0x00000020u, c->r[9]); goto L_08a04e6c; }
L_08a04f58:
    { mem_w32(ram, c->r[5] + 0x00000020u, 0u); goto L_08a04e6c; }
L_08a04f60:
    { int _c = (c->r[3] != 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a04e70; }
    c->r[9] = mem_r32(ram, c->r[5] + 0x00000020u);
    c->r[15] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[16] = c->r[9] + 0x00000010u;
    c->r[14] = ((s32)c->r[15] < (s32)c->r[16]) ? 1u : 0u;
    if (c->r[14] != 0u) { mem_w32(ram, c->r[5] + 0x0000001cu, 0u); goto L_08a04f58; }
    c->r[11] = 0x08ba0000u;
    c->r[6] = mem_r32(ram, c->r[11] + 0xffffaf44u);
    c->r[5] = c->r[8] + c->r[9];
    c->r[8] = 0u + 0u;
L_08a04f90:
    c->r[24] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000001u;
    c->r[17] = (c->r[8] < 0x00000010u) ? 1u : 0u;
    mem_w8(ram, c->r[6] + 0x00000000u, c->r[24]);
    c->r[5] = c->r[5] + 0x00000001u;
    { int _c = (c->r[17] != 0u); c->r[6] = c->r[6] + 0x00000001u; if (_c) goto L_08a04f90; }
    c->r[2] = 0u + 0x0000004cu;
    alx_mult(c, c->r[7], c->r[2]);
    c->r[7] = c->r[4] + 0xffffaa78u;
    c->r[5] = mem_r32(ram, c->r[11] + 0xffffaf44u);
    c->r[6] = c->r[7] + 0x00000034u;
    c->r[11] = c->r[7] + 0x00000030u;
    c->r[3] = c->lo;
    c->r[25] = c->r[3] + c->r[7];
    c->r[9] = mem_r32(ram, c->r[25] + 0x00000020u);
    c->r[7] = c->r[3] + c->r[6];
    c->r[4] = c->r[10] + 0u;
    c->r[8] = c->r[9] + 0x00000010u;
    mem_w32(ram, c->r[25] + 0x00000020u, c->r[8]);
    { c->r[31] = 0x08a04fe8u; c->r[6] = c->r[3] + c->r[11]; func_08a04cb0(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a04e70; }
L_08a04ff0:
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[12] = ((s32)c->r[3] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[12] != 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a04e70; }
    c->r[6] = mem_r32(ram, c->r[5] + 0x00000020u);
    c->r[13] = c->r[6] + 0x00000010u;
    c->r[5] = ((s32)c->r[3] < (s32)c->r[13]) ? 1u : 0u;
    { int _c = (c->r[5] != 0u); c->r[9] = 0u + 0x0000004cu; if (_c) goto L_08a05048; }
    c->r[11] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[11] + 0xffffaf44u);
    c->r[4] = c->r[8] + c->r[6];
    c->r[6] = 0u + 0u;
L_08a05024:
    c->r[15] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[14] = (c->r[6] < 0x00000010u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[15]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[14] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05024; }
    { c->r[5] = 0u + 0x0000004cu; goto L_08a04ed0; }
L_08a05048:
    alx_mult(c, c->r[7], c->r[9]);
    c->r[25] = c->r[4] + 0xffffaa78u;
    c->r[11] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[11] + 0xffffaf44u);
    c->r[6] = 0u + 0u;
    c->r[24] = c->lo;
    c->r[17] = c->r[24] + c->r[25];
    c->r[16] = mem_r32(ram, c->r[17] + 0x00000010u);
    mem_w32(ram, c->r[17] + 0x00000020u, c->r[16]);
    c->r[4] = c->r[8] + c->r[16];
L_08a05070:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[8] = (c->r[6] < 0x00000010u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[8] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05070; }
    { c->r[5] = 0u + 0x0000004cu; goto L_08a04ed0; }
    return; /* fell out of func_08a04de8 */
}

/* func_08a0635c  0x08a0635c..0x08a064d8  380 bytes, source=sweep */
void func_08a0635c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0635cu);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[7] = c->r[4] + 0u;
    c->r[4] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[4] + 0x00000060u;
    c->r[6] = c->r[2] & 0x00ffu;
    c->r[10] = c->r[4] >> 7;
    c->r[8] = c->r[10] ^ 0x0001u;
    c->r[9] = (c->r[6] < 0x00000040u) ? 1u : 0u;
    c->r[6] = c->r[8] | c->r[9];
    { int _c = (c->r[6] != 0u); c->r[5] = c->r[3] + 0x00000001u; if (_c) goto L_08a06394; }
    c->r[11] = (c->r[4] < 0x000000fdu) ? 1u : 0u;
    if (c->r[11] != 0u) { c->r[14] = c->r[4] + 0x0000007fu; goto L_08a063a0; }
L_08a06394:
    c->r[2] = c->r[4] + 0u;
L_08a06398:
    { mem_w32(ram, c->r[7] + 0x00000000u, c->r[5]); return; }
L_08a063a0:
    c->r[13] = c->r[14] & 0x00ffu;
    c->r[12] = (c->r[13] < 0x0000001fu) ? 1u : 0u;
    c->r[9] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { int _c = (c->r[12] == 0u); c->r[8] = 0u + 0u; if (_c) goto L_08a0648c; }
    c->r[15] = c->r[4] << 1;
    c->r[6] = c->r[15] + 0xfffffeffu;
L_08a063c0:
    { int _c = (c->r[6] == 0u); c->r[10] = (c->r[6] < 0x00000001u) ? 1u : 0u; if (_c) goto L_08a0640c; }
    c->r[4] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[3] = c->r[4] + 0xffffffc0u;
    c->r[25] = c->r[3] & 0x00ffu;
    c->r[24] = (c->r[25] < 0x0000003fu) ? 1u : 0u;
    { int _c = (c->r[24] == 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a06454; }
    c->r[8] = c->r[4] + 0xffffffc1u;
L_08a063e4:
    { int _c = (c->r[9] == 0u); c->r[10] = (c->r[6] < 0x00000001u) ? 1u : 0u; if (_c) goto L_08a0640c; }
    c->r[4] = 0u + 0x00000007u;
    { int _c = (c->r[6] == c->r[4]); c->r[15] = 0u + 0x0000000bu; if (_c) goto L_08a0644c; }
    { int _c = (c->r[6] == c->r[15]); c->r[2] = c->r[6] ^ 0x004du; if (_c) goto L_08a06444; }
    c->r[24] = 0u + 0x0000000fu;
    if (c->r[2] == 0u) c->r[6] = c->r[24];
L_08a06408:
    c->r[10] = (c->r[6] < 0x00000001u) ? 1u : 0u;
L_08a0640c:
    c->r[11] = (c->r[8] < 0x00000001u) ? 1u : 0u;
    c->r[25] = c->r[10] | c->r[11];
    if (c->r[25] == 0u) { c->r[14] = c->r[6] + 0x00000020u; goto L_08a06428; }
    c->r[8] = 0x08ba0000u;
    { c->r[2] = mem_r16(ram, c->r[8] + 0xffffbe00u); goto L_08a06398; }
L_08a06428:
    c->r[13] = c->r[9] << 15;
    c->r[3] = c->r[14] << 8;
    c->r[9] = c->r[13] | c->r[3];
    c->r[12] = c->r[8] + 0x00000020u;
    c->r[6] = c->r[9] | c->r[12];
    { c->r[2] = c->r[6] & 0xffffu; goto L_08a06398; }
L_08a06444:
    { c->r[6] = 0u + 0x00000005u; goto L_08a06408; }
L_08a0644c:
    { c->r[6] = 0u + 0x00000001u; goto L_08a06408; }
L_08a06454:
    c->r[12] = c->r[4] + 0xffffff80u;
    c->r[11] = c->r[12] & 0x00ffu;
    c->r[10] = (c->r[11] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[10] == 0u); c->r[14] = c->r[4] + 0x00000061u; if (_c) goto L_08a06470; }
    { c->r[8] = c->r[3] + 0u; goto L_08a063e4; }
L_08a06470:
    c->r[13] = c->r[14] & 0x00ffu;
    c->r[3] = (c->r[13] < 0x0000005eu) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); if (_c) goto L_08a063e4; }
    c->r[8] = c->r[4] + 0xffffff62u;
    { c->r[6] = c->r[6] + 0x00000001u; goto L_08a063e4; }
L_08a0648c:
    c->r[10] = c->r[4] + 0x00000020u;
    c->r[25] = c->r[10] & 0x00ffu;
    c->r[24] = (c->r[25] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[24] == 0u); c->r[13] = c->r[4] + 0x00000010u; if (_c) goto L_08a064ac; }
    c->r[3] = c->r[4] << 1;
    { c->r[6] = c->r[3] + 0xfffffe7fu; goto L_08a063c0; }
L_08a064ac:
    c->r[12] = c->r[13] & 0x00ffu;
    c->r[11] = (c->r[12] < 0x0000000du) ? 1u : 0u;
    { int _c = (c->r[11] == 0u); c->r[10] = (c->r[6] < 0x00000001u) ? 1u : 0u; if (_c) goto L_08a0640c; }
    c->r[15] = c->r[4] << 1;
    c->r[9] = c->r[15] + 0xfffffe65u;
    c->r[14] = (c->r[4] < 0x000000f4u) ? 1u : 0u;
    c->r[6] = c->r[15] + 0xfffffe27u;
    if (c->r[14] == 0u) c->r[6] = c->r[9];
    { c->r[9] = 0u + 0x00000001u; goto L_08a063c0; }
    return; /* fell out of func_08a0635c */
}

/* func_08a0a1a4  0x08a0a1a4..0x08a0a400  604 bytes, source=residue */
void func_08a0a1a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0a1a4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a1d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a1e0; }
L_08a0a1d4:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08a0a3e8; }
L_08a0a1e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a21c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a21c; }
    c->r[2] = 0u + 0xfffffffbu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08a0a3e8; }
L_08a0a21c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0a314; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x0000001du;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[3] = c->r[2] & 0x0007u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    mem_w32(ram, c->r[5] + 0x00000030u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[3] = c->r[2] & 0x0007u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000034u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[5] + 0x00000034u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08a0a280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a29c; }
    { goto L_08a0a2f0; }
L_08a0a29c:
    c->r[5] = c->r[30] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] >> 8;
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    { mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]); goto L_08a0a280; }
L_08a0a2f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a0a314u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a0a098(c, ram); }
L_08a0a314:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x08a0a334u; c->r[6] = mem_r32(ram, c->r[6] + 0x00000004u); func_08a0a098(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0a3a0; }
    c->r[2] = 0u + 0xfffffffdu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08a0a3e8; }
L_08a0a3a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x08a0a3c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a06ebc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x0000000bu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08a0a3e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08a0a1a4 */
}

/* func_08a0de0c  0x08a0de0c..0x08a0de1c  16 bytes, source=residue */
void func_08a0de0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0de0cu);
    c->r[3] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00004a4cu);
    { mem_w32(ram, c->r[3] + 0x00004a4cu, c->r[4]); return; }
    return; /* fell out of func_08a0de0c */
}

/* func_08a0e5f4  0x08a0e5f4..0x08a0e62c  56 bytes, source=indirect */
void func_08a0e5f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e5f4u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000648u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e614u; c->r[16] = c->r[4] + 0u; func_08a0e308(c, ram); }
    { c->r[31] = 0x08a0e61cu; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e5f4 */
}

/* func_08a0f760  0x08a0f760..0x08a0f82c  204 bytes, source=sweep */
void func_08a0f760(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f760u);
    c->r[4] = f2u(c->f[12]);
    c->r[2] = 0x3f490000u;
    c->r[2] = c->r[2] | 0x0fd8u;
    c->r[3] = alx_ext(c->r[4], 0u, 30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->f[13] = u2f(0u);
    { int _c = (c->r[2] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a0f808; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0f7ac; }
    c->f[0] = c->f[12] - c->f[12];
L_08a0f7a0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a0f7a4:
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a0f7ac:
    { c->r[31] = 0x08a0f7b4u; c->r[4] = c->r[29] + 0u; func_08a11aa8(c, ram); }
    c->r[3] = c->r[2] & 0x0003u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a0f818; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a0f7f8; }
    { int _c = (c->r[3] == c->r[2]); c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0f7e4; }
L_08a0f7d4:
    { c->r[31] = 0x08a0f7dcu; c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u); func_08a11f1c(c, ram); }
    { c->f[0] = -c->f[0]; goto L_08a0f7a0; }
L_08a0f7e4:
    c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u);
    { c->r[31] = 0x08a0f7f0u; c->r[4] = 0u + 0x00000001u; func_08a127fc(c, ram); }
    { c->f[0] = -c->f[0]; goto L_08a0f7a0; }
L_08a0f7f8:
    { int _c = (c->r[3] != 0u); c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0f7d4; }
    c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u);
    c->r[4] = 0u + 0x00000001u;
L_08a0f808:
    { c->r[31] = 0x08a0f810u; func_08a127fc(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a0f7a4; }
L_08a0f818:
    c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u);
    { c->r[31] = 0x08a0f824u; c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u); func_08a11f1c(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a0f7a4; }
    return; /* fell out of func_08a0f760 */
}

/* func_08a13744  0x08a13744..0x08a13a8c  840 bytes, source=sweep */
void func_08a13744(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13744u);
    c->r[7] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[10] = c->r[6] + 0u;
    c->r[8] = c->r[5] + 0u;
    c->r[2] = (c->r[4] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[7] + 0u; if (_c) goto L_08a13798; }
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = (c->r[3] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[5] + 0u; if (_c) goto L_08a13798; }
    c->r[2] = c->r[4] ^ 0x0004u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] ^ 0x0004u; if (_c) goto L_08a137a8; }
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[7] + 0u; if (_c) goto L_08a13798; }
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[2] = 0x08a50000u;
    { int _c = (c->r[3] == c->r[4]); c->r[6] = c->r[2] + 0x00001088u; if (_c) goto L_08a137a0; }
L_08a13798:
    { c->r[2] = c->r[6] + 0u; return; }
L_08a137a0:
    { c->r[6] = c->r[7] + 0u; goto L_08a13798; }
L_08a137a8:
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[5] + 0u; if (_c) goto L_08a13798; }
    c->r[2] = c->r[3] ^ 0x0002u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[4] ^ 0x0002u; if (_c) goto L_08a13808; }
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[7] + 0u; if (_c) goto L_08a13798; }
    mem_w32(ram, c->r[10] + 0x00000000u, c->r[4]);
    c->r[6] = c->r[10] + 0u;
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u);
    mem_w32(ram, c->r[10] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[7] + 0x00000008u);
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[7] + 0x0000000cu);
    mem_w32(ram, c->r[10] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[7] + 0x00000010u);
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[7] + 0x00000014u);
    mem_w32(ram, c->r[10] + 0x00000014u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[2] = c->r[2] & c->r[3];
    { mem_w32(ram, c->r[10] + 0x00000004u, c->r[2]); goto L_08a13798; }
L_08a13808:
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[5] + 0u; if (_c) goto L_08a13798; }
    c->r[11] = mem_r32(ram, c->r[7] + 0x00000008u);
    c->r[9] = mem_r32(ram, c->r[5] + 0x00000008u);
    c->r[12] = mem_r32(ram, c->r[7] + 0x00000010u);
    c->r[13] = mem_r32(ram, c->r[7] + 0x00000014u);
    c->r[14] = mem_r32(ram, c->r[5] + 0x00000010u);
    c->r[15] = mem_r32(ram, c->r[5] + 0x00000014u);
    c->r[2] = c->r[11] - c->r[9];
    c->r[3] = 0u - c->r[2];
    c->r[2] = alx_max(c->r[2], c->r[3]);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000040u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = ((s32)c->r[9] < (s32)c->r[11]) ? 1u : 0u; if (_c) goto L_08a13a64; }
    { int _c = (c->r[2] == 0u); c->r[2] = ((s32)c->r[11] < (s32)c->r[9]) ? 1u : 0u; if (_c) goto L_08a13884; }
    c->r[25] = 0u + 0x00000000u;
    c->r[24] = 0u + 0x00000001u;
    c->r[9] = c->r[11] - c->r[9];
L_08a13854:
    c->r[4] = c->r[14] >> 1;
    c->r[6] = c->r[15] << 31;
    c->r[4] = c->r[4] | c->r[6];
    c->r[5] = c->r[15] >> 1;
    c->r[2] = c->r[14] & c->r[24];
    c->r[3] = c->r[15] & c->r[25];
    c->r[9] = c->r[9] + 0xffffffffu;
    c->r[14] = c->r[2] | c->r[4];
    { int _c = (c->r[9] != 0u); c->r[15] = c->r[3] | c->r[5]; if (_c) goto L_08a13854; }
    c->r[9] = c->r[11] + 0u;
    c->r[2] = ((s32)c->r[11] < (s32)c->r[9]) ? 1u : 0u;
L_08a13884:
    if (c->r[2] == 0u) { c->r[6] = mem_r32(ram, c->r[7] + 0x00000004u); goto L_08a138c8; }
    c->r[25] = 0u + 0x00000000u;
    c->r[24] = 0u + 0x00000001u;
    c->r[11] = c->r[9] - c->r[11];
L_08a13898:
    c->r[4] = c->r[12] >> 1;
    c->r[6] = c->r[13] << 31;
    c->r[4] = c->r[4] | c->r[6];
    c->r[5] = c->r[13] >> 1;
    c->r[2] = c->r[12] & c->r[24];
    c->r[3] = c->r[13] & c->r[25];
    c->r[11] = c->r[11] + 0xffffffffu;
    c->r[12] = c->r[2] | c->r[4];
    { int _c = (c->r[11] != 0u); c->r[13] = c->r[3] | c->r[5]; if (_c) goto L_08a13898; }
    c->r[11] = c->r[9] + 0u;
L_08a138c4:
    c->r[6] = mem_r32(ram, c->r[7] + 0x00000004u);
L_08a138c8:
    c->r[2] = mem_r32(ram, c->r[8] + 0x00000004u);
    { int _c = (c->r[6] == c->r[2]); c->r[5] = c->r[15] - c->r[13]; if (_c) goto L_08a13a3c; }
    c->r[2] = (c->r[14] < c->r[12]) ? 1u : 0u;
    c->r[4] = c->r[14] - c->r[12];
    { int _c = (c->r[6] != 0u); c->r[5] = c->r[5] - c->r[2]; if (_c) goto L_08a138f4; }
    c->r[2] = (c->r[12] < c->r[14]) ? 1u : 0u;
    c->r[5] = c->r[13] - c->r[15];
    c->r[4] = c->r[12] - c->r[14];
    c->r[5] = c->r[5] - c->r[2];
L_08a138f4:
    { int _c = ((s32)c->r[5] < 0); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a13a18; }
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[11]);
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[10] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[10] + 0x00000004u, 0u);
L_08a1390c:
    c->r[8] = mem_r32(ram, c->r[10] + 0x00000010u);
    c->r[9] = mem_r32(ram, c->r[10] + 0x00000014u);
    c->r[6] = 0x0fff0000u;
    c->r[6] = c->r[6] | 0xffffu;
    c->r[4] = c->r[8] + 0xffffffffu;
    c->r[3] = (c->r[4] < 0xffffffffu) ? 1u : 0u;
    c->r[5] = c->r[9] + 0xffffffffu;
    c->r[5] = c->r[5] + c->r[3];
    c->r[2] = (c->r[6] < c->r[5]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[10] + 0x00000014u); goto L_08a139a4; }
    { int _c = (c->r[5] == c->r[6]); c->r[2] = (c->r[4] < 0xffffffffu) ? 1u : 0u; if (_c) goto L_08a13a08; }
    c->r[3] = c->r[8] >> 31;
L_08a13944:
    c->r[2] = mem_r32(ram, c->r[10] + 0x00000008u);
L_08a13948:
    c->r[7] = c->r[9] << 1;
    c->r[7] = c->r[7] | c->r[3];
    c->r[6] = c->r[8] << 1;
    c->r[11] = 0x0fff0000u;
    c->r[4] = c->r[6] + 0xffffffffu;
    c->r[3] = (c->r[4] < 0xffffffffu) ? 1u : 0u;
    c->r[5] = c->r[7] + 0xffffffffu;
    c->r[5] = c->r[5] + c->r[3];
    c->r[11] = c->r[11] | 0xffffu;
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = (c->r[11] < c->r[5]) ? 1u : 0u;
    c->r[12] = (c->r[4] < 0xffffffffu) ? 1u : 0u;
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[2]);
    c->r[8] = c->r[6] + 0u;
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[6]);
    mem_w32(ram, c->r[10] + 0x00000014u, c->r[7]);
    { int _c = (c->r[3] != 0u); c->r[9] = c->r[7] + 0u; if (_c) goto L_08a139a0; }
    { int _c = (c->r[5] != c->r[11]); c->r[3] = c->r[8] >> 31; if (_c) goto L_08a13944; }
    if (c->r[12] != 0u) { c->r[2] = mem_r32(ram, c->r[10] + 0x00000008u); goto L_08a13948; }
L_08a139a0:
    c->r[2] = mem_r32(ram, c->r[10] + 0x00000014u);
L_08a139a4:
    c->r[3] = 0x1fff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[4] = 0u + 0x00000003u;
    c->r[3] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[10] + 0x00000000u, c->r[4]); if (_c) goto L_08a13a00; }
    c->r[4] = mem_r32(ram, c->r[10] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[10] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[10] + 0x00000008u);
    c->r[3] = 0u + 0x00000000u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[4] & c->r[2];
    c->r[7] = c->r[5] << 31;
    c->r[4] = c->r[4] >> 1;
    c->r[3] = c->r[5] & c->r[3];
    c->r[4] = c->r[4] | c->r[7];
    c->r[5] = c->r[5] >> 1;
    c->r[2] = c->r[2] | c->r[4];
    c->r[3] = c->r[3] | c->r[5];
    c->r[6] = c->r[6] + 0x00000001u;
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[10] + 0x00000014u, c->r[3]);
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[6]);
L_08a13a00:
    { c->r[6] = c->r[10] + 0u; goto L_08a13798; }
L_08a13a08:
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[8] >> 31; if (_c) goto L_08a13944; }
    { c->r[2] = mem_r32(ram, c->r[10] + 0x00000014u); goto L_08a139a4; }
L_08a13a18:
    c->r[4] = 0u - c->r[4];
    c->r[5] = 0u - c->r[5];
    c->r[3] = (0u < c->r[4]) ? 1u : 0u;
    c->r[5] = c->r[5] - c->r[3];
    mem_w32(ram, c->r[10] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[11]);
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[4]);
    { mem_w32(ram, c->r[10] + 0x00000014u, c->r[5]); goto L_08a1390c; }
L_08a13a3c:
    c->r[2] = c->r[12] + c->r[14];
    c->r[4] = (c->r[2] < c->r[14]) ? 1u : 0u;
    c->r[3] = c->r[13] + c->r[15];
    c->r[3] = c->r[3] + c->r[4];
    mem_w32(ram, c->r[10] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[11]);
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[10] + 0x00000014u, c->r[3]);
    { c->r[2] = mem_r32(ram, c->r[10] + 0x00000014u); goto L_08a139a4; }
L_08a13a64:
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a13a7c; }
    c->r[14] = 0u + 0u;
    c->r[15] = 0u + 0u;
    { c->r[6] = mem_r32(ram, c->r[7] + 0x00000004u); goto L_08a138c8; }
L_08a13a7c:
    c->r[12] = 0u + 0u;
    c->r[13] = 0u + 0u;
    { c->r[11] = c->r[9] + 0u; goto L_08a138c4; }
    return; /* fell out of func_08a13744 */
}

/* func_08a1593c  0x08a1593c..0x08a159e0  164 bytes, source=fde */
void func_08a1593c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1593cu);
    c->r[29] = c->r[29] + 0xfffff900u;
    mem_w32(ram, c->r[29] + 0x000006e0u, c->r[16]);
    c->r[16] = c->r[31] + 0u;
    c->r[16] = alx_ins(c->r[16], 0u, 0u, 0u);
    mem_w32(ram, c->r[29] + 0x000006ecu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x000006e8u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    c->r[6] = 0u + 0x00000368u;
    mem_w32(ram, c->r[29] + 0x000006e4u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x000006f0u, c->r[31]);
    { c->r[31] = 0x08a15978u; c->r[18] = alx_ins(c->r[18], 0u, 0u, 0u); func_08a19ec4(c, ram); }
    c->r[4] = c->r[17] + 0u;
    mem_w32(ram, c->r[17] + 0x00000350u, c->r[16]);
    { c->r[31] = 0x08a15988u; c->r[5] = c->r[29] + 0u; func_08a154c8(c, ram); }
    c->r[4] = c->r[17] + 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[29] + 0u; if (_c) goto L_08a159d8; }
    c->r[2] = c->r[29] + 0x000006d0u;
    mem_w32(ram, c->r[17] + 0x00000074u, c->r[2]);
    c->r[3] = 0u + 0x0000001du;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x000006d0u, c->r[19]);
    mem_w32(ram, c->r[29] + 0x000006a8u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x000006a0u, c->r[3]);
    { c->r[31] = 0x08a159b8u; mem_w32(ram, c->r[29] + 0x0000069cu, 0u); func_08a15734(c, ram); }
    mem_w32(ram, c->r[17] + 0x00000350u, c->r[18]);
    c->r[31] = mem_r32(ram, c->r[29] + 0x000006f0u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x000006ecu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x000006e8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000006e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000006e0u);
    { c->r[29] = c->r[29] + 0x00000700u; return; }
L_08a159d8:
    { c->r[31] = 0x08a159e0u; func_08a19084(c, ram); }
    return; /* fell out of func_08a1593c */
}

/* func_08a17318  0x08a17318..0x08a173f0  216 bytes, source=residue */
void func_08a17318(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17318u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    c->r[17] = c->r[17] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[2] = c->r[5] - c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x08a17354u; c->r[4] = c->r[2] + 0u; func_08a17160(c, ram); }
    c->r[16] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a17364u; c->r[5] = c->r[19] + 0u; func_08a170ec(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[17] + 0u;
    c->r[7] = c->r[29] + 0u;
    { c->r[31] = 0x08a17378u; c->r[4] = c->r[16] + 0u; func_08a16cd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000004u);
    c->r[4] = c->r[18] - c->r[4];
    { c->r[31] = 0x08a17388u; c->r[4] = c->r[4] + 0x00000004u; func_08a17160(c, ram); }
    c->r[16] = c->r[2] & 0x00ffu;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a17398u; c->r[4] = c->r[16] + 0u; func_08a170ec(c, ram); }
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[18] + 0u;
    { c->r[31] = 0x08a173b0u; c->r[7] = c->r[29] + 0x00000004u; func_08a16cd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = (c->r[3] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a173d0; }
    c->r[2] = (c->r[4] < c->r[3]) ? 1u : 0u;
    c->r[5] = 0u + 0xffffffffu;
    if (c->r[2] == 0u) c->r[5] = 0u;
L_08a173d0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a17318 */
}

/* func_08a18fc4  0x08a18fc4..0x08a18fcc  8 bytes, source=residue */
void func_08a18fc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18fc4u);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18fc4 */
}

/* func_08a1a21c  0x08a1a21c..0x08a1a2a0  132 bytes, source=sweep */
void func_08a1a21c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a21cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1a230u; c->r[16] = mem_r32(ram, c->r[4] + 0x0000037cu); hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[16] >> 31);
    c->r[2] = c->r[2] >> 27;
    c->r[2] = c->r[16] + c->r[2];
    c->r[3] = 0x08ba0000u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 4u);
    c->r[3] = c->r[3] + 0xffffff78u;
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[16] - c->r[2]; if (_c) goto L_08a1a274; }
    c->r[6] = c->r[2] << 2;
    c->r[5] = c->r[6] + c->r[3];
L_08a1a25c:
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000084u);
    if (c->r[2] == c->r[16]) { mem_w32(ram, c->r[5] + 0x00000084u, 0u); goto L_08a1a290; }
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[3] != 0u); c->r[5] = c->r[6] + c->r[3]; if (_c) goto L_08a1a25c; }
L_08a1a274:
    { c->r[31] = 0x08a1a27cu; hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    c->r[2] = 0u + 0xffffffffu;
L_08a1a280:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1a290:
    { c->r[31] = 0x08a1a298u; mem_w32(ram, c->r[5] + 0x00000004u, 0u); hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    { c->r[2] = c->r[16] + 0u; goto L_08a1a280; }
    return; /* fell out of func_08a1a21c */
}

/* func_08a1c244  0x08a1c244..0x08a1c254  16 bytes, source=indirect */
void func_08a1c244(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c244u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); recomp_call_indirect(c, ram, 0x08a1c24cu, 0x08a1b24cu); return; }
    return; /* fell out of func_08a1c244 */
}

/* func_08a21690  0x08a21690..0x08a2190c  636 bytes, source=sweep */
void func_08a21690(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21690u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]); if (_c) goto L_08a217b4; }
    { c->r[31] = 0x08a216b4u; func_08a19f7c(c, ram); }
    c->r[10] = c->r[16] + 0xfffffff8u;
    c->r[3] = mem_r32(ram, c->r[10] + 0x00000004u);
    c->r[13] = 0x08a60000u;
    c->r[11] = c->r[13] + 0x00004de0u;
    c->r[8] = c->r[3] + 0u;
    c->r[8] = alx_ins(c->r[8], 0u, 0u, 0u);
    c->r[4] = c->r[10] + c->r[8];
    c->r[9] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[11] + 0x00000008u);
    { int _c = (c->r[4] == c->r[2]); c->r[9] = alx_ins(c->r[9], 0u, 0u, 1u); if (_c) goto L_08a218b0; }
    c->r[2] = c->r[3] & 0x0001u;
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[9]);
    { int _c = (c->r[2] != 0u); c->r[12] = 0u + 0u; if (_c) goto L_08a21714; }
    c->r[5] = mem_r32(ram, c->r[16] + 0xfffffff8u);
    c->r[2] = c->r[11] + 0x00000008u;
    c->r[10] = c->r[10] - c->r[5];
    c->r[3] = mem_r32(ram, c->r[10] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); c->r[8] = c->r[8] + c->r[5]; if (_c) goto L_08a218a8; }
    c->r[7] = mem_r32(ram, c->r[10] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[3]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[7]);
L_08a21714:
    c->r[3] = c->r[4] + c->r[9];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[8] | 0x0001u; if (_c) goto L_08a21754; }
    { int _c = (c->r[12] != 0u); c->r[8] = c->r[8] + c->r[9]; if (_c) goto L_08a218a0; }
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x00004de8u;
    if (c->r[3] == c->r[2]) { c->r[12] = 0u + 0x00000001u; goto L_08a2188c; }
L_08a21744:
    c->r[7] = mem_r32(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[3]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[7]);
L_08a21750:
    c->r[2] = c->r[8] | 0x0001u;
L_08a21754:
    c->r[3] = c->r[10] + c->r[8];
    mem_w32(ram, c->r[10] + 0x00000004u, c->r[2]);
    { int _c = (c->r[12] != 0u); mem_w32(ram, c->r[3] + 0x00000000u, c->r[8]); if (_c) goto L_08a217ac; }
    c->r[2] = (c->r[8] < 0x00000200u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[8] >> 9; if (_c) goto L_08a217c8; }
    c->r[4] = c->r[8] >> 3;
    c->r[5] = c->r[13] + 0x00004de0u;
    c->r[2] = c->r[4] << 3;
    c->r[7] = c->r[2] + c->r[5];
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[4] = c->r[4] >> 2;
    c->r[2] = 0u + 0x00000001u;
    c->r[6] = mem_r32(ram, c->r[7] + 0x00000008u);
    c->r[2] = c->r[2] << (c->r[4] & 31u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[3]);
L_08a2179c:
    mem_w32(ram, c->r[10] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[6] + 0x0000000cu, c->r[10]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[10]);
L_08a217ac:
    { c->r[31] = 0x08a217b4u; c->r[4] = c->r[17] + 0u; func_08a19fb8(c, ram); }
L_08a217b4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a217c8:
    { int _c = (c->r[6] == 0u); c->r[4] = c->r[8] >> 3; if (_c) goto L_08a21820; }
    c->r[3] = c->r[8] >> 6;
    c->r[2] = (c->r[6] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[3] + 0x00000038u; if (_c) goto L_08a21820; }
    c->r[2] = (c->r[6] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[6] + 0x0000005bu; if (_c) goto L_08a21820; }
    c->r[3] = c->r[8] >> 12;
    c->r[2] = (c->r[6] < 0x00000055u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[3] + 0x0000006eu; if (_c) goto L_08a21820; }
    c->r[3] = c->r[8] >> 15;
    c->r[2] = (c->r[6] < 0x00000155u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[3] + 0x00000077u; if (_c) goto L_08a21820; }
    c->r[2] = c->r[8] >> 18;
    c->r[3] = (c->r[6] < 0x00000555u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[2] + 0x0000007cu; if (_c) goto L_08a21820; }
    c->r[4] = 0u + 0x0000007eu;
L_08a21820:
    c->r[5] = c->r[13] + 0x00004de0u;
    c->r[2] = c->r[4] << 3;
    c->r[7] = c->r[2] + c->r[5];
    c->r[6] = mem_r32(ram, c->r[7] + 0x00000008u);
    if (c->r[6] == c->r[7]) { c->r[2] = mem_r32(ram, c->r[5] + 0x00000004u); goto L_08a21874; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[2] = (c->r[8] < c->r[2]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[7] = mem_r32(ram, c->r[6] + 0x0000000cu); goto L_08a2179c; }
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000008u);
L_08a21850:
    if (c->r[6] == c->r[7]) { c->r[7] = mem_r32(ram, c->r[6] + 0x0000000cu); goto L_08a2179c; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[2] = (c->r[8] < c->r[2]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[6] = mem_r32(ram, c->r[6] + 0x00000008u); goto L_08a21850; }
    { c->r[7] = mem_r32(ram, c->r[6] + 0x0000000cu); goto L_08a2179c; }
L_08a21874:
    c->r[4] = c->r[4] >> 2;
    c->r[3] = 0u + 0x00000001u;
    c->r[3] = c->r[3] << (c->r[4] & 31u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[5] + 0x00000004u, c->r[2]); goto L_08a2179c; }
L_08a2188c:
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[10]);
    mem_w32(ram, c->r[10] + 0x0000000cu, c->r[3]);
    { mem_w32(ram, c->r[10] + 0x00000008u, c->r[3]); goto L_08a21750; }
L_08a218a0:
    { c->r[3] = mem_r32(ram, c->r[4] + 0x00000008u); goto L_08a21744; }
L_08a218a8:
    { c->r[12] = 0u + 0x00000001u; goto L_08a21714; }
L_08a218b0:
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] != 0u); c->r[8] = c->r[8] + c->r[9]; if (_c) goto L_08a218d8; }
    c->r[5] = mem_r32(ram, c->r[16] + 0xfffffff8u);
    c->r[10] = c->r[10] - c->r[5];
    c->r[7] = mem_r32(ram, c->r[10] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[10] + 0x00000008u);
    c->r[8] = c->r[8] + c->r[5];
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[6] + 0x0000000cu, c->r[7]);
L_08a218d8:
    c->r[2] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x000051e8u);
    c->r[4] = c->r[8] | 0x0001u;
    mem_w32(ram, c->r[11] + 0x00000008u, c->r[10]);
    c->r[3] = (c->r[8] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[10] + 0x00000004u, c->r[4]); if (_c) goto L_08a217ac; }
    c->r[2] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[2] + 0xffffff3cu);
    { c->r[31] = 0x08a21904u; c->r[4] = c->r[17] + 0u; func_08a2190c(c, ram); }
    { goto L_08a217ac; }
    return; /* fell out of func_08a21690 */
}

/* func_08a23ad0  0x08a23ad0..0x08a23b5c  140 bytes, source=residue */
void func_08a23ad0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23ad0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x0100u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[4] + 0u; if (_c) goto L_08a23b38; }
L_08a23afc:
    c->r[2] = c->r[3] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 12u, 12u);
    { c->r[31] = 0x08a23b0cu; mem_w16(ram, c->r[16] + 0x0000000cu, c->r[2]); func_08a19374(c, ram); }
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000eu);
    c->r[6] = c->r[17] + 0u;
    c->r[7] = c->r[18] + 0u;
    { c->r[31] = 0x08a23b20u; c->r[4] = c->r[2] + 0u; func_08a23d04(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23b38:
    { c->r[31] = 0x08a23b40u; func_08a19374(c, ram); }
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000eu);
    c->r[4] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a23b54u; c->r[7] = 0u + 0x00000002u; func_08a23ee8(c, ram); }
    { c->r[3] = mem_r16(ram, c->r[16] + 0x0000000cu); goto L_08a23afc; }
    return; /* fell out of func_08a23ad0 */
}
