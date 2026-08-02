#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_0880616c  0x0880616c..0x08806528  956 bytes, source=sweep */
void func_0880616c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880616cu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088061cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08806218; }
L_088061cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088061f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 31;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08806218; }
L_088061f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08806218; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 28;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08806218:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880636c; }
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806250u; c->r[5] = c->r[2] + 0u; func_08806bb0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08806258:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08806270; }
    { goto L_088064b0; }
L_08806270:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] << 5;
    mem_w16(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08806258; }
L_0880636c:
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806394u; c->r[5] = c->r[2] + 0u; func_08806bb0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0880639c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088063b4; }
    { goto L_088064b0; }
L_088063b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] << 6;
    mem_w16(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0880639c; }
L_088064b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 9;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd3000000u;
    c->r[2] = c->r[2] | 0x0001u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088064e8u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0x12800000u;
    c->r[6] = c->r[6] | 0x011cu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08806508u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000020u); func_08807100(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806514u; c->r[5] = 0xd3000000u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0880616c */
}

/* func_0880746c  0x0880746c..0x0880749c  48 bytes, source=sweep */
void func_0880746c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880746cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08807488u; c->r[5] = 0u | 0xffffu; func_08805b24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0880746c */
}

/* func_08808280  0x08808280..0x088082b8  56 bytes, source=sweep */
void func_08808280(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808280u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    vfpu_exec(c, ram, 0xf38380a0u); /* vmidt.q */
    vfpu_exec(c, ram, 0xf8400000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8410010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8420020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8430030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08808280 */
}

/* func_0880aed0  0x0880aed0..0x0880af9c  204 bytes, source=fde */
void func_0880aed0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880aed0u);
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
    { c->r[31] = 0x0880af04u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0880af10u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x0880af20u; c->r[4] = c->r[4] + 0x00005260u; func_089d76a0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0880af3cu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
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
    { c->r[31] = 0x0880af6cu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000004u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0880af84u; c->r[6] = c->r[2] + 0u; func_089f8998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[29] = c->r[29] + 0x00000230u; return; }
    return; /* fell out of func_0880aed0 */
}

/* func_0880d4a0  0x0880d4a0..0x0880d4c8  40 bytes, source=sweep */
void func_0880d4a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d4a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000014cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d4a0 */
}

/* func_0880e9d4  0x0880e9d4..0x0880ebcc  504 bytes, source=fde */
void func_0880e9d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e9d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ea18; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x0000158du;
    { c->r[31] = 0x0880ea10u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ebb4; }
L_0880ea18:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ca0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880eac4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ea38u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00002750u;
    { c->r[31] = 0x0880ea54u; c->r[7] = c->r[2] + 0u; func_089d96c4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ea60u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0x00010000u;
    c->r[6] = c->r[6] | 0x8470u;
    { c->r[31] = 0x0880ea80u; c->r[7] = c->r[2] + 0u; func_089d96c4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0880ea90u; c->r[5] = 0u + 0x00000001u; func_089d987c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ea9cu; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0880eab4u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0880eac4u; c->r[5] = 0u + 0u; func_089d8f88(c, ram); }
L_0880eac4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ca0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880ebb4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880eae4u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880eb3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880eb0c; }
    { goto L_0880eb28; }
L_0880eb0c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0880eb20u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
    { goto L_0880eb3c; }
L_0880eb28:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880eb3cu; c->r[5] = c->r[5] + 0xffffe048u; func_0880f03c(c, ram); }
L_0880eb3c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880eb48u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880eb60; }
    { c->r[31] = 0x0880eb60u; func_0880dc90(c, ram); }
L_0880eb60:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003cd4u);
    c->r[2] = 0x08900000u;
    c->r[2] = c->r[2] + 0x00002cacu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880ebb4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880eb84u; c->r[4] = c->r[4] + 0x00000330u; func_089d999c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880eb94u; c->r[4] = c->r[4] + 0x00000330u; func_089d99c4(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ebb4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880ebb4u; c->r[5] = c->r[5] + 0xffffebccu; func_0880f03c(c, ram); }
L_0880ebb4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880e9d4 */
}

/* func_0881231c  0x0881231c..0x08812380  100 bytes, source=fde */
void func_0881231c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881231cu);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812338u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff100u;
    { c->r[31] = 0x0881235cu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812364u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    { c->r[31] = 0x0881236cu; c->r[4] = 0u + 0u; func_0880b0d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_0881231c */
}

/* func_08814604  0x08814604..0x08814784  384 bytes, source=fde */
void func_08814604(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08814604u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881463cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08814660; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08814660u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08814660:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08814680u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088146a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088146a4u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_088146a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088146c4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088146e8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088146e8u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_088146e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08814708u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881472c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0881472cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0881472c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881474cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08814770; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08814770u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08814770:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08814604 */
}

/* func_08819834  0x08819834..0x08819a54  544 bytes, source=sweep */
void func_08819834(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819834u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08819a40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff540u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08819880u: goto L_08819880; case 0x08819894u: goto L_08819894; case 0x088198a8u: goto L_088198a8; case 0x088198bcu: goto L_088198bc; case 0x088198d0u: goto L_088198d0; case 0x088198e4u: goto L_088198e4; case 0x088198f8u: goto L_088198f8; case 0x0881990cu: goto L_0881990c; case 0x08819920u: goto L_08819920; case 0x08819934u: goto L_08819934; case 0x08819948u: goto L_08819948; case 0x0881995cu: goto L_0881995c; case 0x08819970u: goto L_08819970; case 0x08819984u: goto L_08819984; case 0x0881999cu: goto L_0881999c; case 0x088199b4u: goto L_088199b4; case 0x088199ccu: goto L_088199cc; case 0x088199e4u: goto L_088199e4; case 0x088199f8u: goto L_088199f8; case 0x08819a0cu: goto L_08819a0c; case 0x08819a20u: goto L_08819a20; case 0x08819a34u: goto L_08819a34; default: recomp_trap_unknown_indirect(c, ram, 0x08819878u, _t); return; } }
L_08819880:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881988cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819a54(c, ram); }
    { goto L_08819a40; }
L_08819894:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088198a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819a98(c, ram); }
    { goto L_08819a40; }
L_088198a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088198b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819ee4(c, ram); }
    { goto L_08819a40; }
L_088198bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088198c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819adc(c, ram); }
    { goto L_08819a40; }
L_088198d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088198dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819b20(c, ram); }
    { goto L_08819a40; }
L_088198e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088198f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819b64(c, ram); }
    { goto L_08819a40; }
L_088198f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819904u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819ba8(c, ram); }
    { goto L_08819a40; }
L_0881990c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819918u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819bec(c, ram); }
    { goto L_08819a40; }
L_08819920:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881992cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819c30(c, ram); }
    { goto L_08819a40; }
L_08819934:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819940u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819c74(c, ram); }
    { goto L_08819a40; }
L_08819948:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819954u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819cb8(c, ram); }
    { goto L_08819a40; }
L_0881995c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819968u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819cfc(c, ram); }
    { goto L_08819a40; }
L_08819970:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881997cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819d40(c, ram); }
    { goto L_08819a40; }
L_08819984:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08819994u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819d84(c, ram); }
    { goto L_08819a40; }
L_0881999c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088199acu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819d84(c, ram); }
    { goto L_08819a40; }
L_088199b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088199c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819d84(c, ram); }
    { goto L_08819a40; }
L_088199cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088199dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819d84(c, ram); }
    { goto L_08819a40; }
L_088199e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088199f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819dd4(c, ram); }
    { goto L_08819a40; }
L_088199f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819a04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819e18(c, ram); }
    { goto L_08819a40; }
L_08819a0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819a18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819e5c(c, ram); }
    { goto L_08819a40; }
L_08819a20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819a2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819ea0(c, ram); }
    { goto L_08819a40; }
L_08819a34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819a40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819f90(c, ram); }
L_08819a40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819834 */
}

/* func_0881e654  0x0881e654..0x0881eb78  1316 bytes, source=fde */
void func_0881e654(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881e654u);
    c->r[29] = c->r[29] + 0xfffffea0u;
    mem_w32(ram, c->r[29] + 0x00000158u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000154u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000150u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881e698; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_0881eb60; }
L_0881e698:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881e6b4; }
    { goto L_0881e804; }
L_0881e6b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000017u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e7e0; }
    { c->r[31] = 0x0881e6ccu; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e7e0; }
    mem_w8(ram, c->r[30] + 0x00000008u, 0u);
L_0881e6d8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e6f0; }
    { goto L_0881e71c; }
L_0881e6f0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e04u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0881e6d8; }
L_0881e71c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881e760; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881e73cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff848u;
    { c->r[31] = 0x0881e758u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_0881e788; }
L_0881e760:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881e76cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff850u;
    { c->r[31] = 0x0881e788u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
L_0881e788:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881e794u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2du, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881e7b8u; c->r[5] = c->r[2] + 0u; func_089d7208(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881e7d0u; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]); goto L_0881eb60; }
L_0881e7e0:
    { c->r[31] = 0x0881e7e8u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881eb60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000017u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w8(ram, c->r[2] + 0x00000016u, 0u); goto L_0881eb60; }
L_0881e804:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881e810u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881e874; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881e874; }
    { goto L_0881ea34; }
L_0881e874:
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff864u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881e89cu; func_0880d140(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881e8acu; c->r[5] = 0u + 0x00000006u; func_089d7194(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881e8b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000eu;
    { c->r[31] = 0x0881e8ccu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000017u, 0u);
    c->r[4] = 0u + 0x00000039u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0881e8f0u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881e90cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000130u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881e9ac; }
    mem_w8(ram, c->r[30] + 0x00000008u, 0u);
L_0881e928:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e940; }
    { goto L_0881e9ac; }
L_0881e940:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881e96c; }
    { goto L_0881e99c; }
L_0881e96c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0x00000039u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x0881e99cu; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
L_0881e99c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0881e928; }
L_0881e9ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881eb60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff868u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff86cu);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881ea10u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_0881eb60; }
L_0881ea34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000017u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ea84; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff85cu;
    { c->r[31] = 0x0881ea5cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000110u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881ea74u; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]); goto L_0881eb60; }
L_0881ea84:
    { c->r[31] = 0x0881ea8cu; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881eb60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e04u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[30] + 0x00000009u, c->r[2]);
L_0881eae4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881eafc; }
    { goto L_0881eb4c; }
L_0881eafc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881eb08u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881eb2cu; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881eb3c; }
    { goto L_0881eb4c; }
L_0881eb3c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000009u, c->r[2]); goto L_0881eae4; }
L_0881eb4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000009u);
    mem_w8(ram, c->r[2] + 0x00000016u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000017u, 0u);
L_0881eb60:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000158u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000154u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000150u);
    { c->r[29] = c->r[29] + 0x00000160u; return; }
    return; /* fell out of func_0881e654 */
}

/* func_08821760  0x08821760..0x08821788  40 bytes, source=sweep */
void func_08821760(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08821760u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00001cd8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08821760 */
}

/* func_08826c10  0x08826c10..0x08826c44  52 bytes, source=sweep */
void func_08826c10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826c10u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b94u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826c10 */
}

/* func_0882925c  0x0882925c..0x088294a4  584 bytes, source=fde */
void func_0882925c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882925cu);
    c->r[29] = c->r[29] + 0xfffffdd0u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08829288u; c->r[6] = 0u + 0x00000200u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000214u, 0u);
L_08829294:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088292b4; }
    { goto L_0882947c; }
L_088292b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffff80u;
    mem_w32(ram, c->r[30] + 0x00000218u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[2] = (c->r[3] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829460; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000159cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08829314u: goto L_08829314; case 0x08829330u: goto L_08829330; case 0x0882934cu: goto L_0882934c; case 0x08829368u: goto L_08829368; case 0x08829384u: goto L_08829384; case 0x088293a0u: goto L_088293a0; case 0x088293bcu: goto L_088293bc; case 0x088293d8u: goto L_088293d8; case 0x088293f4u: goto L_088293f4; case 0x08829410u: goto L_08829410; case 0x0882942cu: goto L_0882942c; case 0x08829448u: goto L_08829448; case 0x08829460u: goto L_08829460; default: recomp_trap_unknown_indirect(c, ram, 0x0882930cu, _t); return; } }
L_08829314:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000020acu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_08829330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00002039u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_0882934c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000203au;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_08829368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000153u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_08829384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000152u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_088293a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000178u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_088293bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000201cu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_088293d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000201du;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_088293f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000201eu;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_08829410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00002018u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_0882942c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00002019u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08829460; }
L_08829448:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000201au;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08829460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000214u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]); goto L_08829294; }
L_0882947c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08829490u; c->r[6] = c->r[2] + 0u; func_08a06b38(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[29] = c->r[29] + 0x00000230u; return; }
    return; /* fell out of func_0882925c */
}

/* func_0882c98c  0x0882c98c..0x0882cb44  440 bytes, source=fde */
void func_0882c98c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882c98cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882c9ccu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882cb2c; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000170cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001710u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001714u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001718u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ca18u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00001f0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[20] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ca5cu; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[20] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0882ca8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_089034d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0882cab0u, 0x7u); goto L_0882cab4; }
L_0882cab4:
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882cad0; }
    c->r[2] = 0u + 0x00000064u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0882cad0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004608u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000016f8u;
    { c->r[31] = 0x0882cae8u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x0882caf8u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00030000u;
    { c->r[31] = 0x0882cb08u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00004608u;
    { c->r[31] = 0x0882cb1cu; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x0882cb2cu; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_0882cb2c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0882c98c */
}

/* func_08831418  0x08831418..0x08831454  60 bytes, source=fde */
void func_08831418(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831418u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000006u;
    { c->r[31] = 0x08831440u; c->r[7] = 0u + 0x00000001u; func_08831230(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08831418 */
}

/* func_08833144  0x08833144..0x0883327c  312 bytes, source=fde */
void func_08833144(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08833144u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
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
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088331a4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088331b4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088331e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088331e0u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
L_088331e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08833264; }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088331f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08833210; }
    { goto L_08833250; }
L_08833210:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883321cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088303bc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08833240; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833238u; c->r[5] = 0u + 0x00000004u; func_08937a50(c, ram); }
    { goto L_08833264; }
L_08833240:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088331f8; }
L_08833250:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833264u; c->r[5] = 0u + 0x00000005u; func_08937a50(c, ram); }
L_08833264:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08833144 */
}

/* func_088352d0  0x088352d0..0x08835580  688 bytes, source=fde */
void func_088352d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088352d0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835300u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835314u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08835320u; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0883532cu; c->r[5] = 0u + 0u; func_0882f538(c, ram); }
    { c->r[31] = 0x08835334u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08831578(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08835340u; c->r[5] = 0u + 0u; func_0882f778(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08835350u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08835360u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08835378u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08835380u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08830474(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0883538cu; c->r[4] = c->r[2] + 0u; func_0893a590(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x088353a8u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f0cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = 0u + 0x00000140u;
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x000000b5u;
    mem_w16(ram, c->r[30] + 0x00000036u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffff60u;
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffa6u;
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088354c4u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000014u); func_08937aec(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835568; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088354e0u; c->r[5] = 0u + 0x00000011u; func_08937a50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088354fcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835568; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0883552cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000019dcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x08835544u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000048u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883555cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000048u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08835568:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088352d0 */
}

/* func_0883a204  0x0883a204..0x0883a25c  88 bytes, source=sweep */
void func_0883a204(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a204u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0883a220u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]); func_0883a25c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    alx_div(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0883a23cu, 0x7u); goto L_0883a240; }
L_0883a240:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883a204 */
}

/* func_0883c3ec  0x0883c3ec..0x0883c47c  144 bytes, source=fde */
void func_0883c3ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c3ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0883c400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883c418; }
    { goto L_0883c468; }
L_0883c418:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e50u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004e64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x0883c458u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0883c400; }
L_0883c468:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883c3ec */
}

/* func_08845c8c  0x08845c8c..0x08845d80  244 bytes, source=sweep */
void func_08845c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08845c8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08845ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845cc0; }
    { goto L_08845d64; }
L_08845cc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845d10; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08845cd8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08845cf8u; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845d54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08845d68; }
L_08845d10:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08845d1cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08845d3cu; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845d54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08845d68; }
L_08845d54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08845ca8; }
L_08845d64:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08845d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08845c8c */
}

/* func_088478e0  0x088478e0..0x088498e4  8196 bytes, source=fde */
void func_088478e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088478e0u);
    c->r[29] = c->r[29] + 0xfffffe70u;
    mem_w32(ram, c->r[29] + 0x0000018cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000188u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000184u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000180u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f10u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088498c0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f28u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884798c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f30u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847948; }
    { c->r[31] = 0x08847930u; hle_dispatch_stub(c, ram, 0x08a24d54u); /* sceUmdGetDriveStat */ }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847948; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f30u, c->r[2]);
L_08847948:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f30u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884798c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f30u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f30u, c->r[2]);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884798c; }
    { c->r[31] = 0x08847980u; func_088498e4(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]); goto L_088498c4; }
L_0884798c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f2cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088479f4; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f10u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088479f4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x088479c0u; c->r[5] = 0u + 0u; func_089f8b84(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088479e8; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f10u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004f10u, c->r[2]); goto L_088479f4; }
L_088479e8:
    c->r[3] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000164u, c->r[3]); goto L_088498c4; }
L_088479f4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f28u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847a8c; }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f18u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847a2c; }
    { goto L_08847af0; }
L_08847a2c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08847a44u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08847a54u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08847af0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x08847a7cu; c->r[5] = 0u + 0x0000002du; func_089f8a7c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004f28u, c->r[2]); goto L_08847af0; }
L_08847a8c:
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f34u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004f34u, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f34u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021b4u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847adc; }
    { goto L_08847af0; }
L_08847adc:
    { c->r[31] = 0x08847ae4u; func_088498e4(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]); goto L_088498c4; }
L_08847af0:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f18u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f18u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f18u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847b3c; }
    { goto L_08847b48; }
L_08847b3c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021b8u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_08847b48:
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f18u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004f18u, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004f40u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08847b70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847b88; }
    { goto L_08849198; }
L_08847b88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849188; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000021e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08847bc8u: goto L_08847bc8; case 0x08847be8u: goto L_08847be8; case 0x08847cccu: goto L_08847ccc; case 0x08847d88u: goto L_08847d88; case 0x08847fa4u: goto L_08847fa4; case 0x088486d4u: goto L_088486d4; case 0x088487f0u: goto L_088487f0; case 0x08848888u: goto L_08848888; case 0x08848920u: goto L_08848920; case 0x088489b8u: goto L_088489b8; case 0x08848a50u: goto L_08848a50; case 0x08848c74u: goto L_08848c74; case 0x08848d50u: goto L_08848d50; case 0x08848df4u: goto L_08848df4; case 0x08848f08u: goto L_08848f08; case 0x08848f98u: goto L_08848f98; case 0x08849038u: goto L_08849038; case 0x088490d8u: goto L_088490d8; case 0x08849154u: goto L_08849154; case 0x08849188u: goto L_08849188; default: recomp_trap_unknown_indirect(c, ram, 0x08847bc0u, _t); return; } }
L_08847bc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08847bd4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08847be0u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08849188; }
L_08847be8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847c40; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847c20; }
    { goto L_08849188; }
L_08847c20:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847c40; }
    { goto L_08849188; }
L_08847c40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08847c4cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08849cf0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007788u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08847c84u; func_089b6ae0(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f14u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004f14u, c->r[2]); goto L_08849188; }
L_08847ccc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847d24; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847d04; }
    { goto L_08849188; }
L_08847d04:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847d24; }
    { goto L_08849188; }
L_08847d24:
    { c->r[31] = 0x08847d2cu; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849188; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08847d48u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08849cf0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007718u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08847d80u; func_089b6ae0(c, ram); }
    { goto L_08849188; }
L_08847d88:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847de0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847dc0; }
    { goto L_08849188; }
L_08847dc0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847de0; }
    { goto L_08849188; }
L_08847de0:
    mem_w16(ram, c->r[30] + 0x00000010u, 0u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x08850000u;
    c->r[6] = c->r[6] + 0xffffa144u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08847e28u; c->r[8] = 0u + 0u; func_089c6b7c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08847e64u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08849cf0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007788u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08847e9cu; func_089b42f8(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000008u);
    { c->r[31] = 0x08847f24u; c->r[5] = c->r[2] + 0u; func_08849de0(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08847f5cu; c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu); func_08a191d4(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08847f78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08847f70u; c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu); func_08a191d4(c, ram); }
    { mem_w16(ram, c->r[30] + 0x0000016cu, c->r[2]); goto L_08847f80; }
L_08847f78:
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x0000016cu, c->r[2]);
L_08847f80:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000016cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000168u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f14u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004f14u, c->r[2]); goto L_08849188; }
L_08847fa4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847ffc; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847fdc; }
    { goto L_08849188; }
L_08847fdc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08847ffc; }
    { goto L_08849188; }
L_08847ffc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848008u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08849cf0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007788u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08848040u; func_089b42f8(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0884809cu; c->r[5] = c->r[5] + 0x0000213cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088480cc; }
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088480b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002148u;
    { c->r[31] = 0x088480ccu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
L_088480cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088480e0u; c->r[5] = c->r[5] + 0x00002158u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08848124; }
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088480fcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884810cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002164u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08848124u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
L_08848124:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848134u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848144u; c->r[5] = 0u + 0x0000002eu; func_08a1b13c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08848154u; c->r[5] = c->r[5] + 0x00002174u; func_08a1af70(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08848164u; c->r[5] = c->r[5] + 0x0000217cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08848180; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848180u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u); func_08a1af70(c, ram); }
L_08848180:
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x08850000u;
    c->r[6] = c->r[6] + 0xffffa144u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088481ccu; c->r[8] = 0u + 0u; func_089c6b7c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00004f14u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x08848248u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x0884827cu; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088482b8u; func_0884bff4(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088482f4u; func_0884bff4(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08848330u; func_0884bff4(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08848360u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_0884b8f0(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08848440; }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088483a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088483bcu; c->r[5] = c->r[5] + 0x00002188u; func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088483d0u; c->r[5] = c->r[2] + 0u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884842c; }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088483ecu; c->r[5] = c->r[2] + 0u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08848440; }
L_0884842c:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08848440u; c->r[5] = c->r[5] + 0x00002190u; func_08a1b1a4(c, ram); }
L_08848440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08848454u; c->r[5] = c->r[5] + 0x0000213cu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088486bc; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f24u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088486bc; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f24u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088484a0; }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08848498u; c->r[5] = c->r[5] + 0x00002194u; func_08a1af70(c, ram); }
    { goto L_088484b4; }
L_088484a0:
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088484b4u; c->r[5] = c->r[5] + 0x00002198u; func_08a1af70(c, ram); }
L_088484b4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088484c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000219cu;
    { c->r[31] = 0x088484e0u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088484ecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088484fcu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002164u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0884851cu; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848530u; c->r[5] = c->r[3] + 0u; func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848540u; c->r[5] = 0u + 0x0000002eu; func_08a1b13c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08848550u; c->r[5] = c->r[5] + 0x00002174u; func_08a1af70(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08848590u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[7] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088485d4u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x08848608u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08848644u; func_0884bff4(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08848680u; func_0884bff4(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088486bcu; func_0884bff4(c, ram); }
L_088486bc:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f14u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004f14u, c->r[2]); goto L_08849188; }
L_088486d4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884872c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884870c; }
    { goto L_08849188; }
L_0884870c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884872c; }
    { goto L_08849188; }
L_0884872c:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884878cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_08a191d4(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884879cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08849cf0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088487d8u; func_08895744(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f14u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004f14u, c->r[2]); goto L_08849188; }
L_088487f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848848; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848828; }
    { goto L_08849188; }
L_08848828:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848848; }
    { goto L_08849188; }
L_08848848:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884885cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848868u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000060u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08848880u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { goto L_08849188; }
L_08848888:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088488e0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088488c0; }
    { goto L_08849188; }
L_088488c0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088488e0; }
    { goto L_08849188; }
L_088488e0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088488f4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848900u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000060u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08848918u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { goto L_08849188; }
L_08848920:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848978; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848958; }
    { goto L_08849188; }
L_08848958:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848978; }
    { goto L_08849188; }
L_08848978:
    c->r[2] = 0u + 0x00000012u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884898cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848998u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000060u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088489b0u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { goto L_08849188; }
L_088489b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848a10; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088489f0; }
    { goto L_08849188; }
L_088489f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848a10; }
    { goto L_08849188; }
L_08848a10:
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848a24u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848a30u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000060u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08848a48u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { goto L_08849188; }
L_08848a50:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848aa8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848a88; }
    { goto L_08849188; }
L_08848a88:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848aa8; }
    { goto L_08849188; }
L_08848aa8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021bcu);
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848ac0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000021c0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08848adcu; c->r[7] = mem_r32(ram, c->r[7] + 0x000021c4u); func_08a13ee0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021c8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000021c8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08848b14u; func_0880d140(c, ram); }
    { c->r[31] = 0x08848b1cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u); func_08a136f8(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08848b30u; c->r[7] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848b3cu; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff89e0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848b50u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000021c0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08848b6cu; c->r[7] = mem_r32(ram, c->r[7] + 0x000021c4u); func_08a13ee0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021c8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000021c8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08848ba4u; func_0880d140(c, ram); }
    { c->r[31] = 0x08848bacu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000084u); func_08a136f8(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08848bc0u; c->r[7] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848bccu; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff89e4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848be0u; c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848becu; c->r[5] = c->r[3] + 0u; func_08a14510(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000021c0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08848c08u; c->r[7] = mem_r32(ram, c->r[7] + 0x000021c4u); func_08a13ee0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021c8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000021c8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08848c40u; func_0880d140(c, ram); }
    { c->r[31] = 0x08848c48u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000088u); func_08a136f8(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08848c5cu; c->r[7] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848c68u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffff89e8u, c->f[0]); goto L_08849188; }
L_08848c74:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848ccc; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848cac; }
    { goto L_08849188; }
L_08848cac:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848ccc; }
    { goto L_08849188; }
L_08848ccc:
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08848cd8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848ce4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000021d0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08848d00u; c->r[7] = mem_r32(ram, c->r[7] + 0x000021d4u); func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848d0cu; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08848d1cu; c->f[12] = c->f[0]; func_0884c858(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08848d28u; c->r[4] = c->r[4] + 0xffff89b0u; func_0884c1b4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08848d38u; c->r[4] = c->r[2] + 0u; func_0884c1b4(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08848d48u; c->r[6] = 0u + 0x00000030u; func_08a19db8(c, ram); }
    { goto L_08849188; }
L_08848d50:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848da8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848d88; }
    { goto L_08849188; }
L_08848d88:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848da8; }
    { goto L_08849188; }
L_08848da8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848db4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848dc4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_08a191d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000060u);
    { c->r[31] = 0x08848decu; c->r[5] = c->r[2] + 0u; func_08935d18(c, ram); }
    { goto L_08849188; }
L_08848df4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848e4c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848e2c; }
    { goto L_08849188; }
L_08848e2c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848e4c; }
    { goto L_08849188; }
L_08848e4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848e58u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000077a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08848eb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[5] = 0u + 0x00000022u;
    { c->r[31] = 0x08848ea8u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u); func_0884a144(c, ram); }
    { goto L_08849188; }
L_08848eb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[5] = 0u + 0x00000023u;
    { c->r[31] = 0x08848f00u; c->r[6] = c->r[2] + 0u; func_0884a144(c, ram); }
    { goto L_08849188; }
L_08848f08:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848f60; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848f40; }
    { goto L_08849188; }
L_08848f40:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848f60; }
    { goto L_08849188; }
L_08848f60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08848f6cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007780u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]); goto L_08849188; }
L_08848f98:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848ff0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848fd0; }
    { goto L_08849188; }
L_08848fd0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08848ff0; }
    { goto L_08849188; }
L_08848ff0:
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb640u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004f38u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884900cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08849018u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021d8u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a70000u;
    { mem_wf32(ram, c->r[1] + 0xffffb640u, c->f[0]); goto L_08849188; }
L_08849038:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849090; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849070; }
    { goto L_08849188; }
L_08849070:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849090; }
    { goto L_08849188; }
L_08849090:
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004f3cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088490acu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191b8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088490b8u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021d8u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a70000u;
    { mem_wf32(ram, c->r[1] + 0xffffb644u, c->f[0]); goto L_08849188; }
L_088490d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849130; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849110; }
    { goto L_08849188; }
L_08849110:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849130; }
    { goto L_08849188; }
L_08849130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884913cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a191d4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x0884914cu; c->r[5] = c->r[2] + 0u; func_089f8a7c(c, ram); }
    { goto L_08849188; }
L_08849154:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08849174; }
    { goto L_08849188; }
L_08849174:
    { c->r[31] = 0x0884917cu; func_088498e4(c, ram); }
    c->r[3] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000164u, c->r[3]); goto L_088498c4; }
L_08849188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08847b70; }
L_08849198:
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007740u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_088491a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004f14u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088491c8; }
    { goto L_08849828; }
L_088491c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000041u);
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000017cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088491fc; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000017cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088493e8; }
    { goto L_08849408; }
L_088491fc:
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x08849208u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08849214u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    { c->r[31] = 0x08849220u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    { c->r[31] = 0x08849240u; c->r[5] = c->r[3] + 0u; func_089b6b20(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf30u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf34u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000138u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf38u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000144u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021dcu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf30u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x088492bcu; c->r[6] = c->r[6] + 0xffff89b0u; func_0884c2bc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf40u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf40u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x088492d8u; c->r[6] = c->r[6] + 0xffff89b0u; func_0884c2bc(c, ram); }
    c->f[0] = u2f(0u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf4cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf3cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf40u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x08849308u; c->r[6] = c->r[6] + 0xffffbf30u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884931cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08849330u; c->r[5] = c->r[3] + 0u; func_0884c988(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[1] = -c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021dcu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08849354u; c->f[12] = c->f[0]; func_0884c8f0(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884936cu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08849394u; func_0880d140(c, ram); }
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
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf50u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf50u;
    { c->r[31] = 0x088493e0u; c->r[6] = c->r[2] + 0u; func_0884c26c(c, ram); }
    { goto L_0884980c; }
L_088493e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000042u);
    c->r[4] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08849400u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_088957d0(c, ram); }
    { goto L_0884980c; }
L_08849408:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[4] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08849420u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_089b4d78(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08849444u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000150u); func_0884c73c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08849454u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08849470u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x08849484u; c->r[6] = c->r[6] + 0xffff89b0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088494d4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000024u); func_08a0fb24(c, ram); }
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u);
    { c->r[31] = 0x088494f8u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000028u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000041u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884980c; }
    mem_w32(ram, c->r[30] + 0x00000154u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000046u);
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088495f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884959c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088495b4; }
    { goto L_08849638; }
L_0884959c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08849628; }
    { goto L_08849638; }
L_088495b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021e0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088495dc; }
    { goto L_08849638; }
L_088495dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000046u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]); goto L_08849638; }
L_088495f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000021e4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884961c; }
    { goto L_08849638; }
L_0884961c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { mem_w8(ram, c->r[2] + 0x00000046u, 0u); goto L_08849638; }
L_08849628:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w8(ram, c->r[2] + 0x00000046u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
L_08849638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000042u);
    mem_w32(ram, c->r[30] + 0x00000178u, c->r[2]);
    c->r[2] = 0u + 0x00000047u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000178u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08849678; }
    c->r[2] = 0u + 0x00000048u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000178u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08849684; }
    { goto L_08849690; }
L_08849678:
    c->r[2] = 0u + 0x0000004fu;
    { mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]); goto L_08849698; }
L_08849684:
    c->r[2] = 0u + 0x0000004fu;
    { mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]); goto L_08849698; }
L_08849690:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
L_08849698:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000042u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000158u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088496c4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000015cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000044u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000015cu);
    { c->r[31] = 0x08849714u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08849740u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[16] = c->r[2] + 0x00000068u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08849758u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000015cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08849764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884980c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08849790u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000015cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000015cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884980c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088497e0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_08a0fb24(c, ram); }
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000040u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000015cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08849800u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000008u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000015cu);
    mem_w32(ram, c->r[2] + 0x00000048u, 0u);
L_0884980c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000070u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_088491a8; }
L_08849828:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf30u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf34u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf38u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf3cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf30u;
    { c->r[31] = 0x08849888u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf40u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf40u;
    { c->r[31] = 0x088498acu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    { c->r[31] = 0x088498b4u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24d1cu); /* sceKernelPowerTick */ }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]); goto L_088498c4; }
L_088498c0:
    mem_w32(ram, c->r[30] + 0x00000164u, 0u);
L_088498c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000018cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000188u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000184u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000180u);
    { c->r[29] = c->r[29] + 0x00000190u; return; }
    return; /* fell out of func_088478e0 */
}

/* func_0884c8f0  0x0884c8f0..0x0884c988  152 bytes, source=sweep */
void func_0884c8f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c8f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    { c->r[31] = 0x0884c910u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002628u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0884c92cu; c->r[7] = mem_r32(ram, c->r[7] + 0x0000262cu); func_08a13ee0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884c938u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = f2u(c->f[0]);
    vfpu_exec(c, ram, 0x48e80005u); /* mtv */
    vfpu_exec(c, ram, 0xd0120525u); /* vsin.s */
    vfpu_exec(c, ram, 0xd0130545u); /* vcos.s */
    vfpu_exec(c, ram, 0xf38380a0u); /* vmidt.q */
    vfpu_exec(c, ram, 0xd0004500u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0002520u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0022501u); /* vneg.s */
    vfpu_exec(c, ram, 0xd0004521u); /* vmov.s */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8610010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8620020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8630030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c8f0 */
}

/* func_0884e0b4  0x0884e0b4..0x0884e2a0  492 bytes, source=fde */
void func_0884e0b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884e0b4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e288; }
    { c->r[31] = 0x0884e0e0u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884e288; }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x0884e0f8u; c->r[5] = mem_r32(ram, c->r[5] + 0xffff8e4cu); func_0885a7fc(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e134; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884e11cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884e12cu; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    { goto L_0884e140; }
L_0884e134:
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x0884e140u; c->r[5] = 0u + 0x0000000cu; func_0885abe8(c, ram); }
L_0884e140:
    c->r[4] = c->r[30] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x0884e150u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0885a8c0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884e15cu; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0884e160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884e174; }
    { goto L_0884e1a8; }
L_0884e174:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e190; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0884e190u; c->r[5] = c->r[30] + 0u; func_0884e2c4(c, ram); }
L_0884e190:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0884e1a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0884e160; }
L_0884e1a8:
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x0884e1b4u; c->r[5] = 0u + 0xffffffffu; func_0885a908(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884e1c0u; c->r[4] = c->r[4] + 0xffff8c4cu; func_0885ac24(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884e1d0u; c->r[4] = c->r[4] + 0xffff8c4cu; func_0885ac74(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x0884e1e0u; c->r[6] = c->r[2] + 0u; func_0885a864(c, ram); }
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x0884e1ecu; c->r[5] = 0u + 0xffffffffu; func_0885a908(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884e1f8u; c->r[4] = c->r[4] + 0xffff8c4cu; func_0885a834(c, ram); }
    { c->r[31] = 0x0884e200u; c->r[4] = c->r[30] + 0u; func_0885ac74(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e244; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0884e244:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8e58u;
    { c->r[31] = 0x0884e254u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0885a494(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x0884e260u; c->r[4] = c->r[30] + 0u; func_0885ac24(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0884e280u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0884e288u; func_0885040c(c, ram); }
L_0884e288:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0884e0b4 */
}

/* func_08854480  0x08854480..0x08854544  196 bytes, source=fde */
void func_08854480(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854480u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088544b8; }
    { goto L_08854530; }
L_088544b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854530; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = c->r[2] ^ 0x000eu;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[6] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[7] + 0x00000038u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08854530u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u); func_089b102c(c, ram); }
L_08854530:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08854480 */
}

/* func_08858aa8  0x08858aa8..0x08858b4c  164 bytes, source=fde */
void func_08858aa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858aa8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858ae8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00002c88u;
    c->r[5] = 0u + 0x000015b2u;
    { c->r[31] = 0x08858ae0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08858b38; }
L_08858ae8:
    { c->r[31] = 0x08858af0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858b0c; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08860000u;
    { c->r[31] = 0x08858b0cu; c->r[5] = c->r[5] + 0xffff8b4cu; func_0880f03c(c, ram); }
L_08858b0c:
    { c->r[31] = 0x08858b14u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858b38; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001bc0u;
    c->r[6] = 0x08860000u;
    { c->r[31] = 0x08858b38u; c->r[6] = c->r[6] + 0xffff8aa8u; func_0880f1d4(c, ram); }
L_08858b38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08858aa8 */
}

/* func_0885a7fc  0x0885a7fc..0x0885a834  56 bytes, source=sweep */
void func_0885a7fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a7fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a7fc */
}

/* func_0885c2dc  0x0885c2dc..0x0885c3b0  212 bytes, source=fde */
void func_0885c2dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885c2dcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000063au;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885c328u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_0886289c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885c338u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_0885cf70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885c350u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0885c2dc */
}

/* func_08861660  0x08861660..0x08861694  52 bytes, source=sweep */
void func_08861660(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861660u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861680u; c->r[5] = 0xcb000000u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861660 */
}

/* func_088625dc  0x088625dc..0x08862788  428 bytes, source=sweep */
void func_088625dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088625dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886267c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[3] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862640; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08862668; }
    { goto L_088626c0; }
L_08862640:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08862694; }
    c->r[2] = 0u + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088626ac; }
    { goto L_088626c0; }
L_08862668:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000007u);
    { mem_w8(ram, c->r[2] + 0x00000007u, c->r[3]); goto L_088626c0; }
L_0886267c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]); goto L_088626c0; }
L_08862694:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]); goto L_088626c0; }
L_088626ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] | 0x0003u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_088626c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] >> 12;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] >> 8;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862754; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] | 0x0020u;
    { mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]); goto L_08862778; }
L_08862754:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08862778; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_08862778:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088625dc */
}

/* func_08866a60  0x08866a60..0x08866aa8  72 bytes, source=sweep */
void func_08866a60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866a60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000012cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866a98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
L_08866a98:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08866a60 */
}

/* func_0886e63c  0x0886e63c..0x0886e740  260 bytes, source=fde */
void func_0886e63c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886e63cu);
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
    { c->r[31] = 0x0886e6a8u; func_0880d140(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034f0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886e6c0u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034f0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886e6e0u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e728; }
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
L_0886e728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0886e63c */
}

/* func_088723c8  0x088723c8..0x088726ac  740 bytes, source=sweep */
void func_088723c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088723c8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887240c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_08872418; }
L_0887240c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f0u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_08872418:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08872448; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_08872454; }
L_08872448:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f0u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08872454:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08872484; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_08872490; }
L_08872484:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036f0u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_08872490:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088724c0; }
    { goto L_08872510; }
L_088724c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[2] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = c->f[2] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x000000a8u, c->f[0]); goto L_08872550; }
L_08872510:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000a8u, c->f[0]);
L_08872550:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872578; }
    { goto L_088725d0; }
L_08872578:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[2] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = c->f[2] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x000000acu, c->f[0]); goto L_08872610; }
L_088725d0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[5] + 0x000000acu, c->f[0]);
L_08872610:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872640; }
    { goto L_08872650; }
L_08872640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_08872664; }
L_08872650:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08872660u; c->r[5] = mem_r32(ram, c->r[2] + 0x000003e0u); func_08872364(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_08872664:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x000000b0u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887267cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08872698; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08872698u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
L_08872698:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088723c8 */
}

/* func_0887c0c4  0x0887c0c4..0x0887c2e8  548 bytes, source=sweep */
void func_0887c0c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887c0c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000023cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c0f8; }
    { goto L_0887c120; }
L_0887c0f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x0000023cu, 0u); goto L_0887c13c; }
L_0887c120:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000023cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000023cu, c->f[0]);
L_0887c13c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000240u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c160; }
    { goto L_0887c188; }
L_0887c160:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000240u, 0u); goto L_0887c1a4; }
L_0887c188:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000240u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000240u, c->f[0]);
L_0887c1a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000238u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c1c8; }
    { goto L_0887c1ec; }
L_0887c1c8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffffbfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000238u, 0u); goto L_0887c208; }
L_0887c1ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000238u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000238u, c->f[0]);
L_0887c208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000244u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c22c; }
    { goto L_0887c254; }
L_0887c22c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xfeff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000244u, 0u); goto L_0887c270; }
L_0887c254:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000244u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000244u, c->f[0]);
L_0887c270:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000248u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c294; }
    { goto L_0887c2bc; }
L_0887c294:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xcfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000248u, 0u); goto L_0887c2d8; }
L_0887c2bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000248u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000248u, c->f[0]);
L_0887c2d8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887c0c4 */
}

/* func_0888152c  0x0888152c..0x088815c8  156 bytes, source=fde */
void func_0888152c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888152cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08881568u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f5c48(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088815b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088815acu; c->r[10] = 0u + 0xffffffffu; func_089f6254(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088815b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888152c */
}

/* func_08883448  0x08883448..0x0888346c  36 bytes, source=sweep */
void func_08883448(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883448u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe6d0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08883448 */
}

/* func_0888b920  0x0888b920..0x0888b984  100 bytes, source=fde */
void func_0888b920(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b920u);
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
    { c->r[31] = 0x0888b970u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_0888bad0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888b920 */
}

/* func_0888c570  0x0888c570..0x0888c5b4  68 bytes, source=sweep */
void func_0888c570(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c570u);
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
    { c->r[31] = 0x0888c5a0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c570 */
}

/* func_0888d1ec  0x0888d1ec..0x0888d260  116 bytes, source=sweep */
void func_0888d1ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d1ecu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d24cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888d1ec */
}

/* func_0888fce4  0x0888fce4..0x0888fd6c  136 bytes, source=sweep */
void func_0888fce4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888fce4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004078u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000407cu);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004080u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004084u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888fce4 */
}

/* func_08894714  0x08894714..0x0889487c  360 bytes, source=sweep */
void func_08894714(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08894714u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08894738u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000412cu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004130u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8480000u); /* lv.q */
    vfpu_exec(c, ram, 0xdfe83c00u); /* vfim.s */
    vfpu_exec(c, ram, 0xf188a480u); /* vtfm4.q */
    vfpu_exec(c, ram, 0x6c606008u); /* vcmp.s */
    vfpu_exec(c, ram, 0xd0106068u); /* vrcp.s */
    vfpu_exec(c, ram, 0xd2a00168u); /* vcmovt.s */
    vfpu_exec(c, ram, 0x65688000u); /* vscl.t */
    vfpu_exec(c, ram, 0xfbc00010u); /* sv.q */
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004134u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889479c; }
    { goto L_088947a8; }
L_0889479c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_088947a8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004138u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088947cc; }
    { goto L_088947d8; }
L_088947cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_088947d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000412cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088947fc; }
    { goto L_08894808; }
L_088947fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08894808:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004130u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0889482c; }
    { goto L_08894838; }
L_0889482c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08894838:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08894858; }
    { goto L_08894864; }
L_08894858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08894864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08894714 */
}

/* func_088999b4  0x088999b4..0x088999f0  60 bytes, source=sweep */
void func_088999b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088999b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088999dcu; c->r[6] = 0u + 0u; func_08899ef8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088999b4 */
}

/* func_0889a828  0x0889a828..0x0889a894  108 bytes, source=sweep */
void func_0889a828(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a828u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889a878; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889a878; }
    { goto L_0889a880; }
L_0889a878:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0889a880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a828 */
}

/* func_0889f2f0  0x0889f2f0..0x0889f3c0  208 bytes, source=sweep */
void func_0889f2f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f2f0u);
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
    return; /* fell out of func_0889f2f0 */
}

/* func_088a01b8  0x088a01b8..0x088a0618  1120 bytes, source=sweep */
void func_088a01b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a01b8u);
    c->r[29] = c->r[29] + 0xfffffe20u;
    mem_w32(ram, c->r[29] + 0x000001c4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000001c0u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x000001d4u, c->f[21]);
    mem_wf32(ram, c->r[29] + 0x000001d0u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088a01f0u; c->r[6] = 0x00010000u; func_0889f5e0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043bcu);
    mem_wf32(ram, c->r[30] + 0x00000110u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043c0u);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    { c->r[31] = 0x088a022cu; c->r[5] = c->r[2] + 0u; func_0889f658(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a0254u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[2] = 0u + 0x0000019du;
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a0280u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    { c->r[31] = 0x088a0288u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1a510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, 0u);
L_088a028c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a02ac; }
    { goto L_088a05e4; }
L_088a02ac:
    c->r[2] = c->r[30] + 0x00000130u;
    { c->r[31] = 0x088a02b8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043c4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000043c8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088a02d4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[21] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043ccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000043d0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088a02f4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[20] = -c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043c4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000043c8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088a0314u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[21];
    c->f[13] = c->f[20];
    { c->r[31] = 0x088a032cu; c->f[14] = c->f[0]; func_0885a0b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043c0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a0354u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x00000170u;
    c->r[6] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a036cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000170u);
    mem_wf32(ram, c->r[30] + 0x00000160u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000174u);
    mem_wf32(ram, c->r[30] + 0x00000164u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000178u);
    mem_wf32(ram, c->r[30] + 0x00000168u, c->f[0]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a03a8u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x04040000u;
    { c->r[31] = 0x088a03bcu; c->r[5] = c->r[5] | 0x0004u; func_0889eb70(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000043d8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088a03d8u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000180u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
L_088a03e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a03f8; }
    { goto L_088a05d4; }
L_088a03f8:
    c->r[2] = c->r[30] + 0x00000190u;
    { c->r[31] = 0x088a0404u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a042c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043dcu);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000001a8u, c->f[1]); goto L_088a0440; }
L_088a042c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043bcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001a8u, c->f[1]);
L_088a0440:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001a8u);
    mem_wf32(ram, c->r[30] + 0x00000190u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a047c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043dcu);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000001acu, c->f[1]); goto L_088a0490; }
L_088a047c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000180u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043bcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001acu, c->f[1]);
L_088a0490:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001acu);
    mem_wf32(ram, c->r[30] + 0x00000194u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000198u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043d8u);
    mem_wf32(ram, c->r[30] + 0x0000019cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000190u;
    c->r[3] = c->r[30] + 0x00000190u;
    c->r[6] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a04c0u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000190u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000194u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000198u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0508; }
    c->r[3] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x000001b4u, c->r[3]); goto L_088a050c; }
L_088a0508:
    mem_w8(ram, c->r[30] + 0x000001b4u, 0u);
L_088a050c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x000001b4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0548; }
    c->r[3] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x000001bcu, c->r[3]); goto L_088a054c; }
L_088a0548:
    mem_w8(ram, c->r[30] + 0x000001bcu, 0u);
L_088a054c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x000001bcu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088a0570u; c->r[5] = 0u + 0x00000040u; func_0883a204(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x000001a0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x000001a1u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x000001a1u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x000001a2u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x000001a2u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x000001a3u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000184u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + 0x00000014u;
    { mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]); goto L_088a03e0; }
L_088a05d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]); goto L_088a028c; }
L_088a05e4:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088a05f0u; c->r[4] = c->r[2] + 0u; func_0889e80c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088a05fcu; c->r[4] = c->r[2] + 0u; func_0889f630(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000001c4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000001c0u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x000001d4u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x000001d0u);
    { c->r[29] = c->r[29] + 0x000001e0u; return; }
    return; /* fell out of func_088a01b8 */
}

/* func_088a42c4  0x088a42c4..0x088a4308  68 bytes, source=sweep */
void func_088a42c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a42c4u);
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
    { c->r[31] = 0x088a42f4u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a42c4 */
}

/* func_088adbe0  0x088adbe0..0x088adc24  68 bytes, source=sweep */
void func_088adbe0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adbe0u);
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
    { c->r[31] = 0x088adc10u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adbe0 */
}

/* func_088b1f5c  0x088b1f5c..0x088b1f98  60 bytes, source=sweep */
void func_088b1f5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b1f5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088b1f84u; c->r[6] = 0u + 0x00000001u; func_088b2608(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b1f5c */
}

/* func_088b2dd4  0x088b2dd4..0x088b2e38  100 bytes, source=sweep */
void func_088b2dd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2dd4u);
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
    { c->r[31] = 0x088b2e24u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2dd4 */
}

/* func_088ba254  0x088ba254..0x088ba2e8  148 bytes, source=fde */
void func_088ba254(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba254u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[10]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x088ba294u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_088ba4f4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[0] / c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a70u);
    c->f[0] = c->f[0] - c->f[1];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ba254 */
}

/* func_088be86c  0x088be86c..0x088be8a4  56 bytes, source=residue */
void func_088be86c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be86cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be890u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_088bf2f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be86c */
}

/* func_088bf550  0x088bf550..0x088bf600  176 bytes, source=sweep */
void func_088bf550(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf550u);
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
    { c->r[31] = 0x088bf598u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf5bcu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf5c8u; c->r[5] = 0x15000000u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf5ecu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088bf550 */
}

/* func_088c2580  0x088c2580..0x088c25d8  88 bytes, source=sweep */
void func_088c2580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2580u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000138u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000138u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c2580 */
}

/* func_088c88f4  0x088c88f4..0x088c89b4  192 bytes, source=residue */
void func_088c88f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c88f4u);
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
    return; /* fell out of func_088c88f4 */
}

/* func_088c96f8  0x088c96f8..0x088c9a44  844 bytes, source=fde */
void func_088c96f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c96f8u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088c9738u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
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
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c977cu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005010u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c97a4u; c->r[6] = c->r[3] + 0u; func_08886dbc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    { c->r[31] = 0x088c97b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c97ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c97e4; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_088c97ec; }
L_088c97e4:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
L_088c97ec:
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c97f8u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088c980cu; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005014u);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005014u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088c98a8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088c98b8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000d0u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x000000c1u, 0u);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { c->r[31] = 0x088c98dcu; c->r[6] = 0u + 0u; func_089c1990(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c99d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c9918; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088c9918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c9930; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088c9930:
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c99d4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c9954u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c99a4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c9970u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c99a4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c998cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c99a4; }
    { goto L_088c99d4; }
L_088c99a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_088c99d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c9a2c; }
    { c->r[31] = 0x088c99e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c9a2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000052u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088c9a2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000052u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c9a2cu; c->r[6] = c->r[2] + 0u; func_0899ec9c(c, ram); }
L_088c9a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_088c96f8 */
}

/* func_088d18bc  0x088d18bc..0x088d1e64  1448 bytes, source=fde */
void func_088d18bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d18bcu);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000098u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d18f4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]); goto L_088d1e48; }
L_088d18f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1e14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d1e14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d1ac4; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052d8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d1950u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d195cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088d1968u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d1980u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d199cu; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d19b0u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052dcu);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088d19e8u; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052e0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000052e4u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088d1a08u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[30] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052e4u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005bu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d1a44u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d1a54u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d1a6cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u); func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d1a7cu; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005bu);
    c->r[2] = 0u + 0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w8(ram, c->r[4] + 0x0000005bu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d1aa0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c0414(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088d1ac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = 0x2aaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d1c10; }
    { c->r[31] = 0x088d1b10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1b4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1b44; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_088d1b4c; }
L_088d1b44:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
L_088d1b4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    mem_w16(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d1b98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1bec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1bec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088d1be4u; c->r[7] = c->r[2] + 0u; func_088c099c(c, ram); }
    { goto L_088d1c00; }
L_088d1bec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
L_088d1c00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { c->r[31] = 0x088d1c10u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000074u); func_088d1054(c, ram); }
L_088d1c10:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088d1c1cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088d1c28u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052e8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052e8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d1c6cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d1c84u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052ecu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d1ca4u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088d1cc4u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c224(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d1ce0u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d1cfcu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052f0u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    c->r[2] = c->r[30] + 0x0000007cu;
    c->r[3] = c->r[30] + 0x00000054u;
    c->r[7] = c->r[30] + 0x00000060u;
    c->r[8] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d1d2cu; c->r[6] = c->r[3] + 0u; func_088d1714(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1da4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1d98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d1d8cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000007cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088d1d98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000034u, 0u); goto L_088d1e14; }
L_088d1da4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052f4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
L_088d1e14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d1e30; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]); goto L_088d1e48; }
L_088d1e30:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
L_088d1e48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000098u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_088d18bc */
}

/* func_088d47e8  0x088d47e8..0x088d5f9c  6068 bytes, source=fde */
void func_088d47e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d47e8u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d4810u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4820; }
    { goto L_088d5f84; }
L_088d4820:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4868; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000d2u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000d2u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d2u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00007531u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d4868; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00007530u;
    mem_w16(ram, c->r[3] + 0x000000d2u, c->r[2]);
L_088d4868:
    { c->r[31] = 0x088d4870u; func_0895b15c(c, ram); }
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ef8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004962u);
    c->r[2] = (c->r[2] < 0x0000001du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ef8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004962u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005938u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088d48b4u: goto L_088d48b4; case 0x088d4ae4u: goto L_088d4ae4; case 0x088d4c58u: goto L_088d4c58; case 0x088d4cb0u: goto L_088d4cb0; case 0x088d4ef8u: goto L_088d4ef8; default: recomp_trap_unknown_indirect(c, ram, 0x088d48acu, _t); return; } }
L_088d48b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ae4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000e4u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000097u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d4ae4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = 0u + 0xffffff7fu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000e4u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4944; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4944; }
    { goto L_088d497c; }
L_088d4944:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d4970; }
    { goto L_088d49c4; }
L_088d4970:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d49c4; }
L_088d497c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d49c4; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d49bc; }
    { goto L_088d49c4; }
L_088d49bc:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088d49c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ae4; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088d49dcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d49e8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088d49f4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
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
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d4a68u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088d4a94u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005914u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d4abc; }
    { goto L_088d4ae4; }
L_088d4abc:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
    c->r[2] = 0u + 0x0000012cu;
    mem_w16(ram, c->r[30] + 0x0000006eu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088d4ae4u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
L_088d4ae4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000049d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d4b34; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00040000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4b34; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0xfffb0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000049d4u, 0u);
L_088d4b34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ef8; }
    c->r[4] = 0u + 0x00000050u;
    c->r[5] = 0u + 0x00000449u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d4b64u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d4b78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000049d8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0u + 0xfffffbffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000049d4u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4c08; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4c08; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4c08; }
    { goto L_088d4c1c; }
L_088d4c08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] | 0x0080u;
    mem_w32(ram, c->r[3] + 0x00000090u, c->r[2]);
L_088d4c1c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088d4c30u; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[2] = 0u + 0x00004049u;
    mem_w16(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d4c50u; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
    { goto L_088d4ef8; }
L_088d4c58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ef8; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005918u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->f[12] = c->f[0];
    c->r[6] = 0u + 0x0000005fu;
    c->r[7] = 0u + 0xffffffffu;
    { c->r[31] = 0x088d4c94u; c->r[8] = 0u + 0u; func_088bff04(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]); goto L_088d4ef8; }
L_088d4cb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ef8; }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000005au;
    c->r[5] = 0u + 0x00000461u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088d4d38u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000591cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088d4d50u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088d4d64u; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088d4d70u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d4d88u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088d4d94u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d4db0u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00003061u;
    mem_w16(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x0000029au;
    mem_w16(ram, c->r[30] + 0x0000003au, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d4dd8u; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d4e14u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d4e20u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w16(ram, c->r[30] + 0x0000003eu, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005920u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d4e50; }
    { goto L_088d4e5c; }
L_088d4e50:
    c->r[2] = 0u + 0x00000078u;
    { mem_w16(ram, c->r[30] + 0x0000003eu, c->r[2]); goto L_088d4eb8; }
L_088d4e5c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005924u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d4e80; }
    { goto L_088d4e8c; }
L_088d4e80:
    c->r[2] = 0u + 0x0000003cu;
    { mem_w16(ram, c->r[30] + 0x0000003eu, c->r[2]); goto L_088d4eb8; }
L_088d4e8c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005928u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d4eb0; }
    { goto L_088d4eb8; }
L_088d4eb0:
    c->r[2] = 0u + 0x00000014u;
    mem_w16(ram, c->r[30] + 0x0000003eu, c->r[2]);
L_088d4eb8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4ee0; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088d4ee0u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
L_088d4ee0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
L_088d4ef8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d4f08u; c->r[6] = 0x80000000u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d5020; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4fb0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4f60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d4f78; }
    { goto L_088d5084; }
L_088d4f60:
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d4fe8; }
    { goto L_088d5084; }
L_088d4f78:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x06000000u;
    c->r[4] = c->r[4] | 0x0004u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d4fa8u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]); goto L_088d5084; }
L_088d4fb0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x31000000u;
    c->r[4] = c->r[4] | 0x0083u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d4fe0u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]); goto L_088d5084; }
L_088d4fe8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x01000000u;
    c->r[4] = c->r[4] | 0x0003u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d5018u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]); goto L_088d5084; }
L_088d5020:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5078; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5060; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5078; }
    { goto L_088d5084; }
L_088d5060:
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5078; }
    { goto L_088d5084; }
L_088d5078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5084u; c->r[4] = mem_r32(ram, c->r[2] + 0x000000e8u); func_0885028c(c, ram); }
L_088d5084:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5094u; c->r[6] = 0x40000000u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5130; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5108; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d50d0; }
    { goto L_088d5130; }
L_088d50d0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x01000000u;
    c->r[4] = c->r[4] | 0x0004u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d5100u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]); goto L_088d5130; }
L_088d5108:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5124; }
    { goto L_088d5130; }
L_088d5124:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5130u; c->r[4] = mem_r32(ram, c->r[2] + 0x000000e8u); func_0885028c(c, ram); }
L_088d5130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d528c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d51f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5184; }
    c->r[2] = 0u + 0x0000000bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d51ac; }
    { goto L_088d528c; }
L_088d5184:
    c->r[2] = 0u + 0x00000017u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5244; }
    c->r[2] = 0u + 0x0000001cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d51f8; }
    { goto L_088d528c; }
L_088d51ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x06000000u;
    c->r[4] = c->r[4] | 0x000au;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d51d8u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]); goto L_088d528c; }
L_088d51f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x0028u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d5224u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]); goto L_088d528c; }
L_088d5244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x03000000u;
    c->r[4] = c->r[4] | 0x0006u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d5270u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
L_088d528c:
    { c->r[31] = 0x088d5294u; func_0895b15c(c, ram); }
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5400; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000017u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d52bc; }
    { goto L_088d5400; }
L_088d52bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d5400; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] & 0x01ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d533c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000592cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d5310; }
    { goto L_088d533c; }
L_088d5310:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x03000000u;
    c->r[4] = c->r[4] | 0x0006u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d533cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
L_088d533c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d53cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005930u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d5378; }
    { goto L_088d53cc; }
L_088d5378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5384u; c->r[4] = mem_r32(ram, c->r[2] + 0x000000e8u); func_0885028c(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x03000000u;
    c->r[4] = c->r[4] | 0x0005u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d53b4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
L_088d53cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005934u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x000000e8u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088d5400u; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
L_088d5400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d542c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088d5444; }
L_088d542c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d5444:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d54a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5488; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d54a4; }
L_088d5488:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d54a4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = 0u + 0x0000000du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d54ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d55a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0xffffffe8u;
    c->r[2] = 0u + 0xffffffe8u;
    c->r[2] = c->r[2] + 0x00000019u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d55a8; }
L_088d54ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e6u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5554; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000122u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5554; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e7u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5554; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a8u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5554; }
    { goto L_088d55a8; }
L_088d5554:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5564u; c->r[6] = 0x00800000u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d55a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d55a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d55a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d55a8u; c->r[5] = 0x08000000u; func_0884d1b0(c, ram); }
L_088d55a8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    c->r[3] = c->r[2] + 0xfffffff8u;
    c->r[2] = 0u + 0xfffffff8u;
    c->r[2] = c->r[2] + 0x00000009u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d5640; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5600; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5600; }
    { goto L_088d5640; }
L_088d5600:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5610u; c->r[6] = 0x00010000u; func_088d4770(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5640; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x000000e7u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffdfffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d5640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d57a4; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d569c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d56c8; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d56b4; }
    { goto L_088d575c; }
L_088d569c:
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d56b4; }
    { goto L_088d575c; }
L_088d56b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d56c0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f8824(c, ram); }
    { goto L_088d597c; }
L_088d56c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5700; }
    { goto L_088d5714; }
L_088d5700:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d570cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f86cc(c, ram); }
    { goto L_088d597c; }
L_088d5714:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d597c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d597c; }
L_088d575c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d597c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d597c; }
L_088d57a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x000000e7u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d57ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d57ec; }
    { goto L_088d5804; }
L_088d57ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffdfffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d5804:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5880; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000135u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d597c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d597c; }
L_088d5880:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d588cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d592c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d58a8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d590c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d58ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d5960; }
L_088d58ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d5960; }
L_088d590c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d5960; }
L_088d592c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d5960; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d5960:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d597c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5af0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000068u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5a1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000073u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d59f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000073u, c->r[2]);
L_088d59f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000084u);
    { c->r[31] = 0x088d5a18u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000088u); func_088d2428(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000068u, c->r[2]);
L_088d5a1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5a54; }
    { goto L_088d5ad4; }
L_088d5a54:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d5ad4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5a84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d5a84u; c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u); func_08954f98(c, ram); }
L_088d5a84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xfeff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xfdff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffdfffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d5ad4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0xdfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
L_088d5af0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d5afcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f98e8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = 0u + 0x000000bcu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d5b2c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000000bcu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d5b2c; }
L_088d5b2c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d5b38u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d5f14; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d5b54u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d5f14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d5d50; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004abcu);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5c78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d5bc0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d5d50; }
L_088d5bc0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00004984u);
    c->r[2] = 0u + 0x000004b0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000084u);
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
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffebe4u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005908u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088d5c70u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000084u); func_08a1ad34(c, ram); }
    { goto L_088d5d50; }
L_088d5c78:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00004984u);
    c->r[2] = 0u + 0x000004b0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000084u);
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
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffec04u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005908u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088d5d50u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000084u); func_08a1ad34(c, ram); }
L_088d5d50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d1u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d5f14; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004ac4u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5e64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d5dac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d5f14; }
L_088d5dac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x0000498cu);
    c->r[2] = 0u + 0x000004b0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000084u);
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
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffec24u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005908u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088d5e5cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000084u); func_08a1ad34(c, ram); }
    { goto L_088d5f14; }
L_088d5e64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x0000498cu);
    c->r[2] = 0u + 0x000004b0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000084u);
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
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffec44u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005908u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088d5f14u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000084u); func_08a1ad34(c, ram); }
L_088d5f14:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x7fffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d5f84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000592cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d5f70; }
    { goto L_088d5f84; }
L_088d5f70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d5f84:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_088d47e8 */
}

/* func_088da4e4  0x088da4e4..0x088da5a4  192 bytes, source=sweep */
void func_088da4e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088da4e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088da518; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088da590; }
L_088da518:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da534; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088da590; }
L_088da534:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da550; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088da590; }
L_088da550:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da56c; }
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088da590; }
L_088da56c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] & 0x0003u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da58c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088da590; }
L_088da58c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088da590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088da4e4 */
}

/* func_088de790  0x088de790..0x088de7dc  76 bytes, source=sweep */
void func_088de790(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de790u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088de7c0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088de7c8; }
L_088de7c0:
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088de7c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de790 */
}

/* func_088df560  0x088df560..0x088df670  272 bytes, source=sweep */
void func_088df560(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df560u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df584; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df65c; }
L_088df584:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088df5a4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df65c; }
L_088df5a4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df5d4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df65c; }
L_088df5d4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df604; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df65c; }
L_088df604:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088df638; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df65c; }
L_088df638:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088df65c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df560 */
}

/* func_088e5bb0  0x088e5bb0..0x088e5e88  728 bytes, source=fde */
void func_088e5bb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e5bb0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e5e70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005d84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088e5c18u: goto L_088e5c18; case 0x088e5d68u: goto L_088e5d68; case 0x088e5dacu: goto L_088e5dac; case 0x088e5df4u: goto L_088e5df4; case 0x088e5e3cu: goto L_088e5e3c; default: recomp_trap_unknown_indirect(c, ram, 0x088e5c10u, _t); return; } }
L_088e5c18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d74u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d78u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d78u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
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
    { c->r[31] = 0x088e5cd0u; func_0880d140(c, ram); }
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
    { c->r[31] = 0x088e5d00u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000028u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d7cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[5] + 0x0000003cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e5d38u; func_0880d140(c, ram); }
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
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5e70; }
L_088e5d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5d8c; }
    { goto L_088e5e70; }
L_088e5d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d80u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5e70; }
L_088e5dac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5dd0; }
    { goto L_088e5e70; }
L_088e5dd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5e70; }
L_088e5df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5e18; }
    { goto L_088e5e70; }
L_088e5e18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5e70; }
L_088e5e3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5e60; }
    { goto L_088e5e70; }
L_088e5e60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e5e70:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e5bb0 */
}

/* func_088ea8cc  0x088ea8cc..0x088ea94c  128 bytes, source=sweep */
void func_088ea8cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ea8ccu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ea914u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088ea8cc */
}

/* func_088f0e54  0x088f0e54..0x088f0f28  212 bytes, source=fde */
void func_088f0e54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f0e54u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088f0e7cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = u2f(0u);
    c->f[14] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f0ea4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088f0ed0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x088f0ee8u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u); func_088ef254(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x088f0f04u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000008u); func_088ef254(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088f0e54 */
}

/* func_088f5560  0x088f5560..0x088f5668  264 bytes, source=fde */
void func_088f5560(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f5560u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088f5584u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f559c; }
    { goto L_088f5654; }
L_088f559c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e4u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f55bc; }
    { goto L_088f5654; }
L_088f55bc:
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf80u);
    { c->r[31] = 0x088f55ccu; mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f55e4u; c->r[5] = c->r[3] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f5608; }
    { goto L_088f5614; }
L_088f5608:
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088f561c; }
L_088f5614:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088f561c:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f5628u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f563cu; c->r[6] = 0u + 0x00000001u; func_089b8a34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088f5654u; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
L_088f5654:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088f5560 */
}

/* func_088faed8  0x088faed8..0x088faf58  128 bytes, source=sweep */
void func_088faed8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088faed8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088faf1c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088faf1c; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088faf1cu; c->r[4] = c->r[4] + 0xffffee50u; func_088112e8(c, ram); }
L_088faf1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088faf44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088faf44; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088faf44u; c->r[4] = c->r[4] + 0xffffee50u; func_08811320(c, ram); }
L_088faf44:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088faed8 */
}

/* func_08900aa8  0x08900aa8..0x08900ad8  48 bytes, source=sweep */
void func_08900aa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900aa8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08900ac4u; c->r[5] = 0u | 0xffffu; func_08900940(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08900aa8 */
}

/* func_089033f0  0x089033f0..0x08903438  72 bytes, source=sweep */
void func_089033f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089033f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007a9cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089033f0 */
}

/* func_08907028  0x08907028..0x08907a98  2672 bytes, source=sweep */
void func_08907028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08907028u);
    c->r[29] = c->r[29] + 0xfffffe90u;
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08907074; }
    { goto L_08907a84; }
L_08907074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff860u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089070a0u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066a4u);
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066a8u);
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066acu);
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089070f4u; func_0880d140(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08907108u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000134u, 0u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08907130u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000148u, 0u);
L_08907138:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08907150; }
    { goto L_089072b4; }
L_08907150:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000144u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000144u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b0u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089072a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066b0u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089072a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff860u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff860u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff860u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff860u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089072a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]); goto L_08907138; }
L_089072b4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000134u, 0u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089072d8u; c->r[6] = 0u + 0x00000001u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000148u, 0u);
L_089072e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089072f8; }
    { goto L_08907a84; }
L_089072f8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000144u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000144u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907a74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907370; }
    { goto L_089075a4; }
L_08907370:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000014cu, c->f[0]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0890739cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000014cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000eu);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[5] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089074f4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08907550u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890759cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { goto L_08907a74; }
L_089075a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08907a74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089075f4; }
    { goto L_08907840; }
L_089075f4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[1]);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = c->f[0] - c->f[1];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000150u, c->f[0]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08907638u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[5] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000eu);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[5] + 0x00000006u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08907790u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089077ecu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08907838u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { goto L_08907a74; }
L_08907840:
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0890784cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089079ccu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08907a28u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08907a74u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_08907a74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]); goto L_089072e0; }
L_08907a84:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000170u; return; }
    return; /* fell out of func_08907028 */
}

/* func_08910640  0x08910640..0x08912ea4  10340 bytes, source=fde */
void func_08910640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08910640u);
    c->r[29] = c->r[29] + 0xfffffe90u;
    mem_w32(ram, c->r[29] + 0x00000168u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068b4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089106d4; }
L_089106a4:
    { c->r[31] = 0x089106acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089106a4; }
L_089106d4:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089106e4u; c->r[4] = c->r[2] + 0u; func_0895b864(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089106f0u; c->r[4] = c->r[2] + 0u; func_0895b664(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910730; }
    { goto L_0891073c; }
L_08910730:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    { mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]); goto L_08910744; }
L_0891073c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[1]);
L_08910744:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000100u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[6] = c->r[30] + 0x00000018u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08910790u; c->f[13] = c->f[0]; func_0890fb98(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089107b0; }
    { goto L_089107bc; }
L_089107b0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    { mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); goto L_08910814; }
L_089107bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    alx_c_cond_s(c, 12, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089107f4; }
    { goto L_08910814; }
L_089107f4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_08910814:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910834; }
    { goto L_08910840; }
L_08910834:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08910898; }
L_08910840:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    alx_c_cond_s(c, 12, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910878; }
    { goto L_08910898; }
L_08910878:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_08910898:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068bcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089108d4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089108e8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0xbf600000u;
    { c->r[31] = 0x089108f4u; c->r[4] = c->r[4] | 0x9000u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08910900u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068c0u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c4u);
    mem_wf32(ram, c->r[30] + 0x00000110u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000110u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910964; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000010cu, c->f[0]); goto L_08910988; }
L_08910964:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000110u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000010cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[3]);
L_08910988:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068c0u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000118u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c4u);
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000120u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089109f4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]); goto L_08910a18; }
L_089109f4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[3]);
L_08910a18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    c->f[0] = c->f[0] / c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068c0u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c4u);
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000130u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910a90; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]); goto L_08910ab4; }
L_08910a90:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[3]);
L_08910ab4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068b8u);
    c->f[0] = c->f[0] / c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068c0u);
    c->f[0] = c->f[0] * c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c4u);
    mem_wf32(ram, c->r[30] + 0x00000140u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000138u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000140u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910b2c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000138u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]); goto L_08910b50; }
L_08910b2c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000138u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000013cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[3]);
L_08910b50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000013cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0u + 0x00000008u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0u + 0x00000088u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000088u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000108u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08910bf0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08910c4cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08910c98u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08910cb4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08910cc8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x00000088u;
    c->r[7] = 0u + 0x00000080u;
    { c->r[31] = 0x08910d1cu; c->r[8] = 0u + 0x00000080u; func_0892097c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08910d5c; }
    { goto L_08910d70; }
L_08910d5c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068ccu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
L_08910d70:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068ccu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x00000062u, c->r[2]);
    c->r[4] = 0xff000000u;
    { c->r[31] = 0x08910e00u; c->r[4] = c->r[4] | 0xff00u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08910e0cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08910f44u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08910fa0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08910fecu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08910ff8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08911574; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891100cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911694; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000068f8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0891104cu: goto L_0891104c; case 0x08911174u: goto L_08911174; case 0x0891141cu: goto L_0891141c; case 0x089114b4u: goto L_089114b4; case 0x08911694u: goto L_08911694; default: recomp_trap_unknown_indirect(c, ram, 0x08911044u, _t); return; } }
L_0891104c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08911694; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891106cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08911694; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08911694; }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089110b8u; func_0880d140(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_089110bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000022u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089110d4; }
    { goto L_08911694; }
L_089110d4:
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff5e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff5e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911130u; func_0880d140(c, ram); }
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff5e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->r[5] = 0x7f200000u;
    { c->r[31] = 0x08911164u; c->r[5] = c->r[5] | 0x3000u; func_089103b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_089110bc; }
L_08911174:
    { c->r[31] = 0x0891117cu; func_0895b514(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089111c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000038u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089111a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000064u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d8u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
L_089111c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089111e4; }
    { goto L_08911694; }
L_089111e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08911200u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911694; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = (u32)((s32)c->r[2] >> 16);
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
    mem_w16(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068dcu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089112a0; }
    { goto L_089112ac; }
L_089112a0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068bcu);
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
L_089112ac:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089112cc; }
    { goto L_089112d0; }
L_089112cc:
    mem_w32(ram, c->r[30] + 0x00000098u, 0u);
L_089112d0:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000094u);
    c->r[2] = 0u + 0x0000001eu;
    c->r[2] = c->r[2] - c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068dcu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08911318; }
    { goto L_08911328; }
L_08911318:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068bcu);
    { mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]); goto L_0891134c; }
L_08911328:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08911348; }
    { goto L_0891134c; }
L_08911348:
    mem_w32(ram, c->r[30] + 0x0000009cu, 0u);
L_0891134c:
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000028u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911374u; func_0880d140(c, ram); }
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[2] | 0x0060u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a0u);
    { c->r[31] = 0x0891138cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000098u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891139cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089113e4; }
    c->r[2] = c->r[30] + 0x00000080u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068e0u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x089113dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a0u); func_089103b8(c, ram); }
    { goto L_08911694; }
L_089113e4:
    c->r[2] = c->r[30] + 0x00000080u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068e4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x08911414u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a0u); func_089103b8(c, ram); }
    { goto L_08911694; }
L_0891141c:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_08911420:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08911438; }
    { goto L_08911694; }
L_08911438:
    { c->r[31] = 0x08911440u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u); func_0895b460(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089114a4; }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000028u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911478u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068e8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->r[5] = 0x7f200000u;
    { c->r[31] = 0x089114a4u; c->r[5] = c->r[5] | 0x3000u; func_089103b8(c, ram); }
L_089114a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08911420; }
L_089114b4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089114d0; }
    { goto L_08911694; }
L_089114d0:
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911500u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068ecu);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068f0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911540u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->r[5] = 0x7f200000u;
    { c->r[31] = 0x0891156cu; c->r[5] = c->r[5] | 0x3000u; func_089103b8(c, ram); }
    { goto L_08911694; }
L_08911574:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08911580u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08911694; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891159cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089115d0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089115b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089115d0; }
    { goto L_08911694; }
L_089115d0:
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x089115dcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000008cu, 0u);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911634u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08911648u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08911668u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068f4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->r[5] = 0x7f200000u;
    { c->r[31] = 0x08911694u; c->r[5] = c->r[5] | 0x3000u; func_089103b8(c, ram); }
L_08911694:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089123f8; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089116c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089116d0u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
L_089116d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089116e8; }
    { goto L_089123f8; }
L_089116e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089117a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911720; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08911728; }
L_08911720:
    c->r[2] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
L_08911728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x00000062u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { c->r[31] = 0x0891179cu; c->r[9] = 0u + 0x00000001u; func_08919c68(c, ram); }
    { goto L_089123e0; }
L_089117a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[2] | 0x0020u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911864; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089117e8; }
    c->r[2] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
L_089117e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x00000062u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { c->r[31] = 0x0891185cu; c->r[9] = 0u + 0x00000001u; func_0891a240(c, ram); }
    { goto L_089123e0; }
L_08911864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x000eu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089123e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089123e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089118cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089118e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089118cc; }
    { goto L_089118e4; }
L_089118cc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089118dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089116d4; }
L_089118e4:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089118f0u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08920abc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911924; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911924; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0891191cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089116d4; }
L_08911924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089119dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089119dc; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0891195cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a8u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { c->r[31] = 0x0891196cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_0891b59c(c, ram); }
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08911990u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x089119a0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068e8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089119c4; }
    { goto L_089119dc; }
L_089119c4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089119d4u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089116d4; }
L_089119dc:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000689cu);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068a0u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068a4u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068a8u);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08911a3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08911a3c; }
    { goto L_08911a98; }
L_08911a3c:
    mem_w32(ram, c->r[30] + 0x000000acu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911a60; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]); goto L_08911a7c; }
L_08911a60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911a7c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
L_08911a7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08911aa0; }
L_08911a98:
    c->r[2] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
L_08911aa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911b00; }
    { c->r[31] = 0x08911ad8u; func_088df560(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911b00; }
    { c->r[31] = 0x08911ae8u; func_088df670(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068c8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
L_08911b00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08911b20; }
    { goto L_08911b34; }
L_08911b20:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068ccu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
L_08911b34:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068ccu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x00000062u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { c->r[31] = 0x08911bbcu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_0891b59c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x08911bccu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911d54; }
    { c->r[31] = 0x08911becu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u); func_0891c3d4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911c78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x00000070u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x000000efu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000ffu;
    { mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_08911dd0; }
L_08911c78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    { mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]); goto L_08911dd0; }
L_08911d54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x000001e0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000001e2u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000002u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
L_08911dd0:
    { c->r[31] = 0x08911dd8u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08911e34u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08911e90u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08911edcu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08911ee8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089121e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08911f84; }
    { c->r[31] = 0x08911f14u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08911f74; }
    { c->r[31] = 0x08911f2cu; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08911f54; }
    c->r[2] = 0x7f170000u;
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[3] = c->r[3] | 0x177fu;
    { mem_w32(ram, c->r[30] + 0x00000148u, c->r[3]); goto L_08911f68; }
L_08911f54:
    c->r[2] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[3] = c->r[3] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[3]);
L_08911f68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08912030; }
L_08911f74:
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_08912030; }
L_08911f84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08912018; }
    { c->r[31] = 0x08911fa0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08912000; }
    { c->r[31] = 0x08911fb8u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08911fe0; }
    c->r[3] = 0x7f7f0000u;
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = c->r[2] | 0x1000u;
    { mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]); goto L_08911ff4; }
L_08911fe0:
    c->r[3] = 0x7f170000u;
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = c->r[2] | 0x177fu;
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
L_08911ff4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[3]); goto L_08912030; }
L_08912000:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08912010u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089116d4; }
L_08912018:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08912028u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089116d4; }
L_08912030:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { c->r[31] = 0x0891203cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_0891b59c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891204cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    { c->r[31] = 0x089120d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08912134u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08912190u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089121dcu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { goto L_089123e0; }
L_089121e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089123e0; }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08912204u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891229c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x000000c0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000d0u;
    { mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_089122d4; }
L_0891229c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
L_089122d4:
    { c->r[31] = 0x089122dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08912338u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08912394u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089123e0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_089123e0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089123f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089116d4; }
L_089123f8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08912404u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891242c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0891241cu; c->r[4] = c->r[4] + 0xffffb9c0u; func_08920abc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891242c; }
    { goto L_0891249c; }
L_0891242c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08912438u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08912464; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08912454u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08912494; }
L_08912464:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08912494; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08912484u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08912494; }
    { goto L_0891249c; }
L_08912494:
    { c->r[31] = 0x0891249cu; func_0890fd24(c, ram); }
L_0891249c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000082u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000087u;
    mem_w16(ram, c->r[30] + 0x00000072u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = 0u + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x000000b2u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = 0u + 0x00000107u;
    mem_w16(ram, c->r[30] + 0x000000c2u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068acu);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000068b0u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[4] = 0u + 0x00000078u;
    { c->r[31] = 0x08912570u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000a4u, 0u);
L_08912580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08912598; }
    { goto L_08912750; }
L_08912598:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000a0u, 0u);
L_089126d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089126f0; }
    { goto L_08912734; }
L_089126f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]); goto L_089126d8; }
L_08912734:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_08912580; }
L_08912750:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08912798u; c->r[5] = 0u + 0x00000009u; func_08920a80(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x011cu;
    c->r[7] = 0u + 0x00000005u;
    c->r[8] = 0u + 0x00000002u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089127f8u; c->r[10] = mem_r32(ram, c->r[30] + 0x000000acu); func_08920894(c, ram); }
    c->r[4] = 0u + 0x00000030u;
    { c->r[31] = 0x08912804u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000070u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000072u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c2u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000072u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x011cu;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0x00000002u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0891292cu; c->r[10] = mem_r32(ram, c->r[30] + 0x000000acu); func_08920894(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08912978u; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08912984u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08912b80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089129c0; }
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089129e8; }
    { goto L_08912e38; }
L_089129c0:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08912ab4; }
    c->r[2] = 0u + 0x0000001bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08912d74; }
    { goto L_08912e38; }
L_089129e8:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08912a18u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff580u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff584u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff588u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff58cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08912a94u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08912aacu; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08910010(c, ram); }
    { goto L_08912e38; }
L_08912ab4:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08912ae4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5d0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5d4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5d8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5dcu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08912b60u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08912b78u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08910010(c, ram); }
    { goto L_08912e38; }
L_08912b80:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08912bb0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff590u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff594u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff598u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff59cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08912c2cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08912c44u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08910010(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5a0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5a4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5a8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5acu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08912ca0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08912cd8u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08910010(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5b0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5b4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5b8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5bcu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08912d34u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08912d6cu; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08910010(c, ram); }
    { goto L_08912e38; }
L_08912d74:
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000068d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08912da4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000f0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5c0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5c4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5c8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5ccu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08912e20u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08912e38u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000058u); func_08910010(c, ram); }
L_08912e38:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[7] = 0u + 0x000001e0u;
    { c->r[31] = 0x08912e8cu; c->r[8] = 0u + 0x00000110u; func_0892097c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000168u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000170u; return; }
    return; /* fell out of func_08910640 */
}

/* func_0891d1fc  0x0891d1fc..0x0891d354  344 bytes, source=fde */
void func_0891d1fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891d1fcu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891d21cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891d234; }
    { goto L_0891d340; }
L_0891d234:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891d264; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891d264; }
    { goto L_0891d340; }
L_0891d264:
    { c->r[31] = 0x0891d26cu; func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891d27c; }
    { goto L_0891d340; }
L_0891d27c:
    { c->r[31] = 0x0891d284u; func_0896db94(c, ram); }
    { c->r[31] = 0x0891d28cu; c->r[4] = c->r[2] + 0u; func_08970efc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891d2cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891d340; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x000000ceu;
    { c->r[31] = 0x0891d2c4u; c->r[6] = 0u + 0u; func_089ce0d0(c, ram); }
    { goto L_0891d340; }
L_0891d2cc:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d340; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffb9fcu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 27;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000682cu;
    { c->r[31] = 0x0891d318u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0u + 0x0000005au;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0891d340u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_0891d340:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0891d1fc */
}

/* func_089213ec  0x089213ec..0x08921430  68 bytes, source=sweep */
void func_089213ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089213ecu);
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
    { c->r[31] = 0x0892141cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089213ec */
}

/* func_089225d4  0x089225d4..0x08922628  84 bytes, source=sweep */
void func_089225d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089225d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[14]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006ddcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = c->f[1];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089225d4 */
}

/* func_08925900  0x08925900..0x08925938  56 bytes, source=sweep */
void func_08925900(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925900u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925924u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08925a70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925900 */
}

/* func_089270c8  0x089270c8..0x08927144  124 bytes, source=fde */
void func_089270c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089270c8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089270e0u; c->r[4] = 0u + 0x00000025u; func_089c6f04(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    { c->r[31] = 0x089270f0u; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089270fcu; c->r[4] = c->r[4] + 0x00006f20u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffa1cu, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffa1cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08927120; }
    c->r[2] = 0u + 0x00000200u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffa1cu, c->r[2]);
L_08927120:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9f0u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9f4u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089270c8 */
}

/* func_0892b42c  0x0892b42c..0x0892b8bc  1168 bytes, source=fde */
void func_0892b42c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892b42cu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_0892b480; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892b7fc; }
    { goto L_0892b8a8; }
L_0892b480:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892b4ccu; c->r[5] = c->r[5] | 0x0100u; func_0893365c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0892b4e4u; c->r[5] = c->r[2] + 0u; func_08933804(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892b52cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089336a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0892b540u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0892b554u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x0000000cu;
    { c->r[31] = 0x0892b560u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000056u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892b5e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0u + 0x00000055u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0892b5e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007048u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0892b634; }
    { goto L_0892b648; }
L_0892b634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000055u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0892b648:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000056u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892b668; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + 0x00000055u;
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
L_0892b668:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0892b688; }
    { goto L_0892b6ac; }
L_0892b688:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892b6c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + 0x0000000cu;
    { mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_0892b6c4; }
L_0892b6ac:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892b6c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0892b6c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000003u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0892b74cu; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892b7a8u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892b7f4u; c->r[5] = c->r[5] | 0x0002u; func_0893365c(c, ram); }
    { goto L_0892b8a8; }
L_0892b7fc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000704cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0892b820; }
    { goto L_0892b888; }
L_0892b820:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000704cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0892b848u; func_0892b42c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000002bu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000704cu);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0892b880u; func_0892b42c(c, ram); }
    { goto L_0892b8a8; }
L_0892b888:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0892b8a8u; func_0892b42c(c, ram); }
L_0892b8a8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0892b42c */
}

/* func_08930b74  0x08930b74..0x08930cd0  348 bytes, source=fde */
void func_08930b74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930b74u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08930bac; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08930cb8; }
L_08930bac:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08930bb4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08930bd0; }
    { goto L_08930c6c; }
L_08930bd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08930c5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08930c1cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071bcu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08930c3cu; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08930c5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08930c5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08930bb4; }
L_08930c6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08930c90; }
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[2]);
L_08930c90:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08930cb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08930b74 */
}

/* func_08933428  0x08933428..0x08933498  112 bytes, source=sweep */
void func_08933428(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933428u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08933454; }
    { goto L_08933488; }
L_08933454:
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
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08933488:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933428 */
}

/* func_08935c08  0x08935c08..0x08935cb0  168 bytes, source=fde */
void func_08935c08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935c08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08935c1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935c34; }
    { goto L_08935c9c; }
L_08935c34:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935c8c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935c84; }
    { goto L_08935c8c; }
L_08935c84:
    { c->r[31] = 0x08935c8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0893435c(c, ram); }
L_08935c8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08935c1c; }
L_08935c9c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935c08 */
}

/* func_0893bf00  0x0893bf00..0x0893bf80  128 bytes, source=sweep */
void func_0893bf00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893bf00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893bf44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893bf44; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0893bf44u; c->r[4] = c->r[4] + 0xfffffa98u; func_088112e8(c, ram); }
L_0893bf44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893bf6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893bf6c; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0893bf6cu; c->r[4] = c->r[4] + 0xfffffa98u; func_08811320(c, ram); }
L_0893bf6c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893bf00 */
}

/* func_0893cc44  0x0893cc44..0x0893cc74  48 bytes, source=sweep */
void func_0893cc44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893cc44u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0893cc60u; c->r[5] = 0u | 0xffffu; func_0893bf00(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0893cc44 */
}

/* func_0893e184  0x0893e184..0x0893e254  208 bytes, source=fde */
void func_0893e184(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e184u);
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
    { c->r[31] = 0x0893e1c8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893e1e0; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0893e23c; }
L_0893e1e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffffdcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0893e208u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893e404(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893e234; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffedcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0893e234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0893e23c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893e184 */
}

/* func_089404e0  0x089404e0..0x08940530  80 bytes, source=sweep */
void func_089404e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089404e0u);
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
    { c->r[31] = 0x0894051cu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089404e0 */
}

/* func_08945a44  0x08945a44..0x08945a98  84 bytes, source=sweep */
void func_08945a44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945a44u);
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
    { c->r[31] = 0x08945a84u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08945a44 */
}

/* func_08946948  0x08946948..0x08947e08  5312 bytes, source=fde */
void func_08946948(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08946948u);
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
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000fcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08946e48; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089469b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089469e0; }
    { goto L_08947dec; }
L_089469b8:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000fcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08947dc8; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000fcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089475f8; }
    { goto L_08947dec; }
L_089469e0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000035dcu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08946a08; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08946a00u; c->r[5] = c->r[5] + 0x0000785cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000035dcu, c->r[2]);
L_08946a08:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000035deu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08946a30; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08946a28u; c->r[5] = c->r[5] + 0x00007868u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000035deu, c->r[2]);
L_08946a30:
    { c->r[31] = 0x08946a38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946b44; }
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
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000003cu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08946abcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08866264(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000087u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08946b28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946b00; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08946b18; }
    { goto L_08946b44; }
L_08946b00:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08946b38; }
    { goto L_08946b44; }
L_08946b18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]); goto L_08946b44; }
L_08946b28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]); goto L_08946b44; }
L_08946b38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]);
L_08946b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08946b60u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
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
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08946b98u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946c00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]); goto L_08946c18; }
L_08946c00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007874u);
    mem_wf32(ram, c->r[2] + 0x00000040u, c->f[0]);
L_08946c18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08946c3c; }
    { goto L_08946c54; }
L_08946c3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000005au;
    mem_w16(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002du;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_08946c54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946d84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946d84; }
    { c->r[31] = 0x08946c74u; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08946d84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007878u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007878u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007878u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08946cf8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08946d14u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08946d28u; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08946d60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08946d84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = c->r[3] + 0xfffffffeu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946d84; }
L_08946d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08946d78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08946d84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w16(ram, c->r[3] + 0x00000046u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0024u;
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08946db0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_08947e08(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08946df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946ddc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08946dd4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000024u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
L_08946ddc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002du;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000004cu, c->r[2]);
L_08946df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946e34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000000u;
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946e20; }
    { goto L_08947dec; }
L_08946e20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08946e2cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08947dec; }
L_08946e34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08946e40u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08947dec; }
L_08946e48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08946e6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_08946e6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946ea0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08947dec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08946e98u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08947dec; }
L_08946ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000044u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08947304; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08946eb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08946ecc; }
    { goto L_08947110; }
L_08946ecc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08946eec; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000787cu);
    { mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]); goto L_08946ef8; }
L_08946eec:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007880u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
L_08946ef8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08946f1c; }
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[30] + 0x000000ccu, c->r[2]); goto L_08946f24; }
L_08946f1c:
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x000000ccu, c->r[3]);
L_08946f24:
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000ccu);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x08946f44u, 0x7u); goto L_08946f48; }
L_08946f48:
    { int _c = (c->r[3] != 0u); if (_c) goto L_08947100; }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08946f5cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08946fb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08946f7cu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08947100; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08946fb0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08820ca4(c, ram); }
    { goto L_08946fd4; }
L_08946fb8:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08946fd4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08820ca4(c, ram); }
L_08946fd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007884u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007888u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894705cu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007884u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007888u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089470b8u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08947100:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08946eb4; }
L_08947110:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0894712cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894717c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08947150u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
L_0894717c:
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08947198u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000038u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089471b0u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089471dc; }
    { goto L_089472a0; }
L_089471dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000788cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007890u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08947234; }
    { goto L_08947244; }
L_08947234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    { mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]); goto L_08947250; }
L_08947244:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007890u);
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
L_08947250:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000788cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000024u, c->f[0]);
L_089472a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947348; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089472c4u; c->r[4] = c->r[2] + 0u; func_08886934(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089472ec; }
    { goto L_08947348; }
L_089472ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w16(ram, c->r[2] + 0x00000044u, 0u); goto L_08947348; }
L_08947304:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000032u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08947348; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000036u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08947348; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08947340u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08947dec; }
L_08947348:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_0894734c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947364; }
    { goto L_08947520; }
L_08947364:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08947388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089473ac; }
    { goto L_08947510; }
L_089473ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08947448; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947500; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08947500; }
L_08947448:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947474; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08947474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08947500; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000018u, c->f[0]);
L_08947500:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08947388; }
L_08947510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_0894734c; }
L_08947520:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089475cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08947564u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08947578u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000040u); func_089c77f4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08947598u; func_0880d140(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000048u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[8] + 0x00000050u);
    { c->r[31] = 0x089475ccu; c->f[13] = mem_rf32(ram, c->r[9] + 0x00000054u); func_088815c8(c, ram); }
L_089475cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000004du, c->r[2]); goto L_08947dec; }
L_089475f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08947610; }
    { goto L_08947dec; }
L_08947610:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08947630u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007894u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007898u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08947658u; c->f[13] = c->f[1]; func_089c7938(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894767c; }
    { goto L_08947dec; }
L_0894767c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000789cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089476a8u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08947708u; c->r[5] = c->r[2] + 0u; func_089484f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08947768u; c->r[5] = c->r[2] + 0u; func_089484f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_0894776c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947784; }
    { goto L_08947db4; }
L_08947784:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000035dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089477b0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_089477f8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089477dc; }
    { goto L_0894780c; }
L_089477dc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089477f0u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    { goto L_0894780c; }
L_089477f8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894780cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
L_0894780c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08947830:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08947854; }
    { goto L_08947da4; }
L_08947854:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x089478a0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089478acu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089478b8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[3] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08947928u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08947b48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a0u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089479a8; }
    { goto L_089479c0; }
L_089479a8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]); goto L_089479e0; }
L_089479c0:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007890u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
L_089479e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a8u);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a8u);
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a8u);
    mem_wf32(ram, c->r[30] + 0x000000e8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078acu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08947a4c; }
    { goto L_08947a64; }
L_08947a4c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078acu);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000ecu, c->f[1]); goto L_08947a70; }
L_08947a64:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    mem_wf32(ram, c->r[30] + 0x000000ecu, c->f[0]);
L_08947a70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x000000e8u);
    { c->r[31] = 0x08947a88u; c->f[15] = mem_rf32(ram, c->r[30] + 0x000000ecu); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[17] = c->r[30] + 0x00000080u;
    c->r[16] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078b0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000078b0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000078b4u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x000078b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08947aecu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078b8u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08947b10u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08947b24u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000048u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]); goto L_08947d3c; }
L_08947b48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078bcu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08947b98; }
    { goto L_08947bb0; }
L_08947b98:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]); goto L_08947bd0; }
L_08947bb0:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007890u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078a4u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
L_08947bd0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078c0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000078c4u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000078c8u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007890u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08947c24u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = c->f[0] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007890u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08947c54; }
    { goto L_08947c64; }
L_08947c54:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = c->f[0] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]); goto L_08947c70; }
L_08947c64:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007890u);
    mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]);
L_08947c70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u);
    { c->r[31] = 0x08947c80u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000f8u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[17] = c->r[30] + 0x000000b0u;
    c->r[16] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078ccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000078ccu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x0000789cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x0000789cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08947ce4u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000078b8u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08947d08u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08947d1cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000048u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
L_08947d3c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08947d4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089e0008(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0007u;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { c->r[31] = 0x08947d64u; c->f[12] = c->f[0]; func_08859e90(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[7] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08947d94u; c->r[9] = 0u + 0u; func_089ec420(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08947830; }
L_08947da4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_0894776c; }
L_08947db4:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08947dc0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08947dec; }
L_08947dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08947dec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08947de4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000024u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
L_08947dec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000010cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08946948 */
}

/* func_0894c2d8  0x0894c2d8..0x0894c31c  68 bytes, source=sweep */
void func_0894c2d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c2d8u);
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
    { c->r[31] = 0x0894c308u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c2d8 */
}

/* func_089535c8  0x089535c8..0x089536c8  256 bytes, source=sweep */
void func_089535c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089535c8u);
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
    return; /* fell out of func_089535c8 */
}

/* func_089558b0  0x089558b0..0x089558f4  68 bytes, source=sweep */
void func_089558b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089558b0u);
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
    { c->r[31] = 0x089558e0u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089558b0 */
}

/* func_08958668  0x08958668..0x089586ac  68 bytes, source=sweep */
void func_08958668(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958668u);
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
    { c->r[31] = 0x08958698u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958668 */
}

/* func_0895b238  0x0895b238..0x0895b2d4  156 bytes, source=residue */
void func_0895b238(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b238u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b264; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b2c0; }
L_0895b264:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b280; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b2c0; }
L_0895b280:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b29c; }
    c->r[2] = 0u + 0x00000006u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b2c0; }
L_0895b29c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b2b8; }
    c->r[2] = 0u + 0x00000027u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b2c0; }
L_0895b2b8:
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895b2c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b238 */
}

/* func_0895e9b0  0x0895e9b0..0x0895ed34  900 bytes, source=sweep */
void func_0895e9b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895e9b0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0895e9dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e9f8; }
    { goto L_0895ed20; }
L_0895e9f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ea10; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_0895ed20; }
L_0895ea10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895ea40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895ea40; }
    { goto L_0895ea88; }
L_0895ea40:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895ea88; }
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffb9feu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895ea7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x0400u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895ea88; }
L_0895ea7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895ea88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895eab8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895eab8; }
    { goto L_0895eb5c; }
L_0895eab8:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051e0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895eb50; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051e8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895eb50; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051e4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895eb50; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000051ecu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895eb50; }
    { goto L_0895eb5c; }
L_0895eb50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895eb5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895eb8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895eb8c; }
    { goto L_0895ebdc; }
L_0895eb8c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895ebb8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000496cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0895ebb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004970u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ebdc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895ebdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895ec70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ec70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ec5c; }
    c->r[2] = 0u + 0x000000b4u;
    c->r[1] = 0x08aa0000u;
    { mem_w16(ram, c->r[1] + 0x000049ceu, c->r[2]); goto L_0895ec70; }
L_0895ec5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049ceu, c->r[2]);
L_0895ec70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895ed04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ed04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ecf0; }
    c->r[2] = 0u + 0x000000b4u;
    c->r[1] = 0x08aa0000u;
    { mem_w16(ram, c->r[1] + 0x000049ceu, c->r[2]); goto L_0895ed04; }
L_0895ecf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049ceu, c->r[2]);
L_0895ed04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0895e9dc; }
L_0895ed20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895e9b0 */
}

/* func_0896132c  0x0896132c..0x089613b4  136 bytes, source=fde */
void func_0896132c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896132cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08961354u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08961364; }
    { goto L_089613a0; }
L_08961364:
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089613a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896132c */
}

/* func_08964140  0x08964140..0x089643dc  668 bytes, source=fde */
void func_08964140(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964140u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08964178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964194; }
    { goto L_089643c8; }
L_08964194:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089641c0u; c->r[5] = c->r[2] + 0u; func_08961ee8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089641d0; }
    { goto L_089643b8; }
L_089641d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x089641fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896420c; }
    { goto L_089643b8; }
L_0896420c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089643b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964320; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000022u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089643b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    { c->r[31] = 0x089642f8u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_089643b8; }
L_08964320:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = 0u + 0x00000022u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089643b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    { c->r[31] = 0x08964394u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_089643b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08964178; }
L_089643c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08964140 */
}

/* func_08966e98  0x08966e98..0x08966ef4  92 bytes, source=fde */
void func_08966e98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08966e98u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053cdu);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000053ceu);
    c->r[8] = 0x08aa0000u;
    c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[8] + 0x000053cfu);
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff844cu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08966ed8u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08966ee0u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08966e98 */
}

/* func_0896973c  0x0896973c..0x089697a0  100 bytes, source=residue */
void func_0896973c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896973cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896978c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9a5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0896978c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896973c */
}

/* func_0896a3c0  0x0896a3c0..0x0896a3e4  36 bytes, source=sweep */
void func_0896a3c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a3c0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000053ecu;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896a3c0 */
}

/* func_0896d22c  0x0896d22c..0x0896d35c  304 bytes, source=sweep */
void func_0896d22c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896d22cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896d264u; c->r[5] = 0u + 0u; func_0896e62c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896d278; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896d344; }
L_0896d278:
    { c->r[31] = 0x0896d280u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896d28cu; c->r[5] = c->r[2] + 0u; func_0896e62c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896d2a0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896d344; }
L_0896d2a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d300; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d2dc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896d344; }
L_0896d2dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d340; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896d344; }
L_0896d300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000009c0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896d324; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000009c0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000009c0u, c->r[2]);
L_0896d324:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000009c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d340; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896d344; }
L_0896d340:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0896d344:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896d22c */
}

/* func_0896e48c  0x0896e48c..0x0896e4b4  40 bytes, source=sweep */
void func_0896e48c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e48cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e48c */
}

/* func_0896f45c  0x0896f45c..0x0896f494  56 bytes, source=sweep */
void func_0896f45c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f45cu);
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
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f45c */
}

/* func_0897146c  0x0897146c..0x089714a4  56 bytes, source=residue */
void func_0897146c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897146cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006954u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897146c */
}

/* func_08974fb4  0x08974fb4..0x089750b4  256 bytes, source=fde */
void func_08974fb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08974fb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08974fccu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08974fd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974ff0; }
    { goto L_089750a0; }
L_08974ff0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006984u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08975018u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08975090; }
    { c->r[31] = 0x08975030u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08975040u; c->r[5] = 0x00300000u; func_0892ffa8(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975054; }
    { goto L_08975090; }
L_08975054:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975074; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0897506cu; c->r[5] = 0x00100000u; func_0892ff54(c, ram); }
    { goto L_08975090; }
L_08975074:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08975090; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08975090u; c->r[5] = 0x00200000u; func_0892ff54(c, ram); }
L_08975090:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08974fd8; }
L_089750a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08974fb4 */
}

/* func_089772d8  0x089772d8..0x089780e8  3600 bytes, source=fde */
void func_089772d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089772d8u);
L_089772d8:
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
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8f60u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897733c; }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08977324u; c->r[4] = c->r[4] + 0xffff9054u; func_088112e8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff8f60u, c->r[2]);
    c->r[4] = 0x08980000u;
    { c->r[31] = 0x0897733cu; c->r[4] = c->r[4] + 0xffff8b08u; func_08a190e4(c, ram); }
L_0897733c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897736c; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977d64; }
    { goto L_089780cc; }
L_0897736c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089780cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8a60u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089772d8u: goto L_089772d8; case 0x089773a8u: goto L_089773a8; case 0x08977494u: goto L_08977494; case 0x089774c4u: goto L_089774c4; case 0x08977780u: goto L_08977780; case 0x08977874u: goto L_08977874; case 0x089779b4u: goto L_089779b4; case 0x08977b90u: goto L_08977b90; case 0x08977cf0u: goto L_08977cf0; case 0x08977d28u: goto L_08977d28; case 0x08977db8u: goto L_08977db8; case 0x08977e00u: goto L_08977e00; case 0x08977e1cu: goto L_08977e1c; case 0x08977e38u: goto L_08977e38; case 0x08977e54u: goto L_08977e54; case 0x08977e68u: goto L_08977e68; case 0x089780ccu: goto L_089780cc; default: recomp_trap_unknown_indirect(c, ram, 0x089773a0u, _t); return; } }
L_089773a8:
    { c->r[31] = 0x089773b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d88u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d8cu, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d90u, 0u);
    { c->r[31] = 0x089773d8u; c->r[4] = 0u + 0x0000001bu; func_089c6f04(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9054u;
    { c->r[31] = 0x089773e8u; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x089773f4u; c->r[4] = c->r[4] + 0xffff8f68u; func_08978c50(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08977418; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977410u; c->r[5] = 0u + 0x0000000cu; func_0896a7b8(c, ram); }
    { goto L_089780cc; }
L_08977418:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ed0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897742cu; c->r[6] = 0u + 0x00002000u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ea8u;
    c->r[5] = 0u + 0x00000050u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0x08aa0000u;
    c->r[7] = c->r[7] + 0x00006ed0u;
    { c->r[31] = 0x0897744cu; c->r[8] = 0u + 0x00002000u; func_089d45b0(c, ram); }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08977458u; c->r[4] = c->r[4] + 0xffff8f68u; func_08978db4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897746cu; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977488; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08977488u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_08977488:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08977494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089774a8u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089774b8; }
    { goto L_089780cc; }
L_089774b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089774c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x089774e4u; c->r[4] = c->r[4] + 0xffff8f68u; func_08978db4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff904cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08977558; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977504u; c->r[5] = 0u + 0x0000000cu; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000004au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977528u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897753cu; c->r[4] = c->r[2] + 0u; func_0896e824(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977550u; c->r[4] = c->r[2] + 0u; func_0896e824(c, ram); }
    { goto L_089780cc; }
L_08977558:
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff8f71u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089775c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089775c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000004au;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x089775b4u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); goto L_089775d8; }
L_089775c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089775d8u; c->r[4] = c->r[2] + 0u; func_0896e824(c, ram); }
L_089775d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897767c; }
    { c->r[31] = 0x089775f0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897767c; }
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x08977604u; mem_w32(ram, c->r[1] + 0x00006d88u, 0u); func_0896a190(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x000027dcu;
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff8f68u;
    c->r[6] = 0u + 0x00000018u;
    { c->r[31] = 0x08977620u; c->r[7] = c->r[2] + 0u; func_089d3b88(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08977664; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977648u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897765cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_08977670; }
L_08977664:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08977670:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000004u, 0u); goto L_089780cc; }
L_0897767c:
    { c->r[31] = 0x08977684u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089776d8; }
    { c->r[31] = 0x08977694u; func_08976260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089776a0u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089776bcu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089776d0u; c->r[4] = c->r[2] + 0u; func_0896e824(c, ram); }
    { goto L_089780cc; }
L_089776d8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089776f0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08977700u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897772c; }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08977724u; c->r[4] = c->r[4] + 0xffff8f68u; func_089791c0(c, ram); }
    { goto L_089780cc; }
L_0897772c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08977744u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08977754u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089780cc; }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08977778u; c->r[4] = c->r[4] + 0xffff8f68u; func_08979268(c, ram); }
    { goto L_089780cc; }
L_08977780:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08977798u; c->r[4] = c->r[4] + 0xffff8f68u; func_08978db4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089777e0; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089777e0; }
    { goto L_089777f8; }
L_089777e0:
    { c->r[31] = 0x089777e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089780cc; }
L_089777f8:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977834; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977834; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977834; }
    { goto L_08977858; }
L_08977834:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d88u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089780cc; }
L_08977858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897786cu; c->r[4] = c->r[2] + 0u; func_0896e824(c, ram); }
    { goto L_089780cc; }
L_08977874:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x0897788cu; c->r[4] = c->r[4] + 0xffff8f68u; func_08978db4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff8f71u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089778c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897796c; }
L_089778c0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977904; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977904; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977904; }
    { goto L_0897793c; }
L_08977904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977918u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897792cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089780cc; }
L_0897793c:
    { c->r[31] = 0x08977944u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897796c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897796cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_0897796c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08977988u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089779a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089779a4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089779a4:
    { c->r[31] = 0x089779acu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_089780cc; }
L_089779b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x089779ccu; c->r[4] = c->r[4] + 0xffff8f68u; func_08978db4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff8f71u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d90u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08977ab4; }
    { c->r[31] = 0x089779f8u; func_08976260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977a04u; c->r[5] = 0u + 0x00000007u; func_0896a7b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08977a08:
    { c->r[31] = 0x08977a10u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08977a2c; }
    { goto L_08977a84; }
L_08977a2c:
    { c->r[31] = 0x08977a34u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0896a4d4(c, ram); }
    { c->r[31] = 0x08977a3cu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
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
    { c->r[31] = 0x08977a74u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08977a08; }
L_08977a84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977a98u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977aacu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089780cc; }
L_08977ab4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977af8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977af8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977af8; }
    { goto L_08977b30; }
L_08977af8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977b0cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977b20u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089780cc; }
L_08977b30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08977b50; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08977b80; }
L_08977b50:
    { c->r[31] = 0x08977b58u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977b80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977b80u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_08977b80:
    { c->r[31] = 0x08977b88u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_089780cc; }
L_08977b90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08977ba8u; c->r[4] = c->r[4] + 0xffff8f68u; func_08978db4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d90u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08977bf0; }
    { c->r[31] = 0x08977bc8u; func_08976260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977bd4u; c->r[5] = 0u + 0x00000007u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977be8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089780cc; }
L_08977bf0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977c34; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977c34; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006d88u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08977c34; }
    { goto L_08977c6c; }
L_08977c34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977c48u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977c5cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089780cc; }
L_08977c6c:
    { c->r[31] = 0x08977c74u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977c94; }
    { c->r[31] = 0x08977c84u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08977ccc; }
L_08977c94:
    { c->r[31] = 0x08977c9cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977ccc; }
    { c->r[31] = 0x08977cacu; func_08976260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977cb8u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977cccu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_08977ccc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08977ce0u; c->r[4] = c->r[2] + 0u; func_0896e824(c, ram); }
    { c->r[31] = 0x08977ce8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_089780cc; }
L_08977cf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000005u;
    mem_w8(ram, c->r[2] + 0x00000011u, c->r[3]);
    { c->r[31] = 0x08977d04u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089780cc; }
    { c->r[31] = 0x08977d14u; func_08976260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977d20u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_089780cc; }
L_08977d28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08977d44u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977d54; }
    { goto L_089780cc; }
L_08977d54:
    { c->r[31] = 0x08977d5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089780cc; }
L_08977d64:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8a58u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08977d7cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977e68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8b10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089772d8u: goto L_089772d8; case 0x089773a8u: goto L_089773a8; case 0x08977494u: goto L_08977494; case 0x089774c4u: goto L_089774c4; case 0x08977780u: goto L_08977780; case 0x08977874u: goto L_08977874; case 0x089779b4u: goto L_089779b4; case 0x08977b90u: goto L_08977b90; case 0x08977cf0u: goto L_08977cf0; case 0x08977d28u: goto L_08977d28; case 0x08977db8u: goto L_08977db8; case 0x08977e00u: goto L_08977e00; case 0x08977e1cu: goto L_08977e1c; case 0x08977e38u: goto L_08977e38; case 0x08977e54u: goto L_08977e54; case 0x08977e68u: goto L_08977e68; case 0x089780ccu: goto L_089780cc; default: recomp_trap_unknown_indirect(c, ram, 0x08977db0u, _t); return; } }
L_08977db8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977de4; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x0000150eu;
    { c->r[31] = 0x08977ddcu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977e68; }
L_08977de4:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x000013dfu;
    { c->r[31] = 0x08977df8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977e68; }
L_08977e00:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001510u;
    { c->r[31] = 0x08977e14u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977e68; }
L_08977e1c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x0000170cu;
    { c->r[31] = 0x08977e30u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977e68; }
L_08977e38:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001503u;
    { c->r[31] = 0x08977e4cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977e68; }
L_08977e54:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001518u;
    { c->r[31] = 0x08977e68u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_08977e68:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08977e74u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08977fcc; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8a58u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08977ea0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08977eb4u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x08977ebcu; c->r[4] = 0u + 0x00000050u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08977ed0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08977f1cu; c->r[5] = c->r[5] | 0x7f7fu; func_08978ad0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08977f68u; c->r[5] = c->r[5] | 0x0102u; func_08978a8c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff904cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9048u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977f9c; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9054u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x08977f9cu; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
L_08977f9c:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9048u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08977fc0; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9054u;
    c->r[5] = 0u + 0x00000014u;
    { c->r[31] = 0x08977fc0u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
L_08977fc0:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08977fccu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08977fcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08977fe8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089780cc; }
    { c->r[31] = 0x08978000u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089780cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089780cc; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff8f71u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000048u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089780cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000004fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089780cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000053u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089780cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000054u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089780cc; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8a5cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08978098u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x089780a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e48c(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089780c0u; c->r[5] = c->r[2] + 0u; func_089732e4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089780ccu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089780cc:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089772d8 */
}

/* func_0897a374  0x0897a374..0x0897a6cc  856 bytes, source=sweep */
void func_0897a374(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897a374u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9114u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a3a4u; c->r[5] = 0u + 0x0000004fu; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9117u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a3bcu; c->r[5] = 0u + 0x00000050u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9118u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a3d4u; c->r[5] = 0u + 0x00000052u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911au, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a3ecu; c->r[5] = 0u + 0x00000055u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a404u; c->r[5] = 0u + 0x00000056u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911du, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a41cu; c->r[5] = 0u + 0x00000058u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9120u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a434u; c->r[5] = 0u + 0x0000005au; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9121u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a44cu; c->r[5] = 0u + 0x0000005fu; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911fu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897a47c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a470u; c->r[5] = 0u + 0x000000a2u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]); goto L_0897a4c0; }
L_0897a47c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897a4a8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a49cu; c->r[5] = 0u + 0x000000a3u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]); goto L_0897a4c0; }
L_0897a4a8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a4b8u; c->r[5] = 0u + 0x00000051u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]);
L_0897a4c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a4e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a4e8; }
    { goto L_0897a504; }
L_0897a4e8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a4f8u; c->r[5] = 0u + 0x000000a1u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9116u, c->r[2]); goto L_0897a51c; }
L_0897a504:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a514u; c->r[5] = 0u + 0x0000004eu; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9116u, c->r[2]);
L_0897a51c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897a548; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a53cu; c->r[5] = 0u + 0x000000c3u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]); goto L_0897a560; }
L_0897a548:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a558u; c->r[5] = 0u + 0x00000054u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]);
L_0897a560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a594; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a594; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a594; }
    { goto L_0897a5b0; }
L_0897a594:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a5a4u; c->r[5] = 0u + 0x0000004du; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9115u, c->r[2]); goto L_0897a5c8; }
L_0897a5b0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a5c0u; c->r[5] = 0u + 0x00000061u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, c->r[2]);
L_0897a5c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a64c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a608; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a630; }
    { goto L_0897a6a0; }
L_0897a608:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a668; }
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a684; }
    { goto L_0897a6a0; }
L_0897a630:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a640u; c->r[5] = 0u + 0x0000005bu; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]); goto L_0897a6b8; }
L_0897a64c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a65cu; c->r[5] = 0u + 0x0000005du; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]); goto L_0897a6b8; }
L_0897a668:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a678u; c->r[5] = 0u + 0x00000060u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]); goto L_0897a6b8; }
L_0897a684:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a694u; c->r[5] = 0u + 0x00000063u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]); goto L_0897a6b8; }
L_0897a6a0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897a6b0u; c->r[5] = 0u + 0x00000053u; func_088145a8(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]);
L_0897a6b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897a374 */
}

/* func_08985d08  0x08985d08..0x08985d90  136 bytes, source=sweep */
void func_08985d08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08985d08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08985d48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985d48; }
    { goto L_08985d50; }
L_08985d48:
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08985d7c; }
L_08985d50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000328u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08985d7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08985d08 */
}

/* func_089906a0  0x089906a0..0x08990d80  1760 bytes, source=fde */
void func_089906a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089906a0u);
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
    c->r[5] = 0u + 0x00000083u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = c->r[9] + 0xffff9754u;
    { c->r[31] = 0x089906e8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000018u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08990704u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9754u;
    c->r[5] = 0u + 0x00000076u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x00000007u;
    c->r[8] = 0x00400000u;
    c->r[9] = 0u + 0x00000002u;
    c->r[10] = 0x08ab0000u;
    { c->r[31] = 0x08990738u; c->r[10] = c->r[10] + 0xffff97b8u; func_0898f2a0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97b8u, c->r[2]);
    c->r[2] = 0u + 0x0000004fu;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97bau, c->r[2]);
    c->r[2] = 0u + 0x000003d7u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff97bcu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97c0u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff97c2u, 0u);
    c->r[2] = 0u + 0x000003d6u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff97c4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08990780:
    { c->r[31] = 0x08990788u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089907a4; }
    { goto L_08990cf0; }
L_089907a4:
    c->r[2] = 0x00420000u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089907c4u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089907d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089907d8:
    { c->r[31] = 0x089907e0u; func_0896a3c0(c, ram); }
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
    c->r[9] = 0u + 0x00000002u;
    { c->r[31] = 0x0899086cu; c->r[10] = c->r[2] + 0u; func_0898f2a0(c, ram); }
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08990a44; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089908b8; }
    { goto L_08990b34; }
L_089908b8:
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
    c->r[2] = 0u + 0x0000004fu;
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
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08990980u; mem_w16(ram, c->r[2] + 0x00000002u, 0u); func_08998dcc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08990a18; }
    { c->r[31] = 0x089909b4u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089909ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b9u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08990ce0; }
L_089909ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b7u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08990ce0; }
L_08990a18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b8u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08990ce0; }
L_08990a44:
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
    c->r[2] = 0u + 0x0000004fu;
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
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08990ce0; }
L_08990b34:
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
    c->r[2] = 0u + 0x0000004fu;
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
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97d8u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08990c20u; mem_w16(ram, c->r[2] + 0x00000002u, 0u); func_08998dcc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08990cb8; }
    { c->r[31] = 0x08990c54u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08990c8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b9u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08990ce0; }
L_08990c8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b7u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08990ce0; }
L_08990cb8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff97dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000003b8u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08990ce0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08990780; }
L_08990cf0:
    { c->r[31] = 0x08990cf8u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08990d00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08990d18; }
    { goto L_08990d68; }
L_08990d18:
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
    { c->r[31] = 0x08990d58u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08990d00; }
L_08990d68:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089906a0 */
}

/* func_08998888  0x08998888..0x089988bc  52 bytes, source=sweep */
void func_08998888(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998888u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffffea90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998888 */
}

/* func_089990dc  0x089990dc..0x08999138  92 bytes, source=sweep */
void func_089990dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089990dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002aa0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08999120; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000bfcu);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002aa0u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08999120; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08999124; }
L_08999120:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08999124:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089990dc */
}

/* func_0899d580  0x0899d580..0x0899d628  168 bytes, source=fde */
void func_0899d580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899d580u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffa5f0u;
    c->r[5] = 0x089a0000u;
    c->r[5] = c->r[5] + 0xffffd628u;
    c->r[6] = 0u + 0x0000002au;
    c->r[7] = 0u + 0x00004000u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0899d5b4u; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899d5d0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d610; }
L_0899d5d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9a54u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899d5ecu; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899d608; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d610; }
L_0899d608:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0899d610:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899d580 */
}

/* func_089a10e8  0x089a10e8..0x089a111c  52 bytes, source=sweep */
void func_089a10e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a10e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089a1104u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08998cec(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a10e8 */
}

/* func_089a5700  0x089a5700..0x089a58d8  472 bytes, source=fde */
void func_089a5700(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a5700u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a5718u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089a5724u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089a5730u; c->r[4] = 0u + 0x0000001cu; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x089a573cu; c->r[4] = 0u + 0x0000001du; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a57e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a57bc; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e08u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a57a0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a578cu; mem_w8(ram, c->r[1] + 0x00002e08u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a57a0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089a57e0; }
L_089a57bc:
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e08u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089a57e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5884; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a5860; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e09u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a5844; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a5824u; mem_w8(ram, c->r[1] + 0x00002e09u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a5844:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089a5884; }
L_089a5860:
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e09u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089a5884:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a58ac; }
    c->r[4] = 0u + 0x0000001du;
    { c->r[31] = 0x089a589cu; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
    { c->r[31] = 0x089a58a4u; c->r[4] = 0u + 0x00002077u; func_089346e8(c, ram); }
    { goto L_089a58c4; }
L_089a58ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a58c4; }
    c->r[4] = 0u + 0x0000001eu;
    { c->r[31] = 0x089a58c4u; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
L_089a58c4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a5700 */
}

/* func_089abf2c  0x089abf2c..0x089ac00c  224 bytes, source=fde */
void func_089abf2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089abf2cu);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000402u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089abf5cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf90u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089abf74u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    { c->r[31] = 0x089abfa8u; mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); func_08867ab8(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089abfbcu; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf94u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x089abfdcu; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089abff4u; c->r[5] = c->r[3] + 0u; func_0884cc18(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089abf2c */
}

/* func_089b0954  0x089b0954..0x089b0fac  1624 bytes, source=fde */
void func_089b0954(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b0954u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000309cu);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000030a0u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_089b0990:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b09a8; }
    { goto L_089b09f0; }
L_089b09a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[4] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_089b0990; }
L_089b09f0:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_089b09f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b0a0c; }
    { goto L_089b0e60; }
L_089b0a0c:
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_089b0a10:
    { c->r[31] = 0x089b0a18u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b0a34; }
    { goto L_089b0c98; }
L_089b0a34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0a6c; }
    { goto L_089b0c88; }
L_089b0a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0b84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b0b40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089b0c88; }
L_089b0b40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0c88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089b0c88; }
L_089b0b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0c88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x089b0be4u; c->r[5] = c->r[2] + 0u; func_089b070c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b0c88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[4] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0c88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
L_089b0c88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089b0a10; }
L_089b0c98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0e50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0x00003108u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w8(ram, c->r[1] + 0x00003108u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000003cu;
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
L_089b0e50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_089b09f4; }
L_089b0e60:
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_089b0e64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b0e7c; }
    { goto L_089b0f98; }
L_089b0e7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089b0ea0; }
    { goto L_089b0f88; }
L_089b0ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0ecc; }
    { goto L_089b0f88; }
L_089b0ecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089b0ee8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0883a204(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089b0f10u; mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0xffffffc0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000004cu);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b0f88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000048u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_089b0f88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089b0e64; }
L_089b0f98:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089b0954 */
}

/* func_089b320c  0x089b320c..0x089b3270  100 bytes, source=sweep */
void func_089b320c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b320cu);
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
    { c->r[31] = 0x089b325cu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b320c */
}

/* func_089b529c  0x089b529c..0x089b5804  1384 bytes, source=fde */
void func_089b529c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b529cu);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000224u, 0u);
L_089b52c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b52d8; }
    { goto L_089b530c; }
L_089b52d8:
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
    { mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]); goto L_089b52c4; }
L_089b530c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5330; }
    { goto L_089b55cc; }
L_089b5330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b533cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_08a0f684(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b5344:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5364; }
    { goto L_089b54e0; }
L_089b5364:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b53e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089b53b0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
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
    { c->r[31] = 0x089b53e4u; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
L_089b53e4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5448; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089b5414u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
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
    { c->r[31] = 0x089b5448u; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
L_089b5448:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b54b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000090u;
    { c->r[31] = 0x089b5480u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
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
    { c->r[31] = 0x089b54b4u; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
L_089b54b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b5344; }
L_089b54e0:
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
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5534; }
    { goto L_089b5590; }
L_089b5534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b5584; }
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
    { c->r[31] = 0x089b5584u; c->f[12] = c->f[0]; func_089b49d4(c, ram); }
L_089b5584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089b5590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1f4u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b55b8; }
    { goto L_089b57ec; }
L_089b55b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1f4u);
    { mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]); goto L_089b57ec; }
L_089b55cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b55e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5608; }
    { goto L_089b5774; }
L_089b5608:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b568c; }
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
    { c->r[31] = 0x089b568cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089b6d3c(c, ram); }
L_089b568c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b56f4; }
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
    { c->r[31] = 0x089b56f4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_0885a058(c, ram); }
L_089b56f4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b5764; }
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
    { c->r[31] = 0x089b5764u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_0885a058(c, ram); }
L_089b5764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b55e8; }
L_089b5774:
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
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b57bc; }
    { goto L_089b57ec; }
L_089b57bc:
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
L_089b57ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_089b529c */
}

/* func_089b75f8  0x089b75f8..0x089b76b8  192 bytes, source=fde */
void func_089b75f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b75f8u);
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
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7630u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[16] + 0x000000a8u);
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b764c; }
    { goto L_089b76a0; }
L_089b764c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b765cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x000000aau, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[16] + 0x000000aau);
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7678; }
    { goto L_089b76a0; }
L_089b7678:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b7684u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0xffffffffu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089b76a0u; c->r[8] = 0u + 0xffffffffu; func_089b76b8(c, ram); }
L_089b76a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b75f8 */
}

/* func_089b934c  0x089b934c..0x089b94b0  356 bytes, source=fde */
void func_089b934c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b934cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089b9378u; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b93ec; }
    { c->r[31] = 0x089b9398u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b95f8(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089b93b0u; c->r[5] = c->r[2] + 0u; func_0889a828(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b949c; }
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
    { mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]); goto L_089b949c; }
L_089b93ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b943c; }
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
    { c->r[31] = 0x089b9434u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b94b0(c, ram); }
    { goto L_089b949c; }
L_089b943c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089b9454u; c->r[5] = c->r[2] + 0u; func_0889a828(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b949c; }
    { c->r[31] = 0x089b9464u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b95f8(c, ram); }
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
    { c->r[31] = 0x089b949cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b94b0(c, ram); }
L_089b949c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b934c */
}

/* func_089c33d8  0x089c33d8..0x089c3458  128 bytes, source=fde */
void func_089c33d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c33d8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x089c33fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c3458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c3418; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_089c3440; }
L_089c3418:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff9e8cu);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089c343cu; c->r[8] = c->r[3] + 0u; func_089f54c4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089c3440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c33d8 */
}

/* func_089c655c  0x089c655c..0x089c65c8  108 bytes, source=sweep */
void func_089c655c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c655cu);
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
    { c->r[31] = 0x089c6598u; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c65b4u; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c655c */
}

/* func_089c8c04  0x089c8c04..0x089c8c24  32 bytes, source=sweep */
void func_089c8c04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8c04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c8c04 */
}

/* func_089cabb0  0x089cabb0..0x089cac30  128 bytes, source=fde */
void func_089cabb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cabb0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089cabecu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089cabe4u, _t); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cac00; }
    { goto L_089cac1c; }
L_089cac00:
    { c->r[31] = 0x089cac08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c8b60(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cac1c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cac1cu; c->r[5] = 0u + 0x00000001u; func_0880d260(c, ram); }
L_089cac1c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cabb0 */
}

/* func_089ce004  0x089ce004..0x089ce0d0  204 bytes, source=fde */
void func_089ce004(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ce004u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = c->r[7] + 0u;
    c->r[4] = c->r[8] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    c->r[2] = c->r[9] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[11]);
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[3]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089ce054u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d090c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ce06c; }
    { mem_w32(ram, c->r[30] + 0x00000028u, 0u); goto L_089ce0b8; }
L_089ce06c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089ce0a4u; c->r[10] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089d09a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_089ce0b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089ce004 */
}

/* func_089d240c  0x089d240c..0x089d2470  100 bytes, source=fde */
void func_089d240c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d240cu);
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
    { c->r[31] = 0x089d245cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d2848(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d240c */
}

/* func_089d33cc  0x089d33cc..0x089d3564  408 bytes, source=fde */
void func_089d33cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d33ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d33f0u; c->r[6] = 0u + 0x00000620u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    { c->r[31] = 0x089d33fcu; c->r[4] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24d74u); /* sceUtilityLoadNetModule */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d342c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0802u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d342c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d354c; }
L_089d342c:
    { c->r[31] = 0x089d3434u; c->r[4] = 0u + 0x00000002u; hle_dispatch_stub(c, ram, 0x08a24d74u); /* sceUtilityLoadNetModule */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d3464; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0802u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d3464; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d354c; }
L_089d3464:
    c->r[4] = 0x00040000u;
    c->r[5] = 0u + 0x00000028u;
    c->r[6] = 0u + 0x00001000u;
    c->r[7] = 0u + 0x00000028u;
    { c->r[31] = 0x089d347cu; c->r[8] = 0u + 0x00001000u; hle_dispatch_stub(c, ram, 0x08a24b4cu); /* sceNetInit */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d3498; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d354c; }
L_089d3498:
    { c->r[31] = 0x089d34a0u; hle_dispatch_stub(c, ram, 0x08a24bbcu); /* sceNetAdhocInit */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d34bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d354c; }
L_089d34bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffb7acu;
    { c->r[31] = 0x089d34e0u; c->r[6] = 0u + 0x00000009u; func_08a19db8(c, ram); }
    c->r[4] = 0u + 0x00002000u;
    c->r[5] = 0u + 0x00000028u;
    { c->r[31] = 0x089d34f0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24c4cu); /* sceNetAdhocctlInit */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d350c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d354c; }
L_089d350c:
    c->r[4] = 0x089d0000u;
    c->r[4] = c->r[4] + 0x000035dcu;
    { c->r[31] = 0x089d351cu; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24c2cu); /* sceNetAdhocctlAddHandler */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d3538; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d354c; }
L_089d3538:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089d354c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d33cc */
}

/* func_089d4d84  0x089d4d84..0x089d4f5c  472 bytes, source=fde */
void func_089d4d84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4d84u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4dcc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d4f44; }
L_089d4dcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4e18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000024u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089d4e18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089d4e8cu; c->r[8] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24b5cu); /* sceNetAdhocPtpSend */ }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4ebc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d4ebc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d4f44; }
L_089d4ebc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000024u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4f3c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d4f44; }
L_089d4f3c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089d4f44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d4d84 */
}

/* func_089d62f8  0x089d62f8..0x089d64dc  484 bytes, source=fde */
void func_089d62f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d62f8u);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d6334u; c->r[5] = c->r[5] + 0xffffbb00u; func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d6344u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ae50(c, ram); }
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000544u;
    { c->r[31] = 0x089d6354u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d6364u; c->r[5] = c->r[2] + 0u; func_089d6ba0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089d6378u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24714u); /* sceIoOpen */ }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d6390; }
    { mem_w32(ram, c->r[30] + 0x00000130u, 0u); goto L_089d64c4; }
L_089d6390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d63b4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089d63b0u; c->r[8] = 0u + 0x00000002u; hle_dispatch_stub(c, ram, 0x08a2471cu); /* sceIoLseek */ }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089d63b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = (u32)((s32)c->r[2] >> 31);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x089d63d8u; c->r[8] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2471cu); /* sceIoLseek */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
L_089d63e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d63fc; }
    { goto L_089d646c; }
L_089d63fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060dcu);
    c->r[2] = alx_min(c->r[3], c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000012cu);
    { c->r[31] = 0x089d6420u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000124u); hle_dispatch_stub(c, ram, 0x08a246d4u); /* sceIoRead */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d63e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060e8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d63e8; }
    { c->r[31] = 0x089d6464u; c->r[4] = 0u + 0x0000208du; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { goto L_089d63e8; }
L_089d646c:
    { c->r[31] = 0x089d6474u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u); hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d64bc; }
    c->r[2] = c->r[30] + 0x0000012cu;
    c->r[3] = c->r[30] + 0x00000128u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d6494u; c->r[5] = c->r[3] + 0u; func_089d5c0c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000012cu);
    { c->r[31] = 0x089d64a4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000128u); func_089d5ee0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d64b4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d6910(c, ram); }
    { c->r[31] = 0x089d64bcu; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_089d5c50(c, ram); }
L_089d64bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
L_089d64c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_089d62f8 */
}

/* func_089d7d90  0x089d7d90..0x089d7db0  32 bytes, source=sweep */
void func_089d7d90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7d90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7d90 */
}

/* func_089d95a4  0x089d95a4..0x089d964c  168 bytes, source=residue */
void func_089d95a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d95a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089d95b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d95d0; }
    { goto L_089d9634; }
L_089d95d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9618; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9618; }
    { goto L_089d9624; }
L_089d9618:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d9638; }
L_089d9624:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d95b8; }
L_089d9634:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089d9638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d95a4 */
}

/* func_089da4a4  0x089da4a4..0x089da4e0  60 bytes, source=fde */
void func_089da4a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da4a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    { c->r[31] = 0x089da4c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089da530(c, ram); }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da4a4 */
}

/* func_089dba68  0x089dba68..0x089dbb28  192 bytes, source=residue */
void func_089dba68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dba68u);
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
    return; /* fell out of func_089dba68 */
}

/* func_089dd300  0x089dd300..0x089dd3f0  240 bytes, source=fde */
void func_089dd300(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd300u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c8u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd38c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dd340u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db14c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd3d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dd354u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089de474(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd3d0; }
    { c->r[31] = 0x089dd364u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a24afcu); /* sceMpegRingbufferAvailableSize */ }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd384; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089dd384; }
    { goto L_089dd3d0; }
L_089dd384:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089dd3d8; }
L_089dd38c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dd398u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db14c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dd3d0; }
    { c->r[31] = 0x089dd3a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a24afcu); /* sceMpegRingbufferAvailableSize */ }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd3c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089dd3c8; }
    { goto L_089dd3d0; }
L_089dd3c8:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089dd3d8; }
L_089dd3d0:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089dd3d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089dd300 */
}

/* func_089dec58  0x089dec58..0x089df4c4  2156 bytes, source=fde */
void func_089dec58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dec58u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089dec78u; c->r[4] = 0u + 0u; func_08807980(c, ram); }
    { c->r[31] = 0x089dec80u; c->r[4] = 0u + 0x00000002u; func_08807980(c, ram); }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000704u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089dec8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089deca4; }
    { goto L_089decfc; }
L_089deca4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089dececu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089e22c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089dec8c; }
L_089decfc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000710u;
    { c->r[31] = 0x089ded48u; c->r[6] = 0u + 0x00000778u; func_089e1d00(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089ded90u; c->r[5] = 0u + 0u; func_089e2708(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089dedd8u; c->r[5] = 0u + 0x00000001u; func_089e2758(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    { c->r[31] = 0x089dee30u; c->r[9] = 0u + 0xffffffffu; func_089e2100(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc228u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc228u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x089dee8cu; c->f[13] = c->f[1]; func_089e1ef0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089deedcu; func_089e1f30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089def28u; c->r[6] = 0u + 0x00000001u; func_089e2220(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089def78u; c->r[7] = 0u + 0u; func_089e280c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089defc0u; c->r[5] = 0u + 0u; func_089e2878(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[7] = 0u + 0x000000ffu;
    { c->r[31] = 0x089df014u; c->r[8] = 0u + 0u; func_089e1f70(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df05cu; c->r[5] = 0u + 0u; func_089e1db0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df0a8u; c->r[5] = c->r[5] | 0x7f7fu; func_089e26cc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0xff800000u;
    { c->r[31] = 0x089df0f4u; c->r[5] = c->r[5] | 0x8080u; func_089e1d40(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df13cu; c->r[5] = 0u + 0x00000004u; func_089e2624(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df184u; c->r[5] = 0u + 0x00000006u; func_089e2288(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df1ccu; c->r[5] = 0u + 0u; func_089e2288(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df214u; c->r[5] = 0u + 0x00000001u; func_089e2288(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df25cu; c->r[5] = 0u + 0x00000015u; func_089e2288(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089df2a4u; c->r[5] = 0u + 0x00000010u; func_089e2288(c, ram); }
    { c->r[31] = 0x089df2acu; func_089e4e64(c, ram); }
    { c->r[31] = 0x089df2b4u; func_089e4ee0(c, ram); }
    { c->r[31] = 0x089df2bcu; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a1cu); /* sceGeDrawSync */ }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x000001e0u;
    { c->r[31] = 0x089df2ccu; c->r[6] = 0u + 0x00000110u; hle_dispatch_stub(c, ram, 0x08a249bcu); /* sceDisplaySetMode */ }
    { c->r[31] = 0x089df2d4u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24a24u); /* sceGeEdramGetAddr */ }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x000c0000u;
    c->r[2] = c->r[2] | 0xc000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w32(ram, c->r[1] + 0x000008d4u, c->r[2]);
    { c->r[31] = 0x089df2f8u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24a24u); /* sceGeEdramGetAddr */ }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x00110000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w32(ram, c->r[1] + 0x000008d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x00010000u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x000008d4u);
    c->r[5] = 0u + 0x000000ffu;
    c->r[6] = 0x00040000u;
    { c->r[31] = 0x089df330u; c->r[6] = c->r[6] | 0x4000u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089df334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000200u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089df34c; }
    { goto L_089df384; }
L_089df34c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089df374u; c->r[5] = 0u + 0u; func_089f491c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089df334; }
L_089df384:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089df388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000200u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089df3a0; }
    { goto L_089df3d4; }
L_089df3a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u | 0xd848u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089df3c4u; c->r[5] = 0u + 0u; func_089f5658(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089df388; }
L_089df3d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000001ffu;
    c->r[6] = 0x08a60000u;
    { c->r[31] = 0x089df3e8u; c->r[6] = c->r[6] + 0xffffba40u; func_089e0b84(c, ram); }
    { c->r[31] = 0x089df3f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089df588(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc228u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089df418u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc22cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc22cu);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffc22cu);
    c->r[1] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffc228u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x089df454u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc22cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc22cu);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffc22cu);
    c->r[1] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffc228u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x089df490u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089df4acu; c->r[6] = c->r[3] + 0u; func_089e6684(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089dec58 */
}

/* func_089e1cb0  0x089e1cb0..0x089e1d00  80 bytes, source=sweep */
void func_089e1cb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1cb0u);
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
    { c->r[31] = 0x089e1cecu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089e313c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e1cb0 */
}

/* func_089e27a8  0x089e27a8..0x089e280c  100 bytes, source=fde */
void func_089e27a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e27a8u);
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
    { c->r[31] = 0x089e27f8u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_089e3544(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e27a8 */
}

/* func_089e39c0  0x089e39c0..0x089e3a34  116 bytes, source=sweep */
void func_089e39c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e39c0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3a20u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e39c0 */
}

/* func_089e4af8  0x089e4af8..0x089e4b3c  68 bytes, source=sweep */
void func_089e4af8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4af8u);
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
    { c->r[31] = 0x089e4b28u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4af8 */
}

/* func_089ea16c  0x089ea16c..0x089ea1a4  56 bytes, source=sweep */
void func_089ea16c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea16cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea190u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089ea6d0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea16c */
}

/* func_089eb084  0x089eb084..0x089eb0c8  68 bytes, source=sweep */
void func_089eb084(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb084u);
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
    { c->r[31] = 0x089eb0b4u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb084 */
}

/* func_089ef0c0  0x089ef0c0..0x089ef180  192 bytes, source=residue */
void func_089ef0c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef0c0u);
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
    return; /* fell out of func_089ef0c0 */
}

/* func_089f0cd0  0x089f0cd0..0x089f0d14  68 bytes, source=sweep */
void func_089f0cd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0cd0u);
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
    { c->r[31] = 0x089f0d00u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0cd0 */
}

/* func_089f2a20  0x089f2a20..0x089f2b34  276 bytes, source=sweep */
void func_089f2a20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f2a20u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089f2a44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f2a5c; }
    { goto L_089f2b14; }
L_089f2a5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f2a78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2abc; }
    { goto L_089f2ac8; }
L_089f2abc:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089f2b1c; }
L_089f2ac8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2aec; }
    { goto L_089f2b04; }
L_089f2aec:
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089f2b04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089f2a44; }
L_089f2b14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089f2b1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f2a20 */
}

/* func_089f586c  0x089f586c..0x089f5ab8  588 bytes, source=fde */
void func_089f586c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f586cu);
    c->r[29] = c->r[29] + 0xfffffdb0u;
    mem_w32(ram, c->r[29] + 0x00000248u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000244u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000240u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f5998; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd0a8u;
    { c->r[31] = 0x089f58b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd0b0u;
    { c->r[31] = 0x089f58ccu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ad34(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000214u, 0u);
L_089f58d0:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f58e4u; c->r[5] = c->r[3] + 0u; func_089fa640(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f58fc; }
    { goto L_089f5934; }
L_089f58fc:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089f5908u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089f5924; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    { mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]); goto L_089f5a9c; }
L_089f5924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000214u, c->r[2]); goto L_089f58d0; }
L_089f5934:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[3] + 0x00000020u);
    c->r[2] = c->r[4] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[2] = c->r[2] + c->r[5];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089f5968u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000100u;
    { c->r[31] = 0x089f597cu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f5990u; c->r[6] = c->r[3] + 0u; func_08a0237c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089f5a94; }
L_089f5998:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd0b8u;
    { c->r[31] = 0x089f59b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd0b0u;
    { c->r[31] = 0x089f59ccu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ad34(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000214u, 0u);
L_089f59d0:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f59e4u; c->r[5] = c->r[3] + 0u; func_089fa640(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f59fc; }
    { goto L_089f5a34; }
L_089f59fc:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089f5a08u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089f5a24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    { mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]); goto L_089f5a9c; }
L_089f5a24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000214u, c->r[2]); goto L_089f59d0; }
L_089f5a34:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[3] + 0x00000020u);
    c->r[2] = c->r[4] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[2] = c->r[2] + c->r[5];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089f5a68u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000100u;
    { c->r[31] = 0x089f5a7cu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f5a90u; c->r[6] = c->r[3] + 0u; func_089fa56c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089f5a94:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000210u);
    mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]);
L_089f5a9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000244u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000240u);
    { c->r[29] = c->r[29] + 0x00000250u; return; }
    return; /* fell out of func_089f586c */
}

/* func_089f8344  0x089f8344..0x089f847c  312 bytes, source=fde */
void func_089f8344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8344u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089f8360:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8378; }
    { goto L_089f8468; }
L_089f8378:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000095u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089f83ac; }
    { goto L_089f8458; }
L_089f83ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089f83d4u; c->r[4] = c->r[2] + 0u; func_089f9ab0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8428; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000095u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[5] + 0x00000095u, c->r[2]);
L_089f8428:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000096u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089f8458:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089f8360; }
L_089f8468:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8344 */
}

/* func_089f9234  0x089f9234..0x089f92cc  152 bytes, source=residue */
void func_089f9234(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9234u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x089f9258u; c->r[17] = c->r[5] & 0xffffu; func_089fad14(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = c->r[2] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_089f92b0; }
    { c->r[31] = 0x089f9270u; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[3] = 0x80000000u;
    c->r[4] = c->r[16] & 0xffffu;
    c->r[5] = c->r[17] + 0u;
    c->r[8] = c->r[18] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0011u; if (_c) goto L_089f92b0; }
    c->r[2] = 0x08a50000u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd134u);
    { c->r[31] = 0x089f92acu; c->f[13] = c->f[12]; func_089fd034(c, ram); }
    c->r[3] = c->r[2] + 0u;
L_089f92b0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9234 */
}

/* func_089fa170  0x089fa170..0x089fa188  24 bytes, source=sweep */
void func_089fa170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa170u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000be4u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[5] & 31u);
    c->r[3] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000be4u, c->r[3]); return; }
    return; /* fell out of func_089fa170 */
}

/* func_089faa30  0x089faa30..0x089faa80  80 bytes, source=sweep */
void func_089faa30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089faa30u);
    c->r[5] = c->r[5] & 0xffffu;
    c->r[2] = c->r[5] << 1;
    c->r[2] = c->r[2] + c->r[5];
    c->r[2] = c->r[2] << 2;
    c->r[6] = 0x80000000u;
    c->r[5] = (c->r[5] < 0x00000040u) ? 1u : 0u;
    c->r[4] = c->r[2] + c->r[4];
    { int _c = (c->r[5] == 0u); c->r[6] = c->r[6] | 0x0010u; if (_c) goto L_089faa78; }
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[6] = 0u + 0u; if (_c) goto L_089faa70; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089faa78; }
L_089faa70:
    c->r[6] = 0x80000000u;
    c->r[6] = c->r[6] | 0x0010u;
L_089faa78:
    { c->r[2] = c->r[6] + 0u; return; }
    return; /* fell out of func_089faa30 */
}

/* func_089fb380  0x089fb380..0x089fb39c  28 bytes, source=sweep */
void func_089fb380(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb380u);
    c->r[4] = c->r[4] & 0x00ffu;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[4] = c->r[4] << 5;
    c->r[4] = c->r[4] + c->r[2];
    { c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[4] + 0x00000008u); return; }
    return; /* fell out of func_089fb380 */
}

/* func_089fc028  0x089fc028..0x089fc048  32 bytes, source=residue */
void func_089fc028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc028u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc03cu; c->r[5] = c->r[5] & 0xffffu; func_089fc1cc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc028 */
}

/* func_089fd028  0x089fd028..0x089fd034  12 bytes, source=residue */
void func_089fd028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd028u);
    c->r[2] = 0x08ba0000u;
    { mem_w32(ram, c->r[2] + 0xffff92d0u, 0u); return; }
    return; /* fell out of func_089fd028 */
}

/* func_089fe268  0x089fe268..0x089fe2b0  72 bytes, source=sweep */
void func_089fe268(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe268u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08ba0000u;
    c->r[16] = c->r[16] + 0x0000008cu;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fe284u; c->r[4] = 0u + 0xffffffffu; func_089fe394(c, ram); }
    { c->r[31] = 0x089fe28cu; c->r[4] = mem_r32(ram, c->r[16] + 0x000000dcu); func_08a19594(c, ram); }
    { c->r[31] = 0x089fe294u; c->r[4] = mem_r32(ram, c->r[16] + 0x000000d4u); func_08a19594(c, ram); }
    { c->r[31] = 0x089fe29cu; c->r[4] = mem_r32(ram, c->r[16] + 0x000000d8u); func_08a19594(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fe268 */
}

/* func_089ff274  0x089ff274..0x089ff2a0  44 bytes, source=sweep */
void func_089ff274(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff274u);
    c->r[3] = 0x08ba0000u;
    c->r[3] = c->r[3] + 0x0000008cu;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ff298; }
    c->r[2] = mem_r32(ram, c->r[3] + 0x000000c8u);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[3] + 0x000000c8u, c->r[2]);
L_089ff298:
    { return; }
    return; /* fell out of func_089ff274 */
}

/* func_08a018ac  0x08a018ac..0x08a019c4  280 bytes, source=fde */
void func_08a018ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a018acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    { c->r[31] = 0x08a018ecu; mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]); func_089fad14(c, ram); }
    c->r[16] = c->r[2] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a01918; }
    { c->r[31] = 0x08a01904u; c->r[22] = 0x08ba0000u; func_089fad6c(c, ram); }
    c->r[5] = c->r[19] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[6] = c->r[16] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a01944; }
L_08a01918:
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
L_08a01944:
    { c->r[31] = 0x08a0194cu; c->r[4] = mem_r32(ram, c->r[22] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd328u);
    c->r[3] = 0x80000000u;
    c->f[13] = c->f[0];
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = c->r[18] + 0u;
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a01918; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x08a01990u; c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd32cu); func_089fd034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[22] + 0xffff9af0u);
    c->r[6] = c->r[19] + 0u;
    c->r[7] = c->r[20] + 0u;
    c->r[8] = c->r[21] + 0u;
    { c->r[31] = 0x08a019a8u; c->r[5] = c->r[18] + 0u; func_08a02a28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[22] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a019bcu; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a01918; }
    return; /* fell out of func_08a018ac */
}

/* func_08a02e80  0x08a02e80..0x08a02f90  272 bytes, source=fde */
void func_08a02e80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02e80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[5] + 0u; if (_c) goto L_08a02f58; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x000000acu);
    if (c->r[2] == 0u) { c->r[5] = 0u + 0x00000001u; goto L_08a02ee0; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a02f38; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a02f28; }
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000003u; if (_c) goto L_08a02f0c; }
    if (c->r[3] == c->r[2]) { c->r[4] = mem_r32(ram, c->r[16] + 0x00000090u); goto L_08a02ef8; }
L_08a02ed8:
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
L_08a02edc:
    c->r[5] = 0u + 0x00000001u;
L_08a02ee0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a02ee4:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a02ef8:
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000a4u);
    { c->r[31] = 0x08a02f04u; c->r[6] = mem_r32(ram, c->r[16] + 0x000000a8u); hle_dispatch_stub(c, ram, 0x08a246fcu); /* sceIoReadAsync */ }
    { mem_w32(ram, c->r[16] + 0x00000004u, 0u); goto L_08a02edc; }
L_08a02f0c:
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000098u);
    c->r[7] = mem_r32(ram, c->r[16] + 0x0000009cu);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000090u);
    { c->r[31] = 0x08a02f20u; c->r[8] = mem_r32(ram, c->r[16] + 0x000000a0u); hle_dispatch_stub(c, ram, 0x08a246dcu); /* sceIoLseekAsync */ }
    { mem_w32(ram, c->r[16] + 0x00000004u, 0u); goto L_08a02edc; }
L_08a02f28:
    { int _c = (c->r[3] == 0u); c->r[5] = 0u + 0u; if (_c) goto L_08a02ee0; }
    { mem_w32(ram, c->r[16] + 0x00000004u, 0u); goto L_08a02edc; }
L_08a02f38:
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000088u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u);
    { c->r[31] = 0x08a02f48u; c->r[4] = c->r[16] + 0x00000008u; hle_dispatch_stub(c, ram, 0x08a246f4u); /* sceIoOpenAsync */ }
    { int _c = ((s32)c->r[2] >= 0); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a02ed8; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a02ee4; }
L_08a02f58:
    { c->r[31] = 0x08a02f60u; c->r[5] = c->r[6] + 0u; hle_dispatch_stub(c, ram, 0x08a24724u); /* sceIoPollAsync */ }
    { int _c = ((s32)c->r[2] > 0); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a02ee0; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a02f88; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[3] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { if (c->r[2] != 0u) c->r[5] = c->r[3]; goto L_08a02ee0; }
L_08a02f88:
    { mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]); goto L_08a02edc; }
    return; /* fell out of func_08a02e80 */
}

/* func_08a03910  0x08a03910..0x08a03930  32 bytes, source=sweep */
void func_08a03910(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03910u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    vfpu_exec(c, ram, 0xd8900000u); /* lv.q */
    vfpu_exec(c, ram, 0x64909011u); /* vdot.t */
    vfpu_exec(c, ram, 0xd0161131u); /* vsqrt.s */
    vfpu_exec(c, ram, 0xebb10001u); /* sv.s */
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a03910 */
}

/* func_08a04cb0  0x08a04cb0..0x08a04de8  312 bytes, source=sweep */
void func_08a04cb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04cb0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[15] = c->r[5] + 0u;
    c->r[10] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[2] = c->r[10] + 0xffffd758u;
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[19] = c->r[7] + 0u;
    c->r[12] = 0u + 0x00000002u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[17] = mem_r8(ram, c->r[15] + 0x00000001u);
    c->r[10] = mem_r32(ram, c->r[7] + 0x00000000u);
    c->r[9] = (u32)((s32)c->r[3] >> 4);
    c->r[8] = c->r[9] + c->r[2];
    c->r[9] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[6] = 0u + 0x00000007u;
    c->r[5] = c->r[3] & 0x000fu;
    c->r[14] = (u32)(s32)(s8)mem_r8(ram, c->r[8] + 0x00000005u);
    c->r[13] = (u32)(s32)(s8)mem_r8(ram, c->r[8] + 0x00000000u);
    { int _c = (c->r[17] == c->r[6]); c->r[3] = 0u + 0x00000007u; if (_c) goto L_08a04dcc; }
    c->r[6] = 0u + 0x0000000eu;
    c->r[16] = c->r[6] - c->r[5];
    c->r[8] = c->r[4] + 0u;
    c->r[24] = c->r[5] + 0x0000000au;
    c->r[25] = 0u + 0x00007fffu;
    c->r[11] = 0u + 0x0000000du;
L_08a04d24:
    alx_mult(c, c->r[10], c->r[14]);
    c->r[7] = c->r[15] + c->r[12];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[7] + 0x00000000u);
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0xffff8000u;
    c->r[5] = c->lo;
    alx_mult(c, c->r[9], c->r[13]);
    c->r[4] = c->r[3] << 28;
    c->r[3] = alx_ins(c->r[3], 0u, 0u, 3u);
    c->r[2] = (u32)((s32)c->r[4] >> (c->r[24] & 31u));
    c->r[4] = c->r[3] << (c->r[16] & 31u);
    c->r[10] = c->lo;
    c->r[3] = c->r[10] + c->r[5];
    c->r[10] = c->r[2] + c->r[3];
    c->r[5] = (u32)((s32)c->r[10] >> 6);
    alx_mult(c, c->r[9], c->r[14]);
    c->r[2] = ((s32)c->r[25] < (s32)c->r[5]) ? 1u : 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[6];
    c->r[10] = ((s32)c->r[5] < (s32)0xffff8000u) ? 1u : 0u;
    if (c->r[10] != 0u) c->r[5] = c->r[7];
    c->r[3] = c->lo;
    alx_mult(c, c->r[5], c->r[13]);
    mem_w16(ram, c->r[8] + 0x00000000u, c->r[5]);
    c->r[11] = c->r[11] + 0xffffffffu;
    c->r[8] = c->r[8] + 0x00000002u;
    c->r[12] = c->r[12] + 0x00000001u;
    c->r[9] = c->lo;
    c->r[2] = c->r[9] + c->r[3];
    c->r[9] = c->r[4] + c->r[2];
    c->r[4] = (u32)((s32)c->r[9] >> 6);
    c->r[3] = ((s32)c->r[25] < (s32)c->r[4]) ? 1u : 0u;
    if (c->r[3] != 0u) c->r[4] = c->r[6];
    c->r[9] = ((s32)c->r[4] < (s32)0xffff8000u) ? 1u : 0u;
    if (c->r[9] != 0u) c->r[4] = c->r[7];
    mem_w16(ram, c->r[8] + 0x00000000u, c->r[4]);
    c->r[10] = c->r[5] + 0u;
    c->r[9] = c->r[4] + 0u;
    { int _c = ((s32)c->r[11] >= 0); c->r[8] = c->r[8] + 0x00000002u; if (_c) goto L_08a04d24; }
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[17] + 0u;
    mem_w32(ram, c->r[19] + 0x00000000u, c->r[5]);
L_08a04dcc:
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a04cb0 */
}

/* func_08a062a0  0x08a062a0..0x08a0635c  188 bytes, source=sweep */
void func_08a062a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a062a0u);
    c->r[10] = c->r[4] + 0u;
    { int _c = ((s32)c->r[5] < 0); c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u); if (_c) goto L_08a06350; }
L_08a062ac:
    c->r[3] = (c->r[5] < 0x00000080u) ? 1u : 0u;
    if (c->r[3] == 0u) { c->r[6] = (c->r[5] < 0x00000800u) ? 1u : 0u; goto L_08a062c8; }
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[5]);
    c->r[4] = c->r[4] + 0x00000001u;
L_08a062c0:
    { mem_w32(ram, c->r[10] + 0x00000000u, c->r[4]); return; }
L_08a062c8:
    c->r[3] = 0u + 0x00000800u;
    { int _c = (c->r[6] != 0u); c->r[7] = 0u + 0x00000001u; if (_c) goto L_08a062e4; }
L_08a062d4:
    c->r[3] = c->r[3] << 5;
    c->r[8] = (c->r[5] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a062d4; }
L_08a062e4:
    c->r[15] = 0u + 0x00000007u;
    c->r[14] = c->r[15] - c->r[7];
    c->r[13] = 0u + 0x00000001u;
    c->r[9] = c->r[13] << (c->r[14] & 31u);
    c->r[12] = c->r[4] + c->r[7];
    c->r[4] = c->r[12] + 0x00000001u;
    c->r[2] = c->r[9] + 0xffffffffu;
    c->r[7] = c->r[7] + 0xffffffffu;
    c->r[11] = 0u + 0xffffffffu;
    c->r[9] = c->r[2] & 0x00ffu;
    { int _c = (c->r[7] == c->r[11]); c->r[6] = c->r[4] + 0u; if (_c) goto L_08a06338; }
    c->r[8] = 0u + 0xffffff80u;
    c->r[3] = 0u + 0xffffffffu;
L_08a0631c:
    c->r[25] = c->r[5] & 0x003fu;
    c->r[24] = c->r[25] | c->r[8];
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[7] = c->r[7] + 0xffffffffu;
    mem_w8(ram, c->r[6] + 0x00000000u, c->r[24]);
    { int _c = (c->r[7] != c->r[3]); c->r[5] = c->r[5] >> 6; if (_c) goto L_08a0631c; }
L_08a06338:
    c->r[11] = c->r[9] >> 1;
    c->r[8] = c->r[5] & c->r[11];
    c->r[7] = ~(0u | c->r[9]);
    c->r[5] = c->r[7] | c->r[8];
    { mem_w8(ram, c->r[6] + 0xffffffffu, c->r[5]); goto L_08a062c0; }
L_08a06350:
    c->r[3] = 0x08ba0000u;
    { c->r[5] = mem_r32(ram, c->r[3] + 0xffffbe04u); goto L_08a062ac; }
    return; /* fell out of func_08a062a0 */
}

/* func_08a0a098  0x08a0a098..0x08a0a1a4  268 bytes, source=sweep */
void func_08a0a098(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0a098u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08a0a0c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a184; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a0ec; }
    { goto L_08a0a184; }
L_08a0a0ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a128; }
    c->r[2] = 0u + 0x000000ffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0a134; }
    { goto L_08a0a144; }
L_08a0a128:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a144; }
L_08a0a134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08a0a174; }
L_08a0a144:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a164; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08a0a174; }
L_08a0a164:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08a0a174:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08a0a0c0; }
L_08a0a184:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a0a098 */
}

/* func_08a0ddf4  0x08a0ddf4..0x08a0de0c  24 bytes, source=fde */
void func_08a0ddf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0ddf4u);
    c->r[2] = 0x08a60000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00004a50u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0de0cu; func_08a0dddc(c, ram); }
    return; /* fell out of func_08a0ddf4 */
}

/* func_08a0e5cc  0x08a0e5cc..0x08a0e5f4  40 bytes, source=indirect */
void func_08a0e5cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e5ccu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000648u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e5e8u; func_08a0e308(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e5cc */
}

/* func_08a0f684  0x08a0f684..0x08a0f760  220 bytes, source=sweep */
void func_08a0f684(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f684u);
    c->r[5] = f2u(c->f[12]);
    c->r[6] = f2u(c->f[12]);
    c->r[5] = alx_ins(c->r[5], 0u, 31u, 31u);
    c->r[2] = c->r[5] >> 23;
    c->r[4] = c->r[2] + 0xffffff81u;
    c->r[3] = ((s32)c->r[4] < (s32)0x00000017u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[2] = 0x7f7f0000u; if (_c) goto L_08a0f748; }
    { int _c = ((s32)c->r[4] < 0); c->r[2] = 0x007f0000u; if (_c) goto L_08a0f708; }
    c->r[2] = c->r[2] | 0xffffu;
    c->r[5] = (u32)((s32)c->r[2] >> (c->r[4] & 31u));
    c->r[3] = c->r[6] & c->r[5];
    { int _c = (c->r[3] == 0u); c->f[0] = c->f[12]; if (_c) goto L_08a0f6f4; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000076cu);
    c->f[1] = u2f(0u);
    c->f[0] = c->f[12] + c->f[0];
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_08a0f6f0; }
    { int _c = ((s32)c->r[6] < 0); c->r[2] = 0x00800000u; if (_c) goto L_08a0f6fc; }
L_08a0f6e8:
    c->r[2] = ~(0u | c->r[5]);
    c->r[6] = c->r[6] & c->r[2];
L_08a0f6f0:
    c->f[0] = u2f(c->r[6]);
L_08a0f6f4:
    { return; }
L_08a0f6fc:
    c->r[2] = (u32)((s32)c->r[2] >> (c->r[4] & 31u));
    { c->r[6] = c->r[6] + c->r[2]; goto L_08a0f6e8; }
L_08a0f708:
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000076cu);
    c->f[1] = u2f(0u);
    c->f[0] = c->f[12] + c->f[0];
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_08a0f6f0; }
    { int _c = ((s32)c->r[6] < 0); if (_c) goto L_08a0f738; }
    { c->r[6] = 0u + 0u; goto L_08a0f6f0; }
L_08a0f738:
    if (c->r[5] != 0u) { c->r[6] = 0xbf800000u; goto L_08a0f6f0; }
    { goto L_08a0f6f0; }
L_08a0f748:
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = (c->r[2] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->f[0] = c->f[12]; if (_c) goto L_08a0f6f4; }
    { c->f[0] = c->f[12] + c->f[12]; return; }
    return; /* fell out of func_08a0f684 */
}

/* func_08a136f8  0x08a136f8..0x08a13744  76 bytes, source=sweep */
void func_08a136f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a136f8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[4] = c->r[29] + 0x00000010u;
    c->r[5] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    { c->r[31] = 0x08a13710u; mem_wf32(ram, c->r[29] + 0x00000010u, c->f[12]); func_08a18308(c, ram); }
    c->r[9] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[2] = c->r[8] >> 2;
    c->r[9] = c->r[9] << 30;
    c->r[9] = c->r[9] | c->r[2];
    { c->r[31] = 0x08a13738u; c->r[8] = c->r[8] << 30; func_08a14554(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a136f8 */
}

/* func_08a158f0  0x08a158f0..0x08a1593c  76 bytes, source=sweep */
void func_08a158f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a158f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { c->r[31] = 0x08a1590cu; c->r[17] = c->r[4] + 0u; func_08a15734(c, ram); }
    c->r[2] = mem_r8(ram, c->r[16] + 0x000006bcu);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[17];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = alx_ins(c->r[3], 0u, 0u, 0u);
    mem_w32(ram, c->r[17] + 0x00000350u, c->r[3]);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a158f0 */
}

/* func_08a17268  0x08a17268..0x08a17318  176 bytes, source=residue */
void func_08a17268(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17268u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    c->r[18] = c->r[18] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[16] = c->r[16] + 0x00000008u;
    { c->r[31] = 0x08a172a4u; c->r[4] = alx_ext(c->r[4], 3u, 7u); func_08a170ec(c, ram); }
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[6] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[4] = alx_ext(c->r[4], 3u, 7u);
    c->r[7] = c->r[29] + 0u;
    { c->r[31] = 0x08a172c0u; c->r[19] = c->r[2] + 0u; func_08a16cd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[18] + 0u;
    c->r[4] = alx_ext(c->r[4], 3u, 7u);
    { c->r[31] = 0x08a172d8u; c->r[7] = c->r[29] + 0x00000004u; func_08a16cd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = (c->r[3] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a172f8; }
    c->r[2] = (c->r[4] < c->r[3]) ? 1u : 0u;
    c->r[5] = 0u + 0xffffffffu;
    if (c->r[2] == 0u) c->r[5] = 0u;
L_08a172f8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a17268 */
}

/* func_08a18fbc  0x08a18fbc..0x08a18fc4  8 bytes, source=residue */
void func_08a18fbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18fbcu);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18fbc */
}

/* func_08a1a110  0x08a1a110..0x08a1a21c  268 bytes, source=sweep */
void func_08a1a110(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a110u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    { c->r[31] = 0x08a1a138u; mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]); hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = (u32)((s32)c->r[17] >> 31);
    c->r[2] = c->r[2] >> 27;
    c->r[2] = c->r[17] + c->r[2];
    c->r[3] = 0x08ba0000u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 4u);
    c->r[16] = c->r[3] + 0xffffff78u;
    mem_w32(ram, c->r[19] + 0x0000037cu, c->r[17]);
    { int _c = (c->r[16] == 0u); c->r[20] = c->r[17] - c->r[2]; if (_c) goto L_08a1a188; }
    c->r[5] = c->r[20] << 2;
    c->r[2] = c->r[5] + c->r[16];
L_08a1a168:
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000084u);
    if (c->r[3] == 0u) { mem_w32(ram, c->r[2] + 0x00000004u, c->r[19]); goto L_08a1a214; }
    { int _c = (c->r[3] == c->r[17]); c->r[18] = c->r[16] + 0u; if (_c) goto L_08a1a204; }
    c->r[16] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[16] != 0u); c->r[2] = c->r[5] + c->r[16]; if (_c) goto L_08a1a168; }
L_08a1a188:
    { c->r[31] = 0x08a1a190u; hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    { int _c = (c->r[16] == 0u); c->r[2] = 0x08a60000u; if (_c) goto L_08a1a1bc; }
    c->r[2] = 0u + 0u;
L_08a1a19c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a1a1bc:
    c->r[4] = mem_r32(ram, c->r[2] + 0x00004dd8u);
    { c->r[31] = 0x08a1a1c8u; c->r[5] = 0u + 0x00000104u; func_08a197ec(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000104u;
    { c->r[31] = 0x08a1a1dcu; c->r[16] = c->r[2] + 0u; func_08a19ec4(c, ram); }
    c->r[3] = c->r[20] << 2;
    c->r[3] = c->r[3] + c->r[16];
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[19]);
    { c->r[31] = 0x08a1a1f0u; mem_w32(ram, c->r[3] + 0x00000084u, c->r[17]); hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1a1fcu; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    { c->r[2] = 0u + 0u; goto L_08a1a19c; }
L_08a1a204:
    { c->r[31] = 0x08a1a20cu; hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    { c->r[2] = 0u + 0xffffffffu; goto L_08a1a19c; }
L_08a1a214:
    { mem_w32(ram, c->r[2] + 0x00000084u, c->r[17]); goto L_08a1a188; }
    return; /* fell out of func_08a1a110 */
}

/* func_08a1b200  0x08a1b200..0x08a1c244  4164 bytes, source=sweep */
void func_08a1b200(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1b200u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    c->r[7] = 0u + 0u;
    c->r[9] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x0000006cu, c->r[23]);
    c->r[23] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[20]);
    c->r[20] = 0u + 0u;
    c->r[21] = 0u + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[6] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = alx_seb(c->r[6]);
    c->r[2] = (c->r[3] < 0x0000002eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] << 2; if (_c) goto L_08a1b300; }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x00001678u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a1b27cu: goto L_08a1b27c; case 0x08a1b284u: goto L_08a1b284; case 0x08a1b29cu: goto L_08a1b29c; case 0x08a1b2fcu: goto L_08a1b2fc; default: recomp_trap_unknown_indirect(c, ram, 0x08a1b274u, _t); return; } }
L_08a1b27c:
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
L_08a1b284:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]);
    c->r[6] = mem_r8(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[6] != 0u); c->r[3] = alx_seb(c->r[6]); if (_c) goto L_08a1b300; }
L_08a1b29c:
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]);
L_08a1b2a0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a1b2a4:
    { int _c = (c->r[3] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u); if (_c) goto L_08a1b2b0; }
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[4]);
L_08a1b2b0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[2] = c->r[20] + 0u;
    { int _c = (c->r[4] == 0u); c->r[3] = c->r[21] + 0u; if (_c) goto L_08a1b2cc; }
    c->r[4] = c->r[20] + 0u;
    { c->r[31] = 0x08a1b2ccu; c->r[5] = c->r[21] + 0u; func_08a14510(c, ram); }
L_08a1b2cc:
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
    { c->r[29] = c->r[29] + 0x00000080u; return; }
L_08a1b2fc:
    c->r[3] = alx_seb(c->r[6]);
L_08a1b300:
    c->r[2] = 0u + 0x00000030u;
    if (c->r[3] == c->r[2]) { c->r[9] = 0u + 0x00000001u; goto L_08a1c214; }
    c->r[4] = alx_seb(c->r[6]);
L_08a1b310:
    c->r[2] = ((s32)c->r[4] < (s32)0x00000030u) ? 1u : 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, 0u);
    c->r[8] = 0u + 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = 0u + 0u; if (_c) goto L_08a1b388; }
    c->r[2] = ((s32)c->r[4] < (s32)0x0000003au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x0000002eu; if (_c) goto L_08a1b38c; }
    c->r[2] = ((s32)c->r[17] < (s32)0x00000009u) ? 1u : 0u;
L_08a1b33c:
    { int _c = (c->r[2] == 0u); c->r[2] = ((s32)c->r[17] < (s32)0x00000010u) ? 1u : 0u; if (_c) goto L_08a1c1f4; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[2] = c->r[3] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
L_08a1b360:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
L_08a1b364:
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_08a1b388; }
    c->r[2] = ((s32)c->r[4] < (s32)0x0000003au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = ((s32)c->r[17] < (s32)0x00000009u) ? 1u : 0u; if (_c) goto L_08a1b33c; }
L_08a1b388:
    c->r[2] = 0u + 0x0000002eu;
L_08a1b38c:
    { int _c = (c->r[4] == c->r[2]); c->r[22] = c->r[17] + 0u; if (_c) goto L_08a1c0a8; }
    c->r[3] = c->r[4] ^ 0x0045u;
L_08a1b398:
    c->r[2] = c->r[4] ^ 0x0065u;
L_08a1b39c:
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] | c->r[3];
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, 0u); if (_c) goto L_08a1b4ac; }
    c->r[2] = c->r[17] | c->r[7];
    c->r[2] = c->r[2] | c->r[9];
    if (c->r[2] == 0u) { mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]); goto L_08a1b2a0; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[2] = c->r[5] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000002bu;
    { int _c = (c->r[4] == c->r[2]); c->r[10] = 0u + 0u; if (_c) goto L_08a1c094; }
    c->r[2] = 0u + 0x0000002du;
    if (c->r[4] == c->r[2]) { c->r[10] = 0u + 0x00000001u; goto L_08a1c094; }
L_08a1b3e8:
    c->r[2] = c->r[4] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]); goto L_08a1b4ac; }
    c->r[2] = 0u + 0x00000030u;
    if (c->r[4] == c->r[2]) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u); goto L_08a1c078; }
    c->r[2] = c->r[4] + 0xffffffcfu;
L_08a1b408:
    c->r[2] = (c->r[2] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, 0u); if (_c) goto L_08a1b4ac; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[4] = c->r[4] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[6] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = ((s32)c->r[4] < (s32)0x0000003au) ? 1u : 0u; if (_c) goto L_08a1b480; }
    if (c->r[2] == 0u) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u); goto L_08a1b484; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a1b444:
    c->r[2] = c->r[3] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = c->r[2] + 0xffffffd0u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[3] = ((s32)c->r[4] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]); if (_c) goto L_08a1b480; }
    c->r[2] = ((s32)c->r[4] < (s32)0x0000003au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a1b444; }
L_08a1b480:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
L_08a1b484:
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    c->r[3] = c->r[4] - c->r[6];
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[3] = ((s32)c->r[3] < (s32)0x00000009u) ? 1u : 0u;
    if (c->r[3] == 0u) c->r[4] = c->r[2];
    { int _c = (c->r[10] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[4]); if (_c) goto L_08a1b4ac; }
    c->r[4] = 0u - c->r[4];
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[4]);
L_08a1b4ac:
    { int _c = (c->r[17] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a1c064; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    if (c->r[22] == 0u) c->r[22] = c->r[17];
    c->r[2] = c->r[2] - c->r[8];
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000010u;
    { c->r[31] = 0x08a1b4d0u; c->r[16] = alx_min(c->r[17], c->r[2]); func_08a14434(c, ram); }
    c->r[7] = c->r[3] + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    { int _c = ((s32)c->r[3] < 0); c->r[6] = c->r[2] + 0u; if (_c) goto L_08a1c03c; }
L_08a1b4e0:
    c->r[2] = ((s32)c->r[16] < (s32)0x0000000au) ? 1u : 0u;
    c->r[20] = c->r[6] + 0u;
    { int _c = (c->r[2] != 0u); c->r[21] = c->r[7] + 0u; if (_c) goto L_08a1b540; }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x00001d58u;
    c->r[2] = c->r[16] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0xffffffb8u);
    { c->r[31] = 0x08a1b50cu; c->r[5] = mem_r32(ram, c->r[2] + 0xffffffbcu); func_08a13b68(c, ram); }
    c->r[4] = c->r[18] + 0u;
    c->r[20] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b51cu; c->r[21] = c->r[3] + 0u; func_08a14434(c, ram); }
    { int _c = ((s32)c->r[18] < 0); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a1c01c; }
    c->r[4] = c->r[20] + 0u;
L_08a1b528:
    c->r[5] = c->r[21] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b538u; c->r[7] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
L_08a1b540:
    c->r[2] = ((s32)c->r[17] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000030u, 0u); if (_c) goto L_08a1b580; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    { int _c = (c->r[4] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a1b2a4; }
    { int _c = ((s32)c->r[4] <= 0); c->r[2] = ((s32)c->r[4] < (s32)0x00000017u) ? 1u : 0u; if (_c) goto L_08a1bfe0; }
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x0000000fu; if (_c) goto L_08a1bfbc; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[3] = c->r[3] - c->r[17];
    c->r[2] = c->r[3] + 0x00000016u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[16] = 0x08a50000u; goto L_08a1bf60; }
L_08a1b580:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a1b584:
    c->r[2] = c->r[17] - c->r[16];
    c->r[18] = c->r[4] + c->r[2];
    { int _c = ((s32)c->r[18] <= 0); c->r[3] = c->r[18] & 0x000fu; if (_c) goto L_08a1be08; }
    if (c->r[3] == 0u) { c->r[18] = alx_ins(c->r[18], 0u, 0u, 3u); goto L_08a1b5cc; }
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a1b5c0u; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
    c->r[18] = alx_ins(c->r[18], 0u, 0u, 3u);
L_08a1b5cc:
    { int _c = (c->r[18] == 0u); c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a1b708; }
    c->r[2] = ((s32)c->r[18] < (s32)0x00000135u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[18] = (u32)((s32)c->r[18] >> 4); goto L_08a1b648; }
L_08a1b5e0:
    c->r[2] = 0u + 0x00000022u;
L_08a1b5e4:
    mem_w32(ram, c->r[23] + 0x00000000u, c->r[2]);
    c->r[20] = 0x08a50000u;
    c->r[20] = mem_r32(ram, c->r[20] + 0x00000fa0u);
    c->r[21] = 0x08a50000u;
    c->r[21] = mem_r32(ram, c->r[21] + 0x00000fa4u);
L_08a1b5f8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u);
    if (c->r[2] == 0u) { c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a1b2a4; }
L_08a1b604:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
L_08a1b608:
    { c->r[31] = 0x08a1b610u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000002cu);
    { c->r[31] = 0x08a1b61cu; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u);
    { c->r[31] = 0x08a1b628u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[31] = 0x08a1b634u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000038u);
    { c->r[31] = 0x08a1b640u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a1b2a4; }
L_08a1b648:
    { int _c = (c->r[18] == 0u); c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a1b708; }
    c->r[2] = ((s32)c->r[18] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = 0u + 0u; if (_c) goto L_08a1b6a0; }
    c->r[3] = 0x08a50000u;
    c->r[19] = c->r[3] + 0x00001e20u;
L_08a1b664:
    c->r[2] = c->r[18] & 0x0001u;
    if (c->r[2] == 0u) { c->r[18] = (u32)((s32)c->r[18] >> 1); goto L_08a1b690; }
    c->r[4] = mem_r32(ram, c->r[19] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[19] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a1b684u; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
    c->r[18] = (u32)((s32)c->r[18] >> 1);
L_08a1b690:
    c->r[2] = ((s32)c->r[18] < (s32)0x00000002u) ? 1u : 0u;
    c->r[16] = c->r[16] + 0x00000001u;
    { int _c = (c->r[2] == 0u); c->r[19] = c->r[19] + 0x00000008u; if (_c) goto L_08a1b664; }
L_08a1b6a0:
    c->r[4] = 0x08a50000u;
    c->r[3] = c->r[4] + 0x00001e20u;
    c->r[2] = c->r[16] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = 0xfcb00000u;
    c->r[21] = c->r[3] + c->r[21];
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a1b6ccu; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[21] = c->r[3] + 0u;
    c->r[3] = 0x7ff00000u;
    c->r[20] = c->r[2] + 0u;
    c->r[18] = c->r[21] & c->r[3];
    c->r[2] = 0x7ca00000u;
    c->r[2] = (c->r[2] < c->r[18]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0x7c900000u; if (_c) goto L_08a1b5e0; }
    c->r[2] = (c->r[2] < c->r[18]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x03500000u; if (_c) goto L_08a1be00; }
    c->r[21] = 0x7fef0000u;
    c->r[21] = c->r[21] | 0xffffu;
    c->r[20] = 0u + 0xffffffffu;
L_08a1b704:
    c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u);
L_08a1b708:
    c->r[4] = c->r[23] + 0u;
    c->r[5] = c->r[30] + 0u;
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a1b71cu; c->r[7] = c->r[17] + 0u; func_08a227b4(c, ram); }
    c->r[3] = 0x000f0000u;
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[3] = c->r[3] | 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u);
L_08a1b738:
    c->r[4] = c->r[23] + 0u;
    { c->r[31] = 0x08a1b744u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a225c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000010u);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[2]);
    c->r[6] = c->r[6] << 2;
    { c->r[31] = 0x08a1b764u; c->r[6] = c->r[6] + 0x00000008u; func_08a19db8(c, ram); }
    c->r[4] = c->r[23] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    c->r[8] = c->r[29] + 0u;
    { c->r[31] = 0x08a1b77cu; c->r[9] = c->r[29] + 0x00000004u; func_08a23228(c, ram); }
    c->r[4] = c->r[23] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08a1b78cu; mem_w32(ram, c->r[29] + 0x00000028u, c->r[2]); func_08a22a14(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    { int _c = ((s32)c->r[4] < 0); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1bde8; }
    c->r[17] = c->r[4] + 0u;
    c->r[6] = 0u + 0u;
    c->r[18] = 0u + 0u;
    c->r[22] = c->r[4] + 0u;
L_08a1b7a8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    if ((s32)c->r[2] < 0) { c->r[17] = c->r[17] - c->r[2]; goto L_08a1b7b8; }
    c->r[18] = c->r[18] + c->r[2];
L_08a1b7b8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000433u;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[3] = ((s32)c->r[3] < (s32)0xfffffc02u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[19] = c->r[18] + 0u; if (_c) goto L_08a1b7dc; }
    c->r[2] = 0u + 0x00000036u;
    c->r[16] = c->r[2] - c->r[4];
L_08a1b7dc:
    c->r[17] = c->r[17] + c->r[16];
    c->r[18] = c->r[18] + c->r[16];
    c->r[3] = alx_min(c->r[17], c->r[18]);
    c->r[3] = alx_min(c->r[3], c->r[19]);
    { int _c = ((s32)c->r[3] <= 0); if (_c) goto L_08a1b800; }
    c->r[19] = c->r[19] - c->r[3];
    c->r[18] = c->r[18] - c->r[3];
    c->r[17] = c->r[17] - c->r[3];
L_08a1b800:
    { int _c = ((s32)c->r[6] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u); if (_c) goto L_08a1b838; }
    { c->r[31] = 0x08a1b810u; c->r[4] = c->r[23] + 0u; func_08a22c60(c, ram); }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[4] = c->r[23] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b824u; mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); func_08a22a48(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
    { c->r[31] = 0x08a1b834u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[16]);
L_08a1b838:
    { int _c = ((s32)c->r[18] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a1b850; }
    c->r[6] = c->r[18] + 0u;
    { c->r[31] = 0x08a1b84cu; c->r[4] = c->r[23] + 0u; func_08a22d78(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[2]);
L_08a1b850:
    { int _c = ((s32)c->r[22] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x0000002cu); if (_c) goto L_08a1b868; }
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a1b864u; c->r[4] = c->r[23] + 0u; func_08a22c60(c, ram); }
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[2]);
L_08a1b868:
    { int _c = ((s32)c->r[17] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x0000002cu); if (_c) goto L_08a1b880; }
    c->r[6] = c->r[17] + 0u;
    { c->r[31] = 0x08a1b87cu; c->r[4] = c->r[23] + 0u; func_08a22d78(c, ram); }
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[2]);
L_08a1b880:
    { int _c = ((s32)c->r[19] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u); if (_c) goto L_08a1b898; }
    c->r[6] = c->r[19] + 0u;
    { c->r[31] = 0x08a1b894u; c->r[4] = c->r[23] + 0u; func_08a22d78(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]);
L_08a1b898:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x0000002cu);
    { c->r[31] = 0x08a1b8a8u; c->r[4] = c->r[23] + 0u; func_08a22f18(c, ram); }
    c->r[22] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b8c0u; mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08a1bda0; }
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000038u); if (_c) goto L_08a1bcb4; }
    { c->r[31] = 0x08a1b8d8u; c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u); func_08a2338c(c, ram); }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001640u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001644u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b8fcu; c->r[17] = c->r[3] + 0u; func_08a143ac(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1bbc8; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001658u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000165cu);
    { c->r[31] = 0x08a1b91cu; c->r[5] = c->r[17] + 0u; func_08a13b68(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    c->r[18] = c->r[2] + 0u;
    { int _c = (c->r[22] != 0u); c->r[19] = c->r[3] + 0u; if (_c) goto L_08a1b944; }
L_08a1b930:
    c->r[4] = c->r[16] + 0u;
L_08a1b934:
    { c->r[31] = 0x08a1b93cu; c->r[5] = c->r[17] + 0u; func_08a14510(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[19] = c->r[3] + 0u;
L_08a1b944:
    c->r[30] = 0x7ff00000u;
L_08a1b948:
    c->r[4] = c->r[21] & c->r[30];
    c->r[2] = 0x7fe00000u;
    { int _c = (c->r[4] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000018u, c->r[4]); if (_c) goto L_08a1bb1c; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[2] = 0x03400000u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a1b9e0; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001648u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000164cu);
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a1b988u; c->r[5] = c->r[17] + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1b9dc; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001658u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000165cu);
    { c->r[31] = 0x08a1b9a8u; c->r[5] = c->r[17] + 0u; func_08a13a8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b9b4u; c->r[5] = c->r[3] + 0u; func_08a24564(c, ram); }
    { c->r[31] = 0x08a1b9bcu; c->r[4] = c->r[2] + 0u; func_08a14434(c, ram); }
    c->r[18] = c->r[2] + 0u;
    { int _c = (c->r[22] != 0u); c->r[19] = c->r[3] + 0u; if (_c) goto L_08a1b9dc; }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a1b9d4u; c->r[5] = c->r[3] + 0u; func_08a14510(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[19] = c->r[3] + 0u;
L_08a1b9dc:
    c->r[4] = c->r[20] + 0u;
L_08a1b9e0:
    { c->r[31] = 0x08a1b9e8u; c->r[5] = c->r[21] + 0u; func_08a23094(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a1b9fcu; c->r[7] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    { c->r[31] = 0x08a1ba10u; c->r[5] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
L_08a1ba18:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[4] = 0x7ff00000u;
    c->r[18] = c->r[21] & c->r[4];
    if (c->r[2] == c->r[18]) { c->r[5] = c->r[17] + 0u; goto L_08a1ba64; }
L_08a1ba2c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
L_08a1ba30:
    { c->r[31] = 0x08a1ba38u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000002cu);
    { c->r[31] = 0x08a1ba44u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u);
    { c->r[31] = 0x08a1ba50u; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000038u);
    { c->r[31] = 0x08a1ba5cu; c->r[4] = c->r[23] + 0u; func_08a22678(c, ram); }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u); goto L_08a1b738; }
L_08a1ba64:
    { c->r[31] = 0x08a1ba6cu; c->r[4] = c->r[16] + 0u; func_08a24564(c, ram); }
    { c->r[31] = 0x08a1ba74u; c->r[4] = c->r[2] + 0u; func_08a14434(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x08a1ba88u; c->r[7] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { int _c = (c->r[22] != 0u); c->r[17] = c->r[3] + 0u; if (_c) goto L_08a1baa8; }
    { int _c = (c->r[20] != 0u); c->r[2] = c->r[21] + 0u; if (_c) goto L_08a1baa8; }
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1baf4; }
L_08a1baa8:
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001660u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001664u);
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a1bac4u; c->r[5] = c->r[17] + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1b604; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001668u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000166cu);
    { c->r[31] = 0x08a1bae4u; c->r[5] = c->r[17] + 0u; func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a1ba30; }
    { goto L_08a1b608; }
L_08a1baf4:
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001670u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001674u);
    { c->r[31] = 0x08a1bb0cu; c->r[5] = c->r[3] + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a1ba30; }
    { goto L_08a1b608; }
L_08a1bb1c:
    c->r[2] = c->r[20] + 0u;
    c->r[3] = c->r[21] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[3]);
    c->r[2] = 0xfcb00000u;
    c->r[21] = c->r[2] + c->r[21];
    c->r[4] = c->r[20] + 0u;
    { c->r[31] = 0x08a1bb40u; c->r[5] = c->r[21] + 0u; func_08a23094(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a1bb54u; c->r[7] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    { c->r[31] = 0x08a1bb68u; c->r[5] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[2] = 0x7c9f0000u;
    c->r[21] = c->r[3] + 0u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[30];
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x03500000u; if (_c) goto L_08a1bbc0; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[2] = 0x7fef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[4] = mem_r32(ram, c->r[29] + 0x00000020u); if (_c) goto L_08a1bbac; }
    c->r[21] = 0x7fef0000u;
L_08a1bba0:
    c->r[21] = c->r[21] | 0xffffu;
    { c->r[20] = 0u + 0xffffffffu; goto L_08a1ba2c; }
L_08a1bbac:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[4] != c->r[2]); c->r[21] = 0x7fef0000u; if (_c) goto L_08a1bba0; }
    { c->r[2] = 0u + 0x00000022u; goto L_08a1b5e4; }
L_08a1bbc0:
    { c->r[21] = c->r[2] + c->r[21]; goto L_08a1ba18; }
L_08a1bbc8:
    { int _c = (c->r[22] == 0u); if (_c) goto L_08a1bbec; }
    c->r[16] = 0x08a50000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0x00001648u);
    c->r[17] = 0x08a50000u;
    c->r[17] = mem_r32(ram, c->r[17] + 0x0000164cu);
    c->r[18] = c->r[16] + 0u;
    { c->r[19] = c->r[17] + 0u; goto L_08a1b944; }
L_08a1bbec:
    { int _c = (c->r[20] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a1bc08; }
    c->r[2] = c->r[21] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1bc54; }
    c->r[2] = 0u + 0x00000001u;
L_08a1bc08:
    { int _c = (c->r[20] == c->r[2]); if (_c) goto L_08a1bc38; }
L_08a1bc10:
    c->r[16] = 0x08a50000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0x00001648u);
    c->r[17] = 0x08a50000u;
    c->r[17] = mem_r32(ram, c->r[17] + 0x0000164cu);
    c->r[18] = 0x08a50000u;
    c->r[18] = mem_r32(ram, c->r[18] + 0x00001650u);
    c->r[19] = 0x08a50000u;
    c->r[19] = mem_r32(ram, c->r[19] + 0x00001654u);
    { c->r[30] = 0x7ff00000u; goto L_08a1b948; }
L_08a1bc38:
    { int _c = (c->r[21] != 0u); if (_c) goto L_08a1bc10; }
L_08a1bc40:
    c->r[2] = 0u + 0x00000022u;
L_08a1bc44:
    c->r[20] = 0u + 0u;
    c->r[21] = 0u + 0u;
    { mem_w32(ram, c->r[23] + 0x00000000u, c->r[2]); goto L_08a1b5f8; }
L_08a1bc54:
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001648u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000164cu);
    { c->r[31] = 0x08a1bc6cu; c->r[5] = c->r[17] + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08a1bc9c; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001658u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000165cu);
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a1bc90u; c->r[5] = c->r[17] + 0u; func_08a13b68(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[17] = c->r[3] + 0u; goto L_08a1b930; }
L_08a1bc9c:
    c->r[16] = 0x08a50000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0x00001658u);
    c->r[17] = 0x08a50000u;
    c->r[17] = mem_r32(ram, c->r[17] + 0x0000165cu);
    { c->r[4] = c->r[16] + 0u; goto L_08a1b934; }
L_08a1bcb4:
    { int _c = (c->r[22] == 0u); c->r[2] = c->r[21] + 0u; if (_c) goto L_08a1bd70; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    { int _c = (c->r[2] == c->r[3]); c->r[4] = 0u + 0xffffffffu; if (_c) goto L_08a1bd50; }
    c->r[2] = c->r[20] & 0x0001u;
L_08a1bcd0:
    { int _c = (c->r[2] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a1b608; }
    { int _c = (c->r[22] != 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a1bd28; }
    { c->r[31] = 0x08a1bce8u; c->r[5] = c->r[21] + 0u; func_08a23094(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a1bcfcu; c->r[7] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[20] = c->r[2] + 0u;
    { c->r[31] = 0x08a1bd18u; c->r[21] = c->r[3] + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a1b608; }
    { c->r[2] = 0u + 0x00000022u; goto L_08a1bc44; }
L_08a1bd28:
    { c->r[31] = 0x08a1bd30u; c->r[5] = c->r[21] + 0u; func_08a23094(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    { c->r[31] = 0x08a1bd44u; c->r[5] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[20] = c->r[2] + 0u;
    { c->r[21] = c->r[3] + 0u; goto L_08a1b604; }
L_08a1bd50:
    { int _c = (c->r[20] != c->r[4]); c->r[2] = c->r[20] & 0x0001u; if (_c) goto L_08a1bcd0; }
    c->r[2] = 0x7ff00000u;
    c->r[3] = c->r[21] & c->r[2];
    c->r[2] = 0x00100000u;
    c->r[21] = c->r[3] + c->r[2];
    { c->r[20] = 0u + 0u; goto L_08a1b604; }
L_08a1bd70:
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[20] & 0x0001u; if (_c) goto L_08a1bcd0; }
    { int _c = (c->r[20] != 0u); c->r[4] = 0x7ff00000u; if (_c) goto L_08a1bcd0; }
L_08a1bd84:
    c->r[3] = c->r[21] & c->r[4];
    c->r[2] = 0xfff00000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[20] = 0u + 0xffffffffu;
    { c->r[21] = c->r[2] | c->r[3]; goto L_08a1b604; }
L_08a1bda0:
    { int _c = (c->r[22] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a1b608; }
    { int _c = (c->r[20] != 0u); c->r[2] = c->r[21] + 0u; if (_c) goto L_08a1b608; }
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[23] + 0u; if (_c) goto L_08a1b608; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000038u);
    { c->r[31] = 0x08a1bdc8u; c->r[6] = 0u + 0x00000001u; func_08a22d78(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a1bdd8u; mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] > 0); c->r[4] = 0x7ff00000u; if (_c) goto L_08a1bd84; }
    { c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); goto L_08a1b608; }
L_08a1bde8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[22] = 0u + 0u;
    c->r[17] = 0u + 0u;
    c->r[18] = 0u - c->r[2];
    { c->r[6] = c->r[18] + 0u; goto L_08a1b7a8; }
L_08a1be00:
    { c->r[21] = c->r[2] + c->r[21]; goto L_08a1b704; }
L_08a1be08:
    { int _c = ((s32)c->r[18] >= 0); c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a1b708; }
    c->r[18] = 0u - c->r[18];
    c->r[3] = c->r[18] & 0x000fu;
    if (c->r[3] == 0u) { c->r[18] = alx_ins(c->r[18], 0u, 0u, 3u); goto L_08a1be50; }
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[4] = c->r[20] + 0u;
    { c->r[31] = 0x08a1be44u; c->r[5] = c->r[21] + 0u; func_08a13ee0(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
    c->r[18] = alx_ins(c->r[18], 0u, 0u, 3u);
L_08a1be50:
    { int _c = (c->r[18] == 0u); c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a1b708; }
    c->r[18] = (u32)((s32)c->r[18] >> 4);
    c->r[2] = ((s32)c->r[18] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = ((s32)c->r[18] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a1bc40; }
    { int _c = (c->r[2] != 0u); c->r[16] = 0u + 0u; if (_c) goto L_08a1beb4; }
    c->r[2] = 0x08a50000u;
    c->r[19] = c->r[2] + 0x00001e48u;
L_08a1be78:
    c->r[2] = c->r[18] & 0x0001u;
    if (c->r[2] == 0u) { c->r[18] = (u32)((s32)c->r[18] >> 1); goto L_08a1bea4; }
    c->r[4] = mem_r32(ram, c->r[19] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[19] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a1be98u; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
    c->r[18] = (u32)((s32)c->r[18] >> 1);
L_08a1bea4:
    c->r[2] = ((s32)c->r[18] < (s32)0x00000002u) ? 1u : 0u;
    c->r[16] = c->r[16] + 0x00000001u;
    { int _c = (c->r[2] == 0u); c->r[19] = c->r[19] + 0x00000008u; if (_c) goto L_08a1be78; }
L_08a1beb4:
    c->r[4] = 0x08a50000u;
    c->r[3] = c->r[4] + 0x00001e48u;
    c->r[2] = c->r[16] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[18] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[19] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    c->r[4] = c->r[18] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    { c->r[31] = 0x08a1bee8u; c->r[5] = c->r[19] + 0u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[20] = c->r[2] + 0u;
    { c->r[31] = 0x08a1bf04u; c->r[21] = c->r[3] + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a1b708; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[21] = 0u + 0u;
    c->r[20] = 0u + 0x00000001u;
    c->r[6] = c->r[4] + 0u;
    { c->r[31] = 0x08a1bf28u; c->r[7] = c->r[5] + 0u; func_08a13a8c(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a1bf3cu; c->r[7] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1bf50u; c->r[5] = c->r[3] + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[8] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a1b708; }
    { c->r[2] = 0u + 0x00000022u; goto L_08a1bc44; }
L_08a1bf60:
    c->r[16] = c->r[16] + 0x00001d58u;
    c->r[2] = c->r[3] << 3;
    c->r[2] = c->r[2] + c->r[16];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    c->r[2] = c->r[2] - c->r[3];
    { c->r[31] = 0x08a1bf8cu; mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]); func_08a13b68(c, ram); }
    c->r[7] = c->r[3] + 0u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[6] = c->r[4] << 3;
    c->r[6] = c->r[6] + c->r[16];
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
L_08a1bfa8:
    { c->r[31] = 0x08a1bfb0u; func_08a13b68(c, ram); }
    c->r[20] = c->r[2] + 0u;
L_08a1bfb4:
    { c->r[21] = c->r[3] + 0u; goto L_08a1b2a0; }
L_08a1bfbc:
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[4] << 3;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    { c->r[7] = c->r[21] + 0u; goto L_08a1bfa8; }
L_08a1bfe0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0xffffffeau) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a1b584; }
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[3] << 3;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[20] + 0u;
    { c->r[31] = 0x08a1c014u; c->r[5] = c->r[21] + 0u; func_08a13ee0(c, ram); }
    { c->r[20] = c->r[2] + 0u; goto L_08a1bfb4; }
L_08a1c01c:
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001638u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000163cu);
    { c->r[31] = 0x08a1c034u; c->r[5] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    { c->r[4] = c->r[20] + 0u; goto L_08a1b528; }
L_08a1c03c:
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001638u);
    c->r[7] = 0x08a50000u;
    { c->r[31] = 0x08a1c058u; c->r[7] = mem_r32(ram, c->r[7] + 0x0000163cu); func_08a13a8c(c, ram); }
    c->r[6] = c->r[2] + 0u;
    { c->r[7] = c->r[3] + 0u; goto L_08a1b4e0; }
L_08a1c064:
    c->r[2] = c->r[7] | c->r[9];
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a1b2a4; }
    { mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]); goto L_08a1b2a0; }
L_08a1c078:
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    if (c->r[4] == c->r[2]) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u); goto L_08a1c078; }
    { c->r[2] = c->r[4] + 0xffffffcfu; goto L_08a1b408; }
L_08a1c094:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    { c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000000u); goto L_08a1b3e8; }
L_08a1c0a8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]);
    { int _c = (c->r[17] != 0u); c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); if (_c) goto L_08a1c1dc; }
    c->r[2] = 0u + 0x00000030u;
    { int _c = (c->r[4] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u); if (_c) goto L_08a1c1c0; }
    c->r[2] = c->r[4] + 0xffffffcfu;
L_08a1c0cc:
    c->r[2] = (c->r[2] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[4] ^ 0x0045u; if (_c) goto L_08a1b398; }
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[8] = c->r[7] + 0u;
    c->r[6] = c->r[4] + 0xffffffd0u;
    c->r[7] = 0u + 0u;
L_08a1c0e8:
    { int _c = (c->r[6] == 0u); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a1c158; }
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[7]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[8] = c->r[8] + c->r[7]; if (_c) goto L_08a1c130; }
    c->r[3] = c->r[7] + 0xffffffffu;
    c->r[2] = ((s32)c->r[17] < (s32)0x00000009u) ? 1u : 0u;
L_08a1c108:
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_08a1c1a0; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[2] = c->r[4] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] << 1;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
L_08a1c124:
    c->r[3] = c->r[3] + 0xffffffffu;
L_08a1c128:
    { int _c = (c->r[3] != 0u); c->r[2] = ((s32)c->r[17] < (s32)0x00000009u) ? 1u : 0u; if (_c) goto L_08a1c108; }
L_08a1c130:
    c->r[2] = ((s32)c->r[17] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_08a1c180; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[2] = c->r[3] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[6];
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    c->r[7] = 0u + 0u;
L_08a1c158:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[4] + 0xffffffd0u;
    c->r[3] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[6] = c->r[2] + 0u; if (_c) goto L_08a1c0e8; }
    { c->r[3] = c->r[4] ^ 0x0045u; goto L_08a1b398; }
L_08a1c180:
    c->r[2] = ((s32)c->r[17] < (s32)0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[7] = 0u + 0u; if (_c) goto L_08a1c158; }
    c->r[2] = c->r[18] << 2;
    c->r[2] = c->r[2] + c->r[18];
    c->r[2] = c->r[2] << 1;
    { c->r[18] = c->r[2] + c->r[6]; goto L_08a1c158; }
L_08a1c1a0:
    c->r[2] = ((s32)c->r[17] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[3] = c->r[3] + 0xffffffffu; goto L_08a1c128; }
    c->r[2] = c->r[18] << 2;
    c->r[2] = c->r[2] + c->r[18];
    { c->r[18] = c->r[2] << 1; goto L_08a1c124; }
L_08a1c1bc:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
L_08a1c1c0:
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[4] == c->r[2]); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a1c1bc; }
    { c->r[2] = c->r[4] + 0xffffffcfu; goto L_08a1c0cc; }
L_08a1c1dc:
    c->r[6] = c->r[4] + 0xffffffd0u;
    c->r[2] = (c->r[6] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[4] ^ 0x0045u; if (_c) goto L_08a1c0e8; }
    { c->r[2] = c->r[4] ^ 0x0065u; goto L_08a1b39c; }
L_08a1c1f4:
    if (c->r[2] == 0u) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u); goto L_08a1b364; }
    c->r[2] = c->r[18] << 2;
    c->r[2] = c->r[2] + c->r[18];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    { c->r[18] = c->r[2] + 0xffffffd0u; goto L_08a1b360; }
L_08a1c214:
    c->r[3] = 0u + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
L_08a1c21c:
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]);
    c->r[6] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = alx_seb(c->r[6]);
    if (c->r[2] == c->r[3]) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u); goto L_08a1c21c; }
    { int _c = (c->r[2] != 0u); c->r[4] = alx_seb(c->r[6]); if (_c) goto L_08a1b310; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a1b2a4; }
    return; /* fell out of func_08a1b200 */
}

/* func_08a2160c  0x08a2160c..0x08a21690  132 bytes, source=sweep */
void func_08a2160c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a2160cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = 0x08a20000u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[2] = c->r[2] + 0x000015c8u;
    c->r[3] = c->r[4] + 0x00000268u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[7] = c->r[4] + 0u;
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[4] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x00000004u;
    mem_w32(ram, c->r[4] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    mem_w32(ram, c->r[4] + 0x00000260u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000264u, c->r[3]);
    mem_w32(ram, c->r[4] + 0x0000025cu, 0u);
    { c->r[31] = 0x08a21658u; c->r[4] = mem_r32(ram, c->r[4] + 0x00000004u); func_08a21418(c, ram); }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[7] = c->r[16] + 0u;
    c->r[5] = 0u + 0x00000009u;
    { c->r[31] = 0x08a2166cu; c->r[6] = 0u + 0x00000001u; func_08a21418(c, ram); }
    c->r[4] = mem_r32(ram, c->r[16] + 0x0000000cu);
    c->r[7] = c->r[16] + 0u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08a21680u; c->r[6] = 0u + 0x00000002u; func_08a21418(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a2160c */
}

/* func_08a23a58  0x08a23a58..0x08a23ad0  120 bytes, source=residue */
void func_08a23a58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23a58u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a23a7cu; c->r[16] = c->r[5] + 0u; func_08a19374(c, ram); }
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[18] + 0x0000000eu);
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a23a90u; c->r[7] = c->r[17] + 0u; func_08a23f50(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a23ac0; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000050u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[18] + 0x00000050u, c->r[2]);
L_08a23aa4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23ac0:
    c->r[2] = mem_r16(ram, c->r[18] + 0x0000000cu);
    c->r[2] = alx_ins(c->r[2], 0u, 12u, 12u);
    { mem_w16(ram, c->r[18] + 0x0000000cu, c->r[2]); goto L_08a23aa4; }
    return; /* fell out of func_08a23a58 */
}
