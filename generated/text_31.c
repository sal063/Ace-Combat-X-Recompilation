#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_088066dc  0x088066dc..0x08806740  100 bytes, source=sweep */
void func_088066dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088066dcu);
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
    c->r[2] = 0xdc000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880672cu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088066dc */
}

/* func_088074cc  0x088074cc..0x088074ec  32 bytes, source=sweep */
void func_088074cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088074ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088074cc */
}

/* func_088082d8  0x088082d8..0x088082f8  32 bytes, source=sweep */
void func_088082d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088082d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088082d8 */
}

/* func_0880b068  0x0880b068..0x0880b09c  52 bytes, source=fde */
void func_0880b068(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b068u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x0880b088u; c->r[5] = 0u + 0u; func_089f8a40(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0880b068 */
}

/* func_0880d4fc  0x0880d4fc..0x0880d524  40 bytes, source=sweep */
void func_0880d4fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d4fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000108u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d4fc */
}

/* func_0880ec78  0x0880ec78..0x0880ed14  156 bytes, source=fde */
void func_0880ec78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ec78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ecb8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015bfu;
    { c->r[31] = 0x0880ecb0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ed00; }
L_0880ecb8:
    { c->r[31] = 0x0880ecc0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ecdc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0880ecdcu; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0880ecdc:
    { c->r[31] = 0x0880ece4u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ed00; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880ed00u; c->r[5] = c->r[5] + 0xffffe048u; func_0880f03c(c, ram); }
L_0880ed00:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ec78 */
}

/* func_088123ac  0x088123ac..0x088123d8  44 bytes, source=fde */
void func_088123ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088123acu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x088123c4u; func_0895c190(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088123ac */
}

/* func_08814858  0x08814858..0x08814994  316 bytes, source=fde */
void func_08814858(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08814858u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08814894u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881497c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088148c4u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088148e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088148fcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08814924; }
    c->r[4] = 0u + 0x00000006u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x0881491cu; c->r[6] = 0u + 0x00000004u; func_08932330(c, ram); }
    { goto L_08814934; }
L_08814924:
    c->r[4] = 0u + 0x00000006u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08814934u; c->r[6] = 0u + 0x00000004u; func_089323c0(c, ram); }
L_08814934:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814960; }
    c->r[4] = 0u + 0x00000006u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08814958u; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
    { goto L_08814970; }
L_08814960:
    c->r[4] = 0u + 0x00000006u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08814970u; c->r[6] = 0u + 0x00000001u; func_089323c0(c, ram); }
L_08814970:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0881497cu; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
L_0881497c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08814858 */
}

/* func_08819a98  0x08819a98..0x08819adc  68 bytes, source=sweep */
void func_08819a98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819a98u);
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
    { c->r[31] = 0x08819ac8u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819a98 */
}

/* func_0881ee94  0x0881ee94..0x0881ef10  124 bytes, source=fde */
void func_0881ee94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881ee94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x0881eeb8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881eed4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881eeccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088204a8(c, ram); }
    { goto L_0881eefc; }
L_0881eed4:
    { c->r[31] = 0x0881eedcu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881eefc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881eef0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088204a8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000013u, c->r[2]);
L_0881eefc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881ee94 */
}

/* func_088218cc  0x088218cc..0x08824a70  12708 bytes, source=fde */
void func_088218cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088218ccu);
L_088218cc:
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000ecu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e8u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0xfffff8c8u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0882191cu; c->r[6] = 0u + 0x00000028u; func_08a19db8(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[2] = (c->r[3] < 0x00000022u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff944u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088218ccu: goto L_088218cc; case 0x08821954u: goto L_08821954; case 0x08821ee0u: goto L_08821ee0; case 0x08822080u: goto L_08822080; case 0x08822240u: goto L_08822240; case 0x08822458u: goto L_08822458; case 0x08822540u: goto L_08822540; case 0x088226b4u: goto L_088226b4; case 0x088228f8u: goto L_088228f8; case 0x088229d4u: goto L_088229d4; case 0x08822cb8u: goto L_08822cb8; case 0x08823c2cu: goto L_08823c2c; case 0x08823c74u: goto L_08823c74; case 0x08823cc4u: goto L_08823cc4; case 0x08823d10u: goto L_08823d10; case 0x08823db4u: goto L_08823db4; case 0x08823f04u: goto L_08823f04; case 0x08823f5cu: goto L_08823f5c; case 0x0882427cu: goto L_0882427c; case 0x08824300u: goto L_08824300; case 0x08824334u: goto L_08824334; case 0x0882449cu: goto L_0882449c; case 0x0882484cu: goto L_0882484c; case 0x08824870u: goto L_08824870; case 0x08824a54u: goto L_08824a54; default: recomp_trap_unknown_indirect(c, ram, 0x0882194cu, _t); return; } }
L_08821954:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821980; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_08821980:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821990u; c->r[5] = 0u + 0u; func_088216f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08821a8c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088219c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08821a14; }
    { c->r[31] = 0x088219d8u; c->r[4] = 0u + 0x00000004u; func_08924620(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000007eu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088219f8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_08821b1c; }
L_08821a14:
    { c->r[31] = 0x08821a1cu; c->r[4] = 0u + 0x00000004u; func_08924620(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003cu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08821a3cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08821a6cu; c->r[6] = 0u + 0x00000001u; func_089f8c6c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00002328u;
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821a84u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7a08(c, ram); }
    { goto L_08821b1c; }
L_08821a8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08821ae8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000016u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08821abcu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08821accu; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); goto L_08821b1c; }
L_08821ae8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000002cu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08821b08u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_08821b1c:
    { c->r[31] = 0x08821b24u; func_08824b78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821b38u; c->r[5] = 0u + 0u; func_08826f2c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821bc0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821b50u; c->r[5] = 0u + 0u; func_08826f2c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08821b64u; c->r[5] = 0u + 0x00000003u; func_08824b9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_08821b6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08821b84; }
    { goto L_08821bdc; }
L_08821b84:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08821b9cu; c->r[6] = c->r[2] + 0u; func_08826e38(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_08821b6c; }
L_08821bc0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821bd0u; c->r[5] = 0u + 0u; func_08826f2c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
L_08821bdc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821becu; c->r[5] = 0u + 0x00000001u; func_08826f2c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821c7c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821c04u; c->r[5] = 0u + 0x00000001u; func_08826f2c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08821c20u; c->r[5] = 0u + 0x00000003u; func_08824b9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_08821c28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08821c40; }
    { goto L_08821c98; }
L_08821c40:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08821c58u; c->r[6] = c->r[2] + 0u; func_08826e38(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_08821c28; }
L_08821c7c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821c8cu; c->r[5] = 0u + 0x00000001u; func_08826f2c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08821c98:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08821ca4u; c->r[5] = 0x80000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08821cbcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x08821cccu; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08928be0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002cu;
    { c->r[31] = 0x08821ce0u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821cecu; c->r[4] = c->r[4] + 0x00000af4u; func_08826aa0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002eu;
    { c->r[31] = 0x08821d00u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821d0cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826afc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002fu;
    { c->r[31] = 0x08821d20u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821d2cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826b58(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x08821d40u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821d4cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000032u;
    { c->r[31] = 0x08821d60u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821d6cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826d24(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000033u;
    { c->r[31] = 0x08821d80u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821d8cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826d80(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000034u;
    { c->r[31] = 0x08821da0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821dacu; c->r[4] = c->r[4] + 0x00000af4u; func_08826ddc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000035u;
    { c->r[31] = 0x08821dc0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821dccu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d2f0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000037u;
    { c->r[31] = 0x08821de0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821decu; c->r[4] = c->r[4] + 0x00000af4u; func_08826be8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000038u;
    { c->r[31] = 0x08821e00u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821e0cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826c44(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000039u;
    { c->r[31] = 0x08821e20u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000014a8u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821e5cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000003u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821e70u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000du, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821e84u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821e9cu; c->r[5] = 0u + 0x00000037u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000009u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821eb4u; c->r[5] = 0u + 0x00000038u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000au, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821eccu; c->r[5] = 0u + 0x00000039u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000bu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w8(ram, c->r[1] + 0x00003e44u, c->r[2]); goto L_08824a54; }
L_08821ee0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08821efcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 30;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000020fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821f40u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08821f6c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821f68u; c->r[5] = 0u + 0x0000007eu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
L_08821f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08821fa8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08821fa8; }
    { c->r[31] = 0x08821fa8u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
L_08821fa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821fcc; }
    { c->r[31] = 0x08821fbcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_0892ff00(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    { c->r[31] = 0x08821fc8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_0893029c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
L_08821fcc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08821fe4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08821ff4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822040; }
    { c->r[31] = 0x08822014u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08930048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822040; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822034u; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08822040:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff9ccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088218ccu: goto L_088218cc; case 0x08821954u: goto L_08821954; case 0x08821ee0u: goto L_08821ee0; case 0x08822080u: goto L_08822080; case 0x08822240u: goto L_08822240; case 0x08822458u: goto L_08822458; case 0x08822540u: goto L_08822540; case 0x088226b4u: goto L_088226b4; case 0x088228f8u: goto L_088228f8; case 0x088229d4u: goto L_088229d4; case 0x08822cb8u: goto L_08822cb8; case 0x08823c2cu: goto L_08823c2c; case 0x08823c74u: goto L_08823c74; case 0x08823cc4u: goto L_08823cc4; case 0x08823d10u: goto L_08823d10; case 0x08823db4u: goto L_08823db4; case 0x08823f04u: goto L_08823f04; case 0x08823f5cu: goto L_08823f5c; case 0x0882427cu: goto L_0882427c; case 0x08824300u: goto L_08824300; case 0x08824334u: goto L_08824334; case 0x0882449cu: goto L_0882449c; case 0x0882484cu: goto L_0882484c; case 0x08824870u: goto L_08824870; case 0x08824a54u: goto L_08824a54; default: recomp_trap_unknown_indirect(c, ram, 0x08822078u, _t); return; } }
L_08822080:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822160; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088220c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088220a8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088220b8u; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    { goto L_08824a54; }
L_088220c0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088220f8; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088220e0u; c->r[6] = 0u + 0u; func_08850614(c, ram); }
    { c->r[31] = 0x088220e8u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_088220f8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882212c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000002cu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08822120u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_08824a54; }
L_0882212c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a54; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882214cu; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08822158u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08822160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088221b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a54; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000015u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088221a4u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x088221b0u; c->r[5] = 0u + 0x00000001u; func_08932484(c, ram); }
    { goto L_08824a54; }
L_088221b8:
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x088221c8u; c->r[6] = 0u + 0x00000001u; func_089323c0(c, ram); }
    { c->r[31] = 0x088221d0u; func_0884e084(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x000000f0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088221ec; }
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x088221ecu; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
L_088221ec:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088221f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08824a70(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    { c->r[31] = 0x08822214u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08930048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a54; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08822230u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08822240:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822388; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822274; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000004u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08822274:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000015u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882228cu; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822334; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088222d0; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088222e8; }
    { goto L_08824a54; }
L_088222d0:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822374; }
    { goto L_08824a54; }
L_088222e8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822310; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08822300u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822310:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822320u; c->r[5] = 0u + 0x00000002u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882232cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08822334:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822364; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822350u; c->r[5] = 0u + 0x00000006u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882235cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08822364:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822374:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08822380u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08822388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088223c8; }
    { c->r[31] = 0x088223a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08930048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088223c8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x088223bcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088223c8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088223c8:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822408; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000015u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088223f0u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    c->r[2] = c->r[2] + 0x000013dcu;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08822444; }
L_08822408:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822428; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000013ecu;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08822444; }
L_08822428:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822444; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000013ecu;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08822444:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08822450u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u); func_08824a70(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08822458:
    { c->r[31] = 0x08822460u; func_08850c40(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff93cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08822484u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x0882248cu; c->r[4] = 0u + 0x00000004u; func_08924620(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003cu;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x088224a8u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { c->r[31] = 0x088224b8u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0884e03c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088224c4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822510; }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088224dcu; c->r[4] = c->r[2] + 0u; func_08866378(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088224f0u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08822500u; c->r[5] = c->r[3] + 0u; func_088663bc(c, ram); }
    { c->r[31] = 0x08822508u; func_08866d18(c, ram); }
    { goto L_08824a54; }
L_08822510:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822520u; c->r[5] = 0u + 0x0000002eu; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822538u; c->r[5] = c->r[2] + 0u; func_08826ac8(c, ram); }
    { goto L_08824a54; }
L_08822540:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff8f0u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff8f4u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff8f8u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822640; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088225d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000018u;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x088225b8u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_088225d4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882261c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000019u;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x08822600u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_0882261c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882262cu; c->r[5] = 0u + 0x00000006u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08822638u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08822640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822694; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000009u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000017u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08822680u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x0882268cu; c->r[5] = 0u + 0x00000001u; func_08932484(c, ram); }
    { goto L_08824a54; }
L_08822694:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x088226a0u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088226acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08824a70(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_088226b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088226cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x088226ccu; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
L_088226cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822844; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000008u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08822700:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000017u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822718u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088227bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822758; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822770; }
    { goto L_08824a54; }
L_08822758:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822800; }
    { goto L_08824a54; }
L_08822770:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822798; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08822788u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822798:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088227a8u; c->r[5] = 0u + 0x00000002u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088227b4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_088227bc:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088227e4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088227d8u; c->r[5] = 0u + 0x00000006u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088227e4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088227e4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822800:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822828; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882281cu; c->r[5] = 0u + 0x00000007u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08822828u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08822828:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822844:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088228c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822880; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822898; }
    { goto L_088228e4; }
L_08822880:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088228d8; }
    { goto L_088228e4; }
L_08822898:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000017u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088228b0u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    c->r[2] = c->r[2] + 0x000013dcu;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_088228e4; }
L_088228c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000013efu;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_088228e4; }
L_088228d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000014b6u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_088228e4:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088228f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u); func_08824a70(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_088228f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088229c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822918u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000010u); func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000059u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822940; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822940; }
    { goto L_08822974; }
L_08822940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000016u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0882295cu; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822974:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882299c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822994u; c->r[5] = 0u + 0x00000006u; func_088216f8(c, ram); }
    { goto L_088229ac; }
L_0882299c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088229acu; c->r[5] = 0u + 0x00000007u; func_088216f8(c, ram); }
L_088229ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088229b8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_088229c0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088229ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08824a70(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_088229d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822b24; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822a08; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822a08; }
    { goto L_08822af8; }
L_08822a08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08822a30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000002u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08822a30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822a70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822a70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000002u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08822a70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822aa0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822aa0; }
    { goto L_08822ac4; }
L_08822aa0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822ab0u; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08822abcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08822ac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003cu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08822ae0u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822af8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08824a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000002u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08822b24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822bf4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822b6c; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822bcc; }
    { goto L_08824a54; }
L_08822b6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003au;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08822b94u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08822bbcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08822bcc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000019u;
    { c->r[31] = 0x08822be0u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x08822becu; c->r[5] = 0u + 0x00000001u; func_08932484(c, ram); }
    { goto L_08824a54; }
L_08822bf4:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08822c00u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08824a70(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x000014a8u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822c44; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08822c44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00001539u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08822c44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822c74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822c74; }
    { goto L_08824a54; }
L_08822c74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    { c->r[31] = 0x08822c8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_08930048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a54; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08822ca8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08822cb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08823318; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08822ce0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822cfc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x08822cfcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08822cfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08822f38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822d40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822d68; }
    { goto L_0882330c; }
L_08822d40:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088230f8; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882321c; }
    { goto L_0882330c; }
L_08822d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822de0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822d84u; c->r[4] = c->r[4] + 0x00000af4u; func_08826aa0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002eu;
    { c->r[31] = 0x08822d98u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822da4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826afc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002fu;
    { c->r[31] = 0x08822db8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822dc4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826b58(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x08822dd8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0882330c; }
L_08822de0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822dfcu; c->r[5] = 0u + 0x0000002eu; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822e14u; c->r[5] = c->r[2] + 0u; func_08826ac8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822e20u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822e70; }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x08822e38u; c->r[4] = c->r[2] + 0u; func_08866378(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822e50u; c->r[5] = 0u + 0x0000002eu; func_088145a8(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08822e60u; c->r[5] = c->r[3] + 0u; func_088663bc(c, ram); }
    { c->r[31] = 0x08822e68u; func_08866d18(c, ram); }
    { goto L_08822e98; }
L_08822e70:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822e80u; c->r[5] = 0u + 0x0000002eu; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822e98u; c->r[5] = c->r[2] + 0u; func_08826ac8(c, ram); }
L_08822e98:
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffffbf30u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822ee0; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08822eb4u; c->r[4] = c->r[4] + 0xfffff920u; func_089c6f64(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822ec4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
L_08822ee0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822ef0u; c->r[5] = 0u + 0x0000002fu; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822f08u; c->r[5] = c->r[2] + 0u; func_08826b24(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822f18u; c->r[5] = 0u + 0x00000030u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822f30u; c->r[5] = c->r[2] + 0u; func_08826b80(c, ram); }
    { goto L_0882330c; }
L_08822f38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08822fd0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822f54u; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000032u;
    { c->r[31] = 0x08822f68u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822f74u; c->r[4] = c->r[4] + 0x00000af4u; func_08826d24(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000033u;
    { c->r[31] = 0x08822f88u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822f94u; c->r[4] = c->r[4] + 0x00000af4u; func_08826d80(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000034u;
    { c->r[31] = 0x08822fa8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08822fb4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ddc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000035u;
    { c->r[31] = 0x08822fc8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0882330c; }
L_08822fd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08822fecu; c->r[5] = 0u + 0x00000032u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823004u; c->r[5] = c->r[2] + 0u; func_08826cf0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823014u; c->r[5] = 0u + 0x00000033u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882302cu; c->r[5] = c->r[2] + 0u; func_08826d4c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882303cu; c->r[5] = 0u + 0x00000034u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823054u; c->r[5] = c->r[2] + 0u; func_08826da8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823064u; c->r[5] = 0u + 0x00000035u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882307cu; c->r[5] = c->r[2] + 0u; func_08826e04(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823088u; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823098u; c->r[4] = c->r[4] + 0x00000af4u; func_08826d24(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x088230a4u; c->r[5] = c->r[2] + 0u; func_08824b9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000088u, 0u);
L_088230ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088230c4; }
    { goto L_0882330c; }
L_088230c4:
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000088u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088230e8u; c->r[6] = c->r[2] + 0u; func_08826ee4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_088230ac; }
L_088230f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088231d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000037u;
    { c->r[31] = 0x08823124u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000038u;
    { c->r[31] = 0x08823140u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000039u;
    { c->r[31] = 0x0882315cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823174u; c->r[5] = c->r[2] + 0u; func_08826bb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882318cu; c->r[5] = c->r[2] + 0u; func_08826c10(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088231a4u; c->r[5] = c->r[2] + 0u; func_08826c6c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088231b0u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088231bcu; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088231c8u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
    { goto L_0882330c; }
L_088231d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088231ecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d2f0(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000009u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823200u; c->r[4] = c->r[4] + 0x00000af4u; func_08826be8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000au, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823214u; c->r[4] = c->r[4] + 0x00000af4u; func_08826c44(c, ram); }
    { mem_w8(ram, c->r[16] + 0x0000000bu, c->r[2]); goto L_0882330c; }
L_0882321c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882330c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882324c; }
    c->r[2] = 0u + 0x0000007fu;
    { mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08823254; }
L_0882324c:
    c->r[3] = 0u + 0x00000019u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[3]);
L_08823254:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823264u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000c0u); func_088145a8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882330c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088232a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882328cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882329cu; c->r[5] = 0u + 0x00000007u; func_088216f8(c, ram); }
    { goto L_0882330c; }
L_088232a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088232dc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088232c4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088232d4u; c->r[5] = 0u + 0x00000007u; func_088216f8(c, ram); }
    { goto L_0882330c; }
L_088232dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x088232e8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000002u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882330cu; c->r[5] = 0u + 0x00000007u; func_088216f8(c, ram); }
L_0882330c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08823318:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff8fcu);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff900u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff904u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff908u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff90cu);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff910u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff914u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088233c4; }
    c->r[17] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088233b0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088145a8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[17] + 0x00000018u, c->r[2]); goto L_08823404; }
L_088233c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088233e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00001503u;
    { mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08823404; }
L_088233e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08823404:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08823424; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08823420u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u); func_08824a70(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
L_08823424:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088234b8; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08823448u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08823458u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823ab4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002eu;
    { c->r[31] = 0x08823488u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000002fu;
    { c->r[31] = 0x0882349cu; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x088234b0u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    { goto L_08823ab4; }
L_088234b8:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823774; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088234d8u; c->r[5] = 0u + 0x00000032u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    { c->r[31] = 0x088234e8u; c->r[4] = c->r[2] + 0u; func_08824c38(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882354c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08823500u; c->r[6] = 0u + 0x00000009u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08823510u; c->r[6] = 0u + 0x00000009u; func_08930178(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823520u; c->r[5] = 0u + 0x00000033u; func_088145a8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882356c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000033u;
    { c->r[31] = 0x08823544u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    { goto L_0882356c; }
L_0882354c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x0882355cu; c->r[6] = 0u + 0x00000009u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0882356cu; c->r[6] = 0u + 0x00000009u; func_08930208(c, ram); }
L_0882356c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08823578u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u); func_088259f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088235a4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088235b4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088236d8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088235dcu; c->r[5] = 0u + 0u; func_08826da8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088235ecu; c->r[5] = 0u + 0u; func_08826e04(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088235f8u; c->r[4] = c->r[4] + 0x00000af4u; func_08826d80(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000034u;
    { c->r[31] = 0x0882360cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823618u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ddc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000035u;
    { c->r[31] = 0x0882362cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882363cu; c->r[5] = 0u + 0x00000032u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823654u; c->r[5] = c->r[2] + 0u; func_08826cf0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08823660u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x0882366cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08823688u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088236a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000088u);
    { c->r[31] = 0x088236a4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088236a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003bu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088236ccu; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000014u, 0u); goto L_08823ab4; }
L_088236d8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088236f0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08823700u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823ab4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000032u;
    { c->r[31] = 0x08823730u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000033u;
    { c->r[31] = 0x08823744u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000034u;
    { c->r[31] = 0x08823758u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000035u;
    { c->r[31] = 0x0882376cu; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    { goto L_08823ab4; }
L_08823774:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823ab4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x08823790u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088238b4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088237b0u; c->r[5] = 0u + 0x00000037u; func_088145a8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088237c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d2f0(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_088237fc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088237d8u; c->r[5] = 0u + 0x00000037u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088237f0u; c->r[5] = c->r[2] + 0u; func_08826bb4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088237fcu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
L_088237fc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882380cu; c->r[5] = 0u + 0x00000038u; func_088145a8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882381cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826be8(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_08823858; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823834u; c->r[5] = 0u + 0x00000038u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882384cu; c->r[5] = c->r[2] + 0u; func_08826c10(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823858u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
L_08823858:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823868u; c->r[5] = 0u + 0x00000039u; func_088145a8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823878u; c->r[4] = c->r[4] + 0x00000af4u; func_08826c44(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_088238b4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823890u; c->r[5] = 0u + 0x00000039u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088238a8u; c->r[5] = c->r[2] + 0u; func_08826c6c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088238b4u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
L_088238b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823908; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088238dcu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088238f8u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08823ab4; }
L_08823908:
    { c->r[31] = 0x08823910u; c->r[4] = 0u + 0u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823998; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882393cu; c->r[5] = c->r[2] + 0u; func_08826bb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823954u; c->r[5] = c->r[2] + 0u; func_08826c10(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882396cu; c->r[5] = c->r[2] + 0u; func_08826c6c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823978u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823984u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823990u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
    { goto L_08823ab4; }
L_08823998:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088239b0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088239c0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823ab4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000037u;
    { c->r[31] = 0x088239f0u; c->r[6] = 0u + 0x0000000fu; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823a00u; c->r[5] = 0u + 0x00000037u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823a18u; c->r[5] = c->r[2] + 0u; func_08826bb4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823a24u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000038u;
    { c->r[31] = 0x08823a38u; c->r[6] = 0u + 0x0000000fu; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823a48u; c->r[5] = 0u + 0x00000038u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823a60u; c->r[5] = c->r[2] + 0u; func_08826c10(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823a6cu; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000039u;
    { c->r[31] = 0x08823a80u; c->r[6] = 0u + 0x0000000fu; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823a90u; c->r[5] = 0u + 0x00000039u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823aa8u; c->r[5] = c->r[2] + 0u; func_08826c6c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823ab4u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
L_08823ab4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08823ae4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08823ae4; }
    { goto L_08824a54; }
L_08823ae4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823bc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000037u;
    { c->r[31] = 0x08823b20u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000038u;
    { c->r[31] = 0x08823b3cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000039u;
    { c->r[31] = 0x08823b58u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823b70u; c->r[5] = c->r[2] + 0u; func_08826bb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823b88u; c->r[5] = c->r[2] + 0u; func_08826c10(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823ba0u; c->r[5] = c->r[2] + 0u; func_08826c6c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823bacu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823bb8u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823bc4u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
L_08823bc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08823be0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823bfc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000088u);
    { c->r[31] = 0x08823bfcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08823bfc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x08823c08u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08823c14u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823c24u; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    { goto L_08824a54; }
L_08823c2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffffa08u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088218ccu: goto L_088218cc; case 0x08821954u: goto L_08821954; case 0x08821ee0u: goto L_08821ee0; case 0x08822080u: goto L_08822080; case 0x08822240u: goto L_08822240; case 0x08822458u: goto L_08822458; case 0x08822540u: goto L_08822540; case 0x088226b4u: goto L_088226b4; case 0x088228f8u: goto L_088228f8; case 0x088229d4u: goto L_088229d4; case 0x08822cb8u: goto L_08822cb8; case 0x08823c2cu: goto L_08823c2c; case 0x08823c74u: goto L_08823c74; case 0x08823cc4u: goto L_08823cc4; case 0x08823d10u: goto L_08823d10; case 0x08823db4u: goto L_08823db4; case 0x08823f04u: goto L_08823f04; case 0x08823f5cu: goto L_08823f5c; case 0x0882427cu: goto L_0882427c; case 0x08824300u: goto L_08824300; case 0x08824334u: goto L_08824334; case 0x0882449cu: goto L_0882449c; case 0x0882484cu: goto L_0882484c; case 0x08824870u: goto L_08824870; case 0x08824a54u: goto L_08824a54; default: recomp_trap_unknown_indirect(c, ram, 0x08823c6cu, _t); return; } }
L_08823c74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823cb4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823c94u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823cb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08823cb4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08823cc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x000015aeu;
    mem_w32(ram, c->r[2] + 0x00000018u, c->r[3]);
    { c->r[31] = 0x08823cd8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823cf0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08823cf0:
    { c->r[31] = 0x08823cf8u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08823d10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x000015afu;
    mem_w32(ram, c->r[2] + 0x00000018u, c->r[3]);
    { c->r[31] = 0x08823d24u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08823d3c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08824a54; }
L_08823d3c:
    { c->r[31] = 0x08823d44u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000002cu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08823d6cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08823d7cu; c->r[5] = 0x80000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08823d94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08824a54; }
L_08823db4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823dc4u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823df0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08823de8u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08824a54; }
L_08823df0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823e00u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823e68; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823e1cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08823e68; }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823e40u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000du;
    { c->r[31] = 0x08823e60u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08824a54; }
L_08823e68:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823e78u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823ee8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08823e94u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08823ee8; }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823eb8u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000096u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08823ee0u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08824a54; }
L_08823ee8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08823efcu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08824a54; }
L_08823f04:
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823f18u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000093u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08823f38u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000018u;
    { c->r[31] = 0x08823f54u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08824a54; }
L_08823f5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882422c; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x0000006au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823fb8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08823fa4u; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08823fb0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_08823fb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08823ff0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000007eu;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x08823fe8u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    { goto L_0882400c; }
L_08823ff0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000002cu;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x0882400cu; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
L_0882400c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08824028u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[6] = 0u + 0x00000020u;
    { c->r[31] = 0x08824044u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    { c->r[31] = 0x08824054u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u); func_0893029c(c, ram); }
    { c->r[31] = 0x0882405cu; mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); func_08824b78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    { c->r[31] = 0x08824068u; c->r[4] = 0u + 0xffffffffu; func_08824c38(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824080u; c->r[5] = 0u + 0x00000032u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824098u; c->r[5] = c->r[2] + 0u; func_08826cf0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088240a8u; c->r[5] = 0u + 0x00000033u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088240c0u; c->r[5] = c->r[2] + 0u; func_08826d4c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088240d0u; c->r[5] = 0u + 0x00000034u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088240e8u; c->r[5] = c->r[2] + 0u; func_08826da8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088240f8u; c->r[5] = 0u + 0x00000035u; func_088145a8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824110u; c->r[5] = c->r[2] + 0u; func_08826e04(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882411cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882412cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08824150u; c->r[6] = c->r[2] + 0u; func_08826f68(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882415cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08824168u; c->r[5] = 0u + 0x00000003u; func_08824b9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824178u; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824188u; c->r[4] = c->r[4] + 0x00000af4u; func_08826d24(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08824194u; c->r[5] = c->r[2] + 0u; func_08824b9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000a4u, 0u);
L_0882419c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088241b4; }
    { goto L_0882421c; }
L_088241b4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088241c0u; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088241e8u; c->r[7] = c->r[2] + 0u; func_08826e88(c, ram); }
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882420cu; c->r[6] = c->r[2] + 0u; func_08826ee4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_0882419c; }
L_0882421c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_08824a54; }
L_0882422c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000014b7u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] ^ 0x0002u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000014u);
    { c->r[31] = 0x08824264u; c->r[7] = c->r[2] + 0u; func_08825edc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_08824a54; }
L_0882427c:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff918u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff91cu);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0u + 0x0000000bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088242b4u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000024u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088242d0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088242f8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000003u, c->r[2]); goto L_08824a54; }
L_08824300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882431cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08824a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08824a54; }
L_08824334:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824340u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824478; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088243a4; }
    mem_w16(ram, c->r[30] + 0x00000068u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x0000006au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000016u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08824394u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088243dc; }
L_088243a4:
    c->r[2] = 0u + 0x00000002u;
    mem_w16(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x0000006au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000003cu;
    c->r[6] = 0u + 0x00000002u;
    { c->r[31] = 0x088243d0u; c->r[7] = c->r[2] + 0u; func_08824acc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088243dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088243f8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[6] = 0u + 0x00000020u;
    { c->r[31] = 0x08824414u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000017u;
    { c->r[31] = 0x08824428u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824440u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824458u; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824470u; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    { goto L_08824a54; }
L_08824478:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824488u; c->r[5] = 0u + 0x00000002u; func_088216f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08824494u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08824a54; }
L_0882449c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088244a8u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088244c0; }
    { c->r[31] = 0x088244c0u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
L_088244c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088244ec; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088244dcu; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824524; }
L_088244ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824604; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882450cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08824524; }
    { goto L_08824604; }
L_08824524:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824534u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000003u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_088245cc; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824554u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_088245cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882459c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824584u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882459c; }
    { goto L_088245cc; }
L_0882459c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088245acu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x0000000du);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_088245cc; }
    { c->r[31] = 0x088245c4u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    { goto L_088245f0; }
L_088245cc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088245d8u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088245f0; }
    { c->r[31] = 0x088245f0u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
L_088245f0:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088245fcu; c->r[4] = c->r[4] + 0xffff9720u; func_0880d6d4(c, ram); }
    { c->r[31] = 0x08824604u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
L_08824604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824670; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824624u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882465c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08824650; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffc81cu, c->r[2]);
L_08824650:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882465cu; c->r[4] = c->r[4] + 0xffffc930u; func_089f7af4(c, ram); }
L_0882465c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08824670u; c->r[6] = 0u + 0u; func_089f8c6c(c, ram); }
L_08824670:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882468cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088246a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { c->r[31] = 0x088246a8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088246a8:
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x088246bcu; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088246c8u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824708; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088246e4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08824708; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08824708u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08824708:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824714u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08824734; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08824734u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
L_08824734:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824740u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824764; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08824764u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08824764:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824770u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824794; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000cu;
    { c->r[31] = 0x08824794u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08824794:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088247a0u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824814; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088247bcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088247f4; }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000096u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x088247ecu; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08824814; }
L_088247f4:
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08824814u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
L_08824814:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08824820u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a54; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000cu;
    { c->r[31] = 0x08824844u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08824a54; }
L_0882484c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08824868u; c->r[5] = 0u + 0x00000001u; func_088216f8(c, ram); }
    { goto L_08824a54; }
L_08824870:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824894; }
    { c->r[31] = 0x0882488cu; func_088513dc(c, ram); }
    { goto L_08824a54; }
L_08824894:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08824a54; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff940u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088248d4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824994; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08824994; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824930; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000018u);
    { c->r[31] = 0x08824928u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_088249ac; }
L_08824930:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882493cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x08824944u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    { c->r[31] = 0x08824950u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u); func_0896985c(c, ram); }
    mem_w16(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824974; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000acu);
    c->r[2] = c->r[2] + 0x000001c8u;
    mem_w16(ram, c->r[30] + 0x000000acu, c->r[2]);
L_08824974:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000acu);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff930u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882498cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_088249ac; }
L_08824994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000018u);
    { c->r[31] = 0x088249acu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_088249ac:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088249bcu; c->r[5] = 0u + 0x0000002cu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088249e8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088249e4u; c->r[5] = 0u + 0x0000007eu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
L_088249e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08824a48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a2c; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000059u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a2c; }
    { c->r[31] = 0x08824a24u; func_08826908(c, ram); }
    { goto L_08824a48; }
L_08824a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824a48; }
    { c->r[31] = 0x08824a48u; func_0882694c(c, ram); }
L_08824a48:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08824a54u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08824a54:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000ecu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_088218cc */
}

/* func_08826c6c  0x08826c6c..0x08826ca0  52 bytes, source=sweep */
void func_08826c6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826c6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b95u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826c6c */
}

/* func_088298b8  0x088298b8..0x088299ec  308 bytes, source=fde */
void func_088298b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088298b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088298e4; }
    { goto L_088299d8; }
L_088298e4:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829900; }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003f1cu, 0u);
L_08829900:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088299d8; }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001628u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f1cu);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003f1cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003f1cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000162cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08829964; }
    { goto L_08829974; }
L_08829964:
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f1cu);
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_08829980; }
L_08829974:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000162cu);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_08829980:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003f1cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08829998u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00003f1cu); func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001630u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088299b4u; c->r[7] = mem_r32(ram, c->r[7] + 0x00001634u); func_08a14104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088299c4; }
    { goto L_088299d8; }
L_088299c4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x088299d8u; c->r[5] = c->r[5] + 0xffff99ecu; func_0880f03c(c, ram); }
L_088299d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088298b8 */
}

/* func_0882cf28  0x0882cf28..0x0882d1dc  692 bytes, source=fde */
void func_0882cf28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882cf28u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003fu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882cf60u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0882cf68:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882cf74u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca1d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882cf8c; }
    { goto L_0882d1c4; }
L_0882cf8c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882cf9cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089ca200(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0882cfdc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882cfdc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003fu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003fu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882cfdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d078; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000a0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d078; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
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
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d1b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882d078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000a0u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d0b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000dcu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d0b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000041u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000041u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882d0b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000dcu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d0f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d0f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000042u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000042u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882d0f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000100u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d128; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000043u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000043u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882d128:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000101u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d158; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882d158:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000102u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d188; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000045u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000045u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882d1b4; }
L_0882d188:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000103u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d1b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000046u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000046u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0882d1b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0882cf68; }
L_0882d1c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0882cf28 */
}

/* func_08831490  0x08831490..0x088314b0  32 bytes, source=sweep */
void func_08831490(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831490u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08831490 */
}

/* func_08833320  0x08833320..0x088333fc  220 bytes, source=fde */
void func_08833320(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08833320u);
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
    { c->r[31] = 0x08833380u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08833390u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088333bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088333bcu; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
L_088333bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000079u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088333e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088333e4u; c->r[5] = 0u + 0x00000005u; func_08937a50(c, ram); }
L_088333e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08833320 */
}

/* func_088355b8  0x088355b8..0x088356e4  300 bytes, source=fde */
void func_088355b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088355b8u);
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
    { c->r[31] = 0x08835604u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883564c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835620u; c->r[5] = 0u + 0x00000012u; func_08937a50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883563cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0883564cu; c->r[5] = 0x00020000u; func_0892ff54(c, ram); }
L_0883564c:
    { c->r[31] = 0x08835654u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088356b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08835678u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883569c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0883569cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0883569c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088356b0u; c->r[5] = 0u + 0x0000000eu; func_08937a50(c, ram); }
L_088356b0:
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
    return; /* fell out of func_088355b8 */
}

/* func_0883a288  0x0883a288..0x0883a434  428 bytes, source=fde */
void func_0883a288(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a288u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883a38c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a2f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a318; }
    { goto L_0883a420; }
L_0883a2f0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883a420; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883a418; }
    { goto L_0883a420; }
L_0883a318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a344; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000004u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_0883a350; }
L_0883a344:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0883a350:
    { c->r[31] = 0x0883a358u; func_088c4f00(c, ram); }
    c->r[4] = 0u + 0x0000002au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0883a374u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0883a384u; c->r[6] = 0u + 0u; func_08850614(c, ram); }
    { goto L_0883a420; }
L_0883a38c:
    { c->r[31] = 0x0883a394u; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883a420; }
    { c->r[31] = 0x0883a3b0u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0883a3c0u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x0883a3c8u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x0883a3d0u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c60u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0883a3ecu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x0883a3f4u; func_08969ac8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883a410u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0883a420; }
L_0883a418:
    { c->r[31] = 0x0883a420u; func_088513dc(c, ram); }
L_0883a420:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883a288 */
}

/* func_0883c608  0x0883c608..0x0883c670  104 bytes, source=fde */
void func_0883c608(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c608u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0883c61c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883c634; }
    { goto L_0883c65c; }
L_0883c634:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0883c64cu; c->r[7] = 0u + 0u; func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0883c61c; }
L_0883c65c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883c608 */
}

/* func_08845eac  0x08845eac..0x08846038  396 bytes, source=fde */
void func_08845eac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08845eacu);
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
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08845edc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845ef4; }
    { goto L_08845fcc; }
L_08845ef4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08845f00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_088204e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08845f18u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08820e5c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08845f7c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08845f3cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08820e5c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08845f7c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08845f60u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08845f74u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u); func_0881456c(c, ram); }
    { goto L_08845fcc; }
L_08845f7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845fa0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08845fa0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08845fbc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08845fcc; }
L_08845fbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08845edc; }
L_08845fcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000028u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08845ff4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08845ff4; }
    { goto L_08846018; }
L_08845ff4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08846004u; c->r[5] = 0u + 0x0000000bu; func_0880d438(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08846018u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
L_08846018:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08846024u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08845eac */
}

/* func_08849b20  0x08849b20..0x08849cf0  464 bytes, source=fde */
void func_08849b20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08849b20u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004f40u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08849b48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000024u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08849b6c; }
    { goto L_08849ba8; }
L_08849b6c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849b98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_08849b98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08849b48; }
L_08849ba8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08849bac:
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08849bb8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08849d34(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08849bc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003804u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849be8; }
    { goto L_08849cb4; }
L_08849be8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003804u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08849c08u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849ca4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003808u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000001u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08849c40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849c60; }
    { goto L_08849c94; }
L_08849c60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08849c80u; c->r[5] = 0u + 0x00000001u; func_08849d34(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08849c40; }
L_08849c94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000014u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08849cb4; }
L_08849ca4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08849bc0; }
L_08849cb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849cc8; }
    { goto L_08849cd8; }
L_08849cc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08849bac; }
L_08849cd8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08849b20 */
}

/* func_0884cc18  0x0884cc18..0x0884ce9c  644 bytes, source=fde */
void func_0884cc18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884cc18u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0884cc3cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x0884cc48u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x0884cc54u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u);
    { c->r[31] = 0x0884cc68u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000028u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    { c->r[31] = 0x0884cc74u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d4u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0884cc90u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0884ccac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u);
    { c->r[31] = 0x0884cca4u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[3]);
L_0884ccac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002638u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0884ccc8u; c->r[7] = mem_r32(ram, c->r[7] + 0x0000263cu); func_08a143ac(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0884ccd8; }
    { goto L_0884ccdc; }
L_0884ccd8:
    mem_w32(ram, c->r[30] + 0x000000d4u, 0u);
L_0884ccdc:
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884ccecu; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d4u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cd04u; c->r[5] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884cd1cu; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = -c->f[0];
    c->f[12] = c->f[0];
    { c->r[31] = 0x0884cd30u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    { c->r[31] = 0x0884cd3cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0884cd58u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0884cd74; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    { c->r[31] = 0x0884cd6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[3]);
L_0884cd74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002638u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0884cd90u; c->r[7] = mem_r32(ram, c->r[7] + 0x0000263cu); func_08a143ac(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0884cda0; }
    { goto L_0884cda4; }
L_0884cda0:
    mem_w32(ram, c->r[30] + 0x000000d0u, 0u);
L_0884cda4:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cdb4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d0u); func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cdccu; c->r[5] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cde4u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0884cdf0u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    { c->r[31] = 0x0884cdfcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d8u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0884ce18u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0884ce34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    { c->r[31] = 0x0884ce2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[3]);
L_0884ce34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002638u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0884ce50u; c->r[7] = mem_r32(ram, c->r[7] + 0x0000263cu); func_08a143ac(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0884ce60; }
    { goto L_0884ce64; }
L_0884ce60:
    mem_w32(ram, c->r[30] + 0x000000d8u, 0u);
L_0884ce64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_0884cc18 */
}

/* func_0884e2c4  0x0884e2c4..0x0884eff0  3372 bytes, source=fde */
void func_0884e2c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884e2c4u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x0884e2e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884eff0(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884e300; }
    { goto L_0884efdc; }
L_0884e300:
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0u + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884e318u; c->r[6] = c->r[3] + 0u; func_0885af24(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e37c; }
    { c->r[31] = 0x0884e334u; func_0884e084(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e37c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884e360; }
    { goto L_0884efdc; }
L_0884e360:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e37c; }
    { goto L_0884efdc; }
L_0884e37c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e38cu; c->r[5] = c->r[2] + 0u; func_0885a908(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884ef7c; }
    c->r[2] = 0u + 0x0000001fu;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    c->r[2] = (c->r[3] < 0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884ef34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000026b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0884e3e0u: goto L_0884e3e0; case 0x0884ea5cu: goto L_0884ea5c; case 0x0884ebfcu: goto L_0884ebfc; case 0x0884ee00u: goto L_0884ee00; case 0x0884eec0u: goto L_0884eec0; case 0x0884eee8u: goto L_0884eee8; case 0x0884ef34u: goto L_0884ef34; default: recomp_trap_unknown_indirect(c, ram, 0x0884e3d8u, _t); return; } }
L_0884e3e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884e3f0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884e41cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884e448u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = 0u + 0xfffffffeu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbdb0u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[2] | c->r[3];
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884e4a0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884e4b0u; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884e4c4u; c->r[6] = 0u + 0x00000006u; func_0885a864(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba64u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002688u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000268cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002690u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002694u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e518u; c->r[5] = c->r[2] + 0u; func_0885a908(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbab8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002698u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002698u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e570; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]); goto L_0884e594; }
L_0884e570:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
L_0884e594:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e5acu; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002698u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002698u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000068u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e604; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]); goto L_0884e628; }
L_0884e604:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[3]);
L_0884e628:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e640u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbabcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002698u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002698u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000074u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e698; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]); goto L_0884e6bc; }
L_0884e698:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[3]);
L_0884e6bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e6d4u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba84u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026a0u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000080u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e720; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]); goto L_0884e744; }
L_0884e720:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[3]);
L_0884e744:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e75cu; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba80u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026a0u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e7a8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]); goto L_0884e7cc; }
L_0884e7a8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[3]);
L_0884e7cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e7e4u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba7cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026a0u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000098u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e830; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]); goto L_0884e854; }
L_0884e830:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[3]);
L_0884e854:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e86cu; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba78u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026a0u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e8b8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]); goto L_0884e8dc; }
L_0884e8b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[3]);
L_0884e8dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884e8f4u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba9cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbaa4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000064u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[1] = (f32)fabsf(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e94c; }
    { goto L_0884e958; }
L_0884e94c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    { mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]); goto L_0884e980; }
L_0884e958:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbaa4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000064u);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[1]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = (f32)fabsf(c->f[1]);
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[1]);
L_0884e980:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026a4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884e9ac; }
    { goto L_0884e9b8; }
L_0884e9ac:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    { mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]); goto L_0884e9c4; }
L_0884e9b8:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000026a4u);
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[1]);
L_0884e9c4:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000acu);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026a8u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000269cu);
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884ea14; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]); goto L_0884ea38; }
L_0884ea14:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[3]);
L_0884ea38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884ea50u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0884ef34; }
L_0884ea5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884ea6cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ea7cu; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884eb30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884eaa0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884eaccu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884eaf8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884eb28u; c->r[6] = 0u + 0x00000006u; func_0885a864(c, ram); }
    { goto L_0884ebc8; }
L_0884eb30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884eb40u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884eb6cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884eb98u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[3]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ebc8u; c->r[6] = 0u + 0x00000003u; func_0885a864(c, ram); }
L_0884ebc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884ef34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884ebf4u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    { goto L_0884ef34; }
L_0884ebfc:
    { c->r[31] = 0x0884ec04u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08899524(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    { c->r[31] = 0x0884ec10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08899648(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884ec20u; c->r[5] = c->r[2] + 0u; func_0885a954(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000044u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884ec30u; c->r[5] = c->r[2] + 0u; func_0885a954(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884ef34; }
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_0884ec48:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000044u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884ec64; }
    { goto L_0884ef34; }
L_0884ec64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884ec70u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000048u); func_088995a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884ec80u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000048u); func_088995f4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ecf8u; c->r[6] = 0u + 0x00000006u; func_0885a864(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ed6cu; c->r[6] = 0u + 0x00000006u; func_0885a864(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002684u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ede0u; c->r[6] = 0u + 0x00000006u; func_0885a864(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x0884edf0u; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_0884ec48; }
L_0884ee00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884ee10u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ee20u; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884ee30u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884ee5cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0884ee88u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000026acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[3]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884eeb8u; c->r[6] = 0u + 0x00000003u; func_0885a864(c, ram); }
    { goto L_0884ef34; }
L_0884eec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884eed0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884eee0u; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    { goto L_0884ef34; }
L_0884eee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884eef8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ef08u; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
    { c->r[31] = 0x0884ef10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b2778(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884ef1cu; c->r[5] = c->r[2] + 0u; func_0885a954(c, ram); }
    { c->r[31] = 0x0884ef24u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b27a4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884ef34u; c->r[6] = 0u + 0x00000008u; func_0885a864(c, ram); }
L_0884ef34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884efd0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884ef50u; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a72c(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884efd0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884ef74u; c->r[6] = c->r[2] + 0u; func_0884fb18(c, ram); }
    { goto L_0884efd0; }
L_0884ef7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884efb0; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884efb0; }
    { goto L_0884efd0; }
L_0884efb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0884efc0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884efd0u; c->r[6] = 0u + 0x0000000cu; func_0885a864(c, ram); }
L_0884efd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884efdcu; c->r[5] = 0u + 0x00000002u; func_0885ab78(c, ram); }
L_0884efdc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_0884e2c4 */
}

/* func_0885470c  0x0885470c..0x08854954  584 bytes, source=fde */
void func_0885470c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885470cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08854748; }
    { goto L_0885493c; }
L_08854748:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854754u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885493c; }
    { c->r[31] = 0x0885476cu; c->r[16] = c->r[30] + 0x00000010u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08854788u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0885479cu; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088547a8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088547b4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088547c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08854828; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a20u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002a24u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00002a28u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08854808u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_08854828:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854834u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885489c; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a2cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002a24u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00002a30u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885487cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_0885489c:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a34u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002a34u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088548ccu; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088548e0u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
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
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a38u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08854930u; c->r[7] = 0u + 0x0000000bu; func_089c510c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0885493cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0885493c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0885470c */
}

/* func_08858fe8  0x08858fe8..0x08859940  2392 bytes, source=fde */
void func_08858fe8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858fe8u);
    c->r[29] = c->r[29] + 0xfffffa00u;
    mem_w32(ram, c->r[29] + 0x000005f8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000005f4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000005f0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08859018; }
    { goto L_08859928; }
L_08859018:
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9230u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859810; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9298u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08859040u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9318u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08859054u; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002d54u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002d5cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002d60u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088590c4u; c->r[4] = c->r[4] + 0x00002d80u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002c88u;
    { c->r[31] = 0x088590ecu; c->r[8] = 0u + 0x000015c3u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088590f8u; c->r[4] = c->r[4] + 0x00002d80u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002c88u;
    { c->r[31] = 0x08859120u; c->r[8] = 0u + 0x000015c4u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0885912cu; c->r[4] = c->r[4] + 0x00002d80u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002c88u;
    { c->r[31] = 0x08859154u; c->r[8] = 0u + 0x000015c5u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08859160u; c->r[4] = c->r[4] + 0x00002d80u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000190u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002c88u;
    { c->r[31] = 0x08859188u; c->r[8] = 0u + 0x00001587u; func_089cdef8(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000250u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088591a0u; c->r[6] = 0u + 0x00000200u; func_0882b810(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088591b4u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000250u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9298u;
    c->r[5] = 0u + 0x00000080u;
    { c->r[31] = 0x088591ccu; c->r[6] = c->r[2] + 0u; func_08a06b38(c, ram); }
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088591e0u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000490u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088591f4u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x088591fcu; func_08902e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885928c; }
    c->r[2] = c->r[30] + 0x00000550u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e08u;
    { c->r[31] = 0x0885921cu; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000590u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e1cu;
    { c->r[31] = 0x08859234u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000550u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859244u; c->r[5] = 0u + 0x00000040u; func_0882925c(c, ram); }
    c->r[2] = c->r[30] + 0x00000590u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859254u; c->r[5] = 0u + 0x00000040u; func_0882925c(c, ram); }
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[3] = c->r[30] + 0x00000550u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000040u;
    { c->r[31] = 0x0885926cu; c->r[6] = c->r[3] + 0u; func_08a06664(c, ram); }
    c->r[2] = c->r[30] + 0x00000490u;
    c->r[3] = c->r[30] + 0x00000590u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000040u;
    { c->r[31] = 0x08859284u; c->r[6] = c->r[3] + 0u; func_08a06664(c, ram); }
    { goto L_088592f4; }
L_0885928c:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08859298u; c->r[4] = c->r[4] + 0x00002d80u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002c88u;
    { c->r[31] = 0x088592c0u; c->r[8] = 0u + 0x000015c7u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088592ccu; c->r[4] = c->r[4] + 0x00002d80u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000490u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002c88u;
    { c->r[31] = 0x088592f4u; c->r[8] = 0u + 0x000015c7u; func_089cdef8(c, ram); }
L_088592f4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859300u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08859318; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053d1u);
    { mem_w32(ram, c->r[30] + 0x000005d0u, c->r[2]); goto L_08859328; }
L_08859318:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859324u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w32(ram, c->r[30] + 0x000005d0u, c->r[2]);
L_08859328:
    { c->r[31] = 0x08859330u; c->r[4] = mem_r32(ram, c->r[30] + 0x000005d0u); func_08968f28(c, ram); }
    c->r[2] = c->r[2] + 0x000002d7u;
    mem_w32(ram, c->r[30] + 0x000005d4u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff8b3cu);
    c->r[2] = c->r[2] + 0x000002fau;
    mem_w32(ram, c->r[30] + 0x000005d8u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859354u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088593c4; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002d68u);
    mem_w32(ram, c->r[30] + 0x00000590u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002d6cu);
    mem_w32(ram, c->r[30] + 0x00000594u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002d70u);
    mem_w32(ram, c->r[30] + 0x00000598u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002d74u);
    mem_w32(ram, c->r[30] + 0x0000059cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002d78u);
    mem_w32(ram, c->r[30] + 0x000005a0u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002d7cu);
    { c->r[31] = 0x088593b0u; mem_w32(ram, c->r[30] + 0x000005a4u, c->r[2]); func_089794e8(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000590u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000005d4u, c->r[2]);
L_088593c4:
    c->r[2] = c->r[30] + 0x000004d0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088593d8u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000510u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088593ecu; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000550u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08859400u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x08859408u; c->r[4] = mem_r32(ram, c->r[30] + 0x000005d4u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000005dcu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000005e0u, 0u);
L_08859410:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000005dcu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08859430; }
    { goto L_08859460; }
L_08859430:
    c->r[3] = c->r[30] + 0x00000550u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000005dcu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000005e0u, c->r[2]); goto L_08859410; }
L_08859460:
    c->r[2] = c->r[30] + 0x00000550u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859470u; c->r[5] = 0u + 0x00000040u; func_0882925c(c, ram); }
    c->r[2] = c->r[30] + 0x000004d0u;
    c->r[3] = c->r[30] + 0x00000550u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000040u;
    { c->r[31] = 0x08859488u; c->r[6] = c->r[3] + 0u; func_08a06664(c, ram); }
    { c->r[31] = 0x08859490u; c->r[4] = mem_r32(ram, c->r[30] + 0x000005d8u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000510u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000040u;
    { c->r[31] = 0x088594a8u; c->r[6] = c->r[3] + 0u; func_08a06664(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000250u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088594c0u; c->r[6] = 0u + 0x00000200u; func_0882b810(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088594d4u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088594e8u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000490u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088594fcu; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859510u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859524u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x000004d0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859538u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885954cu; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000510u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859560u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859574u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000190u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08859588u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000250u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9318u;
    c->r[5] = 0u + 0x00000400u;
    { c->r[31] = 0x088595a0u; c->r[6] = c->r[2] + 0u; func_08a06b38(c, ram); }
    mem_w32(ram, c->r[30] + 0x000005e0u, 0u);
L_088595a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9318u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088595c8; }
    { goto L_088595d8; }
L_088595c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000005e0u, c->r[2]); goto L_088595a4; }
L_088595d8:
    c->r[2] = c->r[30] + 0x000005b0u;
    { c->r[31] = 0x088595e4u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24c6cu); /* sceRtcGetCurrentClockLocalTime */ }
    c->r[3] = 0x08a90000u;
    c->r[3] = c->r[3] + 0xffff9318u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000005e0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[30] + 0x000005b0u);
    c->r[7] = mem_r16(ram, c->r[30] + 0x000005b2u);
    c->r[8] = mem_r16(ram, c->r[30] + 0x000005b4u);
    c->r[9] = mem_r16(ram, c->r[30] + 0x000005b6u);
    c->r[10] = mem_r16(ram, c->r[30] + 0x000005b8u);
    c->r[11] = mem_r16(ram, c->r[30] + 0x000005bau);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00002d8cu;
    { c->r[31] = 0x08859620u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08859628u; func_0884d478(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x08859634u; mem_w32(ram, c->r[30] + 0x000005e0u, c->r[2]); func_0884d49c(c, ram); }
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x000005dcu, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8e48u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08859650u; c->r[6] = 0u + 0x00000200u; func_08a19ec4(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08859664u; c->r[4] = c->r[2] + 0u; func_08859a20(c, ram); }
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8e48u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b38u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8e48u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8b44u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[16] = 0x08a90000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0xffff8e48u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088596acu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = 0x08a90000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0xffff8e48u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088596c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000du, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8e48u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8b3cu);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8e48u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8b3eu);
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8e48u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8b40u);
    mem_w8(ram, c->r[3] + 0x00000114u, c->r[2]);
    c->r[16] = 0x08a90000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0xffff8e48u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859718u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000115u, c->r[2]);
    c->r[16] = 0x08a90000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0xffff8e48u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859730u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000116u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8e48u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e74u);
    mem_w32(ram, c->r[3] + 0x00000110u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8e48u);
    c->r[2] = 0u + 0x00000023u;
    mem_w8(ram, c->r[3] + 0x000001ffu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[16] = 0x08a90000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0xffff8e48u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000005e0u);
    { c->r[31] = 0x08859780u; c->r[6] = mem_r32(ram, c->r[30] + 0x000005dcu); func_089d9d14(c, ram); }
    { c->r[31] = 0x08859788u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_0885848c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x08859798u; c->r[5] = 0u + 0x00000020u; func_089d9844(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x088597a8u; c->r[5] = 0u + 0x00000001u; func_089d98ac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffff9298u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x088597c4u; c->r[6] = c->r[6] + 0xffff9318u; func_089d9728(c, ram); }
    { c->r[31] = 0x088597ccu; func_0884d49c(c, ram); }
    { c->r[31] = 0x088597d4u; c->r[16] = c->r[2] + 0u; func_0884d478(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x088597e8u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = c->r[6] + 0x00002dacu;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00002db8u;
    c->r[8] = 0x08a40000u;
    { c->r[31] = 0x08859810u; c->r[8] = c->r[8] + 0x00002dc4u; func_089d8d50(c, ram); }
L_08859810:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9230u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08859928; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859830u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x000005e4u, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000005e4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088598b0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000005e4u);
    c->r[2] = ((s32)c->r[4] < (s32)0xffffffffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08859870; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0383u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000005e4u);
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_088598cc; }
    { goto L_088598f0; }
L_08859870:
    c->r[2] = 0u + 0xffffffffu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000005e4u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_08859904; }
    c->r[7] = mem_r32(ram, c->r[30] + 0x000005e4u);
    { int _c = (c->r[7] == 0u); if (_c) goto L_08859894; }
    { goto L_088598f0; }
L_08859894:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x088598a8u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
    { goto L_08859904; }
L_088598b0:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08860000u;
    { c->r[31] = 0x088598c4u; c->r[5] = c->r[5] + 0xffff8fe8u; func_0880f03c(c, ram); }
    { goto L_08859904; }
L_088598cc:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001cd8u;
    c->r[6] = 0x08860000u;
    { c->r[31] = 0x088598e8u; c->r[6] = c->r[6] + 0xffff9940u; func_0880f1d4(c, ram); }
    { goto L_08859904; }
L_088598f0:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x08859904u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_08859904:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859910u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08859928; }
    { c->r[31] = 0x08859928u; func_088586a8(c, ram); }
L_08859928:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000005f8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000005f4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000005f0u);
    { c->r[29] = c->r[29] + 0x00000600u; return; }
    return; /* fell out of func_08858fe8 */
}

/* func_0885a864  0x0885a864..0x0885a8c0  92 bytes, source=fde */
void func_0885a864(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a864u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0885a894u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a864 */
}

/* func_0885c4f0  0x0885c4f0..0x0885c9b0  1216 bytes, source=fde */
void func_0885c4f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885c4f0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c878; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c878; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000e40u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aeu);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00001044u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c5b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00001044u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0885c5b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0xffffffdfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885c73c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (c->r[3] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c6e8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885c710; }
    { goto L_0885c7c8; }
L_0885c6e8:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885c76c; }
    c->r[2] = 0u + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885c79c; }
    { goto L_0885c7c8; }
L_0885c710:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    { mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]); goto L_0885c7c8; }
L_0885c73c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]); goto L_0885c7c8; }
L_0885c76c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]); goto L_0885c7c8; }
L_0885c79c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] | 0x0003u;
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
L_0885c7c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c808; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
L_0885c808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c848; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
L_0885c848:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000034u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0885c86cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0885c878:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] >> 15;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c998; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c998; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c96c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c96c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885c96cu; c->r[5] = c->r[2] + 0u; func_0885c9b0(c, ram); }
L_0885c96c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
L_0885c998:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885c4f0 */
}

/* func_08861794  0x08861794..0x08861864  208 bytes, source=sweep */
void func_08861794(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861794u);
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
    return; /* fell out of func_08861794 */
}

/* func_0886289c  0x0886289c..0x08862aec  592 bytes, source=sweep */
void func_0886289c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886289cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000010u, 0u);
    mem_w8(ram, c->r[30] + 0x00000011u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_08862934; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08862934:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000002u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_08862998; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
L_08862998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000004u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_088629fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
L_088629fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000006u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08862a34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000007u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08862a34; }
    { goto L_08862aa4; }
L_08862a34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_08862aa4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862ad8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000011u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08862ad8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0886289c */
}

/* func_08866af0  0x08866af0..0x08866c50  352 bytes, source=fde */
void func_08866af0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866af0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08866b14u; c->r[4] = c->r[2] + 0u; func_08866378(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866b20u; c->r[4] = c->r[4] + 0x00000af4u; func_08826aa0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866b5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000001au, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08866b4cu; c->r[5] = c->r[2] + 0u; func_088663bc(c, ram); }
    { c->r[31] = 0x08866b54u; func_08866d18(c, ram); }
    { goto L_08866c38; }
L_08866b5c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d1u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08866bcc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08866b8cu; c->r[5] = c->r[2] + 0u; func_088663bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08866bbcu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_08866c38; }
L_08866bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08866becu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866c10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_08866c38; }
L_08866c10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08866c38u; c->r[5] = c->r[2] + 0u; func_088663bc(c, ram); }
L_08866c38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08866af0 */
}

/* func_0886e844  0x0886e844..0x0886ea88  580 bytes, source=sweep */
void func_0886e844(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886e844u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
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
    { c->r[31] = 0x0886e8a0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886ea70; }
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
L_0886ea70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0886e844 */
}

/* func_088729ec  0x088729ec..0x08873408  2588 bytes, source=fde */
void func_088729ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088729ecu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036fcu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036fcu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08872a5cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_0887b3f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000371cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = 0x55550000u;
    c->r[2] = c->r[2] | 0x5556u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u - c->r[3];
    c->r[3] = alx_max(c->r[3], c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08872b7c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08872b00; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08872b18; }
    { goto L_08872c44; }
L_08872b00:
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08872be0; }
    { goto L_08872c44; }
L_08872b18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872b3c; }
    { goto L_08872b64; }
L_08872b3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003704u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_08872cf0; }
L_08872b64:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003708u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08872cf0; }
L_08872b7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872ba0; }
    { goto L_08872bc8; }
L_08872ba0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000370cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_08872cf0; }
L_08872bc8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003710u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08872cf0; }
L_08872be0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872c04; }
    { goto L_08872c2c; }
L_08872c04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003714u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_08872cf0; }
L_08872c2c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003718u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08872cf0; }
L_08872c44:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000371cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = 0x55550000u;
    c->r[2] = c->r[2] | 0x5556u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08872cec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872cac; }
    { goto L_08872cd4; }
L_08872cac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_08872cf0; }
L_08872cd4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003720u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08872cf0; }
L_08872cec:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08872cf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003724u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08872d4cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000040u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036fcu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872db0; }
    { goto L_08872dbc; }
L_08872db0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_08872dbc:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000370cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000b0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872e00; }
    { goto L_08872fc0; }
L_08872e00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003728u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872e40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872e40; }
    { goto L_08872e50; }
L_08872e40:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_08872ebc; }
L_08872e50:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000372cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872e74; }
    { goto L_08872eb0; }
L_08872e74:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003728u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003730u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_08872ebc; }
L_08872eb0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003734u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_08872ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000b0u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000b0u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = c->f[2] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872f0c; }
    { goto L_08872f10; }
L_08872f0c:
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_08872f10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08872f34; }
    { goto L_08872f84; }
L_08872f34:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003738u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[3] + 0x000000a4u, c->f[0]); goto L_088731e8; }
L_08872f84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[3] + 0x000000a4u, c->f[0]); goto L_088731e8; }
L_08872fc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000000b0u);
    c->f[0] = c->f[0] - c->f[1];
    c->f[0] = c->f[2] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887301c; }
    { goto L_08873024; }
L_0887301c:
    { mem_w32(ram, c->r[30] + 0x00000038u, 0u); goto L_08873054; }
L_08873024:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873048; }
    { goto L_08873054; }
L_08873048:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
L_08873054:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003728u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873078; }
    { goto L_08873088; }
L_08873078:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036fcu);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_088730f4; }
L_08873088:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000372cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088730ac; }
    { goto L_088730e8; }
L_088730ac:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003728u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000373cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003740u);
    c->f[1] = c->f[0] - c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_088730f4; }
L_088730e8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088730f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003744u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887311c; }
    { goto L_08873130; }
L_0887311c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003734u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_08873130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088731e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873168; }
    { goto L_088731b0; }
L_08873168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000036fcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[2] + 0x000000a4u, c->f[0]); goto L_088731e8; }
L_088731b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x000000a4u, c->f[0]);
L_088731e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873220; }
    { goto L_08873254; }
L_08873220:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000ccu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]); goto L_0887328c; }
L_08873254:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000ccu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_0887328c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x000000a4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088732bc; }
    { goto L_08873364; }
L_088732bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000acu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003740u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[1] = c->f[0] / c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873310; }
    { goto L_08873320; }
L_08873310:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003700u);
    { mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]); goto L_08873344; }
L_08873320:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873340; }
    { goto L_08873344; }
L_08873340:
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_08873344:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x000000a4u, c->f[0]);
L_08873364:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08873378u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000040u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003748u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000374cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003750u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003750u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x000000a4u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[16] + 0x000000a4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088733e4; }
    { goto L_088733ec; }
L_088733e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a4u, 0u);
L_088733ec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088729ec */
}

/* func_0887c318  0x0887c318..0x0887c34c  52 bytes, source=sweep */
void func_0887c318(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887c318u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000100u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000100u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887c318 */
}

/* func_08881760  0x08881760..0x088817a4  68 bytes, source=fde */
void func_08881760(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08881760u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08881790u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08881760 */
}

/* func_08883490  0x08883490..0x088834c4  52 bytes, source=sweep */
void func_08883490(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883490u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe6dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08883490 */
}

/* func_0888b9c8  0x0888b9c8..0x0888ba64  156 bytes, source=sweep */
void func_0888b9c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b9c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xd2000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888ba00u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x9c000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888ba24u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x9d000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888ba50u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b9c8 */
}

/* func_0888c604  0x0888c604..0x0888c648  68 bytes, source=sweep */
void func_0888c604(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c604u);
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
    { c->r[31] = 0x0888c634u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c604 */
}

/* func_0888d2f0  0x0888d2f0..0x0888d35c  108 bytes, source=sweep */
void func_0888d2f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d2f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xdb000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d348u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d2f0 */
}

/* func_088900ac  0x088900ac..0x088900d4  40 bytes, source=sweep */
void func_088900ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088900acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088900ac */
}

/* func_08894d8c  0x08894d8c..0x08894f10  388 bytes, source=fde */
void func_08894d8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08894d8cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0x0000003fu;
    { c->r[31] = 0x08894dc0u; c->r[8] = 0u + 0x00000001u; func_089c42dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08894de4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08894dec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08894e08; }
    { goto L_08894ea4; }
L_08894e08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08894e20u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08894e50u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08894e68u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08894e94u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08894dec; }
L_08894ea4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08894efcu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_0888bd5c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08894d8c */
}

/* func_08899acc  0x08899acc..0x08899b1c  80 bytes, source=sweep */
void func_08899acc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899accu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08899b00; }
    { c->r[31] = 0x08899af8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08899b1c(c, ram); }
    { goto L_08899b08; }
L_08899b00:
    { c->r[31] = 0x08899b08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08899b54(c, ram); }
L_08899b08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899acc */
}

/* func_0889a8c8  0x0889a8c8..0x0889a950  136 bytes, source=fde */
void func_0889a8c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a8c8u);
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
    { c->r[31] = 0x0889a928u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000014u); func_0889990c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0889a93cu; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a8c8 */
}

/* func_0889f5e0  0x0889f5e0..0x0889f630  80 bytes, source=sweep */
void func_0889f5e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f5e0u);
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
    return; /* fell out of func_0889f5e0 */
}

/* func_088a063c  0x088a063c..0x088a3304  11464 bytes, source=fde */
void func_088a063c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a063cu);
L_088a063c:
    c->r[29] = c->r[29] + 0xfffffc90u;
    mem_w32(ram, c->r[29] + 0x00000364u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000360u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000035cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000358u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000354u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000350u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000034cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000034cu);
    c->r[2] = (c->r[3] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a32e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000034cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000044b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088a063cu: goto L_088a063c; case 0x088a06b0u: goto L_088a06b0; case 0x088a099cu: goto L_088a099c; case 0x088a0f1cu: goto L_088a0f1c; case 0x088a1e78u: goto L_088a1e78; case 0x088a32e0u: goto L_088a32e0; default: recomp_trap_unknown_indirect(c, ram, 0x088a06a8u, _t); return; } }
L_088a06b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088a06c8u; c->r[5] = 0u + 0x00000004u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088a06d4u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x00080000u;
    { c->r[31] = 0x088a06e4u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a06f8u; c->r[5] = c->r[5] + 0x00004434u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a07ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000018a0u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a60u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a78u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a80u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a88u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006a90u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006aa8u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ab0u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ac0u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ab8u;
    { mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]); goto L_088a088c; }
L_088a07ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000254u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x000002a0u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000300u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000308u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000310u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x000002b8u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000318u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000320u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x000002e8u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000330u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000338u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000340u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000244u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000c08u;
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088a088c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a08a0u; c->r[5] = c->r[5] + 0x0000443cu; func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000044u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a08b8u; c->r[5] = c->r[5] + 0x00004448u; func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000046u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a08dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000044u);
    mem_w16(ram, c->r[2] + 0x00000046u, c->r[3]);
L_088a08dc:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a08f0u; c->r[5] = c->r[5] + 0x00004454u; func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000048u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a0908u; c->r[5] = c->r[5] + 0x00004460u; func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x0000004au, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0x00001cd8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x0000004cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x0000004du, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x0000003cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a096c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000400u;
    { c->r[31] = 0x088a0964u; c->r[6] = 0u + 0x00000400u; func_0889fe08(c, ram); }
    { goto L_088a0980; }
L_088a096c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088a0980u; c->r[6] = 0u + 0x00000400u; func_0889fe08(c, ram); }
L_088a0980:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0x000018a8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088a0994u; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    { goto L_088a32e0; }
L_088a099c:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_088a09a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a09c0; }
    { goto L_088a0a50; }
L_088a09c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000018a8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x8000u;
    c->r[3] = (u32)((s32)c->r[2] >> 15);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000018a8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x8000u;
    c->r[3] = (u32)((s32)c->r[2] >> 15);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_088a09a8; }
L_088a0a50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000446cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088a0a7cu; mem_wf32(ram, c->r[4] + 0x00000040u, c->f[0]); func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004470u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004470u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a0af0; }
    { goto L_088a0afc; }
L_088a0af0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { mem_wf32(ram, c->r[30] + 0x00000340u, c->f[0]); goto L_088a0b04; }
L_088a0afc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x00000340u, c->f[0]);
L_088a0b04:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000340u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a0b2c; }
    { goto L_088a0b38; }
L_088a0b2c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    { mem_wf32(ram, c->r[30] + 0x00000344u, c->f[0]); goto L_088a0b40; }
L_088a0b38:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x00000344u, c->f[0]);
L_088a0b40:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000344u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004474u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004478u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    { c->r[31] = 0x088a0bc0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    { c->r[31] = 0x088a0bccu; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000003cu); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004478u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088a0bf4u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000447cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000447cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004478u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088a0c4cu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = -c->f[0];
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000447cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0x00001cd8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004478u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a0cc4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088a0cf8u; c->r[4] = c->r[2] + 0u; func_088a4604(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a32e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000062u, c->r[3]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[2] < (s32)0xfffffff0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0d4c; }
    { mem_w32(ram, c->r[30] + 0x00000064u, 0u); goto L_088a0ddc; }
L_088a0d4c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0d80; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004480u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]); goto L_088a0ddc; }
L_088a0d80:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000001d0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0da0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004474u);
    { mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]); goto L_088a0ddc; }
L_088a0da0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000001f0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0dd8; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = 0u + 0x000001f0u;
    c->r[2] = c->r[2] - c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004480u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]); goto L_088a0ddc; }
L_088a0dd8:
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_088a0ddc:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = ((s32)c->r[2] < (s32)0xfffffff0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0df4; }
    { mem_w32(ram, c->r[30] + 0x00000068u, 0u); goto L_088a0e84; }
L_088a0df4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0e28; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004480u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]); goto L_088a0e84; }
L_088a0e28:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0e48; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004474u);
    { mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]); goto L_088a0e84; }
L_088a0e48:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000120u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0e80; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000062u);
    c->r[2] = 0u + 0x00000120u;
    c->r[2] = c->r[2] - c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004480u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]); goto L_088a0e84; }
L_088a0e80:
    mem_w32(ram, c->r[30] + 0x00000068u, 0u);
L_088a0e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004484u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004488u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a0ed0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088a0f14u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    { goto L_088a32e0; }
L_088a0f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a0f3c; }
    { goto L_088a32e0; }
L_088a0f3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a32e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a0f64; }
    { goto L_088a32e0; }
L_088a0f64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088a0ff8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000448cu);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[1] = 0x08a70000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004490u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004494u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004498u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[1] = 0x08a70000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004490u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004474u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a1150u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088a115cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf60u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf64u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf68u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf6cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x088a11b4u; c->r[6] = c->r[6] + 0xffffbf60u; func_0884d26c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x088a11c0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u); func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a11e0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_0884d26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088a11fcu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x088a1208u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a1224u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a1244u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a1260u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[4] = 0u + 0x00000050u;
    { c->r[31] = 0x088a126cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = 0u + 0x00000050u;
    { c->r[31] = 0x088a127cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0u + 0x00000050u;
    { c->r[31] = 0x088a128cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x088a13bcu; c->r[6] = 0u + 0x00000050u; func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x088a13ccu; c->r[6] = 0u + 0x00000050u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000114u, 0u);
L_088a13d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a13e8; }
    { goto L_088a1518; }
L_088a13e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000449cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000449cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]); goto L_088a13d0; }
L_088a1518:
    c->r[18] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[19] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[17] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[16] = c->r[2] + 0x0000003cu;
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088a1540u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[19] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a1564u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000068u); func_0884bff4(c, ram); }
    c->r[18] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[19] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[17] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[16] = c->r[2] + 0x0000003cu;
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088a158cu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[19] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000448cu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a15b8u; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[18] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[19] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[17] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[16] = c->r[2] + 0x0000003cu;
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088a15e0u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[19] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a163cu; c->r[5] = 0u + 0x00000005u; func_088a34ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a1684u; c->r[5] = 0u + 0x00000003u; func_088a34ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a16d4u; c->r[7] = 0u + 0u; func_088a3428(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088a16e8u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088a1738u; c->r[6] = c->r[3] + 0u; func_088a34e8(c, ram); }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = 0u + 0x0000019eu;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000043e4u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000043e8u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000043ecu);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000043f0u);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x44000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a17ccu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a1a90; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a17f0u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a180cu; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000044u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a1828u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a187cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088a18d4u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000024u); func_088a3348(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a18ecu; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a1908u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a195cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088a19b4u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000020u); func_088a3348(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a19ccu; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a1a20u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088a1a78u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000110u); func_088a3348(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a1a88u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000130u); func_089e0008(c, ram); }
    { goto L_088a1d44; }
L_088a1a90:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a1a9cu; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a1aacu; c->r[5] = c->r[2] + 0u; func_089e066c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000044u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a1ac8u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a1b1cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088a1b74u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000024u); func_088a3348(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a1b80u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a1b94u; c->r[5] = c->r[2] + 0u; func_089e066c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a1bb0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a1c04u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088a1c5cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000020u); func_088a3348(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a1c68u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a1c7cu; c->r[5] = c->r[2] + 0u; func_089e066c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x47000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a1cd0u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088a1d28u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000110u); func_088a3348(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a1d34u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a1d44u; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
L_088a1d44:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a1d90u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a1dd8u; c->r[5] = 0u + 0x00000003u; func_088a3470(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a1e20u; c->r[5] = 0u + 0x00000005u; func_088a3470(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a1e70u; c->r[7] = 0u + 0x00000002u; func_088a3428(c, ram); }
    { goto L_088a32e0; }
L_088a1e78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a1e90; }
    { goto L_088a32e0; }
L_088a1e90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a32e0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a4u);
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    { c->r[31] = 0x088a1ec4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000068u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    { c->r[31] = 0x088a1ed0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000068u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a1ef4; }
    { goto L_088a2d38; }
L_088a1ef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000048u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a1f0c; }
    { goto L_088a2d38; }
L_088a1f0c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000140u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a2060; }
L_088a1fe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a2038; }
L_088a2008:
    { c->r[31] = 0x088a2010u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a2008; }
L_088a2038:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a1fe0; }
L_088a2060:
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088a2074u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000140u, 0u);
    mem_w32(ram, c->r[30] + 0x00000144u, 0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000170u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000160u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000164u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000150u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000154u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000180u, 0u);
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001b0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001a0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000190u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000194u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x000001c0u, 0u);
    mem_w32(ram, c->r[30] + 0x000001c4u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001f4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e4u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d0u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000200u, 0u);
    mem_w32(ram, c->r[30] + 0x00000204u, 0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000230u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000234u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000220u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000224u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000210u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000214u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000240u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a2324; }
L_088a22a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a22fc; }
L_088a22cc:
    { c->r[31] = 0x088a22d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a22cc; }
L_088a22fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a22a4; }
L_088a2324:
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a234cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000244u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000248u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000024cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a239cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000250u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000258u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000025cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a23e4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000260u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000264u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000268u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000026cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a2424u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000270u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000274u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000278u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000027cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a246cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000280u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000284u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000288u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000028cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a24acu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000294u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000298u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000029cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a24f4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x000002a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x000002a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x000002a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x000002acu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a2544u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x000002b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x000002b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x000002bcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a258cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x000002c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x000002c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x000002c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x000002ccu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a25dcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x000002d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x000002d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x000002d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x000002dcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a2624u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x000002e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x000002e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x000002e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x000002ecu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a2664u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x000002f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x000002f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x000002f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x000002fcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a26acu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000300u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000304u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000308u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000030cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a26ecu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000310u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000314u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000318u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000031cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a2734u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000320u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000324u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000328u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000032cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000044a8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a2784u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000330u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000334u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000338u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000033cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000c0u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a27fc; }
L_088a27cc:
    { c->r[31] = 0x088a27d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000118u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a27cc; }
L_088a27fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000448cu);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a28f0u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000003cu); func_0884bff4(c, ram); }
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004474u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088a2914u; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] + 0xfffffff8u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] + 0xfffffff8u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088a29b8; }
    { mem_w32(ram, c->r[30] + 0x00000130u, 0u); goto L_088a29d0; }
L_088a29b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000001d1u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a29d0; }
    c->r[2] = 0u + 0x000001d0u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
L_088a29d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088a29e4; }
    { mem_w32(ram, c->r[30] + 0x00000118u, 0u); goto L_088a29fc; }
L_088a29e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a29fc; }
    c->r[2] = 0u + 0x00000100u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
L_088a29fc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a2a28; }
    c->r[2] = 0x00040000u;
    mem_w32(ram, c->r[30] + 0x00000348u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000348u);
    c->r[3] = c->r[3] | 0x4000u;
    { mem_w32(ram, c->r[30] + 0x00000348u, c->r[3]); goto L_088a2a2c; }
L_088a2a28:
    mem_w32(ram, c->r[30] + 0x00000348u, 0u);
L_088a2a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000348u);
    { c->r[31] = 0x088a2a38u; mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a24a24u); /* sceGeEdramGetAddr */ }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[3] = c->r[2] << 9;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000018a8u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[8] = 0u + 0x00000010u;
    c->r[9] = 0u + 0x00000010u;
    c->r[10] = 0u + 0x00000200u;
    { c->r[31] = 0x088a2ad0u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000110u); func_088a33a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000004du);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w8(ram, c->r[4] + 0x0000004du, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088a2afcu; c->r[6] = 0u + 0x00000008u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000048u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a2b18u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a2b28u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a2c40; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a2b4cu; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a2b68u; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088a2b6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2b84; }
    { goto L_088a2c28; }
L_088a2b84:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088a2b88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2ba0; }
    { goto L_088a2be0; }
L_088a2ba0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088a2bd0u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088a2b88; }
L_088a2be0:
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] << 6;
    c->r[6] = c->r[3] + c->r[2];
    c->r[7] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x00000240u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x088a2c18u; c->r[8] = c->r[2] + 0u; func_089ec130(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088a2b6c; }
L_088a2c28:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a2c38u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u); func_089e0008(c, ram); }
    { goto L_088a2d38; }
L_088a2c40:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a2c4cu; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a2c5cu; c->r[5] = c->r[2] + 0u; func_089e066c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_088a2c60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2c78; }
    { goto L_088a2d1c; }
L_088a2c78:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088a2c7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2c94; }
    { goto L_088a2cd4; }
L_088a2c94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 4;
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088a2cc4u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088a2c7c; }
L_088a2cd4:
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 6;
    c->r[6] = c->r[3] + c->r[2];
    c->r[7] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x00000240u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x088a2d0cu; c->r[8] = c->r[2] + 0u; func_089ec130(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_088a2c60; }
L_088a2d1c:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a2d28u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a2d38u; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
L_088a2d38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2d5c; }
    { goto L_088a32e0; }
L_088a2d5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2d74; }
    { goto L_088a32e0; }
L_088a2d74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x088a2e08u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000448cu);
    mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a2efcu; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000003cu); func_0884bff4(c, ram); }
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004474u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088a2f20u; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088a2f34u; c->r[6] = 0u + 0x00000008u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a2f50u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044acu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000044acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x088a2f7cu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0x000043f4u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088a2f98u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a2fa4u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000118u, 0u);
L_088a2fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a2fc4; }
    { goto L_088a32d0; }
L_088a2fc4:
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088a2fd0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ae4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000020u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ac4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ae4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000024u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ac4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ae4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000020u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ac4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ae4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000024u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006ac4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006b04u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088a3170u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u); func_0884bff4(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000b4u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000b4u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a3268; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a3260u; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
    { goto L_088a328c; }
L_088a3268:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a3274u; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a328cu; c->r[5] = c->r[2] + 0u; func_089e066c(c, ram); }
L_088a328c:
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[7] = c->r[30] + 0x00000100u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000044b0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088a32c0u; c->f[12] = c->f[0]; func_089ecce4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]); goto L_088a2fac; }
L_088a32d0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a32e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000130u); func_089e0008(c, ram); }
L_088a32e0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000364u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000360u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000035cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000358u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000354u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000350u);
    { c->r[29] = c->r[29] + 0x00000370u; return; }
    return; /* fell out of func_088a063c */
}

/* func_088a434c  0x088a434c..0x088a4390  68 bytes, source=sweep */
void func_088a434c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a434cu);
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
    { c->r[31] = 0x088a437cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a434c */
}

/* func_088adc68  0x088adc68..0x088adcac  68 bytes, source=sweep */
void func_088adc68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adc68u);
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
    { c->r[31] = 0x088adc98u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adc68 */
}

/* func_088b1fd4  0x088b1fd4..0x088b20b0  220 bytes, source=sweep */
void func_088b1fd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b1fd4u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b2068; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b202c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b2054; }
    { goto L_088b209c; }
L_088b202c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b207c; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b2090; }
    { goto L_088b209c; }
L_088b2054:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2060u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088b2298(c, ram); }
    { goto L_088b209c; }
L_088b2068:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2074u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088b2398(c, ram); }
    { goto L_088b209c; }
L_088b207c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2088u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088b2468(c, ram); }
    { goto L_088b209c; }
L_088b2090:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b209cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088b2538(c, ram); }
L_088b209c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b1fd4 */
}

/* func_088b2ee8  0x088b2ee8..0x088b2f18  48 bytes, source=sweep */
void func_088b2ee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2ee8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088b2f04u; c->r[5] = 0u | 0xffffu; func_088b1e5c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088b2ee8 */
}

/* func_088ba4f4  0x088ba4f4..0x088ba5c0  204 bytes, source=fde */
void func_088ba4f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba4f4u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ba51cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ba528u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088ba534u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ba548u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ba554u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088ba568u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ba580u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ba598u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088ba5a4u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000018u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_088ba4f4 */
}

/* func_088be8e4  0x088be8e4..0x088beb04  544 bytes, source=sweep */
void func_088be8e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be8e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088beaf0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004c08u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088be930u: goto L_088be930; case 0x088be944u: goto L_088be944; case 0x088be958u: goto L_088be958; case 0x088be96cu: goto L_088be96c; case 0x088be980u: goto L_088be980; case 0x088be994u: goto L_088be994; case 0x088be9a8u: goto L_088be9a8; case 0x088be9bcu: goto L_088be9bc; case 0x088be9d0u: goto L_088be9d0; case 0x088be9e4u: goto L_088be9e4; case 0x088be9f8u: goto L_088be9f8; case 0x088bea0cu: goto L_088bea0c; case 0x088bea20u: goto L_088bea20; case 0x088bea34u: goto L_088bea34; case 0x088bea4cu: goto L_088bea4c; case 0x088bea64u: goto L_088bea64; case 0x088bea7cu: goto L_088bea7c; case 0x088bea94u: goto L_088bea94; case 0x088beaa8u: goto L_088beaa8; case 0x088beabcu: goto L_088beabc; case 0x088bead0u: goto L_088bead0; case 0x088beae4u: goto L_088beae4; default: recomp_trap_unknown_indirect(c, ram, 0x088be928u, _t); return; } }
L_088be930:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be93cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088beba4(c, ram); }
    { goto L_088beaf0; }
L_088be944:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be950u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bebe8(c, ram); }
    { goto L_088beaf0; }
L_088be958:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be964u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bf3d0(c, ram); }
    { goto L_088beaf0; }
L_088be96c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be978u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bec2c(c, ram); }
    { goto L_088beaf0; }
L_088be980:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be98cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bec70(c, ram); }
    { goto L_088beaf0; }
L_088be994:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be9a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088becb4(c, ram); }
    { goto L_088beaf0; }
L_088be9a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be9b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088becf8(c, ram); }
    { goto L_088beaf0; }
L_088be9bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be9c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bed3c(c, ram); }
    { goto L_088beaf0; }
L_088be9d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be9dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bed80(c, ram); }
    { goto L_088beaf0; }
L_088be9e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be9f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bedc4(c, ram); }
    { goto L_088beaf0; }
L_088be9f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bea04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bee08(c, ram); }
    { goto L_088beaf0; }
L_088bea0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bea18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bee4c(c, ram); }
    { goto L_088beaf0; }
L_088bea20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bea2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bee90(c, ram); }
    { goto L_088beaf0; }
L_088bea34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088bea44u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088beed4(c, ram); }
    { goto L_088beaf0; }
L_088bea4c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088bea5cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088beed4(c, ram); }
    { goto L_088beaf0; }
L_088bea64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088bea74u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088beed4(c, ram); }
    { goto L_088beaf0; }
L_088bea7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088bea8cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088beed4(c, ram); }
    { goto L_088beaf0; }
L_088bea94:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088beaa0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bef24(c, ram); }
    { goto L_088beaf0; }
L_088beaa8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088beab4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bef68(c, ram); }
    { goto L_088beaf0; }
L_088beabc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088beac8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088befac(c, ram); }
    { goto L_088beaf0; }
L_088bead0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088beadcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088beff0(c, ram); }
    { goto L_088beaf0; }
L_088beae4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088beaf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bf47c(c, ram); }
L_088beaf0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be8e4 */
}

/* func_088bf634  0x088bf634..0x088bf688  84 bytes, source=fde */
void func_088bf634(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf634u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf650u; c->r[4] = c->r[4] + 0x00004c64u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff9a94u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf668u; c->r[4] = c->r[4] + 0x00004c70u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff9a98u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088bf634 */
}

/* func_088c264c  0x088c264c..0x088c274c  256 bytes, source=fde */
void func_088c264c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c264cu);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c26e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c26b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c26cc; }
    { goto L_088c2738; }
L_088c26b4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c2704; }
    { goto L_088c2738; }
L_088c26cc:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c26e0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c274c(c, ram); }
    { goto L_088c2738; }
L_088c26e8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c26fcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c29fc(c, ram); }
    { goto L_088c2738; }
L_088c2704:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c271cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c2738; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088c2738u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088c2738:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c264c */
}

/* func_088c8af0  0x088c8af0..0x088c8b5c  108 bytes, source=sweep */
void func_088c8af0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8af0u);
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
    { c->r[31] = 0x088c8b2cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8b48u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8af0 */
}

/* func_088ca600  0x088ca600..0x088ca870  624 bytes, source=fde */
void func_088ca600(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ca600u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[13]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ca638u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca648u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088ca654u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088ca668u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088ca674u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca688u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088ca694u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca6acu; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca6c0u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca6d4u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000503cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca714; }
    { goto L_088ca858; }
L_088ca714:
    { c->r[31] = 0x088ca71cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000060u); func_08a0fa04(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca748; }
    { goto L_088ca858; }
L_088ca748:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ca774; }
    { goto L_088ca788; }
L_088ca774:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    { c->r[31] = 0x088ca784u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000070u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
L_088ca788:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005044u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088ca7a0u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005044u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088ca7bcu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088ca7ccu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ca7e4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000078u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088ca818u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca82cu; c->r[5] = c->r[3] + 0u; func_0884c73c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088ca83cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000060u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088ca850u; c->r[6] = c->r[2] + 0u; func_0884c26c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_088ca858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_088ca600 */
}

/* func_088d2064  0x088d2064..0x088d2428  964 bytes, source=fde */
void func_088d2064(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d2064u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d20a0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_088d2408; }
L_088d20a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d23d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d23d4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005304u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[6] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x088d20f8u; c->r[8] = 0u + 0u; func_088d1e64(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d2264; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_088d2154:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d216c; }
    { goto L_088d2240; }
L_088d216c:
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
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005308u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088d21b4u; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000530cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000000u, c->f[0]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005308u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088d21f4u; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000530cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d2230u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c0414(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_088d2154; }
L_088d2240:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088d2264:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d23b0; }
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
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    { c->r[31] = 0x088d22b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d22ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d22e4; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088d22ec; }
L_088d22e4:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_088d22ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    mem_w16(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d2338u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d238c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d238c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088d2384u; c->r[7] = c->r[2] + 0u; func_088c099c(c, ram); }
    { goto L_088d23a0; }
L_088d238c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
L_088d23a0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { c->r[31] = 0x088d23b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u); func_088d1054(c, ram); }
L_088d23b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d23d4u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
L_088d23d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000059u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d23f0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_088d2408; }
L_088d23f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000059u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_088d2408:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088d2064 */
}

/* func_088d6270  0x088d6270..0x088d649c  556 bytes, source=fde */
void func_088d6270(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6270u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d6354; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d62d0; }
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d62f8; }
    { goto L_088d6488; }
L_088d62d0:
    c->r[2] = 0u + 0x00000017u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d63f8; }
    c->r[2] = 0u + 0x0000001cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d6444; }
    { goto L_088d6488; }
L_088d62f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000061u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6488; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6488; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x002bu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d634cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { goto L_088d6488; }
L_088d6354:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000bau;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6488; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0073u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d6384u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d63a0; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0074u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d63a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d63acu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d63c8; }
    c->r[2] = 0x30000000u;
    c->r[2] = c->r[2] | 0x0075u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d63c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d63f0u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { goto L_088d6488; }
L_088d63f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a2u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6488; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x002bu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d643cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { goto L_088d6488; }
L_088d6444:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000b7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6488; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x06000000u;
    c->r[4] = c->r[4] | 0x0006u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d6488u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
L_088d6488:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d6270 */
}

/* func_088da5f4  0x088da5f4..0x088dabc4  1488 bytes, source=fde */
void func_088da5f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088da5f4u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    c->r[4] = c->r[8] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000000au, c->r[3]);
    mem_w8(ram, c->r[30] + 0x0000000bu, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da630u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088da5a4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088da644; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    { mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]); goto L_088dabac; }
L_088da644:
    { c->r[31] = 0x088da64cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dabc4(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da66c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    { mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]); goto L_088dabac; }
L_088da66c:
    c->r[2] = 0u + 0x00000041u;
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000071u, 0u);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da6b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x000000feu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da6b0; }
    { goto L_088da6b8; }
L_088da6b0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
L_088da6b8:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000081u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da744; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a4cu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da6f8u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a58u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da728u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088da73cu; c->r[5] = c->r[5] + 0x00005a64u; func_08a1ad34(c, ram); }
    { goto L_088da9dc; }
L_088da744:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000082u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da7d0; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a4cu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da784u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a58u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da7b4u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088da7c8u; c->r[5] = c->r[5] + 0x00005a70u; func_08a1ad34(c, ram); }
    { goto L_088da9dc; }
L_088da7d0:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000085u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da85c; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a4cu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da810u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a58u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da840u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088da854u; c->r[5] = c->r[5] + 0x00005a7cu; func_08a1ad34(c, ram); }
    { goto L_088da9dc; }
L_088da85c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da904; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a88u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da8acu; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000000bu);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000088u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088da8c8u; c->r[5] = c->r[3] + 0u; func_088da4e4(c, ram); }
    c->r[8] = c->r[2] + 0u;
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a94u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da8fcu; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_088da9dc; }
L_088da904:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000039u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da97c; }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a4cu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da944u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005a58u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da974u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_088da9dc; }
L_088da97c:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000058a8u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088da9b0u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000084u); func_08a1ad34(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000058b4u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088da9dcu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000084u); func_08a1ad34(c, ram); }
L_088da9dc:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000081u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088daa14; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000082u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088daa14; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000085u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088daa14; }
    { goto L_088daa6c; }
L_088daa14:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088daa4c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[7] = c->r[30] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088daa44u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088daabc; }
L_088daa4c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088daa64u; c->r[6] = c->r[3] + 0u; func_089b7c54(c, ram); }
    { goto L_088daabc; }
L_088daa6c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088daaa4; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088daa9cu; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088daabc; }
L_088daaa4:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088daabcu; c->r[6] = c->r[3] + 0u; func_089b7c54(c, ram); }
L_088daabc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088daac8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f8bdc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dab04; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000au);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dab04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088daaecu; c->r[5] = 0x00800000u; func_0884d1b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088dab04u; c->r[4] = c->r[2] + 0u; func_088de8f8(c, ram); }
L_088dab04:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000081u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dab2c; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088dab20u; c->r[4] = c->r[4] + 0x00005a1cu; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dab2cu; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088dab2c:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000082u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dab54; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088dab48u; c->r[4] = c->r[4] + 0x00005a28u; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dab54u; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088dab54:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000083u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dab7c; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088dab70u; c->r[4] = c->r[4] + 0x00005aa0u; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dab7cu; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088dab7c:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000085u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088daba4; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088dab98u; c->r[4] = c->r[4] + 0x00005a34u; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088daba4u; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088daba4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
L_088dabac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_088da5f4 */
}

/* func_088de8f8  0x088de8f8..0x088de938  64 bytes, source=sweep */
void func_088de8f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de8f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088de928; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000001eu, c->r[2]);
L_088de928:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de8f8 */
}

/* func_088df784  0x088df784..0x088e0714  3984 bytes, source=fde */
void func_088df784(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df784u);
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
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dfbb0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088df7f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088df80c; }
    { goto L_088e06f8; }
L_088df7f4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e06cc; }
    { goto L_088e06f8; }
L_088df80c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088df818u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088df83cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088df860u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088df88cu; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088df8a0u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088df8b4u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088df8c0u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088df8ccu; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000019u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[4] = c->r[2] + 0x00000080u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000090u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b88u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005b88u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088dfa10u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b8cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000094u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000001du, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000001eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000001fu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000021u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000022u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000023u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088dfaac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dfac4; }
    { goto L_088dfb0c; }
L_088dfac4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088dfaac; }
L_088dfb0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000002du, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088dfb40u; c->r[4] = c->r[2] + 0u; func_0895b864(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b88u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005b88u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088dfb70u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffebd0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffebd4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffebd8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffebdcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffed00u, c->r[2]); goto L_088e06f8; }
L_088dfbb0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dfbe0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000018u, 0u);
L_088dfbe0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dfbecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfc04; }
    { goto L_088e06f8; }
L_088dfc04:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b88u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfd04; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088dfc28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dfc48; }
    { goto L_088dfd04; }
L_088dfc48:
    { c->r[31] = 0x088dfc50u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfc60; }
    { goto L_088dfcf4; }
L_088dfc60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfc98; }
    { goto L_088dfcf4; }
L_088dfc98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dfcb4; }
    { goto L_088dfcf4; }
L_088dfcb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088dfce0; }
    { goto L_088dfcf4; }
L_088dfce0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x0000001au, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_088dfcf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088dfc28; }
L_088dfd04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfd9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dfd9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    { c->r[31] = 0x088dfd3cu; c->r[4] = c->r[2] + 0u; func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfd54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000019u, c->r[2]); goto L_088dfd9c; }
L_088dfd54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfd9c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000019u, c->r[2]);
L_088dfd9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dff00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000001bu, 0u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088dfdc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dfde8; }
    { goto L_088dff00; }
L_088dfde8:
    { c->r[31] = 0x088dfdf0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfe00; }
    { goto L_088dfef0; }
L_088dfe00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfef0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfe90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfe74; }
    { mem_w32(ram, c->r[30] + 0x00000038u, 0u); goto L_088dfe90; }
L_088dfe74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfe90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000001bu, c->r[2]);
L_088dfe90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfed8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dfec0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_088dfed8; }
L_088dfec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dfed8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000001bu, c->r[2]);
L_088dfed8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dfef0; }
    { goto L_088e06f8; }
L_088dfef0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088dfdc8; }
L_088dff00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dffd4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088dff24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dff44; }
    { goto L_088dffd4; }
L_088dff44:
    { c->r[31] = 0x088dff4cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dff5c; }
    { goto L_088dffc4; }
L_088dff5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dffc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dffc4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000001cu, c->r[2]);
L_088dffc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088dff24; }
L_088dffd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0060; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[17] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b90u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e0020u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e0040u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e0060:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e00ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000060u;
    c->r[17] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b94u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e00acu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e00ccu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e00ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0178; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000070u;
    c->r[17] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b98u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e0138u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e0158u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e0178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e032c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x088e01a0u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088e01b4u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088e01bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e01dc; }
    { goto L_088e032c; }
L_088e01dc:
    { c->r[31] = 0x088e01e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e01f4; }
    { goto L_088e031c; }
L_088e01f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e0224; }
    { goto L_088e031c; }
L_088e0224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e0254; }
    { goto L_088e031c; }
L_088e0254:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x088e028cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000080u); func_088d3928(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e029c; }
    { goto L_088e031c; }
L_088e029c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088e031c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e031c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000003cu);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_088e031c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e01bc; }
L_088e032c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e034c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000001du, c->r[2]);
L_088e034c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e04a0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088e03a4u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b9cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e03c4u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e03e4u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e042c; }
    { goto L_088e043c; }
L_088e042c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_088e043c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e0464; }
    { goto L_088e0474; }
L_088e0464:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_088e0474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088e04a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e05dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001fu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e04d0; }
    { goto L_088e06f8; }
L_088e04d0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e04f0; }
    c->r[2] = 0u + 0x000000e5u;
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_088e054c; }
L_088e04f0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0510; }
    c->r[2] = 0u + 0x000000b5u;
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_088e054c; }
L_088e0510:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0530; }
    c->r[2] = 0u + 0x000000e5u;
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_088e054c; }
L_088e0530:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e06f8; }
    c->r[2] = 0u + 0x00000100u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_088e054c:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088e0554:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e0574; }
    { goto L_088e05dc; }
L_088e0574:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e05cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e05cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[3] + 0x0000001fu, c->r[2]);
L_088e05cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e0554; }
L_088e05dc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] & 0x03ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e05f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000023u, 0u);
L_088e05f8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e0604u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e06f8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e06f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ba0u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ba0u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = c->f[2];
    { c->r[31] = 0x088e0674u; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ba0u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ba0u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = c->f[2];
    { c->r[31] = 0x088e06c4u; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x00000098u, c->f[0]); goto L_088e06f8; }
L_088e06cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088e06d8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088e06e4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088e06f0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u); func_089b73e0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffed00u, 0u);
L_088e06f8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088df784 */
}

/* func_088e60b4  0x088e60b4..0x088e638c  728 bytes, source=fde */
void func_088e60b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e60b4u);
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
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6374; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005db4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088e611cu: goto L_088e611c; case 0x088e6208u: goto L_088e6208; case 0x088e6250u: goto L_088e6250; case 0x088e62dcu: goto L_088e62dc; case 0x088e6340u: goto L_088e6340; case 0x088e6374u: goto L_088e6374; default: recomp_trap_unknown_indirect(c, ram, 0x088e6114u, _t); return; } }
L_088e611c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005da8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005da8u);
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005dacu);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
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
    { c->r[31] = 0x088e61d8u; func_0880d140(c, ram); }
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
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e6374; }
L_088e6208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e622c; }
    { goto L_088e6374; }
L_088e622c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e6374; }
L_088e6250:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e6274; }
    { goto L_088e6374; }
L_088e6274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e62cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e62b8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000028u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e6374; }
L_088e62cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e6374; }
L_088e62dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e6304; }
    { goto L_088e6374; }
L_088e6304:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e6330; }
    { goto L_088e6374; }
L_088e6330:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e6374; }
L_088e6340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000028u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005db0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088e6374:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e60b4 */
}

/* func_088eb394  0x088eb394..0x088eb680  748 bytes, source=fde */
void func_088eb394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088eb394u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
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
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb404; }
    { goto L_088eb410; }
L_088eb404:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088eb410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb438; }
    { goto L_088eb448; }
L_088eb438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088eb448:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb46cu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb48cu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb4acu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088eb63c; }
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
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb50c; }
    { goto L_088eb518; }
L_088eb50c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_088eb518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb540; }
    { goto L_088eb550; }
L_088eb540:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_088eb550:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb574; }
    { goto L_088eb580; }
L_088eb574:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088eb580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb5a8; }
    { goto L_088eb5b8; }
L_088eb5a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088eb5b8:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb5dcu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb5fcu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
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
    { c->r[31] = 0x088eb638u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000bcu); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000bcu, c->f[0]);
L_088eb63c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000030u);
    { c->r[31] = 0x088eb668u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0885a0b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088eb394 */
}

/* func_088f1020  0x088f1020..0x088f1954  2356 bytes, source=fde */
void func_088f1020(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f1020u);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x0000014cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000148u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f1098; }
L_088f1068:
    { c->r[31] = 0x088f1070u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f1068; }
L_088f1098:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = c->r[4] & c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = c->r[4] & c->r[2];
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = c->r[4] & c->r[2];
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[3] = c->r[4] & c->r[2];
    c->r[2] = 0xffc80000u;
    c->r[2] = c->r[2] | 0xc8c8u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[3] = c->r[4] & c->r[2];
    c->r[2] = 0xffc80000u;
    c->r[2] = c->r[2] | 0xc8c8u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[3] = c->r[4] & c->r[2];
    c->r[2] = 0xffc80000u;
    c->r[2] = c->r[2] | 0xc8c8u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f1150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f1168; }
    { goto L_088f1268; }
L_088f1168:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffed10u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006138u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f11bcu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f1150; }
L_088f1268:
    c->r[4] = 0u + 0x00000140u;
    { c->r[31] = 0x088f1274u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[6] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[5] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[6] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[5] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[4] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000e0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000f0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[6] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[5] = c->r[2] + 0x000000d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[4] = c->r[2] + 0x000000e0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x000000f0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000110u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000130u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[6] = c->r[2] + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[5] = c->r[2] + 0x00000110u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[4] = c->r[2] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] + 0x00000130u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = 0u + 0x0000019cu;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0x00000005u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088f16f0u; c->r[10] = mem_r32(ram, c->r[30] + 0x00000098u); func_088f4268(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088f1938; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000613cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f1730; }
    { goto L_088f1938; }
L_088f1730:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f1744u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[4] = 0u + 0x00000100u;
    { c->r[31] = 0x088f1750u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000120u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006140u);
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006144u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006148u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] >> 1;
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f17d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f17ec; }
    { goto L_088f18dc; }
L_088f17ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = 0xff460000u;
    c->r[2] = c->r[2] | 0x46ccu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[17] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f182cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000120u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[17] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f187cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000120u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000614cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f18c8; }
    { goto L_088f18cc; }
L_088f18c8:
    mem_w32(ram, c->r[30] + 0x00000120u, 0u);
L_088f18cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f17d4; }
L_088f18dc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088f1938u; c->r[10] = mem_r32(ram, c->r[30] + 0x00000094u); func_088f4268(c, ram); }
L_088f1938:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000014cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000148u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_088f1020 */
}

/* func_088f582c  0x088f582c..0x088f5a8c  608 bytes, source=fde */
void func_088f582c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f582cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5890; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5980; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f58a8; }
    { goto L_088f5a68; }
L_088f5890:
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f58a8; }
    { goto L_088f5a68; }
L_088f58a8:
    { c->r[31] = 0x088f58b0u; func_088de938(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_088f5a68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5a68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000efu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006220u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f5940; }
    { goto L_088f5944; }
L_088f5940:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f5944:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006224u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f5968; }
    { goto L_088f5974; }
L_088f5968:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006224u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_088f5974:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_088f5a74; }
L_088f5980:
    { c->r[31] = 0x088f5988u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088defec(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f59a8; }
    { c->r[31] = 0x088f5998u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088df1e8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f59a8; }
    { goto L_088f5a68; }
L_088f59a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5a68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000e7u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006220u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f5a28; }
    { goto L_088f5a2c; }
L_088f5a28:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f5a2c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006224u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f5a50; }
    { goto L_088f5a5c; }
L_088f5a50:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006224u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
L_088f5a5c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_088f5a74; }
L_088f5a68:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006224u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_088f5a74:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f582c */
}

/* func_088faf90  0x088faf90..0x088faffc  108 bytes, source=sweep */
void func_088faf90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088faf90u);
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
    { c->r[31] = 0x088fafccu; c->r[5] = c->r[2] + 0u; func_088faffc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088fafe8u; c->r[5] = c->r[2] + 0u; func_088faffc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088faf90 */
}

/* func_08900b08  0x08900b08..0x08900c88  384 bytes, source=fde */
void func_08900b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900b08u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006480u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006480u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006480u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006480u);
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
    { c->r[31] = 0x08900c74u; c->r[8] = 0u + 0u; func_08929da0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08900b08 */
}

/* func_089034d4  0x089034d4..0x0890352c  88 bytes, source=fde */
void func_089034d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089034d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089034f4u; c->r[4] = c->r[4] + 0x000065d8u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000012cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089034d4 */
}

/* func_08908018  0x08908018..0x08908244  556 bytes, source=fde */
void func_08908018(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08908018u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890804c; }
    { goto L_08908230; }
L_0890804c:
    { c->r[31] = 0x08908054u; func_08862e24(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08908070; }
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08908070:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066e0u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066e4u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00007b30u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089080a8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089080c8; }
    { goto L_08908228; }
L_089080c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff950u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066e8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = 0u + 0x00000002u;
    c->r[9] = c->r[2] + 0u;
    c->r[10] = 0u + 0x00000001u;
    { c->r[31] = 0x08908180u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ce330(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066e8u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = 0u + 0x00000002u;
    c->r[9] = c->r[2] + 0u;
    c->r[10] = 0u + 0x00000001u;
    { c->r[31] = 0x08908218u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ce330(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089080a8; }
L_08908228:
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff868u, 0u);
L_08908230:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08908018 */
}

/* func_089133ec  0x089133ec..0x08913848  1116 bytes, source=fde */
void func_089133ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089133ecu);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891345c; }
L_0891342c:
    { c->r[31] = 0x08913434u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891342c; }
L_0891345c:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006960u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913488u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006960u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x0000000cu);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089134d4u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0891350cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891352cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884c26c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006964u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006964u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089135d8u; c->r[5] = c->r[5] | 0x0100u; func_089207f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_089135dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000032u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089135f4; }
    { goto L_089137e8; }
L_089135f4:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08913608u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x7f7f0000u;
    { c->r[31] = 0x08913614u; c->r[4] = c->r[4] | 0x7f7fu; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x0000000cu;
    { c->r[31] = 0x08913620u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08913708u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08913764u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[5] = 0x04020000u;
    { c->r[31] = 0x089137b0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089135dc; }
L_089137e8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08913834u; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089133ec */
}

/* func_0891d41c  0x0891d41c..0x0891d654  568 bytes, source=fde */
void func_0891d41c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891d41cu);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891d4ac; }
    { goto L_0891d4dc; }
L_0891d4ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891d4d0; }
    { goto L_0891d4dc; }
L_0891d4d0:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0891d638; }
L_0891d4dc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b44u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0891d508u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891d51cu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b48u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = (f32)fabsf(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891d568; }
    { goto L_0891d574; }
L_0891d568:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0891d638; }
L_0891d574:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b48u);
    c->f[0] = c->f[1] / c->f[0];
    { c->r[31] = 0x0891d594u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0891d5b0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891d5ecu; c->r[5] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b48u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
L_0891d638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_0891d41c */
}

/* func_08921474  0x08921474..0x089214b8  68 bytes, source=sweep */
void func_08921474(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921474u);
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
    { c->r[31] = 0x089214a4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921474 */
}

/* func_089226a0  0x089226a0..0x089226dc  60 bytes, source=sweep */
void func_089226a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089226a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    mem_w8(ram, c->r[1] + 0x00007bb0u, c->r[2]);
    c->r[2] = 0u + 0x0000003cu;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff9c0u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089226a0 */
}

/* func_08925974  0x08925974..0x089259b0  60 bytes, source=sweep */
void func_08925974(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925974u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0892599cu; c->r[6] = 0u + 0u; func_08925b34(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925974 */
}

/* func_08927164  0x08927164..0x08927184  32 bytes, source=residue */
void func_08927164(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08927164u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08927164 */
}

/* func_0892b91c  0x0892b91c..0x0892bf94  1656 bytes, source=fde */
void func_0892b91c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892b91cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0892b948u; c->r[6] = 0u + 0x00000044u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    mem_w16(ram, c->r[3] + 0x00000022u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000018u);
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    mem_w8(ram, c->r[3] + 0x00000031u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001au);
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001bu);
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x0000002au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    mem_w16(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000035u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    mem_w8(ram, c->r[3] + 0x00000036u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001bu);
    c->r[2] = c->r[2] << 1;
    mem_w8(ram, c->r[3] + 0x00000043u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0892ba78u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892ba9c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_0892ba9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bac4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0892bac4:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000018u;
    mem_w16(ram, c->r[3] + 0x00000026u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892bb0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0892bb0c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    { c->r[31] = 0x0892bb08u; c->r[4] = c->r[2] + 0u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
L_0892bb0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bb60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007054u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    { c->r[31] = 0x0892bb40u; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000026u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[5] + 0x00000026u, c->r[2]);
L_0892bb60:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0892bb64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892bb84; }
    { goto L_0892bcfc; }
L_0892bb84:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bbc0; }
    { goto L_0892bcec; }
L_0892bbc0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0x00030000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bbfc; }
    { goto L_0892bcec; }
L_0892bbfc:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000026u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[5] + 0x00000026u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0892bcd0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892bc6cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007054u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0892bc90u; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892bcd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0892bcd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bcec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0892bcec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0892bb64; }
L_0892bcfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000036u);
    c->r[2] = (c->r[2] < 0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bea8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000036u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00007058u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0892bd3cu: goto L_0892bd3c; case 0x0892bd90u: goto L_0892bd90; case 0x0892bdb0u: goto L_0892bdb0; case 0x0892bdd0u: goto L_0892bdd0; case 0x0892be18u: goto L_0892be18; case 0x0892be58u: goto L_0892be58; default: recomp_trap_unknown_indirect(c, ram, 0x0892bd34u, _t); return; } }
L_0892bd3c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[5] + 0x00000026u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w16(ram, c->r[4] + 0x00000024u, c->r[2]); goto L_0892bea8; }
L_0892bd90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000024u;
    mem_w16(ram, c->r[3] + 0x00000026u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w16(ram, c->r[3] + 0x00000024u, c->r[2]); goto L_0892bea8; }
L_0892bdb0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000034u;
    mem_w16(ram, c->r[3] + 0x00000026u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000024u;
    { mem_w16(ram, c->r[3] + 0x00000024u, c->r[2]); goto L_0892bea8; }
L_0892bdd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[4] + 0x00000026u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w16(ram, c->r[4] + 0x00000024u, c->r[2]); goto L_0892bea8; }
L_0892be18:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[4] + 0x00000026u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w16(ram, c->r[4] + 0x00000024u, c->r[2]); goto L_0892bea8; }
L_0892be58:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892be74; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0892be74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892be94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + 0x00000014u;
    { mem_w16(ram, c->r[2] + 0x00000024u, c->r[3]); goto L_0892bea0; }
L_0892be94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    mem_w16(ram, c->r[3] + 0x00000024u, c->r[2]);
L_0892bea0:
    { c->r[31] = 0x0892bea8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089310fc(c, ram); }
L_0892bea8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bedc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892bedc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000024u, c->r[3]);
L_0892bedc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bf10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892bf10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000016u);
    mem_w16(ram, c->r[2] + 0x00000026u, c->r[3]);
L_0892bf10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bf4c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000020u);
    c->r[2] = c->r[3] - c->r[2];
    { mem_w16(ram, c->r[4] + 0x00000020u, c->r[2]); goto L_0892bf7c; }
L_0892bf4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bf7c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000024u);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[5] + 0x00000020u, c->r[2]);
L_0892bf7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0892b91c */
}

/* func_089310fc  0x089310fc..0x08931474  888 bytes, source=fde */
void func_089310fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089310fcu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931140; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931140; }
    { goto L_08931460; }
L_08931140:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000024u);
    mem_w8(ram, c->r[2] + 0x00000034u, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
L_08931160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931180; }
    { goto L_089313b8; }
L_08931180:
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08931204; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089311d8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071c4u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089311fcu; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_08931204:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931220; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_08931220:
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
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
    { c->r[31] = 0x0893125cu; c->r[7] = 0u + 0u; func_08932598(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893127c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_08931288; }
L_0893127c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa48u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_08931288:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089313a8; }
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
L_089312a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089312bc; }
    { goto L_08931358; }
L_089312bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08931348; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08931308u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000029u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071c4u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08931328u; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931348; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_08931348:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]); goto L_089312a0; }
L_08931358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931370; }
    c->r[2] = 0u + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_08931370:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089313a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
L_089313a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_08931160; }
L_089313b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089313f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[2] + 0xfffffff8u;
    { mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]); goto L_08931404; }
L_089313f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
L_08931404:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931428; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000005cu);
    mem_w16(ram, c->r[3] + 0x00000024u, c->r[2]);
L_08931428:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931460; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000008au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931460; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[2] = c->r[2] + 0x0000000fu;
    mem_w16(ram, c->r[3] + 0x00000026u, c->r[2]);
L_08931460:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_089310fc */
}

/* func_08933508  0x08933508..0x08933630  296 bytes, source=fde */
void func_08933508(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933508u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
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
    { c->r[31] = 0x08933570u; c->r[7] = 0u + 0u; func_08932598(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08933584u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089335a8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    { mem_w8(ram, c->r[30] + 0x00000042u, c->r[2]); goto L_089335b4; }
L_089335a8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffffa48u);
    mem_w8(ram, c->r[30] + 0x00000042u, c->r[2]);
L_089335b4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000042u);
    mem_w8(ram, c->r[30] + 0x00000041u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089335d4; }
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[30] + 0x00000041u, c->r[2]);
L_089335d4:
    { c->r[31] = 0x089335dcu; func_08925598(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089335f8u; c->r[6] = c->r[3] + 0u; func_08931474(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08933618u; c->r[6] = c->r[3] + 0u; func_0881456c(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08933508 */
}

/* func_08935ce8  0x08935ce8..0x08935d18  48 bytes, source=sweep */
void func_08935ce8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935ce8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa94u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935ce8 */
}

/* func_0893bfc4  0x0893bfc4..0x0893c01c  88 bytes, source=sweep */
void func_0893bfc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893bfc4u);
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
    { c->r[31] = 0x0893c008u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_0893c18c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893bfc4 */
}

/* func_0893ccb8  0x0893ccb8..0x0893d560  2216 bytes, source=fde */
void func_0893ccb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893ccb8u);
L_0893ccb8:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x0893ccfcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = (c->r[3] < 0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d548; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000752cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0893ccb8u: goto L_0893ccb8; case 0x0893cd38u: goto L_0893cd38; case 0x0893cd74u: goto L_0893cd74; case 0x0893cda8u: goto L_0893cda8; case 0x0893d1a4u: goto L_0893d1a4; case 0x0893d548u: goto L_0893d548; default: recomp_trap_unknown_indirect(c, ram, 0x0893cd30u, _t); return; } }
L_0893cd38:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0893cd48u; c->r[6] = 0u + 0x00000060u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000005u, 0u); goto L_0893d548; }
L_0893cd74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893cd8c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893cd8cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0893cd8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] & 0x0001u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_0893d548; }
L_0893cda8:
    { c->r[31] = 0x0893cdb0u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893cdc0; }
    { goto L_0893d548; }
L_0893cdc0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xfffffad8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893ce68; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0893cde8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffad4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0893cdf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893ce0c; }
    { goto L_0893ce5c; }
L_0893ce0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffac4u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffba10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0893ce48u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0893cdf4; }
L_0893ce5c:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffffad8u, c->r[2]);
L_0893ce68:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0893ce70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893ce88; }
    { goto L_0893cee8; }
L_0893ce88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffac4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893ced8; }
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893cee8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0893cee8; }
L_0893ced8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0893ce70; }
L_0893cee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbd8u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893cf10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_0893d010; }
L_0893cf10:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0893cf1cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826afc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893cf38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_0893d010; }
L_0893cf38:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0893cf44u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893cf7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893cf7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893cf7c; }
    { goto L_0893cf88; }
L_0893cf7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_0893d010; }
L_0893cf88:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0893cf94u; c->r[4] = c->r[4] + 0xffffb9c0u; func_0893d5e0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893cfa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_0893d010; }
L_0893cfa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893d010; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0893d010; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d010; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00007ef4u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d010; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0893d010:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893d180; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893d134; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893d100; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
L_0893d100:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893d134; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_0893d134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d14c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000003u, 0u); goto L_0893d548; }
L_0893d14c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d170; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]); goto L_0893d548; }
L_0893d170:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]); goto L_0893d548; }
L_0893d180:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_0893d548; }
L_0893d1a4:
    { c->r[31] = 0x0893d1acu; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d1bc; }
    { goto L_0893d548; }
L_0893d1bc:
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffffad8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893d1dc; }
    { goto L_0893d548; }
L_0893d1dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d1f8; }
    { goto L_0893d548; }
L_0893d1f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0893d210u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0893d230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893d250; }
    { goto L_0893d380; }
L_0893d250:
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[5] = c->r[2] + c->r[4];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007528u);
    c->r[4] = c->r[7] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0893d2d0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    { c->r[31] = 0x0893d2d8u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0893d2f0u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff80e4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0893d358; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0893d358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0893d230; }
L_0893d380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893d398; }
    { goto L_0893d548; }
L_0893d398:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0893d3acu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0893d3f4u; c->r[5] = 0u + 0x00000009u; func_0893d5a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0893d440u; c->r[5] = c->r[5] | 0x019cu; func_0893d560(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893d49cu; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893d4f8u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0x04020000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0893d548u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
L_0893d548:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0893ccb8 */
}

/* func_0893e354  0x0893e354..0x0893e404  176 bytes, source=fde */
void func_0893e354(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e354u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff80f0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0u + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x0893e3c8u; c->r[7] = c->r[3] + 0u; recomp_call_indirect(c, ram, 0x0893e3c0u, _t); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893e3e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_0893e3ec; }
L_0893e3e8:
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_0893e3ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0893e354 */
}

/* func_08940574  0x08940574..0x089405b8  68 bytes, source=sweep */
void func_08940574(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940574u);
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
    { c->r[31] = 0x089405a4u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08940574 */
}

/* func_08945b90  0x08945b90..0x08945bf8  104 bytes, source=sweep */
void func_08945b90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945b90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x48000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945bc8u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x49000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945be4u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08945b90 */
}

/* func_089484f0  0x089484f0..0x08948534  68 bytes, source=sweep */
void func_089484f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089484f0u);
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
    return; /* fell out of func_089484f0 */
}

/* func_0894c360  0x0894c360..0x0894c3a4  68 bytes, source=sweep */
void func_0894c360(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c360u);
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
    { c->r[31] = 0x0894c390u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c360 */
}

/* func_08953798  0x08953798..0x08953868  208 bytes, source=sweep */
void func_08953798(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08953798u);
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
    return; /* fell out of func_08953798 */
}

/* func_08955938  0x08955938..0x0895597c  68 bytes, source=sweep */
void func_08955938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955938u);
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
    { c->r[31] = 0x08955968u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955938 */
}

/* func_089586f0  0x089586f0..0x08958734  68 bytes, source=sweep */
void func_089586f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089586f0u);
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
    { c->r[31] = 0x08958720u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089586f0 */
}

/* func_0895b460  0x0895b460..0x0895b4cc  108 bytes, source=sweep */
void func_0895b460(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b460u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0895b47cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0895b2d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b498; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_0895b4b4; }
L_0895b498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895b4b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b460 */
}

/* func_0895ee18  0x0895ee18..0x0895ef8c  372 bytes, source=fde */
void func_0895ee18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895ee18u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000052e8u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895eec8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895ee94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895eeac; }
    { goto L_0895ef10; }
L_0895ee94:
    c->r[2] = 0u + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895eef0; }
    { goto L_0895ef10; }
L_0895eeac:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000049dcu, c->r[2]);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x000049e0u, 0u); goto L_0895ef74; }
L_0895eec8:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000003bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0895eee8u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    { goto L_0895ef74; }
L_0895eef0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0895ef08u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088954a8(c, ram); }
    { goto L_0895ef74; }
L_0895ef10:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052e8u);
    { c->r[31] = 0x0895ef20u; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u); func_08895450(c, ram); }
    c->r[3] = c->r[16] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895ef54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0895ef4cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088954a8(c, ram); }
    { goto L_0895ef74; }
L_0895ef54:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0895ef74u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
L_0895ef74:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0895ee18 */
}

/* func_08961440  0x08961440..0x08961554  276 bytes, source=fde */
void func_08961440(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08961440u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08961468u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08961478; }
    { goto L_08961540; }
L_08961478:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d2u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089614d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089614c8u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    { goto L_08961540; }
L_089614d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896150c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08961504u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    { goto L_08961540; }
L_0896150c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08961540; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08961540u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
L_08961540:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08961440 */
}

/* func_089644c4  0x089644c4..0x08964714  592 bytes, source=fde */
void func_089644c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089644c4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089644fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964518; }
    { goto L_08964700; }
L_08964518:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08964544u; c->r[5] = c->r[2] + 0u; func_08961ee8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964554; }
    { goto L_089646f0; }
L_08964554:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08964560u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089646f0; }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964658; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000022u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089646f0; }
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
    { c->r[31] = 0x08964630u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_089646f0; }
L_08964658:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = 0u + 0x00000022u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089646f0; }
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
    { c->r[31] = 0x089646ccu; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
L_089646f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089644fc; }
L_08964700:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089644c4 */
}

/* func_0896793c  0x0896793c..0x08967990  84 bytes, source=sweep */
void func_0896793c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896793cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08967954u; func_08966c64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967968; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08967978; }
L_08967968:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000522cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08967978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896793c */
}

/* func_08969804  0x08969804..0x0896985c  88 bytes, source=sweep */
void func_08969804(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969804u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08969848; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08969848:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08969804 */
}

/* func_0896a414  0x0896a414..0x0896a458  68 bytes, source=sweep */
void func_0896a414(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a414u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896a42cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a414 */
}

/* func_0896d67c  0x0896d67c..0x0896d7ac  304 bytes, source=fde */
void func_0896d67c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896d67cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000002u, c->r[4]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00005500u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00005501u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00005501u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00005502u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00005503u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000002u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896d718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896d718; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000002u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00005508u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896d718u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
L_0896d718:
    { c->r[31] = 0x0896d720u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005490u;
    { c->r[31] = 0x0896d744u; c->r[16] = c->r[3] + c->r[2]; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000054a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00005500u);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005500u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x0896d790u; c->r[8] = 0u + 0u; func_089d407c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896d67c */
}

/* func_0896e534  0x0896e534..0x0896e5a8  116 bytes, source=sweep */
void func_0896e534(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e534u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0896e560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896e578; }
    { goto L_0896e594; }
L_0896e578:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffe4u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x0896e58cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dfc8(c, ram); }
    { goto L_0896e560; }
L_0896e594:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e534 */
}

/* func_0896f500  0x0896f500..0x0896f56c  108 bytes, source=fde */
void func_0896f500(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f500u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896f518u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0896f520u; c->r[4] = c->r[2] + 0u; func_0899ce8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068bcu;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896f500 */
}

/* func_089714dc  0x089714dc..0x08971514  56 bytes, source=sweep */
void func_089714dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089714dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006964u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089714dc */
}

/* func_08975150  0x08975150..0x08975370  544 bytes, source=fde */
void func_08975150(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975150u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08975170:
    { c->r[31] = 0x08975178u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975194; }
    { goto L_08975248; }
L_08975194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089751d0; }
    { c->r[31] = 0x089751a8u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w8(ram, c->r[2] + 0x00000004u, 0u); goto L_08975238; }
L_089751d0:
    { c->r[31] = 0x089751d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975208; }
    { c->r[31] = 0x089751ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975208; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08975238; }
L_08975208:
    { c->r[31] = 0x08975210u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08975238:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08975170; }
L_08975248:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897525c; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0897525c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08975358; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975358; }
    { c->r[31] = 0x0897527cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08975358; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08975298:
    { c->r[31] = 0x089752a0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089752bc; }
    { goto L_08975338; }
L_089752bc:
    { c->r[31] = 0x089752c4u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975328; }
    { c->r[31] = 0x089752f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08975328:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08975298; }
L_08975338:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08975350; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08975358; }
L_08975350:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08975358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08975150 */
}

/* func_0897833c  0x0897833c..0x089784d4  408 bytes, source=fde */
void func_0897833c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897833cu);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978398; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978484; }
    { goto L_089784bc; }
L_08978398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978420; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089783dc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089783f4; }
    { goto L_089784bc; }
L_089783dc:
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978474; }
    { goto L_089784bc; }
L_089783f4:
    { c->r[31] = 0x089783fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000004au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089784bc; }
L_08978420:
    { c->r[31] = 0x08978428u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978450; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0897843cu; c->r[4] = c->r[4] + 0x000027dcu; func_089d3a80(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08978448u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_089784bc; }
L_08978450:
    { c->r[31] = 0x08978458u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089784bc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897846cu; c->r[5] = 0u + 0x00000010u; func_0896a7b8(c, ram); }
    { goto L_089784bc; }
L_08978474:
    { c->r[31] = 0x0897847cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089784bc; }
L_08978484:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8b28u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897849cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001564u;
    { c->r[31] = 0x089784b0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089784bcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089784bc:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0897833c */
}

/* func_0897a73c  0x0897a73c..0x0897ac74  1336 bytes, source=sweep */
void func_0897a73c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897a73cu);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9114u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa2ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897a7cc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0897ac60; }
L_0897a7cc:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x0000000eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ac58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897a804u: goto L_0897a804; case 0x0897a848u: goto L_0897a848; case 0x0897a88cu: goto L_0897a88c; case 0x0897a8d0u: goto L_0897a8d0; case 0x0897a914u: goto L_0897a914; case 0x0897a958u: goto L_0897a958; case 0x0897a99cu: goto L_0897a99c; case 0x0897a9e0u: goto L_0897a9e0; case 0x0897aa24u: goto L_0897aa24; case 0x0897aa68u: goto L_0897aa68; case 0x0897aaacu: goto L_0897aaac; case 0x0897aaf0u: goto L_0897aaf0; case 0x0897ab34u: goto L_0897ab34; case 0x0897ac58u: goto L_0897ac58; default: recomp_trap_unknown_indirect(c, ram, 0x0897a7fcu, _t); return; } }
L_0897a804:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a834; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa33cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0897a83c; }
L_0897a834:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]);
L_0897a83c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a848:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a878; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa344u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0897a880; }
L_0897a878:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[3]);
L_0897a880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a88c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a8bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa35cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_0897a8c4; }
L_0897a8bc:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
L_0897a8c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a8d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a900; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa3b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0897a908; }
L_0897a900:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[3]);
L_0897a908:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a914:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a944; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa3bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0897a94c; }
L_0897a944:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
L_0897a94c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a988; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa3d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0897a990; }
L_0897a988:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[3]);
L_0897a990:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a99c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a9cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa404u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_0897a9d4; }
L_0897a9cc:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
L_0897a9d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897a9e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897aa10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa418u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_0897aa18; }
L_0897aa10:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[3]);
L_0897aa18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897aa24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897aa54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa42cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_0897aa5c; }
L_0897aa54:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
L_0897aa5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897aa68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897aa98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa438u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_0897aaa0; }
L_0897aa98:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[3]);
L_0897aaa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897aaac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897aadc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa450u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_0897aae4; }
L_0897aadc:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
L_0897aae4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897aaf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ab20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa3dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_0897ab28; }
L_0897ab20:
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
L_0897ab28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897ac58; }
L_0897ab34:
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9114u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897ab90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ab78; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897ac18; }
    { goto L_0897ac58; }
L_0897ab78:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897abd4; }
    { goto L_0897ac58; }
L_0897ab90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897abc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa374u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_0897abc8; }
L_0897abc0:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
L_0897abc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]); goto L_0897ac58; }
L_0897abd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ac04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa388u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_0897ac0c; }
L_0897ac04:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_0897ac0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]); goto L_0897ac58; }
L_0897ac18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ac48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa39cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0897ac50; }
L_0897ac48:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_0897ac50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
L_0897ac58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0897ac60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_0897a73c */
}

/* func_08985dfc  0x08985dfc..0x08985e34  56 bytes, source=fde */
void func_08985dfc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08985dfcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08985e20u; c->r[6] = 0u + 0x00000005u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08985dfc */
}

/* func_08991634  0x08991634..0x08991864  560 bytes, source=fde */
void func_08991634(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08991634u);
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
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x00000097u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08991680u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x0899168cu; c->r[4] = 0u + 0x0000001au; func_089c6f04(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98d8u;
    { c->r[31] = 0x0899169cu; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    { c->r[31] = 0x089916a4u; c->r[4] = 0u + 0x0000004fu; func_089c6f04(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff98fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991850; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9db0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089916ccu; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00900000u;
    { c->r[31] = 0x089916dcu; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x089916ecu; c->r[6] = 0u + 0u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x089916fcu; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    c->r[2] = c->r[2] + 0x00000478u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0899171cu; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    { c->r[31] = 0x08991724u; func_0896f1ac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98b0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9d90u;
    { c->r[31] = 0x0899174cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002660u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[2] | 0x70ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899177c; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98b0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x0899177cu; c->r[5] = c->r[5] + 0xffff9d94u; func_08a1ad34(c, ram); }
L_0899177c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00a00000u;
    { c->r[31] = 0x0899178cu; c->r[6] = 0u + 0x00000002u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff98b0u;
    { c->r[31] = 0x089917a0u; c->r[6] = 0u + 0x00000002u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x089917b0u; c->r[6] = 0u + 0x00000002u; func_08933498(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    { c->r[31] = 0x089917c0u; c->r[4] = c->r[2] + 0u; func_0896ed64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089917f8; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98c0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9d9cu;
    c->r[6] = 0x08a80000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002660u);
    { c->r[31] = 0x089917f0u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1ad34(c, ram); }
    { goto L_08991814; }
L_089917f8:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98c0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9da4u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x08991814u; c->r[6] = mem_r32(ram, c->r[6] + 0x00002660u); func_08a1ad34(c, ram); }
L_08991814:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x08991824u; c->r[6] = 0u + 0x00000003u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff98c0u;
    { c->r[31] = 0x08991838u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000049u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    mem_w8(ram, c->r[3] + 0x00000048u, c->r[2]);
L_08991850:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08991634 */
}

/* func_089988e0  0x089988e0..0x08998918  56 bytes, source=fde */
void func_089988e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089988e0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002b78u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08998904u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089988e0 */
}

/* func_0899915c  0x0899915c..0x0899918c  48 bytes, source=sweep */
void func_0899915c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899915cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002aa8u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899915c */
}

/* func_0899d820  0x0899d820..0x0899d924  260 bytes, source=fde */
void func_0899d820(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899d820u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9970u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9a60u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a5cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899d85c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d90c; }
L_0899d85c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffa608u;
    c->r[5] = 0x089a0000u;
    c->r[5] = c->r[5] + 0xffffd978u;
    c->r[6] = 0u + 0x00000029u;
    c->r[7] = 0u + 0x00004000u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0899d880u; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899d89c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d90c; }
L_0899d89c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9a58u, c->r[2]);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffa618u;
    c->r[5] = 0u + 0x00000100u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0899d8c4u; c->r[8] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a247e4u); /* sceKernelCreateSema */ }
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffffa5e0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899d8dcu; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899d8f8; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899d90c; }
L_0899d8f8:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9a5cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0899d90c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899d820 */
}

/* func_089a1ac8  0x089a1ac8..0x089a1b00  56 bytes, source=sweep */
void func_089a1ac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1ac8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089a1aecu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1ac8 */
}

/* func_089a58f8  0x089a58f8..0x089a5ef0  1528 bytes, source=fde */
void func_089a58f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a58f8u);
L_089a58f8:
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
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5c60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5968; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5980; }
    { goto L_089a5ed4; }
L_089a5968:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5ecc; }
    { goto L_089a5ed4; }
L_089a5980:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5c50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa9b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089a58f8u: goto L_089a58f8; case 0x089a59bcu: goto L_089a59bc; case 0x089a5a28u: goto L_089a5a28; case 0x089a5b0cu: goto L_089a5b0c; case 0x089a5b58u: goto L_089a5b58; case 0x089a5c38u: goto L_089a5c38; case 0x089a5c50u: goto L_089a5c50; default: recomp_trap_unknown_indirect(c, ram, 0x089a59b4u, _t); return; } }
L_089a59bc:
    { c->r[31] = 0x089a59c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f8d0(c, ram); }
    { c->r[31] = 0x089a59ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899b088(c, ram); }
    { c->r[31] = 0x089a59d4u; func_0899c07c(c, ram); }
    { c->r[31] = 0x089a59dcu; func_089a45fc(c, ram); }
    { c->r[31] = 0x089a59e4u; func_0899d820(c, ram); }
    { c->r[31] = 0x089a59ecu; c->r[4] = 0u + 0x00000004u; func_089c3618(c, ram); }
    { c->r[31] = 0x089a59f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x089a59fcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a5a08u; c->r[5] = 0u + 0x00000384u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089a5a10u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a5a18u; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a5ed4; }
L_089a5a28:
    { c->r[31] = 0x089a5a30u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a5a38u; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    { c->r[31] = 0x089a5a40u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x089a5a54u; c->r[7] = 0u + 0x000000feu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5a88; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5ac4; }
    { goto L_089a5ed4; }
L_089a5a88:
    { c->r[31] = 0x089a5a90u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a5aa8u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a5abcu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089a5ed4; }
L_089a5ac4:
    { c->r[31] = 0x089a5accu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a5ae0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa9b4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089a5afcu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a5ed4; }
L_089a5b0c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a5b18u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5b28; }
    { goto L_089a5ed4; }
L_089a5b28:
    { c->r[31] = 0x089a5b30u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089a5b38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f9e0(c, ram); }
    { c->r[31] = 0x089a5b40u; func_08998e20(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e04u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a5ed4; }
L_089a5b58:
    { c->r[31] = 0x089a5b60u; func_089a4ee0(c, ram); }
    { c->r[31] = 0x089a5b68u; func_089a5700(c, ram); }
    { c->r[31] = 0x089a5b70u; func_088f4dc4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5b94; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089a5b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5bac; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
L_089a5bac:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_089a5bb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a5bc8; }
    { goto L_089a5c10; }
L_089a5bc8:
    { c->r[31] = 0x089a5bd0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08998cec(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089a5bf0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08971434(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089a5bfcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08998c08(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[16]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089a5bb0; }
L_089a5c10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x089a0000u;
    { c->r[31] = 0x089a5c20u; c->r[5] = c->r[5] + 0x0000430cu; func_0899ffac(c, ram); }
    { c->r[31] = 0x089a5c28u; func_089a4bbc(c, ram); }
    { c->r[31] = 0x089a5c30u; func_089a5578(c, ram); }
    { goto L_089a5ed4; }
L_089a5c38:
    { c->r[31] = 0x089a5c40u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x089a5c48u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089a5ed4; }
L_089a5c50:
    { c->r[31] = 0x089a5c58u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0558(c, ram); }
    { goto L_089a5ed4; }
L_089a5c60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5ca4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5ca4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5ca4; }
    { goto L_089a5cac; }
L_089a5ca4:
    { c->r[31] = 0x089a5cacu; func_0899dcf4(c, ram); }
L_089a5cac:
    { c->r[31] = 0x089a5cb4u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    { c->r[31] = 0x089a5cc0u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_089a5cd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a5cf0; }
    { goto L_089a5ed4; }
L_089a5cf0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5d34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5d34; }
    { goto L_089a5e7c; }
L_089a5d34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002df0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002df8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
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
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa9a8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089a5e0cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000064u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5ebc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e0cu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x089a5e74u; c->r[5] = c->r[2] + 0u; func_0891d018(c, ram); }
    { goto L_089a5ebc; }
L_089a5e7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5ebc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000a0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x089a5ebcu; c->r[5] = 0u + 0u; func_0891d018(c, ram); }
L_089a5ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089a5cd8; }
L_089a5ecc:
    { c->r[31] = 0x089a5ed4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0d08(c, ram); }
L_089a5ed4:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_089a58f8 */
}

/* func_089ac1ac  0x089ac1ac..0x089ac390  484 bytes, source=sweep */
void func_089ac1ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac1acu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x00000018u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xf8ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ac220; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089ac380; }
L_089ac220:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ac380; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ac380; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0030u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ac2b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ac284; }
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ac29c; }
    { goto L_089ac304; }
L_089ac284:
    c->r[2] = 0u + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ac2ec; }
    { goto L_089ac304; }
L_089ac29c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x0000170cu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000008eu);
    { mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_089ac304; }
L_089ac2b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x000018e4u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000008eu);
    { mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_089ac304; }
L_089ac2ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x00002044u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000008eu);
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
L_089ac304:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x00c0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ac338; }
    c->r[2] = 0u + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ac354; }
    { goto L_089ac36c; }
L_089ac338:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089ac36c; }
L_089ac354:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089ac36c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x00f0u;
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w8(ram, c->r[3] + 0x00000025u, c->r[2]);
L_089ac380:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ac1ac */
}

/* func_089b102c  0x089b102c..0x089b2778  5964 bytes, source=fde */
void func_089b102c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b102cu);
    c->r[29] = c->r[29] + 0xfffffc20u;
    mem_w32(ram, c->r[29] + 0x000003d8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000003d4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000003d0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089b1064u; c->r[16] = c->r[30] + 0x00000020u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b1078u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[16] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb128u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b10a4u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b10bcu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x089b10d0u; c->r[5] = c->r[5] + 0xffffbf60u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x089b10e8u; c->r[5] = c->r[5] + 0xffffbf60u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b110c; }
    { goto L_089b1124; }
L_089b110c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b2760; }
L_089b1124:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089b1130u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089b113cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089b1148u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1170u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf60u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf64u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf68u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf6cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b11d8u; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b11ecu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b1244; }
L_089b1214:
    { c->r[31] = 0x089b121cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b1214; }
L_089b1244:
    c->r[2] = c->r[30] + 0x00000120u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b129c; }
L_089b126c:
    { c->r[31] = 0x089b1274u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b126c; }
L_089b129c:
    c->r[2] = c->r[30] + 0x000001a0u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b12f4; }
L_089b12c4:
    { c->r[31] = 0x089b12ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b12c4; }
L_089b12f4:
    c->r[16] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb130u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b1318u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b1330u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb134u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b1374u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b138cu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb134u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b13d0u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b13e8u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb130u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b142cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b1444u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb138u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1494u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb138u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b14dcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb13cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1524u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb13cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1574u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000015cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b16c4; }
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb140u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b15ccu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001acu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb140u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b1618u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001bcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b165cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001ccu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b16a0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    { mem_w32(ram, c->r[30] + 0x000001dcu, c->r[2]); goto L_089b1804; }
L_089b16c4:
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb144u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb148u);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffb140u);
    c->r[1] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x089b1700u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001acu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb144u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb148u);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffb140u);
    c->r[1] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x089b175cu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001bcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b17a0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001ccu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b17e4u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000001d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000001d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000001d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000001dcu, c->r[2]);
L_089b1804:
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[6] = c->r[30] + 0x000001a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0x0000003fu;
    { c->r[31] = 0x089b1828u; c->r[9] = 0u + 0x00000001u; func_089c492c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000230u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b1884; }
L_089b1854:
    { c->r[31] = 0x089b185cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b1854; }
L_089b1884:
    c->r[2] = c->r[30] + 0x000002c0u;
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b0u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b18dc; }
L_089b18ac:
    { c->r[31] = 0x089b18b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b18ac; }
L_089b18dc:
    c->r[2] = c->r[30] + 0x00000340u;
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b0u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b1934; }
L_089b1904:
    { c->r[31] = 0x089b190cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b1904; }
L_089b1934:
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb14cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b1958u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b1970u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb150u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b19b4u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b19ccu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000244u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000248u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000024cu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb150u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b1a10u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b1a28u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000250u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000258u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000025cu, c->r[2]);
    c->r[16] = c->r[30] + 0x00000220u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb14cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b1a6cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b1a84u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000260u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000264u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000268u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000026cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb154u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1ae0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000002c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000002c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000002c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000002ccu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb158u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb154u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1b40u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000002d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000002d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000002d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000002dcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb158u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1b9cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000002e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000002e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000002e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000002ecu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1bf4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x000002f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x000002f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x000002f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x000002fcu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b1d4c; }
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b1c4cu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000340u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000344u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000348u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000034cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089b1c98u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000350u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000354u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000358u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000035cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1ce0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000360u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000364u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000368u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000036cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1d28u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000370u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000374u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000378u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    { mem_w32(ram, c->r[30] + 0x0000037cu, c->r[2]); goto L_089b1e94; }
L_089b1d4c:
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb148u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    { c->r[31] = 0x089b1d80u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000340u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000344u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000348u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000034cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb148u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    { c->r[31] = 0x089b1dd4u; c->f[15] = c->f[2]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000350u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000354u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000358u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000035cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb148u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1e24u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000360u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000364u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000368u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000036cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb148u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb12cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089b1e74u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[30] + 0x00000370u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000374u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    mem_w32(ram, c->r[30] + 0x00000378u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    mem_w32(ram, c->r[30] + 0x0000037cu, c->r[2]);
L_089b1e94:
    c->r[2] = c->r[30] + 0x00000230u;
    c->r[3] = c->r[30] + 0x000002c0u;
    c->r[6] = c->r[30] + 0x00000340u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0x0000003fu;
    { c->r[31] = 0x089b1eb8u; c->r[9] = 0u + 0x00000001u; func_089c492c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b1edcu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
L_089b1ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b1f00; }
    { goto L_089b204c; }
L_089b1f00:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000001a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089b1f9cu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000090u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000090u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000090u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_089b1ee4; }
L_089b204c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b206cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000003c0u, 0u);
L_089b2074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b2090; }
    { goto L_089b21dc; }
L_089b2090:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000340u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089b212cu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000230u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000230u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000230u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000003c0u, c->r[2]); goto L_089b2074; }
L_089b21dc:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089b21f0u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089b2250u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089b22b0u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089b22c0u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089b2308u; c->r[5] = 0u + 0x00000007u; func_089b2884(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089b2350u; c->r[5] = 0u + 0x00000005u; func_089b2884(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
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
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b23a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x000003c0u); func_089b2810(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089b23f0u; c->r[5] = c->r[5] | 0x019fu; func_089b27cc(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089b2404u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b241cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089b2478u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089b24d4u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = 0x04050000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089b2524u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089b2538u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b2550u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089b25acu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089b2608u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = 0x04050000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089b2658u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
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
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x7f7f0000u;
    { c->r[31] = 0x089b26b4u; c->r[5] = c->r[5] | 0x7f7fu; func_089b2810(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089b26fcu; c->r[5] = 0u + 0x00000007u; func_089b2848(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089b2744u; c->r[5] = 0u + 0x00000005u; func_089b2848(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089b2754u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089b2760u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089b2760:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000003d8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000003d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000003d0u);
    { c->r[29] = c->r[29] + 0x000003e0u; return; }
    return; /* fell out of func_089b102c */
}

/* func_089b3320  0x089b3320..0x089b3464  324 bytes, source=sweep */
void func_089b3320(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3320u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b3348; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089b3450; }
L_089b3348:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w8(ram, c->r[4] + 0x00000005u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 11;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb160u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 11;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb160u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089b3450:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3320 */
}

/* func_089b5ac0  0x089b5ac0..0x089b5ce8  552 bytes, source=fde */
void func_089b5ac0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b5ac0u);
    c->r[29] = c->r[29] + 0xfffffdd0u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b5af4u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u); func_089b6f80(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5b0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089b5b0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b5b1cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089b46d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089b5b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5b40; }
    { goto L_089b5b90; }
L_089b5b40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b5b80u; c->r[6] = 0u + 0x00000030u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089b5b20; }
L_089b5b90:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089b5b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5bb4; }
    { goto L_089b5cc0; }
L_089b5bb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089b5bd4u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089b5c08u; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089b5c28u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089b5c5cu; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x089b5c7cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089b5cb0u; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089b5b94; }
L_089b5cc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[29] = c->r[29] + 0x00000230u; return; }
    return; /* fell out of func_089b5ac0 */
}

/* func_089b7aec  0x089b7aec..0x089b7c00  276 bytes, source=fde */
void func_089b7aec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7aecu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7b18; }
    { goto L_089b7bec; }
L_089b7b18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x000000c0u, c->r[2]);
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
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089b7b64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b7b84; }
    { goto L_089b7bb8; }
L_089b7b84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000004fu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089b7b64; }
L_089b7bb8:
    { c->r[31] = 0x089b7bc0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b8ff4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089b7bd0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08b40000u;
    mem_w32(ram, c->r[1] + 0xfffff120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08b40000u;
    mem_w32(ram, c->r[1] + 0xfffff124u, c->r[2]);
L_089b7bec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b7aec */
}

/* func_089b95f8  0x089b95f8..0x089b96fc  260 bytes, source=sweep */
void func_089b95f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b95f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9694; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xffffe92cu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9694; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b9680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
L_089b9680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000094u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000098u, 0u); goto L_089b96ec; }
L_089b9694:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b96b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000098u, c->r[2]);
L_089b96b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b96dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
L_089b96dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000094u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000098u, 0u);
L_089b96ec:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b95f8 */
}

/* func_089c34ac  0x089c34ac..0x089c3500  84 bytes, source=fde */
void func_089c34ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c34acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089c34ecu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb5e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c34ac */
}

/* func_089c660c  0x089c660c..0x089c6644  56 bytes, source=sweep */
void func_089c660c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c660cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8410000u); /* lv.q */
    vfpu_exec(c, ram, 0xd0108100u); /* vrcp.t */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c660c */
}

/* func_089c8cdc  0x089c8cdc..0x089c8da0  196 bytes, source=fde */
void func_089c8cdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8cdcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089c8cfcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c8da0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8d10; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c8d88; }
L_089c8d10:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089c8d14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8d38; }
    { goto L_089c8d80; }
L_089c8d38:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c8d5cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8d70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c8d88; }
L_089c8d70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089c8d14; }
L_089c8d80:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089c8d88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c8cdc */
}

/* func_089cad84  0x089cad84..0x089cafb8  564 bytes, source=fde */
void func_089cad84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cad84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089cadb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cadd0; }
    { goto L_089cae18; }
L_089cadd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000018u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089cadb0; }
L_089cae18:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->lo;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000008u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089cae64u; c->r[6] = c->r[2] + 0u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089cae68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cae80; }
    { goto L_089caecc; }
L_089cae80:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089caea0u; c->r[9] = 0u + 0u; func_089cafb8(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089cae68; }
L_089caecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089caee0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089caef8; }
    { goto L_089caf78; }
L_089caef8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089caee0; }
L_089caf78:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x089d0000u;
    { c->r[31] = 0x089cafa4u; c->r[5] = c->r[5] + 0xffffabb0u; func_088080dc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cad84 */
}

/* func_089ce1e8  0x089ce1e8..0x089ce330  328 bytes, source=fde */
void func_089ce1e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ce1e8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[8]);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[3]);
    { c->r[31] = 0x089ce21cu; c->r[4] = 0u + 0x00000054u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x000000f4u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ce2a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f1u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f2u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f3u);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089ce2a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089ce2acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x000000e0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000e3u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000e4u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000e6u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[9] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[10] = mem_r8(ram, c->r[2] + 0x000000e1u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000e2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089ce31cu; c->r[11] = c->r[3] + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089ce1e8 */
}

/* func_089d2530  0x089d2530..0x089d266c  316 bytes, source=sweep */
void func_089d2530(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2530u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d2588; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2588u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
L_089d2588:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d25dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d25b8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d25dcu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
L_089d25dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d2630; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d260cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2630u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
L_089d2630:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2658u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d2530 */
}

/* func_089d35dc  0x089d35dc..0x089d374c  368 bytes, source=fde */
void func_089d35dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d35dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d363c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f0u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] | 0x0001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d3634u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d56b4(c, ram); }
    { goto L_089d3738; }
L_089d363c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d3690; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] | 0x0002u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000027f4u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d3688u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d56dc(c, ram); }
    { goto L_089d3738; }
L_089d3690:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d36e4; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] | 0x0004u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000027f4u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d36dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d5704(c, ram); }
    { goto L_089d3738; }
L_089d36e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d370c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] | 0x0008u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]); goto L_089d3738; }
L_089d370c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d3738; }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f0u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f4u);
    c->r[2] = c->r[2] | 0x0010u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
L_089d3738:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d35dc */
}

/* func_089d5034  0x089d5034..0x089d52bc  648 bytes, source=fde */
void func_089d5034(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5034u);
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d507c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d52a4; }
L_089d507c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d50c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089d50c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x0000006bu;
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
    { c->r[31] = 0x089d514cu; c->r[8] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24b7cu); /* sceNetAdhocPtpRecv */ }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d517c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d517c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d52a4; }
L_089d517c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d529c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000048u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d529c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000048u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d529c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0x0000006bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d5270u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d52a4; }
L_089d529c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089d52a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5034 */
}

/* func_089d6718  0x089d6718..0x089d673c  36 bytes, source=residue */
void func_089d6718(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d6718u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d6718 */
}

/* func_089d7e78  0x089d7e78..0x089d7f3c  196 bytes, source=fde */
void func_089d7e78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7e78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7f04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7f04; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d7eccu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1b008(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089d7edc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7ef4; }
    { goto L_089d7f04; }
L_089d7ef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d7edc; }
L_089d7f04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7e78 */
}

/* func_089d96c4  0x089d96c4..0x089d9728  100 bytes, source=sweep */
void func_089d96c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d96c4u);
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
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d96c4 */
}

/* func_089da530  0x089da530..0x089da56c  60 bytes, source=sweep */
void func_089da530(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da530u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da530 */
}

/* func_089dbb94  0x089dbb94..0x089dbc2c  152 bytes, source=sweep */
void func_089dbb94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dbb94u);
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
    { c->r[31] = 0x089dbbecu; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbc10u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    { c->r[31] = 0x089dbc18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089dbd24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089dbb94 */
}

/* func_089dd870  0x089dd870..0x089dd8bc  76 bytes, source=fde */
void func_089dd870(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd870u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006c0u, c->r[2]);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006c4u, 0u);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc13cu;
    { c->r[31] = 0x089dd8a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1a4c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dd870 */
}

/* func_089df588  0x089df588..0x089df744  444 bytes, source=sweep */
void func_089df588(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089df588u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc230u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc234u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000017u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc238u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089df5f8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089df640u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc23cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089df68cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc240u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_wf32(ram, c->r[1] + 0xffffe870u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc244u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_wf32(ram, c->r[1] + 0xffffe874u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc240u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_wf32(ram, c->r[1] + 0xffffe878u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w32(ram, c->r[1] + 0xffffe87cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x00700000u;
    c->r[2] = c->r[2] | 0x7070u;
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0xffffe880u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w16(ram, c->r[1] + 0x000008dau, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089df588 */
}

/* func_089e1d40  0x089e1d40..0x089e1d78  56 bytes, source=sweep */
void func_089e1d40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1d40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1d64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089e334c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1d40 */
}

/* func_089e2878  0x089e2878..0x089e28cc  84 bytes, source=sweep */
void func_089e2878(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2878u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[3] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000070u);
    { c->r[31] = 0x089e28b8u; c->r[6] = mem_r32(ram, c->r[3] + 0x0000006cu); func_089e36e8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2878 */
}

/* func_089e3ac4  0x089e3ac4..0x089e3be0  284 bytes, source=sweep */
void func_089e3ac4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3ac4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[5]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089e3b1c; }
    { goto L_089e3b34; }
L_089e3b1c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc274u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_089e3b70; }
L_089e3b34:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089e3b54; }
    { goto L_089e3b6c; }
L_089e3b54:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc274u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_089e3b70; }
L_089e3b6c:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089e3b70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xcf000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3b94u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0xcd000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3bb0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0xce000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3bccu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e3ac4 */
}

/* func_089e4c78  0x089e4c78..0x089e4cc8  80 bytes, source=sweep */
void func_089e4c78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4c78u);
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
    c->r[2] = 0x56000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4cb4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4c78 */
}

/* func_089ea1e4  0x089ea1e4..0x089ea220  60 bytes, source=sweep */
void func_089ea1e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea1e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089ea20cu; c->r[6] = 0u + 0x00000001u; func_089eab78(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea1e4 */
}

/* func_089eb118  0x089eb118..0x089eb15c  68 bytes, source=sweep */
void func_089eb118(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb118u);
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
    { c->r[31] = 0x089eb148u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb118 */
}

/* func_089ef2bc  0x089ef2bc..0x089ef328  108 bytes, source=sweep */
void func_089ef2bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef2bcu);
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
    { c->r[31] = 0x089ef2f8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef314u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ef2bc */
}

/* func_089f0d58  0x089f0d58..0x089f0d9c  68 bytes, source=sweep */
void func_089f0d58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0d58u);
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
    { c->r[31] = 0x089f0d88u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0d58 */
}

/* func_089f2f80  0x089f2f80..0x089f3578  1528 bytes, source=fde */
void func_089f2f80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f2f80u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[15]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc598u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2fe0; }
    { goto L_089f317c; }
L_089f2fe0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc59cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3004; }
    { goto L_089f317c; }
L_089f3004:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5a0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3030; }
    { goto L_089f30e8; }
L_089f3030:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5a0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f305c; }
    { goto L_089f3078; }
L_089f305c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x7fff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]); goto L_089f3560; }
L_089f3078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f30ac; }
    { goto L_089f30c0; }
L_089f30ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_089f30c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]); goto L_089f3560; }
L_089f30e8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f310cu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]); goto L_089f3560; }
L_089f317c:
    mem_w8(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w8(ram, c->r[30] + 0x0000002du, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc59cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f31a8; }
    { goto L_089f31c0; }
L_089f31a8:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_089f31e8; }
L_089f31c0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc598u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f31e4; }
    { goto L_089f31e8; }
L_089f31e4:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089f31e8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc59cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f320c; }
    { goto L_089f3224; }
L_089f320c:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x0000002du, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); goto L_089f324c; }
L_089f3224:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc598u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3248; }
    { goto L_089f324c; }
L_089f3248:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089f324c:
    mem_w8(ram, c->r[30] + 0x0000002eu, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3270; }
    { goto L_089f32a8; }
L_089f3270:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x0000002eu, c->r[2]);
L_089f32a8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_089f32c8; }
    { goto L_089f3478; }
L_089f32c8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_089f32e8; }
    { goto L_089f333c; }
L_089f32e8:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089f330cu; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000018u); func_089f2b34(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089f34d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f34d8; }
L_089f333c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[0] - c->f[1];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f337c; }
    { goto L_089f3440; }
L_089f337c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = c->f[2] / c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5a4u);
    c->f[0] = c->f[0] - c->f[1];
    { c->r[31] = 0x089f33e4u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f342cu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f34d8; }
L_089f3440:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f34d8; }
L_089f3478:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f34cc; }
    { goto L_089f34d8; }
L_089f34cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089f34d8:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f3510; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_089f3510:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f3534; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_089f3534:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f3558; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_089f3558:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
L_089f3560:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089f2f80 */
}

/* func_089f5bd8  0x089f5bd8..0x089f5c48  112 bytes, source=fde */
void func_089f5bd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5bd8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
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
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f5c30; }
    { c->r[31] = 0x089f5c28u; func_08a023e0(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089f5c30; }
L_089f5c30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f5bd8 */
}

/* func_089f851c  0x089f851c..0x089f85a0  132 bytes, source=sweep */
void func_089f851c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f851cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f8550u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f855cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c1d8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd118u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f8574u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f858cu; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f851c */
}

/* func_089f9388  0x089f9388..0x089f9428  160 bytes, source=sweep */
void func_089f9388(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9388u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x089f93b0u; c->r[17] = c->r[5] & 0xffffu; func_089facc8(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[3] = c->r[3] | 0x0010u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[11] = c->r[3] + 0u; if (_c) goto L_089f940c; }
    { c->r[31] = 0x089f93ccu; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[11] = 0x80000000u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[8] = c->r[18] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    { int _c = (c->r[2] == 0u); c->r[11] = c->r[11] | 0x0011u; if (_c) goto L_089f940c; }
    c->r[2] = 0x08a50000u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd13cu);
    { c->r[31] = 0x089f9408u; c->f[13] = c->f[12]; func_089fd034(c, ram); }
    c->r[11] = c->r[2] + 0u;
L_089f940c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[11] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9388 */
}

/* func_089fa1a8  0x089fa1a8..0x089fa20c  100 bytes, source=fde */
void func_089fa1a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa1a8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000be4u);
    { int _c = (c->r[3] == 0u); c->r[16] = c->r[4] + 0u; if (_c) goto L_089fa1e8; }
L_089fa1c8:
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = c->r[17] + 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_089fa1fc; }
L_089fa1d8:
    c->r[2] = c->r[3] >> 1;
    c->r[3] = c->r[2] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[16] + 0x00000be4u, c->r[2]); if (_c) goto L_089fa1c8; }
L_089fa1e8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fa1fc:
    { c->r[31] = 0x089fa204u; func_08a05ad4(c, ram); }
    { c->r[3] = mem_r32(ram, c->r[16] + 0x00000be4u); goto L_089fa1d8; }
    return; /* fell out of func_089fa1a8 */
}

/* func_089faac8  0x089faac8..0x089faaf8  48 bytes, source=sweep */
void func_089faac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089faac8u);
    c->r[5] = c->r[5] & 0xffffu;
    c->r[2] = c->r[5] << 1;
    c->r[2] = c->r[2] + c->r[5];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[6] + 0x00000008u, c->r[3]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[4]);
    { mem_w32(ram, c->r[6] + 0x00000004u, c->r[5]); return; }
    return; /* fell out of func_089faac8 */
}

/* func_089fb3b8  0x089fb3b8..0x089fb400  72 bytes, source=sweep */
void func_089fb3b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb3b8u);
    c->r[2] = 0x08b90000u;
    c->r[3] = c->r[4] << 5;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[5] = c->r[4] + 0u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000000cu);
    c->r[2] = ((s32)c->r[5] < (s32)0x00000020u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[4] = (c->r[4] < 0x00000001u) ? 1u : 0u;
    c->r[4] = c->r[4] | c->r[2];
    { int _c = (c->r[4] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_089fb3f8; }
    if ((s32)c->r[5] < 0) { c->r[2] = 0u + 0u; goto L_089fb3f0; }
L_089fb3f0:
    { return; }
L_089fb3f8:
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089fb3b8 */
}

/* func_089fc070  0x089fc070..0x089fc090  32 bytes, source=residue */
void func_089fc070(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc070u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc084u; c->r[5] = c->r[5] & 0xffffu; func_089fc340(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc070 */
}

/* func_089fd64c  0x089fd64c..0x089fd678  44 bytes, source=sweep */
void func_089fd64c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd64cu);
    c->r[4] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[4] + 0xffff8abcu);
    c->r[2] = 0x06960000u;
    c->r[2] = c->r[2] | 0x542du;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[3] = c->r[3] + 0x00003039u;
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x7fffu;
    { mem_w32(ram, c->r[4] + 0xffff8abcu, c->r[3]); return; }
    return; /* fell out of func_089fd64c */
}

/* func_089fe394  0x089fe394..0x089fe454  192 bytes, source=sweep */
void func_089fe394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe394u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = c->r[4] << 3;
    c->r[3] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = c->r[2] - c->r[4];
    c->r[7] = c->r[3] + 0x0000008cu;
    c->r[2] = c->r[2] << 5;
    c->r[5] = c->r[2] + c->r[7];
    c->r[3] = mem_r32(ram, c->r[5] + 0x0000006cu);
    { int _c = (c->r[3] != 0u); c->r[6] = c->r[4] + 0u; if (_c) goto L_089fe444; }
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[4] == c->r[2]); c->r[2] = 0x08ba0000u; if (_c) goto L_089fe410; }
    c->r[2] = mem_r16(ram, c->r[5] + 0x00000010u);
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[6] << 2; if (_c) goto L_089fe3e4; }
    c->r[2] = 0u + 0x00000005u;
    mem_w16(ram, c->r[5] + 0x00000010u, c->r[2]);
L_089fe3e0:
    c->r[3] = c->r[6] << 2;
L_089fe3e4:
    c->r[3] = c->r[3] + c->r[6];
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000170u;
    c->r[3] = c->r[3] << 2;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[3] + 0x00000010u, 0u);
    c->r[2] = 0u + 0u;
    mem_w32(ram, c->r[3] + 0x00000008u, 0u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_089fe408:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fe410:
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000016cu);
    { int _c = ((s32)c->r[2] <= 0); c->r[3] = c->r[7] + 0u; if (_c) goto L_089fe3e0; }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
L_089fe424:
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000010u);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[4] + 0xffffffffu; if (_c) goto L_089fe434; }
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[5]);
L_089fe434:
    { int _c = (c->r[4] != 0u); c->r[3] = c->r[3] + 0x000000e0u; if (_c) goto L_089fe424; }
    { c->r[3] = c->r[6] << 2; goto L_089fe3e4; }
L_089fe444:
    { c->r[31] = 0x089fe44cu; func_089fe454(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_089fe408; }
    return; /* fell out of func_089fe394 */
}

/* func_089ff2b0  0x089ff2b0..0x089ff2bc  12 bytes, source=residue */
void func_089ff2b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff2b0u);
    c->r[3] = 0x08ba0000u;
    { c->r[2] = mem_r32(ram, c->r[3] + 0x00000108u); return; }
    return; /* fell out of func_089ff2b0 */
}

/* func_08a01b00  0x08a01b00..0x08a01c08  264 bytes, source=fde */
void func_08a01b00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01b00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    c->r[22] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    { c->r[31] = 0x08a01b48u; c->r[17] = c->r[5] & 0xffffu; func_089fad6c(c, ram); }
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a01b88; }
L_08a01b5c:
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
L_08a01b88:
    { c->r[31] = 0x08a01b90u; c->r[4] = mem_r32(ram, c->r[22] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd334u);
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
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a01b5c; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x08a01bd4u; c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd338u); func_089fd034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[22] + 0xffff9af0u);
    c->r[6] = c->r[19] + 0u;
    c->r[7] = c->r[20] + 0u;
    c->r[8] = c->r[21] + 0u;
    { c->r[31] = 0x08a01becu; c->r[5] = c->r[18] + 0u; func_08a02a28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[22] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a01c00u; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a01b5c; }
    return; /* fell out of func_08a01b00 */
}

/* func_08a02f98  0x08a02f98..0x08a02fcc  52 bytes, source=fde */
void func_08a02f98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02f98u);
    c->r[3] = c->r[5] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[4] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[7] = c->r[6] + 0u;
    c->r[4] = c->r[4] + 0xffff9af8u;
    c->r[5] = c->r[2] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a02fc0u; c->r[6] = c->r[3] + 0u; func_08a02cf8(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a02f98 */
}

/* func_08a0394c  0x08a0394c..0x08a03a98  332 bytes, source=sweep */
void func_08a0394c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0394cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    c->r[4] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[18]);
    c->r[18] = c->r[29] + 0x00000010u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[31]);
    { c->r[31] = 0x08a0397cu; mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]); func_08a038a8(c, ram); }
    c->r[6] = c->r[16] + 0u;
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a0398cu; c->r[5] = c->r[19] + 0u; func_08a03888(c, ram); }
    c->r[17] = c->r[29] + 0x00000020u;
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a0399cu; c->r[5] = c->r[18] + 0u; func_08a038a8(c, ram); }
    c->r[6] = c->r[18] + 0u;
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x08a039acu; c->r[5] = c->r[29] + 0u; func_08a038d0(c, ram); }
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x08a039b8u; c->r[5] = c->r[17] + 0u; func_08a038a8(c, ram); }
    c->r[6] = c->r[17] + 0u;
    c->r[4] = c->r[29] + 0u;
    { c->r[31] = 0x08a039c8u; c->r[5] = c->r[18] + 0u; func_08a038d0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[29] + 0x00000024u);
    c->r[3] = 0x08ba0000u;
    c->r[16] = c->r[3] + 0xffff9bb0u;
    mem_wf32(ram, c->r[3] + 0xffff9bb0u, c->f[0]);
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[19] + 0u;
    mem_wf32(ram, c->r[16] + 0x00000010u, c->f[1]);
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000028u);
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[29] + 0x00000000u);
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[1]);
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000004u);
    mem_wf32(ram, c->r[16] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[29] + 0x00000008u);
    mem_wf32(ram, c->r[16] + 0x00000024u, c->f[1]);
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000010u);
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[29] + 0x00000014u);
    mem_wf32(ram, c->r[16] + 0x00000018u, c->f[1]);
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x0000000cu, 0u);
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    mem_w32(ram, c->r[16] + 0x0000001cu, 0u);
    { c->r[31] = 0x08a03a30u; mem_w32(ram, c->r[16] + 0x0000002cu, 0u); func_08a038f0(c, ram); }
    c->f[0] = -c->f[0];
    c->r[4] = c->r[29] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a03a44u; mem_wf32(ram, c->r[16] + 0x00000030u, c->f[0]); func_08a038f0(c, ram); }
    c->f[0] = -c->f[0];
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
    { c->r[31] = 0x08a03a58u; mem_wf32(ram, c->r[16] + 0x00000034u, c->f[0]); func_08a038f0(c, ram); }
    c->f[0] = -c->f[0];
    c->r[2] = 0x08a50000u;
    mem_wf32(ram, c->r[16] + 0x00000038u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd3a8u);
    mem_wf32(ram, c->r[16] + 0x0000003cu, c->f[0]);
    vfpu_exec(c, ram, 0xda000000u); /* lv.q */
    vfpu_exec(c, ram, 0xda010010u); /* lv.q */
    vfpu_exec(c, ram, 0xda020020u); /* lv.q */
    vfpu_exec(c, ram, 0xda030030u); /* lv.q */
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08a0394c */
}

/* func_08a05094  0x08a05094..0x08a05604  1392 bytes, source=sweep */
void func_08a05094(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05094u);
    c->r[8] = c->r[4] + 0u;
    c->r[4] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[4]);
    c->r[10] = 0x08ba0000u;
    c->r[6] = c->r[10] + 0xffffaa78u;
    c->r[11] = c->r[5] + 0u;
    c->r[3] = c->lo;
    c->r[4] = c->r[3] + c->r[6];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000018u);
    c->r[5] = c->r[3] & 0x0001u;
    { int _c = (c->r[5] != 0u); c->r[12] = mem_r32(ram, c->r[4] + 0x00000000u); if (_c) goto L_08a05274; }
    c->r[5] = c->r[3] & 0x0200u;
    { int _c = (c->r[5] != 0u); c->r[5] = mem_r32(ram, c->r[4] + 0x00000020u); if (_c) goto L_08a051b0; }
    c->r[9] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[6] = 0u + 0u;
    c->r[13] = c->r[5] + 0x00000038u;
    c->r[7] = ((s32)c->r[9] < (s32)c->r[13]) ? 1u : 0u;
    { int _c = (c->r[7] != 0u); c->r[4] = c->r[11] + 0u; if (_c) goto L_08a05130; }
    c->r[4] = c->r[12] + c->r[5];
    c->r[5] = c->r[11] + 0u;
L_08a050f0:
    c->r[12] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[11] = (c->r[6] < 0x00000038u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[12]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[11] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a050f0; }
    c->r[4] = 0u + 0x0000004cu;
L_08a05110:
    alx_mult(c, c->r[8], c->r[4]);
    c->r[14] = c->r[10] + 0xffffaa78u;
    c->r[6] = c->lo;
    c->r[2] = c->r[6] + c->r[14];
    c->r[8] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = c->r[8] + 0x00000038u;
L_08a05128:
    { mem_w32(ram, c->r[2] + 0x00000020u, c->r[3]); return; }
L_08a05130:
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[14] = (c->r[6] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, 0u);
    { int _c = (c->r[14] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a05130; }
    c->r[3] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[3]);
    c->r[2] = c->r[10] + 0xffffaa78u;
    c->r[5] = c->r[11] + 0u;
    c->r[7] = 0u + 0u;
    c->r[6] = c->lo;
    c->r[25] = c->r[6] + c->r[2];
    c->r[24] = mem_r32(ram, c->r[25] + 0x00000020u);
    c->r[15] = mem_r32(ram, c->r[25] + 0x00000004u);
    c->r[4] = c->r[15] - c->r[24];
    { int _c = (c->r[4] == 0u); c->r[6] = c->r[12] + c->r[24]; if (_c) goto L_08a05190; }
L_08a05174:
    c->r[13] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[9] = (c->r[7] < c->r[4]) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[13]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[9] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05174; }
L_08a05190:
    c->r[5] = 0u + 0x0000004cu;
L_08a05194:
    alx_mult(c, c->r[8], c->r[5]);
    c->r[12] = c->r[10] + 0xffffaa78u;
    c->r[11] = c->lo;
    c->r[10] = c->r[11] + c->r[12];
    mem_w32(ram, c->r[10] + 0x0000001cu, 0u);
    { mem_w32(ram, c->r[10] + 0x00000020u, 0u); return; }
L_08a051b0:
    c->r[14] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[6] = 0u + 0u;
    c->r[15] = c->r[5] + 0x00000070u;
    c->r[7] = ((s32)c->r[14] < (s32)c->r[15]) ? 1u : 0u;
    { int _c = (c->r[7] != 0u); c->r[4] = c->r[11] + 0u; if (_c) goto L_08a0520c; }
    c->r[4] = c->r[12] + c->r[5];
    c->r[5] = c->r[11] + 0u;
L_08a051d0:
    c->r[12] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[11] = (c->r[6] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[12]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[11] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a051d0; }
    c->r[4] = 0u + 0x0000004cu;
L_08a051f0:
    alx_mult(c, c->r[8], c->r[4]);
    c->r[24] = c->r[10] + 0xffffaa78u;
    c->r[5] = c->lo;
    c->r[2] = c->r[5] + c->r[24];
    c->r[8] = mem_r32(ram, c->r[2] + 0x00000020u);
    { c->r[3] = c->r[8] + 0x00000070u; goto L_08a05128; }
L_08a0520c:
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[25] = (c->r[6] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, 0u);
    { int _c = (c->r[25] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a0520c; }
    c->r[7] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[7]);
    c->r[2] = c->r[10] + 0xffffaa78u;
    c->r[5] = c->r[11] + 0u;
    c->r[7] = 0u + 0u;
    c->r[3] = c->lo;
    c->r[6] = c->r[3] + c->r[2];
    c->r[13] = mem_r32(ram, c->r[6] + 0x00000020u);
    c->r[9] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = c->r[9] - c->r[13];
    { int _c = (c->r[4] == 0u); c->r[6] = c->r[12] + c->r[13]; if (_c) goto L_08a05190; }
L_08a05250:
    c->r[15] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[14] = (c->r[7] < c->r[4]) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[15]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[14] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05250; }
    { c->r[5] = 0u + 0x0000004cu; goto L_08a05194; }
L_08a05274:
    c->r[24] = c->r[3] & 0x0200u;
    { int _c = (c->r[24] != 0u); c->r[6] = 0u + 0x0000004cu; if (_c) goto L_08a05444; }
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[25] = ((s32)c->r[3] < (s32)0x00000038u) ? 1u : 0u;
    if (c->r[25] != 0u) { c->r[9] = mem_r32(ram, c->r[4] + 0x00000020u); goto L_08a0536c; }
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[13] = c->r[4] + 0x00000038u;
    c->r[9] = ((s32)c->r[13] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[9] == 0u); c->r[9] = c->r[3] - c->r[4]; if (_c) goto L_08a052d4; }
    c->r[4] = c->r[12] + c->r[4];
    c->r[5] = c->r[11] + 0u;
    c->r[6] = 0u + 0u;
L_08a052b0:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[7] = (c->r[6] < 0x00000038u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[7] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a052b0; }
    { c->r[4] = 0u + 0x0000004cu; goto L_08a05110; }
L_08a052d4:
    c->r[6] = c->r[12] + c->r[4];
    c->r[7] = 0u + 0u;
    { int _c = (c->r[9] == 0u); c->r[4] = c->r[11] + 0u; if (_c) goto L_08a05300; }
L_08a052e4:
    c->r[5] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[15] = (c->r[7] < c->r[9]) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[5]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[15] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a052e4; }
L_08a05300:
    c->r[13] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[13]);
    c->r[2] = c->r[10] + 0xffffaa78u;
    c->r[25] = 0u + 0x00000038u;
    c->r[5] = c->r[11] + c->r[9];
    c->r[7] = c->r[25] - c->r[9];
    c->r[24] = c->lo;
    c->r[11] = c->r[24] + c->r[2];
    mem_w32(ram, c->r[11] + 0x00000020u, 0u);
    c->r[4] = c->r[12] + 0u;
    { int _c = (c->r[7] == 0u); c->r[6] = 0u + 0u; if (_c) goto L_08a0534c; }
L_08a05330:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[12] = (c->r[6] < c->r[7]) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[12] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05330; }
L_08a0534c:
    c->r[7] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[7]);
    c->r[4] = c->r[10] + 0xffffaa78u;
    c->r[3] = 0u + 0x00000038u;
L_08a0535c:
    c->r[2] = c->lo;
    c->r[3] = c->r[3] - c->r[9];
    { c->r[2] = c->r[2] + c->r[4]; goto L_08a05128; }
L_08a0536c:
    c->r[6] = c->r[11] + 0u;
    c->r[7] = 0u + 0u;
    c->r[5] = c->r[3] - c->r[9];
    { int _c = (c->r[5] == 0u); c->r[4] = c->r[12] + c->r[9]; if (_c) goto L_08a0539c; }
L_08a05380:
    c->r[15] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[14] = (c->r[7] < c->r[5]) ? 1u : 0u;
    mem_w8(ram, c->r[6] + 0x00000000u, c->r[15]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[14] != 0u); c->r[6] = c->r[6] + 0x00000001u; if (_c) goto L_08a05380; }
L_08a0539c:
    c->r[25] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[25]);
    c->r[24] = c->r[10] + 0xffffaa78u;
    c->r[4] = 0u + 0x00000038u;
    c->r[10] = c->r[4] - c->r[5];
    c->r[6] = c->lo;
    c->r[8] = c->r[6] + c->r[24];
    mem_w32(ram, c->r[8] + 0x00000020u, 0u);
    c->r[4] = c->r[8] + 0u;
L_08a053c0:
    c->r[9] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[13] = ((s32)c->r[9] < (s32)c->r[10]) ? 1u : 0u;
    { int _c = (c->r[13] == 0u); c->r[7] = c->r[11] + c->r[5]; if (_c) goto L_08a05408; }
    c->r[6] = c->r[12] + 0u;
    { int _c = (c->r[9] == 0u); c->r[8] = 0u + 0u; if (_c) goto L_08a053f8; }
L_08a053dc:
    c->r[3] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000001u;
    c->r[14] = (c->r[8] < c->r[9]) ? 1u : 0u;
    mem_w8(ram, c->r[7] + 0x00000000u, c->r[3]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[14] != 0u); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a053dc; }
L_08a053f8:
    c->r[7] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[10] = c->r[10] - c->r[7];
    { c->r[5] = c->r[5] + c->r[7]; goto L_08a053c0; }
L_08a05408:
    c->r[5] = c->r[11] + c->r[5];
    c->r[6] = c->r[12] + 0u;
    { int _c = (c->r[10] == 0u); c->r[7] = 0u + 0u; if (_c) goto L_08a05434; }
L_08a05418:
    c->r[12] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[11] = (c->r[7] < c->r[10]) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[12]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[11] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05418; }
L_08a05434:
    c->r[9] = mem_r32(ram, c->r[4] + 0x00000020u);
L_08a05438:
    c->r[5] = c->r[9] + c->r[10];
    { mem_w32(ram, c->r[4] + 0x00000020u, c->r[5]); return; }
L_08a05444:
    alx_mult(c, c->r[8], c->r[6]);
    c->r[9] = c->r[10] + 0xffffaa78u;
    c->r[15] = c->lo;
    c->r[3] = c->r[15] + c->r[9];
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[5] = ((s32)c->r[4] < (s32)0x00000070u) ? 1u : 0u;
    if (c->r[5] != 0u) { c->r[9] = mem_r32(ram, c->r[3] + 0x00000020u); goto L_08a05534; }
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000020u);
    c->r[25] = c->r[3] + 0x00000070u;
    c->r[24] = ((s32)c->r[25] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[24] == 0u); c->r[9] = c->r[4] - c->r[3]; if (_c) goto L_08a054a8; }
    c->r[4] = c->r[12] + c->r[3];
    c->r[5] = c->r[11] + 0u;
    c->r[6] = 0u + 0u;
L_08a05484:
    c->r[14] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[13] = (c->r[6] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[14]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[13] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05484; }
    { c->r[4] = 0u + 0x0000004cu; goto L_08a051f0; }
L_08a054a8:
    c->r[6] = c->r[12] + c->r[3];
    c->r[4] = c->r[11] + 0u;
    { int _c = (c->r[9] == 0u); c->r[7] = 0u + 0u; if (_c) goto L_08a054d4; }
L_08a054b8:
    c->r[3] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[5] = (c->r[7] < c->r[9]) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[5] != 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a054b8; }
L_08a054d4:
    c->r[7] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[7]);
    c->r[4] = 0u + 0x00000070u;
    c->r[2] = c->r[10] + 0xffffaa78u;
    c->r[7] = c->r[4] - c->r[9];
    c->r[5] = c->r[11] + c->r[9];
    c->r[15] = c->lo;
    c->r[11] = c->r[15] + c->r[2];
    mem_w32(ram, c->r[11] + 0x00000020u, 0u);
    c->r[4] = c->r[12] + 0u;
    { int _c = (c->r[7] == 0u); c->r[6] = 0u + 0u; if (_c) goto L_08a05520; }
L_08a05504:
    c->r[24] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[12] = (c->r[6] < c->r[7]) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[24]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[12] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a05504; }
L_08a05520:
    c->r[6] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[6]);
    c->r[4] = c->r[10] + 0xffffaa78u;
    { c->r[3] = 0u + 0x00000070u; goto L_08a0535c; }
L_08a05534:
    c->r[6] = c->r[11] + 0u;
    c->r[7] = 0u + 0u;
    c->r[5] = c->r[4] - c->r[9];
    { int _c = (c->r[5] == 0u); c->r[4] = c->r[12] + c->r[9]; if (_c) goto L_08a05564; }
L_08a05548:
    c->r[13] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[25] = (c->r[7] < c->r[5]) ? 1u : 0u;
    mem_w8(ram, c->r[6] + 0x00000000u, c->r[13]);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = (c->r[25] != 0u); c->r[6] = c->r[6] + 0x00000001u; if (_c) goto L_08a05548; }
L_08a05564:
    c->r[3] = 0u + 0x0000004cu;
    alx_mult(c, c->r[8], c->r[3]);
    c->r[15] = c->r[10] + 0xffffaa78u;
    c->r[2] = 0u + 0x00000070u;
    c->r[10] = c->r[2] - c->r[5];
    c->r[14] = c->lo;
    c->r[8] = c->r[14] + c->r[15];
    mem_w32(ram, c->r[8] + 0x00000020u, 0u);
    c->r[4] = c->r[8] + 0u;
L_08a05588:
    c->r[9] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[7] = ((s32)c->r[9] < (s32)c->r[10]) ? 1u : 0u;
    { int _c = (c->r[7] == 0u); c->r[7] = c->r[11] + c->r[5]; if (_c) goto L_08a055d0; }
    c->r[6] = c->r[12] + 0u;
    { int _c = (c->r[9] == 0u); c->r[8] = 0u + 0u; if (_c) goto L_08a055c0; }
L_08a055a4:
    c->r[25] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000001u;
    c->r[24] = (c->r[8] < c->r[9]) ? 1u : 0u;
    mem_w8(ram, c->r[7] + 0x00000000u, c->r[25]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[24] != 0u); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_08a055a4; }
L_08a055c0:
    c->r[6] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[10] = c->r[10] - c->r[6];
    { c->r[5] = c->r[5] + c->r[6]; goto L_08a05588; }
L_08a055d0:
    c->r[5] = c->r[11] + c->r[5];
    c->r[6] = c->r[12] + 0u;
    { int _c = (c->r[10] == 0u); c->r[7] = 0u + 0u; if (_c) goto L_08a05434; }
L_08a055e0:
    c->r[12] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[11] = (c->r[7] < c->r[10]) ? 1u : 0u;
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[12]);
    c->r[6] = c->r[6] + 0x00000001u;
    { int _c = (c->r[11] != 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a055e0; }
    { c->r[9] = mem_r32(ram, c->r[4] + 0x00000020u); goto L_08a05438; }
    return; /* fell out of func_08a05094 */
}

/* func_08a064d8  0x08a064d8..0x08a06664  396 bytes, source=sweep */
void func_08a064d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a064d8u);
    c->r[5] = c->r[5] & 0xffffu;
    c->r[7] = c->r[5] + 0xffffff60u;
    c->r[3] = c->r[7] & 0xffffu;
    c->r[6] = (c->r[3] < 0x00000040u) ? 1u : 0u;
    c->r[8] = (c->r[5] < 0x00000080u) ? 1u : 0u;
    c->r[3] = c->r[8] | c->r[6];
    c->r[10] = c->r[4] + 0u;
    { int _c = (c->r[3] != 0u); c->r[6] = mem_r32(ram, c->r[4] + 0x00000000u); if (_c) goto L_08a06594; }
    c->r[9] = alx_ext(c->r[5], 8u, 6u);
    c->r[4] = c->r[9] + 0xffffffdfu;
    c->r[14] = (c->r[4] < 0x0000005eu) ? 1u : 0u;
    c->r[4] = c->r[5] & 0x007fu;
    c->r[12] = c->r[14] ^ 0x0001u;
    c->r[13] = (c->r[4] < 0x00000021u) ? 1u : 0u;
    c->r[11] = c->r[12] | c->r[13];
    { int _c = (c->r[11] != 0u); c->r[3] = c->r[5] >> 15; if (_c) goto L_08a06578; }
    c->r[15] = (c->r[4] < 0x0000007fu) ? 1u : 0u;
    { int _c = (c->r[15] == 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a0657c; }
    { int _c = (c->r[3] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0657c; }
    c->r[2] = c->r[9] ^ 0x0022u;
    c->r[12] = c->r[9] ^ 0x0026u;
    c->r[25] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[11] = (c->r[12] < 0x00000001u) ? 1u : 0u;
    c->r[24] = c->r[25] | c->r[11];
    if (c->r[24] != 0u) { c->r[2] = 0u + 0u; goto L_08a0657c; }
    c->r[3] = 0u + 0x00000027u;
    { int _c = (c->r[9] == c->r[3]); c->r[14] = c->r[9] + 0xffffffd7u; if (_c) goto L_08a06578; }
    c->r[13] = (c->r[14] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[13] != 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a0657c; }
    c->r[4] = c->r[9] + 0xffffffd0u;
    c->r[9] = (c->r[4] < 0x0000003eu) ? 1u : 0u;
    { int _c = (c->r[9] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0657c; }
L_08a06578:
    c->r[2] = 0u + 0u;
L_08a0657c:
    { int _c = (c->r[2] != 0u); c->r[25] = c->r[7] & 0xffffu; if (_c) goto L_08a06598; }
    c->r[7] = 0x08ba0000u;
    c->r[5] = mem_r16(ram, c->r[7] + 0xffffbe00u);
    c->r[8] = (c->r[5] < 0x00000080u) ? 1u : 0u;
    c->r[7] = c->r[5] + 0xffffff60u;
L_08a06594:
    c->r[25] = c->r[7] & 0xffffu;
L_08a06598:
    c->r[24] = (c->r[25] < 0x00000040u) ? 1u : 0u;
    c->r[15] = c->r[8] | c->r[24];
    if (c->r[15] != 0u) { mem_w8(ram, c->r[6] + 0x00000000u, c->r[5]); goto L_08a06608; }
    c->r[11] = c->r[5] + 0xffffff03u;
    c->r[8] = (c->r[11] < 0x00000003u) ? 1u : 0u;
    if (c->r[8] != 0u) { mem_w8(ram, c->r[6] + 0x00000000u, c->r[5]); goto L_08a06608; }
    c->r[3] = c->r[5] & 0x007fu;
    c->r[7] = alx_ext(c->r[5], 8u, 6u);
    c->r[12] = c->r[5] >> 15;
    c->r[8] = c->r[3] + 0xffffffe0u;
    { int _c = (c->r[12] != 0u); c->r[5] = c->r[7] + 0xffffffe0u; if (_c) goto L_08a06628; }
    c->r[14] = c->r[7] + 0x000000e1u;
    c->r[13] = (c->r[5] < 0x0000003fu) ? 1u : 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[2] = c->r[14] >> 1;
    { int _c = (c->r[13] != 0u); c->r[6] = c->r[6] + 0x00000001u; if (_c) goto L_08a065f0; }
    c->r[9] = c->r[7] + 0x00000161u;
    c->r[2] = c->r[9] >> 1;
L_08a065f0:
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08a065f4:
    c->r[13] = c->r[5] & 0x0001u;
    if (c->r[13] != 0u) { c->r[4] = (c->r[8] < 0x00000040u) ? 1u : 0u; goto L_08a06614; }
    c->r[5] = c->r[8] + 0xffffff9eu;
    mem_w8(ram, c->r[6] + 0x00000000u, c->r[5]);
L_08a06608:
    c->r[7] = c->r[6] + 0x00000001u;
    { mem_w32(ram, c->r[10] + 0x00000000u, c->r[7]); return; }
L_08a06614:
    c->r[9] = c->r[8] + 0x00000040u;
    c->r[14] = c->r[8] + 0x0000003fu;
    if (c->r[4] == 0u) c->r[14] = c->r[9];
    { mem_w8(ram, c->r[6] + 0x00000000u, c->r[14]); goto L_08a06608; }
L_08a06628:
    c->r[4] = (c->r[5] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[4] == 0u); c->r[3] = c->r[7] + 0x0000017bu; if (_c) goto L_08a06658; }
    c->r[2] = c->r[5] >> 3;
    c->r[25] = c->r[7] + 0x000001bfu;
    c->r[11] = c->r[2] << 1;
    c->r[24] = c->r[11] + c->r[2];
    c->r[15] = c->r[25] >> 1;
    c->r[7] = c->r[15] - c->r[24];
    mem_w8(ram, c->r[6] + 0x00000000u, c->r[7]);
L_08a06650:
    { c->r[6] = c->r[6] + 0x00000001u; goto L_08a065f4; }
L_08a06658:
    c->r[12] = c->r[3] >> 1;
    { mem_w8(ram, c->r[6] + 0x00000000u, c->r[12]); goto L_08a06650; }
    return; /* fell out of func_08a064d8 */
}

/* func_08a0a400  0x08a0a400..0x08a0a490  144 bytes, source=residue */
void func_08a0a400(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0a400u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a42c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a438; }
L_08a0a42c:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0a47c; }
L_08a0a438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0a474; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a474; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08a0a474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08a0a47c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0a400 */
}

/* func_08a0de1c  0x08a0de1c..0x08a0de2c  16 bytes, source=residue */
void func_08a0de1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0de1cu);
    c->r[3] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00004a50u);
    { mem_w32(ram, c->r[3] + 0x00004a50u, c->r[4]); return; }
    return; /* fell out of func_08a0de1c */
}

/* func_08a0e62c  0x08a0e62c..0x08a0e654  40 bytes, source=residue */
void func_08a0e62c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e62cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000630u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e648u; func_08a0e308(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e62c */
}

/* func_08a0f82c  0x08a0f82c..0x08a0f8a8  124 bytes, source=sweep */
void func_08a0f82c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f82cu);
    c->r[4] = f2u(c->f[12]);
    c->r[2] = 0x3f490000u;
    c->r[3] = 0x7f7f0000u;
    c->r[5] = alx_ext(c->r[4], 0u, 30u);
    c->r[2] = c->r[2] | 0x0fdau;
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[5]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->f[13] = u2f(0u);
    c->r[4] = 0u + 0x00000001u;
    { int _c = (c->r[2] == 0u); c->r[3] = ((s32)c->r[3] < (s32)c->r[5]) ? 1u : 0u; if (_c) goto L_08a0f898; }
    { int _c = (c->r[3] == 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a0f878; }
    c->f[0] = c->f[12] - c->f[12];
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a0f870:
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a0f878:
    { c->r[31] = 0x08a0f880u; func_08a11aa8(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[4] = 0u + 0x00000001u;
    c->r[4] = c->r[4] - c->r[2];
L_08a0f898:
    { c->r[31] = 0x08a0f8a0u; func_08a128d0(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a0f870; }
    return; /* fell out of func_08a0f82c */
}

/* func_08a13a8c  0x08a13a8c..0x08a13af4  104 bytes, source=sweep */
void func_08a13a8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13a8cu);
    c->r[29] = c->r[29] + 0xffffff70u;
    c->r[3] = c->r[5] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[4] = c->r[29] + 0x00000060u;
    c->r[16] = c->r[29] + 0x00000020u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[3]);
    { c->r[31] = 0x08a13ac0u; c->r[5] = c->r[29] + 0u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000070u;
    { c->r[31] = 0x08a13accu; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[29] + 0x00000040u;
    { c->r[31] = 0x08a13adcu; c->r[4] = c->r[29] + 0u; func_08a13744(c, ram); }
    { c->r[31] = 0x08a13ae4u; c->r[4] = c->r[2] + 0u; func_08a183fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08a13a8c */
}

/* func_08a159e0  0x08a159e0..0x08a15df4  1044 bytes, source=fde */
void func_08a159e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a159e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { c->r[31] = 0x08a15a04u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); func_08a1687c(c, ram); }
    c->r[4] = 0x08ba0000u;
    c->r[2] = mem_r8(ram, c->r[4] + 0xfffffe48u);
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[4] + 0xfffffe48u; if (_c) goto L_08a15d64; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = c->r[4] + 0xfffffe48u;
    mem_w8(ram, c->r[4] + 0xfffffe48u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000000bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000000du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000013u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000014u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000015u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000019u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000001au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000001bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000001cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000001du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000001eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000020u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000021u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000022u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000023u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000024u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000025u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000026u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000027u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000029u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000002au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000002bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000002du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000031u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000034u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000035u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000036u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000037u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000003au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000003bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000003cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000003eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000003fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000041u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000042u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000043u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000044u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000045u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000046u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000047u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000048u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000049u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000004au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000004bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000004cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000004du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000004eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000004fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000050u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000051u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000052u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000053u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000054u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000055u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000056u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000005bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000005cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000005du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000005eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000005fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000060u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000061u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000062u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000063u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000064u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000065u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000066u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000067u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000069u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000006au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000006bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000006cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000006du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000006eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000006fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000070u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000071u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000072u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000073u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000074u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000075u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000076u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000077u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000078u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000079u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000007au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000007bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000007cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000007du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000007eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000007fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000080u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000081u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000082u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000083u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000085u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000086u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000088u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000089u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000008au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000008bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000008cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000008du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000008eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000008fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000090u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000091u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000092u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000093u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000094u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000095u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000096u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000097u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x00000099u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000009au, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000009bu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000009cu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000009du, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000009eu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x0000009fu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a0u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a1u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a2u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a3u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a4u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a6u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a7u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a8u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000a9u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000aau, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000abu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000acu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000adu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000aeu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000afu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b0u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b1u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b2u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b3u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b4u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b5u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b6u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b7u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b8u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000b9u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000bau, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000bbu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000bcu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000bdu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000beu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000bfu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c0u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c1u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c2u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c3u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c4u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c5u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c6u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c7u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c8u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000cau, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000cbu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000d1u, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000ccu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000cdu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000ceu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000cfu, c->r[2]);
    mem_w8(ram, c->r[3] + 0x000000d0u, c->r[2]);
L_08a15d64:
    c->r[16] = 0u + 0u;
    c->r[2] = c->r[16] << 2;
L_08a15d6c:
    c->r[4] = c->r[2] + c->r[18];
    c->r[2] = c->r[2] + c->r[19];
    c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = (0u < c->r[7]) ? 1u : 0u;
    c->r[2] = (0u < c->r[6]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    if (c->r[2] == 0u) { c->r[16] = c->r[16] + 0x00000001u; goto L_08a15dac; }
    c->r[2] = c->r[16] + c->r[17];
    c->r[4] = c->r[7] + 0u;
    { int _c = (c->r[6] == c->r[7]); c->r[5] = c->r[6] + 0u; if (_c) goto L_08a15da8; }
    { c->r[31] = 0x08a15da8u; c->r[6] = mem_r8(ram, c->r[2] + 0x00000000u); func_08a19db8(c, ram); }
L_08a15da8:
    c->r[16] = c->r[16] + 0x00000001u;
L_08a15dac:
    c->r[2] = ((s32)c->r[16] < (s32)0x000000d2u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[16] << 2; if (_c) goto L_08a15d6c; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000074u);
    if (c->r[2] == 0u) { c->r[4] = mem_r32(ram, c->r[18] + 0x0000034cu); goto L_08a15dc8; }
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
L_08a15dc8:
    c->r[2] = mem_r32(ram, c->r[19] + 0x0000034cu);
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000364u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] + c->r[3];
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a159e0 */
}

/* func_08a173f0  0x08a173f0..0x08a17660  624 bytes, source=fde */
void func_08a173f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a173f0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = c->r[6] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[21] = mem_r32(ram, c->r[6] + 0x00000004u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[5]);
    { int _c = (c->r[21] == 0u); mem_w32(ram, c->r[29] + 0x00000008u, c->r[21]); if (_c) goto L_08a174c4; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a17438:
    c->r[18] = c->r[2] + 0xffffffffu;
    c->r[19] = c->r[18] << 1;
    c->r[2] = c->r[19] + 0x00000001u;
    c->r[2] = (c->r[2] < c->r[21]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[19] + 0u; if (_c) goto L_08a174b8; }
L_08a17454:
    c->r[23] = c->r[3] + 0x00000002u;
    c->r[2] = (c->r[23] < c->r[21]) ? 1u : 0u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[20] = c->r[18] << 2;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[18] << 3; if (_c) goto L_08a17608; }
L_08a1746c:
    c->r[17] = c->r[16] + c->r[22];
L_08a17470:
    c->r[16] = c->r[20] + c->r[22];
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a1748cu; c->r[18] = c->r[19] + 0x00000001u; recomp_call_indirect(c, ram, 0x08a17484u, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[4] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a174bc; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000004u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[3]);
L_08a174a4:
    c->r[19] = c->r[18] << 1;
    c->r[2] = c->r[19] + 0x00000001u;
    c->r[2] = (c->r[2] < c->r[21]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[19] + 0u; if (_c) goto L_08a17454; }
L_08a174b8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a174bc:
    { int _c = (c->r[4] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a17438; }
L_08a174c4:
    c->r[2] = (c->r[21] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[21] << 2; if (_c) goto L_08a17580; }
    c->r[2] = c->r[2] + c->r[22];
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000000cu);
L_08a174dc:
    c->r[2] = mem_r32(ram, c->r[22] + 0x00000000u);
    c->r[21] = c->r[21] + 0xffffffffu;
    c->r[5] = c->r[5] + 0xfffffffcu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[5]);
    c->r[5] = 0u + 0x00000001u;
    c->r[4] = (c->r[5] < c->r[21]) ? 1u : 0u;
    mem_w32(ram, c->r[22] + 0x00000000u, c->r[3]);
    c->r[18] = 0u + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000000cu);
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); if (_c) goto L_08a17574; }
    c->r[19] = 0u + 0u;
L_08a17510:
    c->r[23] = c->r[19] + 0x00000002u;
    c->r[2] = (c->r[23] < c->r[21]) ? 1u : 0u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[20] = c->r[18] << 2;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[18] << 3; if (_c) goto L_08a175b0; }
L_08a17528:
    c->r[17] = c->r[16] + c->r[22];
L_08a1752c:
    c->r[16] = c->r[20] + c->r[22];
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a17548u; c->r[18] = c->r[19] + 0x00000001u; recomp_call_indirect(c, ram, 0x08a17540u, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[2] = (c->r[21] < 0x00000002u) ? 1u : 0u; if (_c) goto L_08a17578; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000004u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[3]);
L_08a17560:
    c->r[3] = c->r[18] << 1;
    c->r[2] = c->r[3] + 0x00000001u;
    c->r[2] = (c->r[2] < c->r[21]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[19] = c->r[3] + 0u; if (_c) goto L_08a17510; }
L_08a17574:
    c->r[2] = (c->r[21] < 0x00000002u) ? 1u : 0u;
L_08a17578:
    { int _c = (c->r[2] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x0000000cu); if (_c) goto L_08a174dc; }
L_08a17580:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a175b0:
    c->r[17] = c->r[16] + c->r[22];
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a175c8u; c->r[30] = c->r[20] + c->r[22]; recomp_call_indirect(c, ram, 0x08a175c0u, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a17600; }
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a175e4u; c->r[18] = c->r[23] + 0u; recomp_call_indirect(c, ram, 0x08a175dcu, _t); }
    if ((s32)c->r[2] <= 0) { c->r[17] = c->r[16] + c->r[22]; goto L_08a1752c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { mem_w32(ram, c->r[17] + 0x00000008u, c->r[3]); goto L_08a17560; }
L_08a17600:
    { c->r[20] = c->r[18] << 2; goto L_08a17528; }
L_08a17608:
    c->r[17] = c->r[16] + c->r[22];
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a17620u; c->r[30] = c->r[20] + c->r[22]; recomp_call_indirect(c, ram, 0x08a17618u, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a17658; }
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a1763cu; c->r[18] = c->r[23] + 0u; recomp_call_indirect(c, ram, 0x08a17634u, _t); }
    if ((s32)c->r[2] <= 0) { c->r[17] = c->r[16] + c->r[22]; goto L_08a17470; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { mem_w32(ram, c->r[17] + 0x00000008u, c->r[3]); goto L_08a174a4; }
L_08a17658:
    { c->r[20] = c->r[18] << 2; goto L_08a1746c; }
    return; /* fell out of func_08a173f0 */
}

/* func_08a18fcc  0x08a18fcc..0x08a18fd4  8 bytes, source=residue */
void func_08a18fcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18fccu);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18fcc */
}

/* func_08a1a2a0  0x08a1a2a0..0x08a1a474  468 bytes, source=sweep */
void func_08a1a2a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a2a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    c->r[3] = c->r[16] + 0x00000320u;
    c->r[4] = c->r[4] + 0x00000268u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[2] = c->r[16] + 0x000002c4u;
    c->r[5] = 0u + 0x00000018u;
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[3]);
    mem_w32(ram, c->r[16] + 0x00000000u, 0u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[4]);
    mem_w32(ram, c->r[16] + 0x00000010u, 0u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[16] + 0x00000014u;
L_08a1a300:
    c->r[5] = c->r[5] + 0xffffffffu;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    { int _c = ((s32)c->r[5] >= 0); c->r[2] = c->r[2] + 0x00000001u; if (_c) goto L_08a1a300; }
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001634u;
    mem_w32(ram, c->r[16] + 0x00000034u, c->r[2]);
    c->r[6] = c->r[16] + 0x0000007cu;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[16] + 0x00000030u, 0u);
    mem_w32(ram, c->r[16] + 0x00000038u, 0u);
    mem_w32(ram, c->r[16] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000040u, 0u);
    mem_w32(ram, c->r[16] + 0x00000044u, 0u);
    mem_w32(ram, c->r[16] + 0x00000048u, 0u);
    mem_w32(ram, c->r[16] + 0x0000004cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000050u, 0u);
    mem_w32(ram, c->r[16] + 0x00000054u, 0u);
    mem_w32(ram, c->r[16] + 0x00000058u, 0u);
    mem_w32(ram, c->r[16] + 0x0000005cu, 0u);
    mem_w8(ram, c->r[16] + 0x00000060u, 0u);
L_08a1a380:
    c->r[3] = c->r[6] + c->r[5];
    c->r[5] = c->r[5] + 0x00000001u;
    c->r[2] = (c->r[5] < 0x00000024u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); mem_w8(ram, c->r[3] + 0x00000000u, 0u); if (_c) goto L_08a1a380; }
    c->r[3] = 0u + 0x00000000u;
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[16] + 0x000000a8u, c->r[2]);
    mem_w32(ram, c->r[16] + 0x000000acu, c->r[3]);
    c->r[2] = 0u + 0x0000330eu;
    c->r[3] = 0u + 0x00001234u;
    mem_w16(ram, c->r[16] + 0x000000b0u, c->r[2]);
    c->r[2] = 0u + 0xffffabcdu;
    c->r[5] = 0u + 0u;
    mem_w16(ram, c->r[16] + 0x000000b2u, c->r[2]);
    c->r[2] = 0u + 0xffffe66du;
    c->r[6] = 0u + 0x00000114u;
    mem_w16(ram, c->r[16] + 0x000000b4u, c->r[3]);
    c->r[3] = 0u + 0xffffdeecu;
    mem_w16(ram, c->r[16] + 0x000000b6u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w16(ram, c->r[16] + 0x000000b8u, c->r[3]);
    c->r[3] = 0u + 0x0000000bu;
    mem_w16(ram, c->r[16] + 0x000000bcu, c->r[3]);
    mem_w16(ram, c->r[16] + 0x000000bau, c->r[2]);
    mem_w32(ram, c->r[16] + 0x000000a0u, 0u);
    mem_w32(ram, c->r[16] + 0x000000c0u, 0u);
    mem_w32(ram, c->r[16] + 0x000000c4u, 0u);
    mem_w32(ram, c->r[16] + 0x000000c8u, 0u);
    mem_w32(ram, c->r[16] + 0x000000ccu, 0u);
    mem_w32(ram, c->r[16] + 0x000000d0u, 0u);
    mem_w32(ram, c->r[16] + 0x000000d4u, 0u);
    mem_w32(ram, c->r[16] + 0x000000fcu, 0u);
    mem_w32(ram, c->r[16] + 0x00000100u, 0u);
    mem_w32(ram, c->r[16] + 0x00000104u, 0u);
    mem_w32(ram, c->r[16] + 0x00000108u, 0u);
    mem_w32(ram, c->r[16] + 0x0000010cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000110u, 0u);
    mem_w32(ram, c->r[16] + 0x00000114u, 0u);
    mem_w32(ram, c->r[16] + 0x00000118u, 0u);
    mem_w32(ram, c->r[16] + 0x0000011cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000120u, 0u);
    mem_w8(ram, c->r[16] + 0x000000d8u, 0u);
    mem_w8(ram, c->r[16] + 0x000000e0u, 0u);
    mem_w32(ram, c->r[16] + 0x000000f8u, 0u);
    mem_w32(ram, c->r[16] + 0x00000148u, 0u);
    mem_w32(ram, c->r[16] + 0x0000014cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000150u, 0u);
    mem_w32(ram, c->r[16] + 0x00000154u, 0u);
    mem_w32(ram, c->r[16] + 0x00000254u, 0u);
    mem_w32(ram, c->r[16] + 0x000001d4u, 0u);
    mem_w32(ram, c->r[16] + 0x00000258u, 0u);
    mem_w32(ram, c->r[16] + 0x0000025cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000260u, 0u);
    { c->r[31] = 0x08a1a460u; mem_w32(ram, c->r[16] + 0x00000264u, 0u); func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000037cu, 0u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1a2a0 */
}

/* func_08a1c254  0x08a1c254..0x08a1c294  64 bytes, source=sweep */
void func_08a1c254(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c254u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1c270u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a1c280u; c->r[6] = c->r[17] + 0u; func_08a1b200(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1c254 */
}

/* func_08a2190c  0x08a2190c..0x08a21a48  316 bytes, source=sweep */
void func_08a2190c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a2190cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    { c->r[31] = 0x08a21930u; c->r[16] = c->r[5] + 0u; func_08a19f7c(c, ram); }
    c->r[2] = 0x08a60000u;
    c->r[19] = c->r[2] + 0x00004de0u;
    c->r[3] = mem_r32(ram, c->r[19] + 0x00000008u);
    c->r[2] = 0u + 0x00001000u;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x08a21944u, 0x7u); goto L_08a21948; }
L_08a21948:
    c->r[17] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[4] = c->r[18] + 0u;
    c->r[17] = alx_ins(c->r[17], 0u, 0u, 1u);
    c->r[16] = c->r[17] - c->r[16];
    c->r[16] = c->r[16] + 0x00000fefu;
    alx_divu(c, c->r[16], c->r[2]);
    c->r[16] = c->lo;
    c->r[16] = c->r[16] + 0xffffffffu;
    c->r[16] = c->r[16] << 12;
    c->r[2] = ((s32)c->r[16] < (s32)0x00001000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = 0u + 0u; if (_c) goto L_08a21994; }
    { c->r[31] = 0x08a21980u; func_08a1a8e4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[19] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[17];
    { int _c = (c->r[5] == c->r[2]); c->r[4] = c->r[18] + 0u; if (_c) goto L_08a219bc; }
L_08a21994:
    { c->r[31] = 0x08a2199cu; func_08a19fb8(c, ram); }
    c->r[2] = 0u + 0u;
L_08a219a0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a219bc:
    c->r[5] = 0u - c->r[16];
    { c->r[31] = 0x08a219c8u; c->r[4] = c->r[18] + 0u; func_08a1a8e4(c, ram); }
    c->r[3] = 0u + 0xffffffffu;
    c->r[4] = c->r[18] + 0u;
    c->r[5] = 0u + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[6] = 0x08ba0000u; if (_c) goto L_08a21a08; }
    c->r[5] = mem_r32(ram, c->r[19] + 0x00000008u);
    c->r[3] = c->r[17] - c->r[16];
    c->r[3] = c->r[3] | 0x0001u;
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[3]);
    c->r[4] = c->r[18] + 0u;
    c->r[2] = mem_r32(ram, c->r[6] + 0xffffff48u);
    c->r[2] = c->r[2] - c->r[16];
    { c->r[31] = 0x08a21a00u; mem_w32(ram, c->r[6] + 0xffffff48u, c->r[2]); func_08a19fb8(c, ram); }
    { c->r[2] = 0u + 0x00000001u; goto L_08a219a0; }
L_08a21a08:
    { c->r[31] = 0x08a21a10u; func_08a1a8e4(c, ram); }
    c->r[6] = mem_r32(ram, c->r[19] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    c->r[4] = c->r[18] + 0u;
    c->r[17] = c->r[2] - c->r[6];
    c->r[2] = ((s32)c->r[17] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[17] | 0x0001u; if (_c) goto L_08a21994; }
    c->r[2] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x000051ecu);
    c->r[2] = 0x08ba0000u;
    c->r[3] = c->r[5] - c->r[3];
    mem_w32(ram, c->r[2] + 0xffffff48u, c->r[3]);
    { mem_w32(ram, c->r[6] + 0x00000004u, c->r[7]); goto L_08a21994; }
    return; /* fell out of func_08a2190c */
}

/* func_08a23b5c  0x08a23b5c..0x08a23bd4  120 bytes, source=residue */
void func_08a23b5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23b5cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a23b80u; c->r[16] = c->r[5] + 0u; func_08a19374(c, ram); }
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[18] + 0x0000000eu);
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a23b94u; c->r[7] = c->r[17] + 0u; func_08a23ee8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = mem_r16(ram, c->r[18] + 0x0000000cu); if (_c) goto L_08a23bcc; }
    mem_w32(ram, c->r[18] + 0x00000050u, c->r[3]);
    c->r[2] = c->r[2] | 0x1000u;
L_08a23bac:
    mem_w16(ram, c->r[18] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[3] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23bcc:
    { c->r[2] = alx_ins(c->r[2], 0u, 12u, 12u); goto L_08a23bac; }
    return; /* fell out of func_08a23b5c */
}
