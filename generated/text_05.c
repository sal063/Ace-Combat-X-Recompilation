#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_088044f8  0x088044f8..0x08804528  48 bytes, source=sweep */
void func_088044f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088044f8u);
    c->r[3] = 0x08a50000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[3] + 0x000015a0u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]); if (_c) goto L_08804518; }
    c->r[4] = mem_r32(ram, c->r[3] + 0x000015a0u);
    { u32 _t = c->r[4]; c->r[31] = 0x08804518u; recomp_call_indirect(c, ram, 0x08804510u, _t); }
L_08804518:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088044f8 */
}

/* func_08806b6c  0x08806b6c..0x08806bb0  68 bytes, source=sweep */
void func_08806b6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806b6cu);
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
    return; /* fell out of func_08806b6c */
}

/* func_088077d4  0x088077d4..0x088077f4  32 bytes, source=sweep */
void func_088077d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088077d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088077d4 */
}

/* func_08808458  0x08808458..0x08808588  304 bytes, source=fde */
void func_08808458(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808458u);
L_08808458:
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x0000001bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08808574; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffe70cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08808458u: goto L_08808458; case 0x088084b0u: goto L_088084b0; case 0x088084d0u: goto L_088084d0; case 0x0880852cu: goto L_0880852c; case 0x08808560u: goto L_08808560; case 0x08808574u: goto L_08808574; default: recomp_trap_unknown_indirect(c, ram, 0x088084a8u, _t); return; } }
L_088084b0:
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    { c->r[31] = 0x088084c8u; c->r[5] = 0u + 0u; func_089b34c8(c, ram); }
    { goto L_08808574; }
L_088084d0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c40u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088084ec; }
    { c->r[31] = 0x088084ecu; func_088ba7f8(c, ram); }
L_088084ec:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c40u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001e94u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08808510u; c->r[4] = 0u + 0u; recomp_call_indirect(c, ram, 0x08808508u, _t); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08808524u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_089b357c(c, ram); }
    { goto L_08808574; }
L_0880852c:
    { c->r[31] = 0x08808534u; func_089db424(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c40u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001e94u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08808558u; c->r[4] = 0u + 0x00000001u; recomp_call_indirect(c, ram, 0x08808550u, _t); }
    { goto L_08808574; }
L_08808560:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880856cu; c->r[4] = c->r[4] + 0x00003c30u; func_089b3680(c, ram); }
    { c->r[31] = 0x08808574u; func_08847390(c, ram); }
L_08808574:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08808458 */
}

/* func_0880b24c  0x0880b24c..0x0880b360  276 bytes, source=fde */
void func_0880b24c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b24cu);
    c->r[29] = c->r[29] + 0xfffffe40u;
    mem_w32(ram, c->r[29] + 0x000001b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000001b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0xffffeb24u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0880b280u; c->r[6] = 0u + 0x0000018cu; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001a0u, 0u);
L_0880b284:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880b29c; }
    { goto L_0880b34c; }
L_0880b29c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880b34c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880b304; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x0880b304u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08808e2c(c, ram); }
L_0880b304:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0880b33cu; c->r[6] = 0u + 0x00000001u; func_089f586c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]); goto L_0880b284; }
L_0880b34c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000001b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000001b0u);
    { c->r[29] = c->r[29] + 0x000001c0u; return; }
    return; /* fell out of func_0880b24c */
}

/* func_0880d5f8  0x0880d5f8..0x0880d630  56 bytes, source=sweep */
void func_0880d5f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d5f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d5f8 */
}

/* func_0880f104  0x0880f104..0x0880f188  132 bytes, source=fde */
void func_0880f104(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880f104u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880f160; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x0880f150u; c->r[5] = 0u + 0u; recomp_call_indirect(c, ram, 0x0880f148u, _t); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[2]);
L_0880f160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880f104 */
}

/* func_08812650  0x08812650..0x088126ac  92 bytes, source=fde */
void func_08812650(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812650u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881266cu; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001ef0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff154u;
    { c->r[31] = 0x08812690u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812698u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08812650 */
}

/* func_08815bec  0x08815bec..0x08815ce4  248 bytes, source=fde */
void func_08815bec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08815becu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08815c30; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x08815c30u; c->r[5] = c->r[5] + 0x00003d38u; func_089cd654(c, ram); }
L_08815c30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x08815c54u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2e0u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2e4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2e8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0x00120000u;
    { c->r[31] = 0x08815cd0u; c->r[8] = c->r[8] | 0x0800u; func_088149fc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08815bec */
}

/* func_08819c30  0x08819c30..0x08819c74  68 bytes, source=sweep */
void func_08819c30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819c30u);
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
    { c->r[31] = 0x08819c60u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819c30 */
}

/* func_0881fea0  0x0881fea0..0x088204a8  1544 bytes, source=fde */
void func_0881fea0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881fea0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000050u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0881fee0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001bu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff87cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff87cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff880u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff884u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881ff70; }
    { goto L_0881ff84; }
L_0881ff70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff884u);
    { mem_wf32(ram, c->r[2] + 0x00000054u, c->f[0]); goto L_0881ffbc; }
L_0881ff84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff888u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881ffac; }
    { goto L_0881ffbc; }
L_0881ffac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff888u);
    mem_wf32(ram, c->r[2] + 0x00000054u, c->f[0]);
L_0881ffbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff88cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff890u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08820008; }
    { goto L_08820024; }
L_08820008:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff890u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000001cu, c->f[0]);
L_08820024:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08820048; }
    { goto L_08820064; }
L_08820048:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff890u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000001cu, c->f[0]);
L_08820064:
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08820078u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000018u);
    { c->r[31] = 0x08820088u; c->f[20] = c->f[1] * c->f[0]; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[20] + c->f[0];
    mem_wf32(ram, c->r[17] + 0x00000050u, c->f[0]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088200a8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000018u);
    { c->r[31] = 0x088200b8u; c->f[20] = c->f[1] * c->f[0]; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[20] + c->f[0];
    mem_wf32(ram, c->r[17] + 0x00000058u, c->f[0]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088200dcu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088200ecu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08820124; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff894u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000018u, c->f[0]); goto L_08820180; }
L_08820124:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0882013cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882014cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08820180; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff894u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000018u, c->f[0]);
L_08820180:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0882018cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff898u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088201a4u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088201c0u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088201dc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x088201d4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
L_088201dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xfffff8a0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088201f8u; c->r[7] = mem_r32(ram, c->r[7] + 0xfffff8a4u); func_08a13a8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08820204u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0882022c; }
    { goto L_0882023c; }
L_0882022c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    { mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]); goto L_08820274; }
L_0882023c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf24u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08820264; }
    { goto L_08820274; }
L_08820264:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf24u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]);
L_08820274:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0882028cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882029cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088202dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088202d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x00000006u, 0u); goto L_088202dc; }
L_088202d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_088202dc:
    { c->r[31] = 0x088202e4u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08820488; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08820314u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088203b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882035cu; c->r[6] = 0u + 0x00000009u; func_0881ced0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820368u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820390u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088203b0u; c->r[7] = 0u + 0x00000009u; func_0881ef98(c, ram); }
    { goto L_08820458; }
L_088203b8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088203c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088203e8u; c->r[4] = c->r[2] + 0u; func_0881ef10(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08820414u; c->r[6] = c->r[2] + 0u; func_0881ced0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820420u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08820458u; c->r[6] = c->r[2] + 0u; func_0881f914(c, ram); }
L_08820458:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbf20u);
    c->r[2] = 0u + 0u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_08820488:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0881fea0 */
}

/* func_08824c8c  0x08824c8c..0x08824d0c  128 bytes, source=sweep */
void func_08824c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824c8cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffffa1cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    c->r[6] = mem_lwl(ram, c->r[2] + 0x0000000bu, c->r[6]);
    c->r[6] = mem_lwr(ram, c->r[2] + 0x00000008u, c->r[6]);
    c->r[7] = mem_lwl(ram, c->r[2] + 0x0000000fu, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x0000000cu, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x0000000bu, c->r[6]);
    mem_swr(ram, c->r[3] + 0x00000008u, c->r[6]);
    mem_swl(ram, c->r[3] + 0x0000000fu, c->r[7]);
    mem_swr(ram, c->r[3] + 0x0000000cu, c->r[7]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08824c8c */
}

/* func_08826d80  0x08826d80..0x08826da8  40 bytes, source=sweep */
void func_08826d80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826d80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b91u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826d80 */
}

/* func_0882a104  0x0882a104..0x0882a2b4  432 bytes, source=fde */
void func_0882a104(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882a104u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a130; }
    { goto L_0882a2a0; }
L_0882a130:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882a1ec; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0882a150u; c->r[4] = c->r[4] + 0x00001658u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00003f24u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x0000161cu;
    { c->r[31] = 0x0882a174u; c->r[8] = 0u + 0x00001586u; func_089cdef8(c, ram); }
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
    { c->r[31] = 0x0882a1a8u; c->r[6] = c->r[6] + 0x00003f24u; func_089da230(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0882a1c0u; c->r[6] = c->r[6] + 0x00003fc8u; func_089da274(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000009u;
    c->r[7] = 0x08a80000u;
    { c->r[31] = 0x0882a1dcu; c->r[7] = c->r[7] + 0x00003fdcu; func_089da2b8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000a40u;
    { c->r[31] = 0x0882a1ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d9ec8(c, ram); }
L_0882a1ec:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882a294; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a20cu; c->r[4] = c->r[4] + 0x00000a40u; func_089da31c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882a264; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a234; }
    { goto L_0882a250; }
L_0882a234:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882a248u; c->r[5] = c->r[5] + 0xffffa2b4u; func_0880f03c(c, ram); }
    { goto L_0882a264; }
L_0882a250:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882a264u; c->r[5] = c->r[5] + 0xffff9fb0u; func_0880f03c(c, ram); }
L_0882a264:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ee8u);
    c->r[2] = 0x08830000u;
    c->r[2] = c->r[2] + 0xffffa2b4u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882a294; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003fc8u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00003fdcu;
    { c->r[31] = 0x0882a294u; c->r[6] = 0u + 0x00000012u; func_08a19db8(c, ram); }
L_0882a294:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882a2a0u; c->r[5] = 0u + 0u; func_0882adfc(c, ram); }
L_0882a2a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882a104 */
}

/* func_0882eae8  0x0882eae8..0x0882eb20  56 bytes, source=sweep */
void func_0882eae8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882eae8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882eae8 */
}

/* func_088317c4  0x088317c4..0x08831aac  744 bytes, source=fde */
void func_088317c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088317c4u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883185c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_0883185c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x0000000fu;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0883197c; }
    { goto L_08831980; }
L_0883197c:
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_08831980:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001920u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088319a4; }
    { goto L_088319b0; }
L_088319a4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001920u);
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_088319b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000032u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002df4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08831a6cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000048u); func_08939c88(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08831a90; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_08831a94; }
L_08831a90:
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
L_08831a94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088317c4 */
}

/* func_08833804  0x08833804..0x08833a08  516 bytes, source=fde */
void func_08833804(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08833804u);
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
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x08833864u; c->r[5] = c->r[5] + 0x00004688u; func_089cd600(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000046a5u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833894; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000002du, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x000046a5u, 0u);
L_08833894:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088338acu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088338bcu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08833904; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088338e8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000054u); func_089f73a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088338fcu; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
    { goto L_08833944; }
L_08833904:
    { c->r[31] = 0x0883390cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08833944; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08833928u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000054u); func_089f73a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000002du, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x000046a5u, 0u);
L_08833944:
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000046a5u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088339f0; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08833990; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0883398cu; c->r[5] = c->r[2] + 0u; func_0882fb00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08833990:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088339dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004698u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004698u);
    c->r[2] = c->r[2] + 0xffffde9au;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000050u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088339d4u; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]); goto L_088339f0; }
L_088339dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088339f0u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
L_088339f0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08833804 */
}

/* func_08835aa0  0x08835aa0..0x08835ed8  1080 bytes, source=fde */
void func_08835aa0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835aa0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08835ac0u; c->r[4] = c->r[4] + 0x00000af4u; func_088145dc(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08835accu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x08835ad4u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835b20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835b20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835b20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835b20; }
    { goto L_08835b48; }
L_08835b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835b48; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835b48u; c->r[5] = 0u + 0x00000001u; func_08836a10(c, ram); }
L_08835b48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835b70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835b70; }
    { goto L_08835bcc; }
L_08835b70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x08835b88u; c->r[6] = 0u + 0x00000006u; func_08968bc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835b9cu; c->r[5] = 0u + 0x0000000du; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835bcc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835bcc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835bccu; c->r[5] = 0u + 0x00000002u; func_08836a10(c, ram); }
L_08835bcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835c04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835becu; c->r[5] = 0u + 0x00000011u; func_08968bf8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08835c04; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835c04u; c->r[5] = 0u + 0x00000004u; func_08836a10(c, ram); }
L_08835c04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000017u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835c6c; }
    { goto L_08835c94; }
L_08835c6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835c94; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835c94u; c->r[5] = 0u + 0x00000008u; func_08836a10(c, ram); }
L_08835c94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835cf4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835cb4u; c->r[5] = 0u + 0x00000018u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835cc8u; c->r[5] = 0u + 0x00000019u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835cf4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835cf4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835cf4u; c->r[5] = 0u + 0x00000010u; func_08836a10(c, ram); }
L_08835cf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835d1c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835d1c; }
    { goto L_08835d7c; }
L_08835d1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835d2cu; c->r[5] = 0u + 0x00000014u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835d40u; c->r[5] = 0u + 0x00000015u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835d6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835d6c; }
    { goto L_08835d7c; }
L_08835d6c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835d7cu; c->r[5] = 0u + 0x00000020u; func_08836a10(c, ram); }
L_08835d7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835da4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835da4; }
    { goto L_08835df4; }
L_08835da4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835db4u; c->r[5] = 0u + 0x00000018u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835dc8u; c->r[5] = 0u + 0x00000019u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835df4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835df4u; c->r[5] = 0u + 0x00000040u; func_08836a10(c, ram); }
L_08835df4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835e54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835e14u; c->r[5] = 0u + 0x00000016u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835e28u; c->r[5] = 0u + 0x00000017u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835e54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835e54; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835e54u; c->r[5] = 0u + 0x00000080u; func_08836a10(c, ram); }
L_08835e54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835e8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835e74u; c->r[5] = 0u + 0x0000001du; func_08968bf8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835e8c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835e8cu; c->r[5] = 0u + 0x00000100u; func_08836a10(c, ram); }
L_08835e8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08835ec4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    { c->r[31] = 0x08835eacu; c->r[5] = 0u + 0x0000001bu; func_08968bf8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835ec4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08835ec4u; c->r[5] = 0u + 0x00000200u; func_08836a10(c, ram); }
L_08835ec4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08835aa0 */
}

/* func_0883a9c4  0x0883a9c4..0x0883aa2c  104 bytes, source=fde */
void func_0883a9c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a9c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0883a9d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883a9f0; }
    { goto L_0883aa18; }
L_0883a9f0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0883aa08u; c->r[7] = 0u + 0u; func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0883a9d8; }
L_0883aa18:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883a9c4 */
}

/* func_0883cc14  0x0883cc14..0x0883cf2c  792 bytes, source=fde */
void func_0883cc14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883cc14u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883cc54; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001d90u;
    c->r[5] = 0u + 0x0000158du;
    { c->r[31] = 0x0883cc4cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883cf18; }
L_0883cc54:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004e10u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883ccf8; }
    { c->r[31] = 0x0883cc70u; func_08902e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883cce4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883cc84u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0883cc98u; c->r[6] = 0u + 0x000019e8u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883cca4u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0883ccbcu; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0x08a80000u;
    c->r[6] = c->r[6] + 0x00002e74u;
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0883ccdcu; c->r[7] = c->r[7] + 0x00001d9cu; func_089d8ae4(c, ram); }
    { goto L_0883ccf8; }
L_0883cce4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883ccf8u; c->r[5] = c->r[5] + 0xffffd238u; func_0880f03c(c, ram); }
L_0883ccf8:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e10u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883cf18; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883cd1cu; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0327u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883cd98; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0327u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883cd68; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0326u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883cda4; }
    { goto L_0883cdb0; }
L_0883cd68:
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883cdcc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883cd8c; }
    { goto L_0883cdb0; }
L_0883cd8c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883cdcc; }
L_0883cd98:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883cdcc; }
L_0883cda4:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883cdcc; }
L_0883cdb0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001a10u;
    c->r[6] = 0x08840000u;
    { c->r[31] = 0x0883cdccu; c->r[6] = c->r[6] + 0xffffd328u; func_0880f1d4(c, ram); }
L_0883cdcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883cf18; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883cde4u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001004u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000df8u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0883ce08u; c->r[6] = 0u + 0x00000010u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883ce90; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883ce1cu; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0326u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883ce90; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883ce3cu; c->r[4] = c->r[4] + 0x00000330u; func_089d9c58(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e74u;
    { c->r[31] = 0x0883ce4cu; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883ce60u; c->r[5] = c->r[5] + 0xffffcf2cu; func_0880f03c(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004e30u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883cf18; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883ce88u; c->r[5] = c->r[5] + 0xffffd014u; func_0880f03c(c, ram); }
    { goto L_0883cf18; }
L_0883ce90:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e14u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883cec0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883ceb8u; c->r[5] = c->r[5] + 0xffffd2b0u; func_0880f03c(c, ram); }
    { goto L_0883cf18; }
L_0883cec0:
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a80000u;
    c->r[3] = c->r[3] + 0x00004e14u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0883cee8u; c->r[5] = c->r[5] + 0x00001da8u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0883cef8u; c->r[5] = 0u + 0x00000001u; func_089d987c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0883cf18u; c->r[7] = c->r[7] + 0x00001d9cu; func_089d8ae4(c, ram); }
L_0883cf18:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_0883cc14 */
}

/* func_08846208  0x08846208..0x08846280  120 bytes, source=sweep */
void func_08846208(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08846208u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08846270; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08846270; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000328u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
L_08846270:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08846208 */
}

/* func_0884ba90  0x0884ba90..0x0884bb50  192 bytes, source=fde */
void func_0884ba90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884ba90u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0884bab0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884bb38; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x0884bad0u; c->r[4] = c->r[4] + 0x00005260u; func_089d76a0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 21;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[2] >> 11);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000025f8u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0884bb14u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884bb2cu; c->r[6] = c->r[2] + 0u; func_089f8998(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f2cu, c->r[2]);
L_0884bb38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_0884ba90 */
}

/* func_0884d1ec  0x0884d1ec..0x0884d22c  64 bytes, source=sweep */
void func_0884d1ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d1ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000088u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x00000088u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d1ec */
}

/* func_0885005c  0x0885005c..0x0885028c  560 bytes, source=fde */
void func_0885005c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885005cu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[9]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08850278; }
    { c->r[31] = 0x0885009cu; func_0884e084(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850278; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088500b8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088500d8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885010c; }
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0885010c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850120; }
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08850120:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850198; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08850148u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0885aca8(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002728u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[30] + 0x00000059u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[30] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0u + 0x00000014u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08850198u; c->r[7] = 0u + 0x00000020u; func_0884f888(c, ram); }
L_08850198:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850278; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0xffffff00u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088501c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_088501f8; }
L_088501c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088501e8; }
    { c->r[31] = 0x088501e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d790(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_088501f0; }
L_088501e8:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
L_088501f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_088501f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850278; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000272cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0885022c; }
    { goto L_0885025c; }
L_0885022c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08850254u; c->r[10] = mem_r32(ram, c->r[30] + 0x00000018u); func_089f6d90(c, ram); }
    { goto L_08850278; }
L_0885025c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08850278u; c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089f6b84(c, ram); }
L_08850278:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0885005c */
}

/* func_088554a4  0x088554a4..0x08855bec  1864 bytes, source=fde */
void func_088554a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088554a4u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff90e8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088554ec; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088554e0u; c->r[4] = c->r[4] + 0xffff9100u; func_08808240(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff90e8u, c->r[2]);
L_088554ec:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff90f0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08855514; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08855508u; c->r[4] = c->r[4] + 0xffff9110u; func_08808240(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff90f0u, c->r[2]);
L_08855514:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08855538; }
    { goto L_08855958; }
L_08855538:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002aa8u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff8c74u, c->f[0]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9100u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffff9100u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08855570u; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8e58u;
    { c->r[31] = 0x08855584u; c->r[5] = c->r[2] + 0u; func_0885a3c8(c, ram); }
    c->r[4] = 0u + 0x0000002du;
    { c->r[31] = 0x08855590u; c->r[5] = 0u + 0x00000037u; func_0883a204(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
L_08855598:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088555b4; }
    { goto L_08855614; }
L_088555b4:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088555ccu; c->r[6] = 0u + 0u; func_0885a660(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088555e4; }
    { goto L_08855614; }
L_088555e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8b38u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08855604; }
    { goto L_08855614; }
L_08855604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_08855598; }
L_08855614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885565c; }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08855638u; c->r[5] = c->r[2] + 0u; func_0885a7fc(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08855644u; c->r[4] = c->r[4] + 0xffff9100u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885565cu; c->r[6] = 0u + 0x0000000cu; func_0885a9ec(c, ram); }
L_0885565c:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08855668u; c->r[4] = c->r[4] + 0xffff9100u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08855688; }
    { goto L_08855958; }
L_08855688:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002aacu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002ab0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088556a4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ab4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ab8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002abcu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088556d4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ab4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08855708; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ac0u);
    { mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]); goto L_08855714; }
L_08855708:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ac4u);
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
L_08855714:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x08855728u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08855744u; func_0885a0b8(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ac8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002aa8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08855760u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885578cu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088557a4u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9100u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffff9100u;
    { c->r[31] = 0x088557c0u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088557ccu; c->r[4] = c->r[4] + 0xffff9100u; func_08886934(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff90c4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002accu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08855824; }
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08855878; }
    { goto L_08855958; }
L_08855824:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90f8u, 0u);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff9104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08855850; }
    { goto L_08855860; }
L_08855850:
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9104u);
    { mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]); goto L_08855868; }
L_08855860:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
L_08855868:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffff9104u, c->f[0]); goto L_08855958; }
L_08855878:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff9104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0885589c; }
    { goto L_088558b8; }
L_0885589c:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90f8u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffff9104u, c->f[0]); goto L_08855908; }
L_088558b8:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90f8u, 0u);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff9104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088558e4; }
    { goto L_088558f4; }
L_088558e4:
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9104u);
    { mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]); goto L_088558fc; }
L_088558f4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
L_088558fc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff9104u, c->f[0]);
L_08855908:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9104u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ad0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0885593c; }
    { goto L_08855958; }
L_0885593c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ad0u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff9104u, c->f[0]);
L_08855958:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08855964u; c->r[4] = c->r[4] + 0xffff9100u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08855984; }
    { goto L_08855ba4; }
L_08855984:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9100u;
    { c->r[31] = 0x08855994u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ac8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088559bc; }
    { goto L_088559c8; }
L_088559bc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    { mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]); goto L_088559d4; }
L_088559c8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ac8u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
L_088559d4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9100u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9104u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9108u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff910cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff90f8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08855a74; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ad4u);
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]); goto L_08855ab0; }
L_08855a74:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002ac8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ad8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002adcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ab4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
L_08855ab0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ae0u);
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x08855accu; c->r[5] = c->r[5] + 0xffff9110u; func_0884d0b0(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ae4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ae8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08855afc; }
    { goto L_08855b38; }
L_08855afc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x08855b0cu; c->r[5] = c->r[5] + 0xffff9110u; func_0884d0b0(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002ae4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002aecu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[1]); goto L_08855b40; }
L_08855b38:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
L_08855b40:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    { c->r[31] = 0x08855b4cu; mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]); func_08857bac(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[12] = c->f[0];
    { c->r[31] = 0x08855b64u; c->r[4] = 0u + 0x00000001u; func_08857860(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff911cu, c->r[2]);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff90fcu, 0u); goto L_08855bd8; }
L_08855ba4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff90fcu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08855bc4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08855bc4u; mem_w32(ram, c->r[1] + 0xffff90fcu, c->r[2]); func_0885b09c(c, ram); }
L_08855bc4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08855bd8u; c->r[6] = 0u + 0x00000003u; func_08855dd4(c, ram); }
L_08855bd8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_088554a4 */
}

/* func_08859d8c  0x08859d8c..0x08859dc4  56 bytes, source=sweep */
void func_08859d8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859d8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08859db0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08859dc4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859d8c */
}

/* func_0885aa48  0x0885aa48..0x0885aa94  76 bytes, source=sweep */
void func_0885aa48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885aa48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885aa48 */
}

/* func_0885d27c  0x0885d27c..0x0885d4e8  620 bytes, source=sweep */
void func_0885d27c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885d27cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885d2e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885d2e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885d300; }
L_0885d2e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885d300; }
    { goto L_0885d310; }
L_0885d300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[3]);
L_0885d310:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000e3au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000eu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0885d36c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885d38c; }
    { goto L_0885d3d8; }
L_0885d38c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000063au;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885d3b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08862aec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0885d36c; }
L_0885d3d8:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0885d3dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885d3fc; }
    { goto L_0885d4a0; }
L_0885d3fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00001480u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00001460u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001460u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000002u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0885d3dc; }
L_0885d4a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000002eu);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885d27c */
}

/* func_08861cac  0x08861cac..0x08861cf0  68 bytes, source=sweep */
void func_08861cac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861cacu);
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
    { c->r[31] = 0x08861cdcu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861cac */
}

/* func_08862dc0  0x08862dc0..0x08862e24  100 bytes, source=sweep */
void func_08862dc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862dc0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08862de8; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08862e10; }
L_08862de8:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08862e08; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08862e08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08862e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862dc0 */
}

/* func_08867830  0x08867830..0x08867860  48 bytes, source=sweep */
void func_08867830(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08867830u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0886784cu; c->r[5] = 0u | 0xffffu; func_08867798(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08867830 */
}

/* func_0886f2f0  0x0886f2f0..0x0886f540  592 bytes, source=fde */
void func_0886f2f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886f2f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x0886f320u; c->r[4] = 0u + 0u; func_08867a3c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0886f330u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0886f338u; c->r[4] = 0u + 0x00000001u; func_08867a3c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0886f348u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0886f360u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0886f37cu; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0886f398u; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f3a4u; c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u); func_089b7544(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f3b0u; c->r[4] = c->r[4] + 0xffffc930u; func_089f5bd8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886f3bcu; c->r[5] = 0u + 0u; func_0886e214(c, ram); }
    { c->r[31] = 0x0886f3c4u; func_08867ab8(c, ram); }
    { c->r[31] = 0x0886f3ccu; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f3d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    { c->r[31] = 0x0886f3f0u; c->r[6] = c->r[2] + 0u; func_0886dbd8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    { c->r[31] = 0x0886f408u; c->r[6] = 0u + 0u; func_0886a514(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x0886f424u; c->r[6] = mem_r32(ram, c->r[6] + 0xffffbda0u); func_0886af20(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0u + 0x00001001u;
    c->r[6] = 0x00200000u;
    c->r[6] = c->r[6] | 0x0040u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0886f444u; c->r[8] = 0u + 0x00000002u; func_0886b5f4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f450u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f460u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb9c4u);
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x0886f480u; c->r[8] = 0u + 0u; func_0886df34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f48cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { c->r[31] = 0x0886f494u; c->r[4] = c->r[2] + 0u; func_088819b0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f4a0u; c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u); func_0886eee4(c, ram); }
    { c->r[31] = 0x0886f4a8u; func_0880b1dc(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f4b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0886fca4(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x0886f4d8u; c->r[6] = mem_r32(ram, c->r[6] + 0xffffbda0u); func_0886ad8c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0886f4fcu; c->r[5] = c->r[2] + 0u; func_0887a1b8(c, ram); }
    { c->r[31] = 0x0886f504u; func_0891f708(c, ram); }
    c->r[16] = 0x08a80000u;
    c->r[16] = mem_r32(ram, c->r[16] + 0x00002ed8u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886f518u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w8(ram, c->r[16] + 0x000000b7u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0886f2f0 */
}

/* func_088747c8  0x088747c8..0x08874aac  740 bytes, source=fde */
void func_088747c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088747c8u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000050u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08874804u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08874a30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000104u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000104u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887484c; }
    { goto L_08874874; }
L_0887484c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x000003e0u);
    { c->r[31] = 0x08874868u; c->r[7] = c->r[3] + 0u; func_08873988(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08874874; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08874874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037acu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037b0u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037b4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088748c4; }
    { goto L_088748d0; }
L_088748c4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037b4u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_088748d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088748f0; }
    { goto L_088748f4; }
L_088748f0:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088748f4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08874914; }
    { goto L_08874924; }
L_08874914:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_08874924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08874948; }
    { goto L_08874a30; }
L_08874948:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887497c; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_088749b4; }
L_0887497c:
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
L_088749b4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037b4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[0] / c->f[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037b8u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000037b4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[20] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088749f0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000040u); func_08a0f760(c, ram); }
    c->f[0] = -c->f[0];
    c->f[1] = c->f[20] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08874a10u; mem_wf32(ram, c->r[2] + 0x00000040u, c->f[0]); func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08874a30u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
L_08874a30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08874a50u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000144u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000d8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000144u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088747c8 */
}

/* func_0887d6c4  0x0887d6c4..0x0887d7d0  268 bytes, source=indirect */
void func_0887d6c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887d6c4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d7c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887d710; }
    { goto L_0887d7c0; }
L_0887d710:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0887d738; }
    { goto L_0887d748; }
L_0887d738:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)fabsf(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_0887d754; }
L_0887d748:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003970u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_0887d754:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x000000f8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887d784; }
    { goto L_0887d7a4; }
L_0887d784:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003974u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]); goto L_0887d7c0; }
L_0887d7a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003974u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]);
L_0887d7c0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887d6c4 */
}

/* func_0888208c  0x0888208c..0x088820b0  36 bytes, source=sweep */
void func_0888208c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888208cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbedcu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0888208c */
}

/* func_08885c0c  0x08885c0c..0x08886934  3368 bytes, source=fde */
void func_08885c0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08885c0cu);
    c->r[29] = c->r[29] + 0xffffff00u;
    mem_w32(ram, c->r[29] + 0x000000f4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000f0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe63cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08885c3c; }
    { mem_w32(ram, c->r[30] + 0x000000ecu, 0u); goto L_0888691c; }
L_08885c3c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe63cu);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08885efc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000060u);
    { c->r[31] = 0x08885c6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0888d554(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08885e18u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000060u); func_0888d7c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08885e24u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000060u); func_0888d910(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08885e38u; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08885e4cu; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08885e60u; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000018u;
    { c->r[31] = 0x08885e74u; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000028u;
    { c->r[31] = 0x08885e88u; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08885e9cu; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08885eb0u; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000038u;
    { c->r[31] = 0x08885ec4u; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x08885ed8u; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x08885eecu; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[3] + 0x00000071u, c->r[2]); goto L_08885f04; }
L_08885efc:
    { c->r[31] = 0x08885f04u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089bb69c(c, ram); }
L_08885f04:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08885f10u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08885f1cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f48u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08885f38u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f48u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08885f5cu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08885f68u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08885f7cu; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08885f98u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08885fb4u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08885fc4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000068u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    mem_w32(ram, c->r[30] + 0x000000b4u, 0u);
L_08885ff8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000071u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08886018; }
    { goto L_08886288; }
L_08886018:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[5] = c->r[30] + 0x000000c0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f4cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f4cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[5] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088860bcu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088860d4u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088860f0u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    { c->r[31] = 0x088860f8u; func_08883298(c, ram); }
    { c->r[31] = 0x08886100u; mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]); func_08883298(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0888610cu; mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]); func_08883394(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[1] = 0x08a40000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0x00003b60u);
    c->r[2] = c->r[2] + 0x00000055u;
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[2] = 0u + 0x00000ac0u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0xfffff540u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886190; }
    { goto L_088861a8; }
L_08886190:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886278; }
L_088861a8:
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[5] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088861d8u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08888e98(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[5] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { c->r[31] = 0x08886208u; c->r[6] = c->r[2] + 0u; func_0888a6ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08886244; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08886238u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08886278; }
L_08886244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08886278; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08886270u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
L_08886278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]); goto L_08885ff8; }
L_08886288:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08886914; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f50u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088862bcu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f50u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000b0u);
    mem_w8(ram, c->r[3] + 0x00000070u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08886314u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08886504; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f54u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888634c; }
    { goto L_08886914; }
L_0888634c:
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f58u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003f58u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888637cu; func_0880d140(c, ram); }
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08886398u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088863a4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08886914; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f5cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088863d8; }
    { goto L_08886914; }
L_088863d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f60u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088863fc; }
    { goto L_08886914; }
L_088863fc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f64u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886420; }
    { goto L_08886914; }
L_08886420:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f68u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886444; }
    { goto L_08886914; }
L_08886444:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f6cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886468; }
    { goto L_088864ec; }
L_08886468:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f70u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888648c; }
    { goto L_088864ec; }
L_0888648c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f74u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088864b0; }
    { goto L_088864ec; }
L_088864b0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f78u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088864d4; }
    { goto L_088864ec; }
L_088864d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000023u;
    mem_w8(ram, c->r[2] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08886914; }
L_088864ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08886914; }
L_08886504:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08886510u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888671c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f54u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886540; }
    { goto L_08886914; }
L_08886540:
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f58u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003f58u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08886570u; func_0880d140(c, ram); }
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0888658cu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08886598u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088865cc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088865b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088865cc; }
    { goto L_08886914; }
L_088865cc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f7cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088865f0; }
    { goto L_08886914; }
L_088865f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f80u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886614; }
    { goto L_08886914; }
L_08886614:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f84u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886638; }
    { goto L_08886914; }
L_08886638:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f88u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888665c; }
    { goto L_08886914; }
L_0888665c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f8cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886680; }
    { goto L_08886704; }
L_08886680:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f90u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088866a4; }
    { goto L_08886704; }
L_088866a4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f94u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088866c8; }
    { goto L_08886704; }
L_088866c8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f98u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088866ec; }
    { goto L_08886704; }
L_088866ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000023u;
    mem_w8(ram, c->r[2] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08886914; }
L_08886704:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08886914; }
L_0888671c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08886728u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08886914; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f54u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886760; }
    { goto L_08886914; }
L_08886760:
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f58u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003f58u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08886790u; func_0880d140(c, ram); }
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088867acu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088867b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08886914; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f7cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088867ec; }
    { goto L_08886914; }
L_088867ec:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f80u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886810; }
    { goto L_08886914; }
L_08886810:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f84u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886834; }
    { goto L_08886914; }
L_08886834:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f88u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08886858; }
    { goto L_08886914; }
L_08886858:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f8cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888687c; }
    { goto L_08886900; }
L_0888687c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f90u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088868a0; }
    { goto L_08886900; }
L_088868a0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f94u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088868c4; }
    { goto L_08886900; }
L_088868c4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f98u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088868e8; }
    { goto L_08886900; }
L_088868e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000023u;
    mem_w8(ram, c->r[2] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08886914; }
L_08886900:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
L_08886914:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
L_0888691c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000f4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000f0u);
    { c->r[29] = c->r[29] + 0x00000100u; return; }
    return; /* fell out of func_08885c0c */
}

/* func_0888bc94  0x0888bc94..0x0888bcf8  100 bytes, source=sweep */
void func_0888bc94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888bc94u);
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
    { c->r[31] = 0x0888bce4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888bc94 */
}

/* func_0888c974  0x0888c974..0x0888c9e0  108 bytes, source=sweep */
void func_0888c974(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c974u);
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
    { c->r[31] = 0x0888c9b0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c9ccu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c974 */
}

/* func_0888d510  0x0888d510..0x0888d554  68 bytes, source=sweep */
void func_0888d510(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d510u);
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
    vfpu_exec(c, ram, 0x60828100u); /* vsub.t */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d510 */
}

/* func_0889071c  0x0889071c..0x088908f0  468 bytes, source=sweep */
void func_0889071c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889071cu);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x00000148u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08890758u; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, 0u);
L_0889075c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08890774; }
    { goto L_088908cc; }
L_08890774:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000125u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000125u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088907d0; }
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] + 0u;
    mem_w32(ram, c->r[4] + 0x00000000u, 0u);
    c->r[3] = c->r[3] + 0x00000004u;
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_088908bc; }
L_088907d0:
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x088907ecu; mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); func_0888c134(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000125u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000130u, 0u);
L_08890824:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889083c; }
    { goto L_088908b0; }
L_0889083c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000134u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08890870; }
    { goto L_088908a0; }
L_08890870:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000125u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000134u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0889088cu; c->r[7] = c->r[3] + 0u; func_08890ed4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088908a0u; c->r[5] = c->r[3] + 0u; func_0888b6b4(c, ram); }
L_088908a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]); goto L_08890824; }
L_088908b0:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088908bcu; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
L_088908bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]); goto L_0889075c; }
L_088908cc:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088908d8u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000148u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_0889071c */
}

/* func_08895450  0x08895450..0x088954a8  88 bytes, source=fde */
void func_08895450(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08895450u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08895468u; func_088832e0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08895478; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08895490; }
L_08895478:
    { c->r[31] = 0x08895480u; func_088832e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08895490:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08895450 */
}

/* func_08899e28  0x08899e28..0x08899ef8  208 bytes, source=sweep */
void func_08899e28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899e28u);
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
    return; /* fell out of func_08899e28 */
}

/* func_0889e264  0x0889e264..0x0889e80c  1448 bytes, source=sweep */
void func_0889e264(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889e264u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e2a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e2a8; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e2a8u; c->r[4] = c->r[4] + 0xffffedb0u; func_08808260(c, ram); }
L_0889e2a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e324; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e324; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff380u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889e324; }
L_0889e2f4:
    { c->r[31] = 0x0889e2fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e2f4; }
L_0889e324:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e3a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e3a0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff430u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889e3a0; }
L_0889e370:
    { c->r[31] = 0x0889e378u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e370; }
L_0889e3a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e41c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e41c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff4e0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889e41c; }
L_0889e3ec:
    { c->r[31] = 0x0889e3f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e3ec; }
L_0889e41c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e498; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e498; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff590u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889e498; }
L_0889e468:
    { c->r[31] = 0x0889e470u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e468; }
L_0889e498:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e514; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e514; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff640u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889e514; }
L_0889e4e4:
    { c->r[31] = 0x0889e4ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e4e4; }
L_0889e514:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e590; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e590; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xfffff6f0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889e590; }
L_0889e560:
    { c->r[31] = 0x0889e568u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e560; }
L_0889e590:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e5bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e5bc; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e5bcu; c->r[4] = c->r[4] + 0xfffff7a0u; func_08808240(c, ram); }
L_0889e5bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e5e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e5e8; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e5e8u; c->r[4] = c->r[4] + 0xfffff7b0u; func_08808240(c, ram); }
L_0889e5e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e614; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e614; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e614u; c->r[4] = c->r[4] + 0xfffff7c0u; func_08808240(c, ram); }
L_0889e614:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e640; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e640; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e640u; c->r[4] = c->r[4] + 0xfffff7d0u; func_08808240(c, ram); }
L_0889e640:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e66c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e66c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e66cu; c->r[4] = c->r[4] + 0xfffff7e0u; func_08808240(c, ram); }
L_0889e66c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e698; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e698; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e698u; c->r[4] = c->r[4] + 0xfffff7f0u; func_08808240(c, ram); }
L_0889e698:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e6c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e6c4; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e6c4u; c->r[4] = c->r[4] + 0xfffff800u; func_08808240(c, ram); }
L_0889e6c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e6f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e6f0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e6f0u; c->r[4] = c->r[4] + 0xfffff810u; func_08808240(c, ram); }
L_0889e6f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e71c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e71c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e71cu; c->r[4] = c->r[4] + 0xfffff820u; func_08808240(c, ram); }
L_0889e71c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e748; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e748; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e748u; c->r[4] = c->r[4] + 0xfffff830u; func_08808240(c, ram); }
L_0889e748:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e774; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e774; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e774u; c->r[4] = c->r[4] + 0xfffff840u; func_08808240(c, ram); }
L_0889e774:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e7a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e7a0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e7a0u; c->r[4] = c->r[4] + 0xfffff850u; func_08808240(c, ram); }
L_0889e7a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e7cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e7cc; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e7ccu; c->r[4] = c->r[4] + 0xfffff860u; func_08808240(c, ram); }
L_0889e7cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e7f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889e7f8; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0889e7f8u; c->r[4] = c->r[4] + 0xfffff870u; func_08808240(c, ram); }
L_0889e7f8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889e264 */
}

/* func_0889f7e4  0x0889f7e4..0x0889f828  68 bytes, source=sweep */
void func_0889f7e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f7e4u);
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
    { c->r[31] = 0x0889f814u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f7e4 */
}

/* func_088a34ac  0x088a34ac..0x088a34e8  60 bytes, source=sweep */
void func_088a34ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a34acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088a34d4u; c->r[6] = 0u + 0u; func_088a3d24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a34ac */
}

/* func_088a4604  0x088a4604..0x088a4710  268 bytes, source=sweep */
void func_088a4604(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4604u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004508u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088a463cu; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a4660; }
    { goto L_088a4668; }
L_088a4660:
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_088a46f8; }
L_088a4668:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000450cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004510u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000450cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004514u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088a46f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4604 */
}

/* func_088ade00  0x088ade00..0x088ade50  80 bytes, source=sweep */
void func_088ade00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ade00u);
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
    { c->r[31] = 0x088ade3cu; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ade00 */
}

/* func_088b2298  0x088b2298..0x088b2398  256 bytes, source=sweep */
void func_088b2298(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2298u);
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
    return; /* fell out of func_088b2298 */
}

/* func_088b5950  0x088b5950..0x088b5984  52 bytes, source=sweep */
void func_088b5950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b5950u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006bf0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004940u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b5950 */
}

/* func_088babec  0x088babec..0x088bac54  104 bytes, source=sweep */
void func_088babec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088babecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088bac10u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    { c->r[31] = 0x088bac20u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x088bac30u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x088bac40u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088babec */
}

/* func_088bec70  0x088bec70..0x088becb4  68 bytes, source=sweep */
void func_088bec70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bec70u);
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
    { c->r[31] = 0x088beca0u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bec70 */
}

/* func_088bfa10  0x088bfa10..0x088bfac8  184 bytes, source=fde */
void func_088bfa10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bfa10u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[4]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000041u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000011u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9aa4u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004d0cu;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088bfa74u; c->r[8] = 0u + 0u; func_08a1ad34(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9ac4u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004d1cu;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088bfa9cu; c->r[8] = 0u + 0u; func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xffff9aa4u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x088bfab4u; c->r[6] = c->r[6] + 0xffff9ac4u; func_089b7c54(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088bfa10 */
}

/* func_088c2f9c  0x088c2f9c..0x088c317c  480 bytes, source=fde */
void func_088c2f9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2f9cu);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c2fd0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c07c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x088c2ff4u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c3000u; c->r[5] = c->r[3] + 0u; func_08a0f8a8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c300cu; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[0] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ee0u);
    c->f[0] = c->f[1] / c->f[0];
    { c->r[31] = 0x088c3040u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[0] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ee0u);
    c->f[0] = c->f[1] / c->f[0];
    { c->r[31] = 0x088c3074u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[2] = c->f[1] / c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ee4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ee8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] / c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ee8u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ee8u);
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
    { c->r[31] = 0x088c3128u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = 0u + 0x00000041u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c3168u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088c2f9c */
}

/* func_088c8e8c  0x088c8e8c..0x088c8ed0  68 bytes, source=sweep */
void func_088c8e8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8e8cu);
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
    { c->r[31] = 0x088c8ebcu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8e8c */
}

/* func_088cb234  0x088cb234..0x088cb2e0  172 bytes, source=fde */
void func_088cb234(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cb234u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088cb260u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088cb270u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x088cb27cu; c->r[5] = c->r[2] + 0u; func_088bf6ec(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088cb28cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cb29cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cb2b4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088cb2c8u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088cb234 */
}

/* func_088d2c90  0x088d2c90..0x088d2cb4  36 bytes, source=sweep */
void func_088d2c90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d2c90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d2c90 */
}

/* func_088d6c88  0x088d6c88..0x088d6d20  152 bytes, source=sweep */
void func_088d6c88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6c88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6cb8; }
    c->r[2] = 0u + 0x000000ffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d6d08; }
L_088d6cb8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d6cc4u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d6ce8; }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088d6ce8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d6d00; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088d6d00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088d6d08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d6c88 */
}

/* func_088dae70  0x088dae70..0x088dae98  40 bytes, source=sweep */
void func_088dae70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dae70u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dae70 */
}

/* func_088dec20  0x088dec20..0x088dec74  84 bytes, source=sweep */
void func_088dec20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dec20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dec4c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b80u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_088dec60; }
L_088dec4c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
L_088dec60:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dec20 */
}

/* func_088e0e00  0x088e0e00..0x088e0ea8  168 bytes, source=fde */
void func_088e0e00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0e00u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000029u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c08u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005c08u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005c08u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0e68u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x088e0e90u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088d9878(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088e0e00 */
}

/* func_088e6bec  0x088e6bec..0x088e6e2c  576 bytes, source=fde */
void func_088e6bec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e6becu);
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
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6c74; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6c4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6c64; }
    { goto L_088e6e18; }
L_088e6c4c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6ca8; }
    { goto L_088e6e18; }
L_088e6c64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x000000a0u, c->r[3]);
L_088e6c74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[3] + 0x000000b0u, c->f[0]); goto L_088e6e18; }
L_088e6ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    { c->r[31] = 0x088e6cb8u; c->r[4] = c->r[2] + 0u; func_088d6da4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e6cec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    { c->r[31] = 0x088e6cd0u; c->r[4] = c->r[2] + 0u; func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6cec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e6ce4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    { goto L_088e6e18; }
L_088e6cec:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e6cf8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
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
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088e6d54u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e6d60u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e6d88; }
    { goto L_088e6dac; }
L_088e6d88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e6da4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e2e10(c, ram); }
    { goto L_088e6dd0; }
L_088e6dac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000002u;
    mem_w8(ram, c->r[2] + 0x00000028u, c->r[3]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e6dd0u; c->r[7] = c->r[2] + 0u; func_088d7000(c, ram); }
L_088e6dd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e6e18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e6e18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088e6e18:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088e6bec */
}

/* func_088ec3e8  0x088ec3e8..0x088ec530  328 bytes, source=fde */
void func_088ec3e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ec3e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec51c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005ec4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088ec444u: goto L_088ec444; case 0x088ec460u: goto L_088ec460; case 0x088ec47cu: goto L_088ec47c; case 0x088ec498u: goto L_088ec498; case 0x088ec4b4u: goto L_088ec4b4; case 0x088ec4d0u: goto L_088ec4d0; case 0x088ec4ecu: goto L_088ec4ec; case 0x088ec508u: goto L_088ec508; case 0x088ec51cu: goto L_088ec51c; default: recomp_trap_unknown_indirect(c, ram, 0x088ec43cu, _t); return; } }
L_088ec444:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec458u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ea8cc(c, ram); }
    { goto L_088ec51c; }
L_088ec460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec474u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ea94c(c, ram); }
    { goto L_088ec51c; }
L_088ec47c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec490u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088eb394(c, ram); }
    { goto L_088ec51c; }
L_088ec498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec4acu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088eb680(c, ram); }
    { goto L_088ec51c; }
L_088ec4b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec4c8u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088eb8c8(c, ram); }
    { goto L_088ec51c; }
L_088ec4d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec4e4u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ebf34(c, ram); }
    { goto L_088ec51c; }
L_088ec4ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec500u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ec234(c, ram); }
    { goto L_088ec51c; }
L_088ec508:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ec51cu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ec368(c, ram); }
L_088ec51c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ec3e8 */
}

/* func_088f2564  0x088f2564..0x088f3e4c  6376 bytes, source=fde */
void func_088f2564(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f2564u);
L_088f2564:
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x0000012cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000130u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f32a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f25d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2600; }
    { goto L_088f3e2c; }
L_088f25d8:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f3e2c; }
    c->r[2] = 0u + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f34b8; }
    { goto L_088f3e2c; }
L_088f2600:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000024u);
    mem_w8(ram, c->r[3] + 0x0000000du, c->r[2]);
    { c->r[31] = 0x088f2620u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
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
    mem_w16(ram, c->r[5] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
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
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000002cu);
    mem_w16(ram, c->r[3] + 0x0000001eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
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
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
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
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000034u);
    mem_w16(ram, c->r[3] + 0x00000022u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000041u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f28ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x088f28a4u; c->r[4] = c->r[2] + 0u; func_088f2524(c, ram); }
    { goto L_088f2980; }
L_088f28ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f28e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f2980; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x088f28e0u; c->r[4] = c->r[2] + 0u; func_088f2524(c, ram); }
    { goto L_088f2980; }
L_088f28e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f2934; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f2980; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f2980; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x088f292cu; c->r[4] = c->r[2] + 0u; func_088f2524(c, ram); }
    { goto L_088f2980; }
L_088f2934:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f2980; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f2970; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f2970; }
    { goto L_088f2980; }
L_088f2970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x088f2980u; c->r[4] = c->r[2] + 0u; func_088f2524(c, ram); }
L_088f2980:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f29bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088f2a1c; }
L_088f29bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f29e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088f2a1c; }
L_088f29e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f2a08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088f2a1c; }
L_088f2a08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088f2a1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f2a48; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088f2a48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    c->r[2] = 0u + 0x00000028u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f2a70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088f2a70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2a9c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xff1c0000u;
    c->r[2] = c->r[2] | 0x94f6u;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_088f2b50; }
L_088f2a9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2ac4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xff1c0000u;
    c->r[2] = c->r[2] | 0x94f6u;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_088f2b50; }
L_088f2ac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2af0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x3f3fu;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_088f2b50; }
L_088f2af0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2b18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xffcc0000u;
    c->r[2] = c->r[2] | 0x4646u;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_088f2b50; }
L_088f2b18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f2b40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xff460000u;
    c->r[2] = c->r[2] | 0x46ccu;
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_088f2b50; }
L_088f2b40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
L_088f2b50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f2b74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006184u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
L_088f2b74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f2bb0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006188u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f2becu; c->f[12] = c->f[0]; func_0884bff4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006188u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[17] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f2c50u; func_0880d140(c, ram); }
    c->r[16] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000618cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000618cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f2c84u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x088f2c98u; c->r[6] = c->r[2] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006190u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000086u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000084u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000086u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006194u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006188u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006198u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f2da0; }
    { goto L_088f2db4; }
L_088f2da0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    { mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]); goto L_088f2e54; }
L_088f2db4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006184u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f2de8; }
    { goto L_088f2e04; }
L_088f2de8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006184u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_088f2e04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000619cu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f2e38; }
    { goto L_088f2e54; }
L_088f2e38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000619cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_088f2e54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f2e84u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f3224; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000061d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088f2564u: goto L_088f2564; case 0x088f2eecu: goto L_088f2eec; case 0x088f2f40u: goto L_088f2f40; case 0x088f2fa4u: goto L_088f2fa4; case 0x088f3004u: goto L_088f3004; case 0x088f3068u: goto L_088f3068; case 0x088f30ccu: goto L_088f30cc; case 0x088f3130u: goto L_088f3130; case 0x088f3178u: goto L_088f3178; case 0x088f31d0u: goto L_088f31d0; case 0x088f3224u: goto L_088f3224; default: recomp_trap_unknown_indirect(c, ram, 0x088f2ee4u, _t); return; } }
L_088f2eec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052f0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005358u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_088f322c; }
L_088f2f40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052f4u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000535cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_088f322c; }
L_088f2fa4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052f8u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005360u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_088f322c; }
L_088f3004:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052fcu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005364u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_088f322c; }
L_088f3068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005300u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005368u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_088f322c; }
L_088f30cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005304u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000536cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_088f322c; }
L_088f3130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005308u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005370u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_088f322c; }
L_088f3178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000530cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005374u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_088f322c; }
L_088f31d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005310u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005378u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_088f322c; }
L_088f3224:
    mem_w32(ram, c->r[30] + 0x00000090u, 0u);
    mem_w32(ram, c->r[30] + 0x00000094u, 0u);
L_088f322c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f3290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f3290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005354u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c0u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[4] + 0x000000a4u, c->r[2]); goto L_088f3e2c; }
L_088f3290:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000053c4u);
    c->r[3] = c->r[3] + 0x00000010u;
    { mem_w32(ram, c->r[2] + 0x000000a4u, c->r[3]); goto L_088f3e2c; }
L_088f32a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a0u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f32f0; }
    { goto L_088f32fc; }
L_088f32f0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
L_088f32fc:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = 0u + 0xffffffffu;
    { c->r[31] = 0x088f330cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    { c->r[31] = 0x088f3360u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000054u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088f337cu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088f3398; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000108u);
    { c->r[31] = 0x088f3390u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000010cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[3]);
L_088f3398:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000108u);
    { c->r[31] = 0x088f33a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000010cu); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    { c->r[31] = 0x088f33b0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088f33ccu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088f33e8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    { c->r[31] = 0x088f33e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000114u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[3]);
L_088f33e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    { c->r[31] = 0x088f33f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000114u); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f342c; }
    { goto L_088f3440; }
L_088f342c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088f3440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f3474; }
    { goto L_088f3488; }
L_088f3474:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088f3488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f3e2c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w8(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_088f3e2c; }
L_088f34b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f34d8; }
    { goto L_088f3e2c; }
L_088f34d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f34f0; }
    { goto L_088f3e2c; }
L_088f34f0:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088f34fcu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088f3514u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x088f3528u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f353cu; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088f3548u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f3598u; c->r[6] = c->r[3] + 0u; func_088f42c8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f35c8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088f35f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_088f2408(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088f3600u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061acu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088f3618u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[2] | 0x0800u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f3660; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f3660; }
    { goto L_088f38f0; }
L_088f3660:
    { c->r[31] = 0x088f3668u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f367cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f38f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088f36e8u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061bcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[2] | 0x0800u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f37d8; }
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffd4u;
    c->r[2] = c->r[2] << 16;
    c->r[9] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0xff240000u;
    c->r[2] = c->r[2] | 0x1000u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000000a4u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x088f37d0u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    { goto L_088f38f0; }
L_088f37d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088f3884; }
    { c->r[31] = 0x088f37f4u; c->r[4] = 0u + 0x000002c4u; func_089241c8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006178u;
    { c->r[31] = 0x088f3814u; c->r[7] = mem_r32(ram, c->r[3] + 0x000000a4u); func_08a1ad34(c, ram); }
    c->r[6] = c->r[30] + 0x000000e0u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] << 16;
    c->r[9] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0xff0c0000u;
    c->r[2] = c->r[2] | 0x094cu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x088f387cu; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    { goto L_088f38f0; }
L_088f3884:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] << 16;
    c->r[9] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0xff240000u;
    c->r[2] = c->r[2] | 0x1000u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000000a4u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x088f38f0u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_088f38f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] >> 1;
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[2] | 0x0800u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f3b64; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x088f3930u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088f3980u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061bcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[4] = 0u + 0x00000030u;
    { c->r[31] = 0x088f39ecu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = 0x7f230000u;
    c->r[2] = c->r[2] | 0x0f00u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a0u);
    c->f[20] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    c->r[4] = 0u + 0x00000007u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x000000a4u);
    { c->r[31] = 0x088f3ab8u; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[20] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061c0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061a0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = c->r[6] | 0x019cu;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088f3b5cu; c->r[10] = mem_r32(ram, c->r[30] + 0x00000094u); func_088f4268(c, ram); }
    { goto L_088f3e20; }
L_088f3b64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f3b94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f3b94; }
    { goto L_088f3e20; }
L_088f3b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f3bc0; }
    { goto L_088f3e20; }
L_088f3bc0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x088f3bd4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088f3be8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088f3e20; }
    c->r[4] = 0u + 0x00000100u;
    { c->r[31] = 0x088f3c08u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000080u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061c4u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061c8u);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006180u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088f3c78u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061b4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061bcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088f3cdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f3cf4; }
    { goto L_088f3dc0; }
L_088f3cf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = 0xff290000u;
    c->r[2] = c->r[2] | 0x278cu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x088f3d30u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x088f3d60u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061ccu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f3dac; }
    { goto L_088f3db0; }
L_088f3dac:
    mem_w32(ram, c->r[30] + 0x00000080u, 0u);
L_088f3db0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088f3cdc; }
L_088f3dc0:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = c->r[6] | 0x019cu;
    c->r[7] = 0u + 0x00000010u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088f3e20u; c->r[10] = mem_r32(ram, c->r[30] + 0x00000094u); func_088f4268(c, ram); }
L_088f3e20:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088f3e2cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088f3e2c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000012cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_088f2564 */
}

/* func_088f6e8c  0x088f6e8c..0x088f7024  408 bytes, source=sweep */
void func_088f6e8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f6e8cu);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000090u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088f6ebcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f6ed0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f6ee4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f6ef0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088f6f00u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    alx_c_cond_s(c, 12, c->f[20], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6f18; }
    { goto L_088f6f20; }
L_088f6f18:
    { mem_w32(ram, c->r[30] + 0x00000070u, 0u); goto L_088f7008; }
L_088f6f20:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088f6f2cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f6f44u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f6f58u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062a8u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f6f78u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f6f8cu; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088f6f9cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f6fb4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000050u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f6fccu; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088f6fd8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6ff8; }
    { goto L_088f7004; }
L_088f6ff8:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_088f7008; }
L_088f7004:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_088f7008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_088f6e8c */
}

/* func_088fb2f8  0x088fb2f8..0x088fbfb8  3264 bytes, source=fde */
void func_088fb2f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fb2f8u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x0000006cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00001ef8u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bdu, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088fb328:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb340; }
    { goto L_088fb388; }
L_088fb340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb378; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff2bdu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bdu, c->r[2]);
L_088fb378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088fb328; }
L_088fb388:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bcu, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088fb398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb3b0; }
    { goto L_088fb64c; }
L_088fb3b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb458; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088fb458:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb500; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088fb500:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb5cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088fb5cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fb63c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff2bcu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bcu, c->r[2]);
L_088fb63c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fb398; }
L_088fb64c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088fb650:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb668; }
    { goto L_088fb68c; }
L_088fb668:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fb650; }
L_088fb68c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fb694:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb6ac; }
    { goto L_088fb79c; }
L_088fb6ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fb6b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fb78c; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb734; }
    { goto L_088fb78c; }
L_088fb734:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_088fb6b4; }
L_088fb78c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fb694; }
L_088fb79c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006378u);
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fb7cc; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006378u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_088fb7cc:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_088fb7e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb7fc; }
    { goto L_088fb988; }
L_088fb7fc:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb834; }
    { goto L_088fb978; }
L_088fb834:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fb880; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fb898; }
L_088fb880:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fb898:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee74u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000637cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_088fb978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fb7e4; }
L_088fb988:
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_088fb98c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb9a4; }
    { goto L_088fb9c8; }
L_088fb9a4:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000050u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fb98c; }
L_088fb9c8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088fb9d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fb9e8; }
    { goto L_088fbad8; }
L_088fb9e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_088fb9f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fbac8; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fba70; }
    { goto L_088fbac8; }
L_088fba70:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fb9f0; }
L_088fbac8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fb9d0; }
L_088fbad8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fbaf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbb08; }
    { goto L_088fbc1c; }
L_088fbb08:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbb40; }
    { goto L_088fbc0c; }
L_088fbb40:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fbb8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fbba4; }
L_088fbb8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fbba4:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_088fbc0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fbaf0; }
L_088fbc1c:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fbc20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbc38; }
    { goto L_088fbc5c; }
L_088fbc38:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000054u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fbc20; }
L_088fbc5c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_088fbc64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbc7c; }
    { goto L_088fbd6c; }
L_088fbc7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088fbc84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fbd5c; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbd04; }
    { goto L_088fbd5c; }
L_088fbd04:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fbc84; }
L_088fbd5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fbc64; }
L_088fbd6c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fbd84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbd9c; }
    { goto L_088fbeb0; }
L_088fbd9c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbdd4; }
    { goto L_088fbea0; }
L_088fbdd4:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fbe20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fbe38; }
L_088fbe20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fbe38:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_088fbea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fbd84; }
L_088fbeb0:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fbeb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbecc; }
    { goto L_088fbf9c; }
L_088fbecc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[17] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[16] = c->lo;
    { c->r[31] = 0x088fbf20u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_089034d4(c, ram); }
    alx_div(c, c->r[16], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x088fbf2cu, 0x7u); goto L_088fbf30; }
L_088fbf30:
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbf8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000064u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088fbf8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fbeb4; }
L_088fbf9c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088fb2f8 */
}

/* func_08901100  0x08901100..0x08901214  276 bytes, source=fde */
void func_08901100(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08901100u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 4;
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x91a20000u;
    c->r[2] = c->r[2] | 0xb3c5u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 10;
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 5;
    c->r[2] = 0x026d0000u;
    c->r[2] = c->r[2] | 0x60ddu;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 5;
    c->r[2] = 0xd1b70000u;
    c->r[2] = c->r[2] | 0x1759u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 13;
    c->r[2] = 0u + 0x00002710u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000064d4u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08901200u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08901100 */
}

/* func_08903adc  0x08903adc..0x08903b08  44 bytes, source=sweep */
void func_08903adc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903adcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff568u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08903adc */
}

/* func_0890aa58  0x0890aa58..0x0890aad4  124 bytes, source=fde */
void func_0890aa58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890aa58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890aa78u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffff564u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890aa8cu; c->r[5] = c->r[3] + 0u; func_089232b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890aaa8; }
    { goto L_0890aac0; }
L_0890aaa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0890aac0u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u); func_089ce0d0(c, ram); }
L_0890aac0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0890aa58 */
}

/* func_08917c30  0x08917c30..0x08917d80  336 bytes, source=fde */
void func_08917c30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08917c30u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08917c50u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08917c64u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006a70u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006a70u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08917d04u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08917d20u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006a74u);
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08917d38u; c->r[4] = c->r[2] + 0u; func_089c898c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08917d60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08917d60; }
    { mem_w32(ram, c->r[30] + 0x00000094u, 0u); goto L_08917d68; }
L_08917d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
L_08917d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_08917c30 */
}

/* func_0891f6e8  0x0891f6e8..0x0891f708  32 bytes, source=residue */
void func_0891f6e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891f6e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0891f6e8 */
}

/* func_08921618  0x08921618..0x0892165c  68 bytes, source=sweep */
void func_08921618(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921618u);
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
    { c->r[31] = 0x08921648u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921618 */
}

/* func_08923070  0x08923070..0x08923130  192 bytes, source=residue */
void func_08923070(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08923070u);
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
    return; /* fell out of func_08923070 */
}

/* func_08925d98  0x08925d98..0x08925ddc  68 bytes, source=sweep */
void func_08925d98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925d98u);
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
    { c->r[31] = 0x08925dc8u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925d98 */
}

/* func_0892892c  0x0892892c..0x089289ac  128 bytes, source=sweep */
void func_0892892c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892892cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08928970; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08928970; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08928970u; c->r[4] = c->r[4] + 0xfffff9f8u; func_088112e8(c, ram); }
L_08928970:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08928998; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08928998; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08928998u; c->r[4] = c->r[4] + 0xfffff9f8u; func_08811320(c, ram); }
L_08928998:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892892c */
}

/* func_0892cc78  0x0892cc78..0x0892cea8  560 bytes, source=fde */
void func_0892cc78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892cc78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000002fu);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892cdfc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000002fu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000070b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0892ccd0u: goto L_0892ccd0; case 0x0892cd20u: goto L_0892cd20; case 0x0892cd30u: goto L_0892cd30; case 0x0892cd40u: goto L_0892cd40; case 0x0892cd80u: goto L_0892cd80; case 0x0892cd90u: goto L_0892cd90; case 0x0892cdccu: goto L_0892cdcc; default: recomp_trap_unknown_indirect(c, ram, 0x0892ccc8u, _t); return; } }
L_0892ccd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892cdfc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    { c->r[31] = 0x0892cd10u; c->r[6] = c->r[6] | 0x0005u; func_089f69dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]); goto L_0892cdfc; }
L_0892cd20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]); goto L_0892cdfc; }
L_0892cd30:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]); goto L_0892cdfc; }
L_0892cd40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892cdfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892cdfc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892cd78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0892cea8(c, ram); }
    { goto L_0892cdfc; }
L_0892cd80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]); goto L_0892cdfc; }
L_0892cd90:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    { c->r[31] = 0x0892cda8u; c->r[6] = c->r[6] | 0x0006u; func_089f69dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w16(ram, c->r[3] + 0x00000028u, c->r[2]); goto L_0892cdfc; }
L_0892cdcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892cdfc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0892ce90; }
L_0892cdfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000035u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892ce8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000035u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000035u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000035u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892ce70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892ce54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]);
L_0892ce54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0xf8ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0892ce70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000035u);
    c->r[2] = 0u + 0xfffffffau;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892ce8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000035u, 0u);
L_0892ce8c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0892ce90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892cc78 */
}

/* func_089323c0  0x089323c0..0x08932454  148 bytes, source=fde */
void func_089323c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089323c0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089323f4u; c->r[7] = 0u + 0u; func_08932598(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089323c0 */
}

/* func_08933804  0x08933804..0x08933888  132 bytes, source=sweep */
void func_08933804(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933804u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893382c; }
    { goto L_08933878; }
L_0893382c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa4cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933878; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
L_08933878:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933804 */
}

/* func_089362f4  0x089362f4..0x08936784  1168 bytes, source=fde */
void func_089362f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089362f4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08936324u; c->r[4] = c->r[2] + 0u; func_08935ef0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08936334; }
    { goto L_0893676c; }
L_08936334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000072ecu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08936388; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08936374u; c->r[5] = c->r[5] + 0x00007264u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000003cu);
    { mem_w32(ram, c->r[2] + 0x00000038u, c->r[3]); goto L_089365d8; }
L_08936388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936414; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089363d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x089363c4u; c->r[5] = c->r[5] + 0x00007270u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000040u);
    { mem_w32(ram, c->r[2] + 0x00000038u, c->r[3]); goto L_089365d8; }
L_089363d8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893676c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08936400u; c->r[5] = c->r[5] + 0x0000727cu; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000040u);
    { mem_w32(ram, c->r[2] + 0x00000038u, c->r[3]); goto L_089365d8; }
L_08936414:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893644c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08936438u; c->r[5] = c->r[5] + 0x00007288u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000044u);
    { mem_w32(ram, c->r[2] + 0x00000038u, c->r[3]); goto L_089365d8; }
L_0893644c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936484; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08936470u; c->r[5] = c->r[5] + 0x00007294u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000004cu);
    { mem_w32(ram, c->r[2] + 0x00000038u, c->r[3]); goto L_089365d8; }
L_08936484:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089365a8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089364a4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089364cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x089364c4u; c->r[5] = c->r[5] + 0x000072a0u; func_08a1ad34(c, ram); }
    { goto L_08936594; }
L_089364cc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089364d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936500; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x089364f8u; c->r[5] = c->r[5] + 0x000072acu; func_08a1ad34(c, ram); }
    { goto L_08936594; }
L_08936500:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0893650cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936534; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0893652cu; c->r[5] = c->r[5] + 0x000072b8u; func_08a1ad34(c, ram); }
    { goto L_08936594; }
L_08936534:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936540u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936568; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08936560u; c->r[5] = c->r[5] + 0x000072c4u; func_08a1ad34(c, ram); }
    { goto L_08936594; }
L_08936568:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936574u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936594; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08936594u; c->r[5] = c->r[5] + 0x000072d0u; func_08a1ad34(c, ram); }
L_08936594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000050u);
    { mem_w32(ram, c->r[2] + 0x00000038u, c->r[3]); goto L_089365d8; }
L_089365a8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089365b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000072dcu;
    { c->r[31] = 0x089365c8u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
L_089365d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w8(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000001eu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000fu;
    mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893676c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936688; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000017u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08936688; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000017u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936688; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08936688:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893676c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0893676c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089366d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089366f0; }
    { goto L_08936748; }
L_089366f0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000010u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08936738; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08936748; }
L_08936738:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089366d4; }
L_08936748:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08936768u; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
L_0893676c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089362f4 */
}

/* func_0893c2c8  0x0893c2c8..0x0893c334  108 bytes, source=sweep */
void func_0893c2c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c2c8u);
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
    { c->r[31] = 0x0893c304u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c320u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c2c8 */
}

/* func_0893d8f0  0x0893d8f0..0x0893d934  68 bytes, source=sweep */
void func_0893d8f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d8f0u);
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
    { c->r[31] = 0x0893d920u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893d8f0 */
}

/* func_0893e998  0x0893e998..0x0893f9e4  4172 bytes, source=fde */
void func_0893e998(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e998u);
    c->r[29] = c->r[29] + 0xfffffea0u;
    mem_w32(ram, c->r[29] + 0x00000158u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000154u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000150u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893eb00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ea04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ea2c; }
    { goto L_0893f9cc; }
L_0893ea04:
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ed84; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893ed98; }
    { goto L_0893f9cc; }
L_0893ea2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff81f0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff81f4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    { c->r[31] = 0x0893eac0u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884d22c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075f8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000030u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0893eae8u; c->r[5] = c->r[5] + 0x000075ecu; func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893eaf8u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    { goto L_0893f9cc; }
L_0893eb00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893eb2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893eb2c; }
    { goto L_0893ecf4; }
L_0893eb2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[3] = 0u + 0x000000ffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x08a60000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xffff8210u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8210u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff81f0u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff81f4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = 0u + 0x000000ffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x08a60000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xffff8210u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8210u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_0893ec08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893ec20; }
    { goto L_0893ec90; }
L_0893ec20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_0893ec08; }
L_0893ec90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075f8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893ecd8; }
    { goto L_0893ecf4; }
L_0893ecd8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075f8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
L_0893ecf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893ed68; }
    { c->r[31] = 0x0893ed10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000024u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0893ed40u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0893ed5cu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0893ed68u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c1d8(c, ram); }
L_0893ed68:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_0893f9cc; }
L_0893ed84:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000dcu, 0u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x000000e4u, 0u); goto L_0893f9cc; }
L_0893ed98:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893ede4; }
    c->r[1] = 0x08a70000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb640u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075fcu);
    c->f[0] = c->f[0] / c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000e0u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000e4u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000e8u, 0u);
L_0893ede4:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0893edf0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x0893edf8u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0893ee14u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893ee30u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000001cu); func_089f23b0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893ee48; }
    { goto L_0893f9cc; }
L_0893ee48:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0893ee54u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb644u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f9cc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e8u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000e8u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893eea8; }
    { goto L_0893eedc; }
L_0893eea8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007600u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]); goto L_0893eeec; }
L_0893eedc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_0893eeec:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075fcu);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb640u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893ef1c; }
    { goto L_0893ef48; }
L_0893ef1c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a70000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb640u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000e0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075fcu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
L_0893ef48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893eff8; }
    { c->r[31] = 0x0893ef64u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893eff8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ef94; }
    { mem_w32(ram, c->r[30] + 0x00000054u, 0u); goto L_0893eff8; }
L_0893ef94:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0893efa0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x0893efa8u; func_08820f58(c, ram); }
    c->r[5] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0893efc4u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0893efd8u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0893efe8u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    { c->r[31] = 0x0893eff4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000070u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
L_0893eff8:
    c->r[2] = c->r[30] + 0x00000034u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f078; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]); goto L_0893f09c; }
L_0893f078:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[3]);
L_0893f09c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f108; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]); goto L_0893f12c; }
L_0893f108:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[3]);
L_0893f12c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x000000ecu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f198; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000e8u, c->f[0]); goto L_0893f1bc; }
L_0893f198:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000e8u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[3]);
L_0893f1bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f228; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]); goto L_0893f24c; }
L_0893f228:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[3]);
L_0893f24c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x0000010cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000010cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f2b0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]); goto L_0893f2d4; }
L_0893f2b0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000010cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[3]);
L_0893f2d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000011cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f340; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000118u, c->f[0]); goto L_0893f364; }
L_0893f340:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000011cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000118u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[3]);
L_0893f364:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000012cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f3d0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]); goto L_0893f3f4; }
L_0893f3d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000012cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[3]);
L_0893f3f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007604u);
    mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0893f460; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]); goto L_0893f484; }
L_0893f460:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[3]);
L_0893f484:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0893f49cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000024u);
    { c->r[31] = 0x0893f4c0u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000024u); func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0893f4dcu; c->r[6] = c->r[6] + 0xffffc0d0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x0893f4e4u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0893f504u; c->r[5] = c->r[2] + 0u; func_0888d510(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000075fcu);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0893f51cu; c->r[4] = c->r[4] + 0xffffb640u; func_088a4710(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893f538u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893f554u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0893f568u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f5b0u; c->r[5] = 0u + 0x00000007u; func_0893fa9c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f5f8u; c->r[5] = 0u + 0x00000005u; func_0893fa9c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f644u; c->r[5] = c->r[5] | 0x0182u; func_0893f9e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8170u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0893f6a4u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = 0x08a60000u;
    c->r[3] = c->r[3] + 0xffff8170u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0893f704u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f754u; c->r[6] = c->r[3] + 0u; func_0893fad8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f79cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u); func_0893fa28(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x0893f7b0u; c->r[5] = mem_r32(ram, c->r[5] + 0x000000dcu); func_089e066c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f7fcu; c->r[5] = c->r[5] | 0x0004u; func_0893f9e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000dcu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000dcu, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f85cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u); func_0893fa28(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x0893f870u; c->r[5] = mem_r32(ram, c->r[5] + 0x000000dcu); func_089e066c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f8bcu; c->r[5] = c->r[5] | 0x0004u; func_0893f9e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000dcu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000dcu, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893f8e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_089e0008(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f930u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_0893fa28(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f978u; c->r[5] = 0u + 0x00000007u; func_0893fa60(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893f9c0u; c->r[5] = 0u + 0x00000005u; func_0893fa60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0893f9ccu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0893f9cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000158u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000154u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000150u);
    { c->r[29] = c->r[29] + 0x00000160u; return; }
    return; /* fell out of func_0893e998 */
}

/* func_089407c0  0x089407c0..0x08940870  176 bytes, source=sweep */
void func_089407c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089407c0u);
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
    { c->r[31] = 0x08940808u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894082cu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08940838u; c->r[5] = 0x15000000u; func_0893f9e4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894085cu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089407c0 */
}

/* func_08946038  0x08946038..0x0894607c  68 bytes, source=sweep */
void func_08946038(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08946038u);
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
    { c->r[31] = 0x08946068u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08946038 */
}

/* func_0894b75c  0x0894b75c..0x0894b798  60 bytes, source=sweep */
void func_0894b75c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894b75cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0894b784u; c->r[6] = 0u + 0x00000001u; func_0894bcf4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894b75c */
}

/* func_0894c604  0x0894c604..0x0894c67c  120 bytes, source=sweep */
void func_0894c604(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c604u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[14]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0894c604 */
}

/* func_08954f98  0x08954f98..0x08954fd0  56 bytes, source=sweep */
void func_08954f98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08954f98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08954f98 */
}

/* func_08955bf0  0x08955bf0..0x08956028  1080 bytes, source=fde */
void func_08955bf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955bf0u);
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
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08955c68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08955c50; }
    { goto L_08956010; }
L_08955c50:
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08955d84; }
    { goto L_08956010; }
L_08955c68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08955c8c; }
    { goto L_08955cdc; }
L_08955c8c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08955ca0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f34u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08955cdcu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
L_08955cdc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f38u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f3cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08955d2c; }
    { goto L_08955d38; }
L_08955d2c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08955d38u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08955d38:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08955d64u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08955d7cu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    { goto L_08956010; }
L_08955d84:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08955da8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08955dbcu; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08955e1cu; c->r[5] = c->r[2] + 0u; func_08956028(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08955e7cu; c->r[5] = c->r[2] + 0u; func_08956028(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08955e8cu; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f40u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08955ea8u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f44u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f3cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08955ed8; }
    { goto L_08955f10; }
L_08955ed8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f40u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08955ef4u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f44u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000050u, c->f[1]); goto L_08955f1c; }
L_08955f10:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f3cu);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
L_08955f1c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[1]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f48u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f4cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f50u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[16] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08955fbcu; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08955fd8u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007f54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08956004u; c->r[7] = 0u + 0u; func_089c510c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08956010u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08956010:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08955bf0 */
}

/* func_08958a38  0x08958a38..0x089594b4  2684 bytes, source=fde */
void func_08958a38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958a38u);
    c->r[29] = c->r[29] + 0xfffffdf0u;
    mem_w32(ram, c->r[29] + 0x00000208u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000204u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000200u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000001f0u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08958b7c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f0u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08958aa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08958abc; }
    { goto L_0895949c; }
L_08958aa4:
    c->r[2] = 0u + 0x0000000bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08958c50; }
    { goto L_0895949c; }
L_08958abc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000046e8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08958ae4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x08958adcu; c->r[5] = c->r[5] + 0xffff8010u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000046e8u, c->r[2]);
L_08958ae4:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08958af0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08958b00u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff801cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8020u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08958b2cu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff801cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8020u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08958b50u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8024u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8028u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08958b74u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x00000010u, c->f[0]); goto L_0895949c; }
L_08958b7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08958b94u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08958bec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000020u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff802cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_08958bec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8030u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08958c3c; }
    { goto L_0895949c; }
L_08958c3c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958c48u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0895949c; }
L_08958c50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8038u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8038u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08958c88u; c->f[13] = c->f[1]; func_089c7938(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08958cac; }
    { goto L_0895949c; }
L_08958cac:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08958d0cu; c->r[5] = c->r[2] + 0u; func_089594b4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08958d6cu; c->r[5] = c->r[2] + 0u; func_089594b4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08958d7cu; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08958d90u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000046e8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08958dacu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08958e04; }
L_08958dd4:
    { c->r[31] = 0x08958ddcu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a0u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08958dd4; }
L_08958e04:
    c->r[2] = c->r[30] + 0x000000b0u;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08958e5c; }
L_08958e2c:
    { c->r[31] = 0x08958e34u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a0u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08958e2c; }
L_08958e5c:
    c->r[2] = c->r[30] + 0x00000130u;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08958eb4; }
L_08958e84:
    { c->r[31] = 0x08958e8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a0u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08958e84; }
L_08958eb4:
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08958ed8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08958f00u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08958f28u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08958f50u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff803cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff803cu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x000001b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08958fa8; }
    { goto L_08958fdc; }
L_08958fa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8040u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8044u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]); goto L_08958ffc; }
L_08958fdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8040u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]);
L_08958ffc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff803cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000100u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8048u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c0u, c->f[0]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000101u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8048u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c4u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000102u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8048u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c8u, c->f[0]);
    c->r[16] = c->r[30] + 0x000001d0u;
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff804cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff804cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089590c4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089590d8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001b0u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001d0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089590ecu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[16] = c->r[30] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff804cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08959120u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08959134u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001b0u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895914cu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[16] = c->r[30] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08959180u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08959194u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001b0u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089591acu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[16] = c->r[30] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff804cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089591e0u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089591f4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001b0u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001e0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895920cu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000001c0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x000001c4u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x000001c8u);
    { c->r[31] = 0x08959230u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e4u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ecu);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08959350u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e4u);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ecu);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08959398u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e4u);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ecu);
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089593e8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e4u);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ecu);
    mem_w32(ram, c->r[30] + 0x0000015cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001e0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8034u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08959430u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e4u);
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ecu);
    mem_w32(ram, c->r[30] + 0x0000016cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0x0000003fu;
    { c->r[31] = 0x08959470u; c->r[8] = 0u + 0x00000001u; func_089c42dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[8] = c->r[30] + 0x00000130u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x0895949cu; c->r[9] = 0u + 0x00000001u; func_089ebe90(c, ram); }
L_0895949c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000208u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000204u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000200u);
    { c->r[29] = c->r[29] + 0x00000210u; return; }
    return; /* fell out of func_08958a38 */
}

/* func_0895b664  0x0895b664..0x0895b864  512 bytes, source=fde */
void func_0895b664(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b664u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000060u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895b694; }
    { mem_w32(ram, c->r[30] + 0x00000044u, 0u); goto L_0895b844; }
L_0895b694:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff811cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff811cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895b6c4u; func_0880d140(c, ram); }
    { c->r[31] = 0x0895b6ccu; func_08966c64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895b754; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8120u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[4] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x0895b730u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_0895b83c; }
L_0895b754:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8124u);
    { c->r[31] = 0x0895b7a0u; c->f[20] = c->f[1] / c->f[0]; func_0895b62c(c, ram); }
    c->f[0] = c->f[20] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8124u);
    { c->r[31] = 0x0895b7c4u; c->f[20] = c->f[1] / c->f[0]; func_0895b62c(c, ram); }
    c->f[0] = c->f[20] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[4] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x0895b81cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_0895b83c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_0895b844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_0895b664 */
}

/* func_0895fc5c  0x0895fc5c..0x0895fd38  220 bytes, source=fde */
void func_0895fc5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895fc5cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895fc90; }
    { c->r[31] = 0x0895fc90u; func_089343a0(c, ram); }
L_0895fc90:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0895fc94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895fcac; }
    { goto L_0895fd24; }
L_0895fcac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895fcdc; }
    { goto L_0895fd24; }
L_0895fcdc:
    c->r[4] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x0895fd14u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0895fc94; }
L_0895fd24:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895fc5c */
}

/* func_089620e4  0x089620e4..0x089623e4  768 bytes, source=fde */
void func_089620e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089620e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08962134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962150; }
    { goto L_089623d0; }
L_08962150:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896217cu; c->r[5] = c->r[2] + 0u; func_08961ee8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896218c; }
    { goto L_089623c0; }
L_0896218c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089623c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896226c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[4] + 0x0000004au);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089623c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    { c->r[31] = 0x08962264u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    { goto L_089623c0; }
L_0896226c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08962324; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089623c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    { c->r[31] = 0x0896231cu; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    { goto L_089623c0; }
L_08962324:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089623c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    { c->r[31] = 0x089623c0u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
L_089623c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08962134; }
L_089623d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089620e4 */
}

/* func_08964c24  0x08964c24..0x08964c94  112 bytes, source=fde */
void func_08964c24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964c24u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00004960u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] | 0x0100u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08964c64u; c->r[5] = 0u + 0x00000001u; func_089658e4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08964c70u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08964c80; }
    { c->r[31] = 0x08964c80u; func_0893443c(c, ram); }
L_08964c80:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08964c24 */
}

/* func_08967c8c  0x08967c8c..0x08967d80  244 bytes, source=fde */
void func_08967c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08967c8cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08967ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967cc0; }
    { goto L_08967d20; }
L_08967cc0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967cec; }
    { goto L_08967d20; }
L_08967cec:
    { c->r[31] = 0x08967cf4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896990c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08967ca8; }
L_08967d20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967d44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0xfffffffeu;
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08967d44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967d68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0xfffffffdu;
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08967d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08967c8c */
}

/* func_089699c0  0x089699c0..0x089699f0  48 bytes, source=sweep */
void func_089699c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089699c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000012cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089699c0 */
}

/* func_0896a824  0x0896a824..0x0896a86c  72 bytes, source=sweep */
void func_0896a824(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a824u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a824 */
}

/* func_0896dc4c  0x0896dc4c..0x0896dc80  52 bytes, source=fde */
void func_0896dc4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896dc4cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896dc64u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0896dc6cu; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896dc4c */
}

/* func_0896e7c0  0x0896e7c0..0x0896e824  100 bytes, source=fde */
void func_0896e7c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e7c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896e7e8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e810; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0896e810u; c->r[7] = 0u + 0u; func_089cb5e4(c, ram); }
L_0896e810:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e7c0 */
}

/* func_0896f78c  0x0896f78c..0x0896f898  268 bytes, source=fde */
void func_0896f78c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f78cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896f7a4u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0896f7e8; }
    { c->r[31] = 0x0896f7bcu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896f884; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896f7e8; }
    { goto L_0896f884; }
L_0896f7e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f844; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068a4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_0896f884; }
L_0896f844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896f884; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068a4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000fcu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0896f884:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f78c */
}

/* func_08971ac8  0x08971ac8..0x08972218  1872 bytes, source=fde */
void func_08971ac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08971ac8u);
L_08971ac8:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08972050; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971b40; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08971b48; }
    { goto L_08972200; }
L_08971b40:
    { goto L_08972200; }
L_08971b48:
    { c->r[31] = 0x08971b50u; func_0885d884(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972200; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8780u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08971ac8u: goto L_08971ac8; case 0x08971b8cu: goto L_08971b8c; case 0x08971cb4u: goto L_08971cb4; case 0x08971e0cu: goto L_08971e0c; case 0x08971e44u: goto L_08971e44; case 0x08971e80u: goto L_08971e80; case 0x08971ebcu: goto L_08971ebc; case 0x08971ef8u: goto L_08971ef8; case 0x08971f94u: goto L_08971f94; case 0x08972020u: goto L_08972020; case 0x08972200u: goto L_08972200; default: recomp_trap_unknown_indirect(c, ram, 0x08971b84u, _t); return; } }
L_08971b8c:
    { c->r[31] = 0x08971b94u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971bacu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971bccu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971becu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971c0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971c3c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08971c2cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971c3c:
    { c->r[31] = 0x08971c44u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971c90; }
    { c->r[31] = 0x08971c54u; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08971c80; }
    { c->r[31] = 0x08971c70u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x08971c78u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    { goto L_08971cb4; }
L_08971c80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971c90:
    { c->r[31] = 0x08971c98u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f550(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971cb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971cb4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8774u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08971cd0u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x08971cd8u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971ce8; }
    { c->r[31] = 0x08971ce8u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
L_08971ce8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08971cf8u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x08971d00u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    { c->r[31] = 0x08971d08u; func_0896d7ac(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08971d14u; c->r[4] = c->r[4] + 0xffff9720u; func_08821760(c, ram); }
    { c->r[31] = 0x08971d1cu; func_0884dfd8(c, ram); }
    { c->r[31] = 0x08971d24u; func_0885d97c(c, ram); }
    { c->r[31] = 0x08971d2cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971d48u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971d64; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08971d64u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08971d64:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08971d74u; c->r[5] = 0u + 0x00000006u; func_0896df68(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08971d84u; c->r[5] = 0u + 0u; func_0880d318(c, ram); }
    { c->r[31] = 0x08971d8cu; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08971d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08971da8; }
    { goto L_08971dfc; }
L_08971da8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971dd0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971dec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08971decu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08971dec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08971d90; }
L_08971dfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971e0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971e24u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971e44:
    { c->r[31] = 0x08971e4cu; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08972200; }
    { c->r[31] = 0x08971e68u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x08971e70u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971e80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971e9cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971ed8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971ef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08971f7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000046u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08971f28u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971f84; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08971f44u; c->r[5] = 0x00020000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8778u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08971f58u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971f68u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x00006974u, c->r[2]); goto L_08971f84; }
L_08971f7c:
    { c->r[31] = 0x08971f84u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896eb5c(c, ram); }
L_08971f84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972200; }
L_08971f94:
    { c->r[31] = 0x08971f9cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972200; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006974u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08971fbcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971fd8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08971fd8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08971fd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08971ffc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08971ff4u; c->r[5] = 0u + 0x00000003u; func_0896a7b8(c, ram); }
    { goto L_08972008; }
L_08971ffc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08972008u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
L_08972008:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08972014u; c->r[4] = c->r[4] + 0x000027dcu; func_089d38ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08972200; }
L_08972020:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000027f0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08972038; }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, 0u);
L_08972038:
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f0u, 0u);
    { c->r[31] = 0x08972048u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_08972200; }
L_08972050:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089721e8; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff877cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897207cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0d0eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089721a4; }
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0d0eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972118; }
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0b05u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089721a4; }
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0b05u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089720fc; }
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0b03u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089721a4; }
    { goto L_089721d4; }
L_089720fc:
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0b0fu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089721c0; }
    { goto L_089721d4; }
L_08972118:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897216c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972154; }
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0d16u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089721c0; }
    { goto L_089721d4; }
L_08972154:
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08972188; }
    { goto L_089721d4; }
L_0897216c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8768u;
    c->r[5] = 0u + 0x00001515u;
    { c->r[31] = 0x08972180u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_089721d4; }
L_08972188:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8768u;
    c->r[5] = 0u + 0x00001516u;
    { c->r[31] = 0x0897219cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_089721d4; }
L_089721a4:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8768u;
    c->r[5] = 0u + 0x00001511u;
    { c->r[31] = 0x089721b8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_089721d4; }
L_089721c0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8768u;
    c->r[5] = 0u + 0x00001517u;
    { c->r[31] = 0x089721d4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_089721d4:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089721e0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08972200; }
L_089721e8:
    { c->r[31] = 0x089721f0u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972200; }
    { c->r[31] = 0x08972200u; func_088513dc(c, ram); }
L_08972200:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08971ac8 */
}

/* func_089755e0  0x089755e0..0x0897564c  108 bytes, source=sweep */
void func_089755e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089755e0u);
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
    { c->r[31] = 0x0897561cu; c->r[5] = c->r[2] + 0u; func_08975564(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08975638u; c->r[5] = c->r[2] + 0u; func_08975564(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089755e0 */
}

/* func_08978ad0  0x08978ad0..0x08978b08  56 bytes, source=sweep */
void func_08978ad0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978ad0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08978af4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08978b38(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08978ad0 */
}

/* func_0897de24  0x0897de24..0x0897de74  80 bytes, source=fde */
void func_0897de24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897de24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0897de60u; c->r[6] = 0u + 0x00000002u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897de24 */
}

/* func_089861d0  0x089861d0..0x08986220  80 bytes, source=fde */
void func_089861d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089861d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0898620cu; c->r[6] = 0u + 0x00000004u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089861d0 */
}

/* func_08992a48  0x08992a48..0x08992cb4  620 bytes, source=fde */
void func_08992a48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08992a48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022d8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022d8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022d8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992aec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08992aec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992bcc; }
    { c->r[31] = 0x08992b00u; c->r[16] = mem_r8(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992b94; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992b5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08992c9c; }
L_08992b5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08992c9c; }
L_08992b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08992c9c; }
L_08992bcc:
    { c->r[31] = 0x08992bd4u; c->r[16] = mem_r8(ram, c->r[30] + 0x00000000u); func_0896dc4c(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992c68; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992c30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08992c9c; }
L_08992c30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08992c9c; }
L_08992c68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000022e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08992c9c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08992a48 */
}

/* func_08998b7c  0x08998b7c..0x08998ba0  36 bytes, source=residue */
void func_08998b7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998b7cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a92u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998b7c */
}

/* func_08999258  0x08999258..0x08999288  48 bytes, source=sweep */
void func_08999258(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999258u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002aabu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08999258 */
}

/* func_0899ea98  0x0899ea98..0x0899ebf0  344 bytes, source=fde */
void func_0899ea98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899ea98u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a90u);
    { c->r[31] = 0x0899eac8u; mem_w8(ram, c->r[30] + 0x00000009u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a90u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899eb08u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    { c->r[31] = 0x0899eb24u; c->r[4] = c->r[2] + 0u; func_08998888(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffff80u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899eb6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0899eb6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899eb94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x000000b2u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
L_0899eb94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0899ebacu; c->r[6] = 0u + 0x0000003du; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a90u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002a90u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0899ea98 */
}

/* func_089a1c24  0x089a1c24..0x089a1cbc  152 bytes, source=sweep */
void func_089a1c24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1c24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6bcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6bcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6bcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1c24 */
}

/* func_089a67e4  0x089a67e4..0x089a6940  348 bytes, source=fde */
void func_089a67e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a67e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] << 2;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + 0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e88u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a6874u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[4] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a6894u; c->r[5] = c->r[2] + 0u; func_088f49b8(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089a68a0u; c->r[4] = c->r[2] + 0u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6924; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e50u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a68e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_089a6924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a67e4 */
}

/* func_089ac674  0x089ac674..0x089ac790  284 bytes, source=fde */
void func_089ac674(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac674u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00003094u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00003095u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00003098u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00003099u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x000030ecu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x000030edu, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x000030f0u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x000030f1u, 0u);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089ac6d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ac6f0; }
    { goto L_089ac768; }
L_089ac6f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030b0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030b0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089ac6d8; }
L_089ac768:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00003108u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089ac77cu; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac674 */
}

/* func_089b2884  0x089b2884..0x089b28c0  60 bytes, source=sweep */
void func_089b2884(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2884u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b28acu; c->r[6] = 0u + 0u; func_089b2a40(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2884 */
}

/* func_089b3824  0x089b3824..0x089b384c  40 bytes, source=sweep */
void func_089b3824(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3824u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3824 */
}

/* func_089b6a20  0x089b6a20..0x089b6ae0  192 bytes, source=fde */
void func_089b6a20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6a20u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b6a58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b6a7c; }
    { goto L_089b6ac0; }
L_089b6a7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b6a90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b6aa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089b6ac8; }
L_089b6aa4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089b6a58; }
L_089b6ac0:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089b6ac8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b6a20 */
}

/* func_089b8050  0x089b8050..0x089b80a8  88 bytes, source=fde */
void func_089b8050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8050u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b8070u; c->r[5] = 0u + 0u; func_089b9be8(c, ram); }
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b8050 */
}

/* func_089b98c4  0x089b98c4..0x089b9940  124 bytes, source=fde */
void func_089b98c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b98c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b98f8; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b9928; }
L_089b98f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b9924u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089f4ea4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089b9928:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b98c4 */
}

/* func_089c3a94  0x089c3a94..0x089c3ab8  36 bytes, source=sweep */
void func_089c3a94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3a94u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff1b0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089c3a94 */
}

/* func_089c6b7c  0x089c6b7c..0x089c6bec  112 bytes, source=fde */
void func_089c6b7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6b7cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089c6bd0u; c->r[9] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cafb8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c6b7c */
}

/* func_089c9300  0x089c9300..0x089c93e4  228 bytes, source=fde */
void func_089c9300(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c9300u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089c9318u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000114u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c9394; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000104u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9370; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000104u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000108u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[5] + 0x00000108u, c->r[2]); goto L_089c9394; }
L_089c9370:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000104u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000108u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000108u, c->r[2]);
L_089c9394:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000340u);
    c->r[2] = 0x405f0000u;
    c->r[2] = c->r[2] | 0x7de1u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c93d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000340u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000340u, c->r[2]);
L_089c93d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c9300 */
}

/* func_089cb5e4  0x089cb5e4..0x089cb638  84 bytes, source=fde */
void func_089cb5e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb5e4u);
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
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089cb620u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb2b4(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb5e4 */
}

/* func_089d00b4  0x089d00b4..0x089d012c  120 bytes, source=fde */
void func_089d00b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d00b4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb6acu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d0118u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d00b4 */
}

/* func_089d2a0c  0x089d2a0c..0x089d2a9c  144 bytes, source=sweep */
void func_089d2a0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2a0cu);
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
    { c->r[31] = 0x089d2a4cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xb1000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2a70u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xc4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2a88u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2a0c */
}

/* func_089d3b08  0x089d3b08..0x089d3b88  128 bytes, source=fde */
void func_089d3b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3b08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089d3b3cu; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24c0cu); /* sceNetAdhocMatchingGetMembers */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xaaaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] >> 3;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089d3b70u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a24c0cu); /* sceNetAdhocMatchingGetMembers */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3b08 */
}

/* func_089d56b4  0x089d56b4..0x089d56dc  40 bytes, source=sweep */
void func_089d56b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d56b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d56b4 */
}

/* func_089d6ba0  0x089d6ba0..0x089d6c8c  236 bytes, source=fde */
void func_089d6ba0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d6ba0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089d6bbc:
    { c->r[31] = 0x089d6bc4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1b008(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6bdc; }
    { goto L_089d6c78; }
L_089d6bdc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000041u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6c38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000005bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6c38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089d6c38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000005cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d6c68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000002fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089d6c68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d6bbc; }
L_089d6c78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d6ba0 */
}

/* func_089d86a0  0x089d86a0..0x089d8714  116 bytes, source=sweep */
void func_089d86a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d86a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d86f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d86dc; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089d8700; }
L_089d86dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d8700; }
L_089d86f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089d8700:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d86a0 */
}

/* func_089d98ac  0x089d98ac..0x089d98dc  48 bytes, source=sweep */
void func_089d98ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d98acu);
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
    return; /* fell out of func_089d98ac */
}

/* func_089da95c  0x089da95c..0x089daaa4  328 bytes, source=fde */
void func_089da95c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da95cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089da984u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db14c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089da998; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089daa8c; }
L_089da998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = c->r[30] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089da9b4u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a24b34u); /* sceMpegGetAvcAu */ }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089da9cc; }
    { goto L_089daa8c; }
L_089da9cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089da9e0u; c->r[5] = c->r[3] + 0u; func_089dafb0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x0000069cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[6] = 0u + 0x00000200u;
    c->r[7] = 0x08b90000u;
    c->r[7] = c->r[7] + 0x0000069cu;
    { c->r[31] = 0x089daa10u; c->r[8] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24a74u); /* sceMpegAvcDecode */ }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089daa38; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbbacu;
    { c->r[31] = 0x089daa30u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_08a1a4c0(c, ram); }
    { goto L_089daa8c; }
L_089daa38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089daa4cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_089da56c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089daa88; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089daa6cu; c->r[5] = c->r[2] + 0u; func_089da628(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089daa7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089db028(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089daa88u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db0bc(c, ram); }
L_089daa88:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089daa8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089da95c */
}

/* func_089dc000  0x089dc000..0x089dc044  68 bytes, source=sweep */
void func_089dc000(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc000u);
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
    { c->r[31] = 0x089dc030u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc000 */
}

/* func_089ddc24  0x089ddc24..0x089ddc50  44 bytes, source=sweep */
void func_089ddc24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ddc24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ddc24 */
}

/* func_089dfeb4  0x089dfeb4..0x089dff38  132 bytes, source=sweep */
void func_089dfeb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dfeb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
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
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089dff24u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e1de8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dfeb4 */
}

/* func_089e1e98  0x089e1e98..0x089e1ef0  88 bytes, source=fde */
void func_089e1e98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1e98u);
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
    { c->r[31] = 0x089e1edcu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089e37c4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e1e98 */
}

/* func_089e2f88  0x089e2f88..0x089e313c  436 bytes, source=sweep */
void func_089e2f88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2f88u);
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
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e2fe8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089e3034; }
L_089e2fe8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e3010; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 31;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089e3034; }
L_089e3010:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e3034; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 28;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_089e3034:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3040u; c->r[5] = 0u + 0x00000018u; func_089e45ec(c, ram); }
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
    { c->r[31] = 0x089e30fcu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0x12800000u;
    c->r[6] = c->r[6] | 0x011cu;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089e311cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000020u); func_089e4b3c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3128u; c->r[5] = 0xd3000000u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089e2f88 */
}

/* func_089e3e38  0x089e3e38..0x089e3fd4  412 bytes, source=sweep */
void func_089e3e38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3e38u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 12;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xe2000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3eacu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 12;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xe3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3f08u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 12;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xe4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3f64u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 12;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xe5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3fc0u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3e38 */
}

/* func_089e4ee0  0x089e4ee0..0x089e4f3c  92 bytes, source=fde */
void func_089e4ee0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4ee0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08b90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000708u);
    { c->r[31] = 0x089e4f28u; c->r[7] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a14u); /* sceGeListEnQueue */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089e4ee0 */
}

/* func_089ea4c8  0x089ea4c8..0x089ea534  108 bytes, source=sweep */
void func_089ea4c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea4c8u);
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
    { c->r[31] = 0x089ea504u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea520u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea4c8 */
}

/* func_089eb344  0x089eb344..0x089eb3f4  176 bytes, source=sweep */
void func_089eb344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb344u);
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
    { c->r[31] = 0x089eb38cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089eb3b0u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089eb3bcu; c->r[5] = 0x15000000u; func_089ea03c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089eb3e0u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089eb344 */
}

/* func_089ef638  0x089ef638..0x089ef6c4  140 bytes, source=sweep */
void func_089ef638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef638u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[1] + 0xffffe86cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe86cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe86cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe868u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe868u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ef638 */
}

/* func_089f0efc  0x089f0efc..0x089f0f40  68 bytes, source=sweep */
void func_089f0efc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0efcu);
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
    { c->r[31] = 0x089f0f2cu; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0efc */
}

/* func_089f4d20  0x089f4d20..0x089f4ea4  388 bytes, source=fde */
void func_089f4d20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f4d20u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x089f4d44u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c6aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f4d54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089f4c70(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f4d70; }
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_089f4e8c; }
L_089f4d70:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089f4d78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f4d9c; }
    { goto L_089f4e84; }
L_089f4d9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089f4dbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f4dd8; }
    { goto L_089f4e74; }
L_089f4dd8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f4e04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f4e04; }
    { goto L_089f4e4c; }
L_089f4e04:
    c->r[6] = c->r[30] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[4] + 0x00000001u;
    { mem_w32(ram, c->r[6] + 0x00000000u, c->r[4]); goto L_089f4e74; }
L_089f4e4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089f4dbc; }
L_089f4e74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089f4d78; }
L_089f4e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089f4e8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089f4d20 */
}

/* func_089f6254  0x089f6254..0x089f65a8  852 bytes, source=fde */
void func_089f6254(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f6254u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f62a0; }
    { c->r[31] = 0x089f6298u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8068(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]); goto L_089f62a8; }
L_089f62a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
L_089f62a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f6588; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f62ccu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f62fc; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f62f0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089f851c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089f6340; }
L_089f62fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6310u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0c8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f6334; }
    { goto L_089f6340; }
L_089f6334:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]); goto L_089f6590; }
L_089f6340:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0ccu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6360u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0ccu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f6380u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0d0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089f63a0u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089f63acu; c->r[4] = c->r[2] + 0u; func_089f85a0(c, ram); }
    c->r[4] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00003fffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[7] = c->r[30] + 0x00000040u;
    c->r[8] = c->r[30] + 0x00000050u;
    c->r[9] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f63d8u; c->r[6] = c->r[3] + 0u; func_08a01b00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f6588; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f6434; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f642cu; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000108u, 0u); goto L_089f6590; }
L_089f6434:
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f6448u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f7d84(c, ram); }
    c->r[2] = c->r[2] & 0x8000u;
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6568; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f64a0; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f6488u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6498u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f64c0; }
L_089f64a0:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f64b0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f64c0u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f64c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f64f4; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f64dcu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f64ecu; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6514; }
L_089f64f4:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6504u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6514u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6548; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f6530u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089f6540u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6568; }
L_089f6548:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f6558u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6568u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6568:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000104u);
    { c->r[31] = 0x089f6580u; c->r[7] = c->r[2] + 0u; func_089f8108(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]); goto L_089f6590; }
L_089f6588:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
L_089f6590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_089f6254 */
}

/* func_089f8a7c  0x089f8a7c..0x089f8b4c  208 bytes, source=fde */
void func_089f8a7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8a7cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f8aa8u; c->r[5] = 0u + 0u; func_089f8b84(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f8b0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089f8b0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[3] = c->r[4] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089f8b04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089fe6d4(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089f8b38; }
L_089f8b0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f8b2c; }
    { c->r[31] = 0x089f8b24u; c->r[4] = 0u + 0u; func_089fe394(c, ram); }
    { goto L_089f8b38; }
L_089f8b2c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f8b38u; c->r[5] = 0u + 0u; func_089f8b4c(c, ram); }
L_089f8b38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8a7c */
}

/* func_089f97d4  0x089f97d4..0x089f9868  148 bytes, source=sweep */
void func_089f97d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f97d4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[3] = 0u + 0x00000001u;
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[4] = 0u + 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_089f9814; }
L_089f97fc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089f9814:
    { c->r[31] = 0x089f981cu; func_089fa3c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0xffffffe3u;
    c->r[5] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    c->r[3] = 0x80000000u;
    c->r[2] = (c->r[16] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x001au; if (_c) goto L_089f97fc; }
    c->r[3] = 0x80000000u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[5] != 0u); c->r[3] = c->r[3] | 0x001au; if (_c) goto L_089f97fc; }
    { c->r[31] = 0x089f9850u; func_089fc8b4(c, ram); }
    { c->r[31] = 0x089f9858u; c->r[4] = c->r[17] + 0u; func_089fbf1c(c, ram); }
    { c->r[31] = 0x089f9860u; c->r[4] = c->r[16] + 0u; func_089fe070(c, ram); }
    { c->r[3] = 0u + 0u; goto L_089f97fc; }
    return; /* fell out of func_089f97d4 */
}

/* func_089fa378  0x089fa378..0x089fa398  32 bytes, source=fde */
void func_089fa378(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa378u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    { c->r[31] = 0x089fa38cu; c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu); func_089f9c48(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa378 */
}

/* func_089fac54  0x089fac54..0x089fac74  32 bytes, source=sweep */
void func_089fac54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fac54u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    { c->r[31] = 0x089fac68u; c->r[4] = mem_r32(ram, c->r[2] + 0x00006590u); func_089fa95c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fac54 */
}

/* func_089fba20  0x089fba20..0x089fba28  8 bytes, source=sweep */
void func_089fba20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fba20u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089fba20 */
}

/* func_089fc1cc  0x089fc1cc..0x089fc2b0  228 bytes, source=sweep */
void func_089fc1cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc1ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[3] = c->r[5] & 0xffffu;
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[2] = c->r[4] & 0xffffu;
    c->r[16] = c->r[7] + 0u;
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    c->r[5] = 0x80000000u;
    c->f[20] = c->f[12];
    { int _c = ((s32)c->r[6] < 0); mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]); if (_c) goto L_089fc25c; }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { int _c = (c->r[6] != 0u); c->r[8] = c->r[16] + 0u; if (_c) goto L_089fc278; }
    { c->r[31] = 0x089fc218u; func_089f92cc(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[4] = 0x08ba0000u;
    c->r[6] = c->r[2] + 0u;
    c->r[3] = c->r[4] + 0xffff88b8u;
    c->r[2] = c->r[5] << 4;
    c->r[2] = c->r[2] + c->r[3];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[20]);
L_089fc234:
    c->r[4] = c->r[4] + 0xffff88b8u;
    c->r[3] = c->r[5] << 4;
    c->r[3] = c->r[3] + c->r[4];
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[17]);
    c->r[5] = c->r[6] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[16]);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
L_089fc25c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fc278:
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089fc284u; c->r[6] = 0u + 0u; func_089f92cc(c, ram); }
    c->f[1] = u2f(c->r[17]);
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[4] = 0x08ba0000u;
    c->f[0] = (f32)(s32)f2u(c->f[1]);
    c->r[6] = c->r[2] + 0u;
    c->r[3] = c->r[4] + 0xffff88b8u;
    c->r[2] = c->r[5] << 4;
    c->f[0] = c->f[20] / c->f[0];
    c->r[2] = c->r[2] + c->r[3];
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_089fc234; }
    return; /* fell out of func_089fc1cc */
}

/* func_089fd8c4  0x089fd8c4..0x089fd918  84 bytes, source=sweep */
void func_089fd8c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd8c4u);
    c->r[3] = c->r[4] + 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = ((s32)c->r[3] < (s32)0xffffff81u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[4] + 0x000000ffu; if (_c) goto L_089fd908; }
L_089fd8dc:
    c->r[2] = ((s32)c->r[3] < (s32)0x00000080u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[3] + 0xffffff01u; if (_c) goto L_089fd8f8; }
L_089fd8e8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fd8f8:
    { c->r[31] = 0x089fd900u; func_089fd8c4(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_089fd8e8; }
L_089fd908:
    { c->r[31] = 0x089fd910u; func_089fd8c4(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_089fd8dc; }
    return; /* fell out of func_089fd8c4 */
}

/* func_089fe6d4  0x089fe6d4..0x089fe814  320 bytes, source=sweep */
void func_089fe6d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe6d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[7] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[4] == c->r[7]); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_089fe7c0; }
    c->r[2] = c->r[4] << 3;
    c->r[2] = c->r[2] - c->r[4];
    c->r[3] = 0x08ba0000u;
    c->r[2] = c->r[2] << 5;
    c->r[3] = c->r[3] + 0x0000008cu;
    c->r[16] = c->r[2] + c->r[3];
    c->r[3] = mem_r16(ram, c->r[16] + 0x00000010u);
    c->r[2] = c->r[3] + 0xffffffffu;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] + 0xfffffffdu; if (_c) goto L_089fe7a4; }
    c->r[2] = c->r[2] & 0xffffu;
    c->r[3] = 0x80000000u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x000cu; if (_c) goto L_089fe784; }
    c->f[0] = u2f(c->r[5]);
    c->f[2] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    c->r[3] = c->r[4] << 2;
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = u2f(0u);
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = 0x08ba0000u;
    c->f[0] = c->f[0] - c->f[2];
    c->r[3] = c->r[3] << 2;
    c->r[2] = c->r[2] + 0x00000170u;
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = c->f[0] / c->f[1];
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[5]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[2]);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
L_089fe780:
    c->r[3] = 0u + 0u;
L_089fe784:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fe7a4:
    { c->r[31] = 0x089fe7acu; func_089fe394(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = c->r[3] | 0x000cu;
    { mem_w16(ram, c->r[16] + 0x00000010u, c->r[2]); goto L_089fe784; }
L_089fe7c0:
    c->r[19] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[19] + 0x0000016cu);
    { int _c = ((s32)c->r[2] <= 0); c->r[17] = 0u + 0u; if (_c) goto L_089fe780; }
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[18] = 0u + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[16] + 0x00000000u);
L_089fe7e4:
    c->r[4] = c->r[17] + 0u;
    c->r[16] = c->r[16] + 0x000000e0u;
    { int _c = (c->r[2] == c->r[18]); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_089fe7fc; }
    { c->r[31] = 0x089fe7fcu; func_089fe394(c, ram); }
L_089fe7fc:
    c->r[2] = mem_r32(ram, c->r[19] + 0x0000016cu);
    c->r[2] = ((s32)c->r[17] < (s32)c->r[2]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[2] = mem_r16(ram, c->r[16] + 0x00000000u); goto L_089fe7e4; }
    { c->r[3] = 0u + 0u; goto L_089fe784; }
    return; /* fell out of func_089fe6d4 */
}

/* func_089ff7e0  0x089ff7e0..0x08a001f8  2584 bytes, source=sweep */
void func_089ff7e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff7e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = 0x08ba0000u;
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[18] + 0x0000008cu;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[3] = mem_r16(ram, c->r[16] + 0x00000010u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[5]);
    { int _c = (c->r[3] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    c->r[2] = 0u + 0x00000005u;
    if (c->r[3] == c->r[2]) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000064u); goto L_08a00164; }
L_089ff830:
    c->r[16] = c->r[18] + 0x0000008cu;
L_089ff834:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000064u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0xffffffffu; if (_c) goto L_08a00104; }
    c->r[17] = mem_r32(ram, c->r[16] + 0x00000078u);
    if (c->r[17] == c->r[2]) { c->r[4] = 0u + 0u; goto L_08a000c4; }
    c->r[16] = c->r[18] + 0x0000008cu;
L_089ff854:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000064u);
    c->r[21] = 0u + 0u;
    c->r[20] = 0u + 0u;
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = mem_r32(ram, c->r[16] + 0x00000030u); if (_c) goto L_089ff9e8; }
    c->r[3] = mem_r16(ram, c->r[16] + 0x00000010u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); c->r[3] = 0x08ba0000u; if (_c) goto L_089ff8e4; }
    c->r[4] = mem_r32(ram, c->r[3] + 0xffff8ab8u);
    c->r[2] = 0x92490000u;
    c->r[2] = c->r[2] | 0x2493u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[5] = (u32)((s32)c->r[4] >> 31);
    c->r[21] = mem_r32(ram, c->r[16] + 0x00000060u);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] - c->r[5];
    c->r[2] = c->r[2] << 4;
    alx_div(c, c->r[2], c->r[3]);
    mem_w32(ram, c->r[16] + 0x00000060u, c->r[2]);
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x089ff8b8u, 0x7u); goto L_089ff8bc; }
L_089ff8bc:
    c->r[5] = c->hi;
    c->r[2] = c->r[5] - c->r[21];
    c->r[2] = c->r[2] + c->r[3];
    c->r[20] = c->hi;
    alx_div(c, c->r[2], c->r[3]);
    mem_w32(ram, c->r[16] + 0x00000060u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000020u);
    c->r[4] = c->hi;
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[16] + 0x00000020u, c->r[2]);
L_089ff8e4:
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089ff8f0u; c->r[5] = 0u + 0x0000001du; func_089fa398(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    c->r[5] = 0u + 0x0000001eu;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089ff904u; mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); func_089fa398(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000a0u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x0000002cu);
    alx_div(c, c->r[5], c->r[6]);
    if (c->r[6] == 0u) { recomp_break(c, ram, 0x089ff91cu, 0x7u); goto L_089ff920; }
L_089ff920:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000080u);
    c->r[3] = c->lo;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[16] = c->r[18] + 0x0000008cu; goto L_089ff9c8; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x000000ccu);
    if (c->r[2] == 0u) { c->r[16] = c->r[18] + 0x0000008cu; goto L_089ff9c8; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000078u);
    if (c->r[2] != 0u) { c->r[16] = c->r[18] + 0x0000008cu; goto L_089ff9c8; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000058u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x0000005cu);
    c->r[9] = c->r[5] + 0u;
    c->r[7] = c->r[2] - c->r[8];
    c->r[3] = ((s32)c->r[7] < (s32)c->r[5]) ? 1u : 0u;
    mem_w32(ram, c->r[16] + 0x00000080u, 0u);
    { int _c = (c->r[3] == 0u); if (c->r[4] == 0u) c->r[9] = 0u; if (_c) goto L_089ff998; }
    c->r[2] = c->r[5] >> 31;
    c->r[2] = c->r[5] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = ((s32)c->r[7] < (s32)c->r[2]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[16] = c->r[18] + 0x0000008cu; goto L_089ff99c; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x000000a4u);
    c->r[2] = 0u + 0xffffffffu;
    if (c->r[3] == c->r[2]) { alx_div(c, c->r[8], c->r[17]); goto L_08a0006c; }
L_089ff998:
    c->r[16] = c->r[18] + 0x0000008cu;
L_089ff99c:
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000dcu);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u);
    { c->r[31] = 0x089ff9b0u; c->r[5] = c->r[5] + c->r[9]; func_08a02ff0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000005cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[16] + 0x00000078u, c->r[2]);
    c->r[3] = c->r[3] ^ 0x0001u;
    mem_w32(ram, c->r[16] + 0x0000005cu, c->r[3]);
L_089ff9c4:
    c->r[16] = c->r[18] + 0x0000008cu;
L_089ff9c8:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000078u);
    c->r[19] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[19]); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a00034; }
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000003u; if (_c) goto L_089fff90; }
    if (c->r[3] == c->r[2]) { c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u); goto L_089fff24; }
L_089ff9e8:
    c->r[2] = c->r[18] + 0x0000008cu;
L_089ff9ec:
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[3] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[3] + 0xffffd2c0u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x089ffa18u: goto L_089ffa18; case 0x089ffa54u: goto L_089ffa54; case 0x089ffac4u: goto L_089ffac4; case 0x089ffae8u: goto L_089ffae8; case 0x089ffb08u: goto L_089ffb08; case 0x089ffc60u: goto L_089ffc60; case 0x089ffc94u: goto L_089ffc94; case 0x089ffce4u: goto L_089ffce4; case 0x089ffd00u: goto L_089ffd00; case 0x089ffe4cu: goto L_089ffe4c; default: recomp_trap_unknown_indirect(c, ram, 0x089ffa10u, _t); return; } }
L_089ffa18:
    c->r[16] = c->r[18] + 0x0000008cu;
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x089ffa28u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[2] + 0u; if (_c) goto L_089ffaa0; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000070u);
    { int _c = ((s32)c->r[2] <= 0); c->r[6] = c->r[2] + 0u; if (_c) goto L_089ffa80; }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[7] = (u32)((s32)c->r[2] >> 31);
    { c->r[31] = 0x089ffa4cu; c->r[8] = 0u + 0u; func_08a02fcc(c, ram); }
    c->r[4] = 0u + 0x00000004u;
    mem_w32(ram, c->r[16] + 0x00000064u, c->r[4]);
L_089ffa54:
    c->r[4] = 0u + 0u;
L_089ffa58:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
L_089ffa5c:
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_089ffa80:
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
L_089ffa84:
    c->r[5] = 0x08ba0000u;
    c->r[5] = c->r[5] + 0xffff92f0u;
    { c->r[31] = 0x089ffa94u; c->r[6] = 0u + 0x00000800u; func_08a02ff0(c, ram); }
    c->r[3] = 0u + 0x00000003u;
L_089ffa98:
    { mem_w32(ram, c->r[16] + 0x00000064u, c->r[3]); goto L_089ffa54; }
L_089ffaa0:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[17] != c->r[2]); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    { c->r[31] = 0x089ffab4u; c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u); hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    mem_w32(ram, c->r[16] + 0x00000068u, c->r[17]);
    mem_w16(ram, c->r[16] + 0x00000010u, 0u);
    { mem_w32(ram, c->r[16] + 0x00000064u, 0u); goto L_089ffa54; }
L_089ffac4:
    c->r[16] = c->r[18] + 0x0000008cu;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000070u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[8] = 0u + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089ffae0u; c->r[7] = (u32)((s32)c->r[2] >> 31); func_08a02fcc(c, ram); }
    c->r[4] = 0u + 0x00000004u;
    mem_w32(ram, c->r[16] + 0x00000064u, c->r[4]);
L_089ffae8:
    c->r[16] = c->r[18] + 0x0000008cu;
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x089ffaf8u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    if (c->r[2] != 0u) { c->r[4] = 0u + 0u; goto L_089ffa58; }
    { c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u); goto L_089ffa84; }
L_089ffb08:
    c->r[2] = c->r[18] + 0x0000008cu;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000068u);
    { c->r[31] = 0x089ffb18u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089ffc44; }
L_089ffb2c:
    { c->r[31] = 0x089ffb34u; c->r[16] = c->r[18] + 0x0000008cu; hle_dispatch_stub(c, ram, 0x08a248dcu); /* sceKernelDcacheWritebackAll */ }
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0xffff92f0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[13] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[12] = mem_r16(ram, c->r[2] + 0x00000030u);
    c->r[8] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[3] = c->r[13] + c->r[4];
    c->r[3] = c->r[3] + 0xffffffffu;
    alx_div(c, c->r[3], c->r[4]);
    c->r[9] = mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[11] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[7] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[10] = mem_r32(ram, c->r[2] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000030u, c->r[4]);
    mem_w8(ram, c->r[16] + 0x0000002cu, c->r[11]);
    mem_w32(ram, c->r[16] + 0x0000003cu, c->r[5]);
    mem_w32(ram, c->r[16] + 0x00000038u, c->r[6]);
    mem_w32(ram, c->r[16] + 0x00000048u, c->r[7]);
    mem_w16(ram, c->r[16] + 0x00000040u, c->r[8]);
    mem_w16(ram, c->r[16] + 0x00000042u, c->r[9]);
    mem_w32(ram, c->r[16] + 0x00000044u, c->r[10]);
    mem_w16(ram, c->r[16] + 0x0000004cu, c->r[12]);
    mem_w32(ram, c->r[16] + 0x00000034u, c->r[13]);
    c->r[3] = c->lo;
    alx_mult(c, c->r[3], c->r[4]);
    if (c->r[4] == 0u) { recomp_break(c, ram, 0x089ffba4u, 0x7u); goto L_089ffba8; }
L_089ffba8:
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000088u);
    c->r[3] = c->lo;
    c->r[3] = c->r[3] << 1;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[16] + 0x0000007cu, c->r[3]); if (_c) goto L_089ffc3c; }
    c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u);
    c->r[2] = c->r[6] << 1;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = ((s32)c->r[13] < (s32)c->r[2]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[6] = c->r[4] << 1; goto L_089ffc14; }
L_089ffbd4:
    c->r[6] = c->r[6] << 1;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[16] + 0x00000088u, 0u); if (_c) goto L_089ffc08; }
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000dcu);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[6] = c->r[3] + 0u;
L_089ffbf0:
    { c->r[31] = 0x089ffbf8u; func_08a02ff0(c, ram); }
    c->r[3] = c->r[18] + 0x0000008cu;
    c->r[2] = 0u + 0x00000006u;
    { mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]); goto L_089ffa54; }
L_089ffc08:
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000dcu);
    { c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u); goto L_089ffbf0; }
L_089ffc14:
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[7] = (u32)((s32)c->r[6] >> 31);
    { c->r[31] = 0x089ffc24u; c->r[8] = 0u + 0x00000001u; func_08a02fcc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000088u);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[16] + 0x00000064u, c->r[2]);
    mem_w32(ram, c->r[16] + 0x00000020u, c->r[4]);
    { mem_w32(ram, c->r[16] + 0x00000058u, c->r[4]); goto L_089ffa54; }
L_089ffc3c:
    { c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u); goto L_089ffbd4; }
L_089ffc44:
    { int _c = (c->r[2] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_089ffc58; }
    c->r[2] = (c->r[2] < 0x00000800u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ffb2c; }
L_089ffc58:
    { c->r[4] = 0x80000000u; goto L_089ffa58; }
L_089ffc60:
    c->r[16] = c->r[18] + 0x0000008cu;
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x089ffc70u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000dcu);
    { c->r[31] = 0x089ffc8cu; c->r[6] = c->r[6] << 1; func_08a02ff0(c, ram); }
    { c->r[3] = 0u + 0x00000006u; goto L_089ffa98; }
L_089ffc94:
    c->r[16] = c->r[18] + 0x0000008cu;
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x089ffca4u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    { c->r[31] = 0x089ffcb4u; hle_dispatch_stub(c, ram, 0x08a248dcu); /* sceKernelDcacheWritebackAll */ }
    c->r[3] = mem_r16(ram, c->r[16] + 0x00000010u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000007u; if (_c) goto L_089ffcd8; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000074u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000007u; if (_c) goto L_089ffcd8; }
    c->r[2] = 0u + 0x00000008u;
L_089ffcd8:
    c->r[3] = 0u + 0x00000002u;
    mem_w32(ram, c->r[16] + 0x00000064u, c->r[2]);
    mem_w16(ram, c->r[16] + 0x00000010u, c->r[3]);
L_089ffce4:
    c->r[4] = c->r[18] + 0x0000008cu;
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    if (c->r[3] != c->r[2]) { c->r[4] = 0u + 0u; goto L_089ffa58; }
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[4] + 0x00000064u, c->r[2]);
L_089ffd00:
    c->r[16] = c->r[18] + 0x0000008cu;
    { c->r[31] = 0x089ffd0cu; c->r[4] = 0u + 0x0000001du; func_089ff3bc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[8] = mem_r32(ram, c->r[16] + 0x00000030u); if (_c) goto L_089ffde0; }
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x0000002cu);
    c->r[6] = c->r[3] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089ffd34u; c->r[7] = 0u + 0u; func_08a00514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000d4u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[16] + 0x00000058u, c->r[3]);
    c->r[4] = 0u + 0x0000001du;
    c->r[7] = 0u + 0x00000001u;
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
    { c->r[31] = 0x089ffd5cu; mem_w32(ram, c->r[16] + 0x00000080u, c->r[2]); func_08a05ce0(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000d8u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[4] = 0u + 0x0000001eu;
    { c->r[31] = 0x089ffd70u; c->r[7] = 0u + 0x00000001u; func_08a05ce0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x000000d4u);
    c->r[5] = 0u + 0x00000003u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[3] >> 4);
    c->r[3] = c->r[3] << 4;
    c->r[3] = c->r[3] + c->r[4];
    mem_w8(ram, c->r[3] + 0xfffffff1u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x000000d8u);
    c->r[3] = (u32)((s32)c->r[2] >> 31);
    c->r[3] = c->r[3] >> 28;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
L_089ffdb4:
    c->r[2] = c->r[2] + c->r[4];
    mem_w8(ram, c->r[2] + 0xfffffff1u, c->r[5]);
    c->r[4] = c->r[18] + 0x0000008cu;
    c->r[2] = 0u + 0x00000009u;
    mem_w32(ram, c->r[4] + 0x00000064u, c->r[2]);
    c->r[3] = 0x08ba0000u;
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0xffff8ab8u, 0u);
    mem_w16(ram, c->r[4] + 0x00000010u, c->r[2]);
    { mem_w32(ram, c->r[4] + 0x000000c4u, 0u); goto L_089ffa54; }
L_089ffde0:
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x0000002cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089ffdf0u; c->r[7] = 0u + 0u; func_08a00514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000d4u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[16] + 0x00000058u, c->r[3]);
    c->r[4] = 0u + 0x0000001du;
    c->r[7] = 0u + 0x00000001u;
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
    { c->r[31] = 0x089ffe18u; mem_w32(ram, c->r[16] + 0x00000080u, c->r[2]); func_08a05ce0(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000d8u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[4] = 0u + 0x0000001eu;
    { c->r[31] = 0x089ffe2cu; c->r[7] = 0u + 0x00000001u; func_08a05ce0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[3] = mem_r32(ram, c->r[16] + 0x000000d4u);
    c->r[5] = 0u + 0x00000003u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[3] + 0xfffffff1u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000094u);
    { c->r[2] = mem_r32(ram, c->r[16] + 0x000000d8u); goto L_089ffdb4; }
L_089ffe4c:
    c->r[2] = ((s32)c->r[20] < (s32)c->r[21]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[18] + 0x0000008cu; if (_c) goto L_089fff04; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000009cu);
    c->r[2] = ((s32)c->r[20] < (s32)c->r[3]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x0000009cu); goto L_089ffecc; }
    c->r[2] = ((s32)c->r[21] < (s32)c->r[3]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x0000009cu); goto L_089ffecc; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000008cu);
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_089ffe8c; }
    c->r[4] = 0u + 0u;
    { mem_w32(ram, c->r[16] + 0x0000008cu, c->r[2]); goto L_089ffa58; }
L_089ffe8c:
    { c->r[31] = 0x089ffe94u; c->r[4] = 0u + 0x00000002u; func_08a001f8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000080u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x0000009cu);
    c->r[2] = mem_r32(ram, c->r[16] + 0x000000d4u);
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[3] = c->r[3] + c->r[4];
    c->r[6] = 0u + 0x00000003u;
    c->r[2] = c->r[2] + c->r[5];
    mem_w32(ram, c->r[16] + 0x00000080u, c->r[3]);
    mem_w8(ram, c->r[2] + 0xfffffff1u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[16] + 0x000000d8u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w8(ram, c->r[2] + 0xfffffff1u, c->r[6]); goto L_089ffa54; }
L_089ffecc:
    c->r[2] = c->r[2] << 1;
    c->r[3] = ((s32)c->r[20] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    c->r[2] = ((s32)c->r[21] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_089ffa5c; }
    { c->r[31] = 0x089ffef0u; c->r[4] = 0u + 0u; func_08a001f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000009cu);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[16] + 0x00000080u, c->r[2]); goto L_089ffa54; }
L_089fff04:
    { c->r[31] = 0x089fff0cu; c->r[4] = 0u + 0x00000001u; func_08a001f8(c, ram); }
    c->r[2] = c->r[18] + 0x0000008cu;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000009cu);
    c->r[3] = c->r[3] + c->r[4];
    { mem_w32(ram, c->r[2] + 0x00000080u, c->r[3]); goto L_089ffa54; }
L_089fff24:
    { c->r[31] = 0x089fff2cu; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[18] + 0x0000008cu; if (_c) goto L_089ff9ec; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000005cu);
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_089fff88; }
    c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u);
    c->r[3] = c->r[6] + 0u;
L_089fff48:
    c->r[2] = mem_r32(ram, c->r[16] + 0x000000a4u);
    { int _c = (c->r[6] == c->r[2]); c->r[6] = c->r[6] - c->r[2]; if (_c) goto L_089fff80; }
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000dcu);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[5] = c->r[5] + c->r[3];
    { c->r[31] = 0x089fff68u; c->r[5] = c->r[5] + c->r[2]; func_08a02ff0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000078u, c->r[19]);
L_089fff6c:
    c->r[3] = c->r[18] + 0x0000008cu;
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000005cu);
    c->r[2] = c->r[2] ^ 0x0001u;
    { mem_w32(ram, c->r[3] + 0x0000005cu, c->r[2]); goto L_089ff9e8; }
L_089fff80:
    { mem_w32(ram, c->r[16] + 0x00000078u, 0u); goto L_089fff6c; }
L_089fff88:
    { c->r[6] = mem_r32(ram, c->r[16] + 0x000000a0u); goto L_089fff48; }
L_089fff90:
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x089fff9cu; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[18] + 0x0000008cu; if (_c) goto L_089ff9ec; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000003cu);
    c->r[2] = 0x92490000u;
    c->r[2] = c->r[2] | 0x2493u;
    c->r[3] = c->r[3] + 0x0000001bu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = (u32)((s32)c->r[3] >> 31);
    if (c->r[17] == 0u) { recomp_break(c, ram, 0x089fffc0u, 0x7u); goto L_089fffc4; }
L_089fffc4:
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x0000002cu);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] - c->r[4];
    c->r[2] = c->r[2] << 4;
    alx_div(c, c->r[2], c->r[17]);
    c->r[2] = c->lo;
    alx_mult(c, c->r[2], c->r[17]);
    c->r[2] = c->lo;
    alx_mult(c, c->r[2], c->r[5]);
    { c->r[31] = 0x089ffff8u; c->r[17] = c->lo; hle_dispatch_stub(c, ram, 0x08a248dcu); /* sceKernelDcacheWritebackAll */ }
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000003cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[8] = 0u + 0u; if (_c) goto L_08a0002c; }
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000070u);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[6] = c->r[6] + c->r[17];
    c->r[6] = c->r[6] + 0x00000800u;
    { c->r[31] = 0x08a00020u; c->r[7] = (u32)((s32)c->r[6] >> 31); func_08a02fcc(c, ram); }
    c->r[4] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[16] + 0x00000078u, c->r[4]); goto L_089ff9e8; }
L_08a0002c:
    { mem_w32(ram, c->r[16] + 0x00000078u, c->r[3]); goto L_089ff9e8; }
L_08a00034:
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x08a00040u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a0005c; }
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); c->r[2] = c->r[18] + 0x0000008cu; if (_c) goto L_089ff9ec; }
    { mem_w32(ram, c->r[16] + 0x00000078u, 0u); goto L_089ff9ec; }
L_08a0005c:
    { c->r[31] = 0x08a00064u; hle_dispatch_stub(c, ram, 0x08a248dcu); /* sceKernelDcacheWritebackAll */ }
    { mem_w32(ram, c->r[16] + 0x00000078u, 0u); goto L_089ff9e8; }
L_08a0006c:
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000007cu);
    if (c->r[17] == 0u) { recomp_break(c, ram, 0x08a00074u, 0x7u); goto L_08a00078; }
L_08a00078:
    c->r[3] = c->r[3] - c->r[5];
    c->r[2] = c->lo;
    alx_mult(c, c->r[2], c->r[17]);
    c->r[2] = c->lo;
    alx_mult(c, c->r[2], c->r[6]);
    c->r[2] = c->lo;
    c->r[3] = c->r[3] - c->r[2];
    c->r[4] = (c->r[5] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[16] + 0x000000a4u, c->r[3]); if (_c) goto L_08a000a4; }
    mem_w32(ram, c->r[16] + 0x000000a4u, c->r[5]);
L_08a000a4:
    c->r[5] = mem_r32(ram, c->r[16] + 0x000000dcu);
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[6] = mem_r32(ram, c->r[16] + 0x000000a4u);
    { c->r[31] = 0x08a000b8u; c->r[5] = c->r[5] + c->r[9]; func_08a02ff0(c, ram); }
    c->r[3] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[16] + 0x00000078u, c->r[3]); goto L_089ff9c4; }
L_08a000c4:
    { c->r[31] = 0x08a000ccu; c->r[5] = 0u + 0x0000001du; func_089fa398(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    if (c->r[3] != 0u) { c->r[16] = c->r[18] + 0x0000008cu; goto L_089ff854; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000006cu);
    mem_w16(ram, c->r[16] + 0x00000010u, 0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[16] + 0x00000064u, 0u); if (_c) goto L_089ffa54; }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    if ((s32)c->r[4] < 0) { c->r[4] = 0u + 0u; goto L_089ffa58; }
    { c->r[31] = 0x08a000fcu; hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    { mem_w32(ram, c->r[16] + 0x00000068u, c->r[17]); goto L_089ffa54; }
L_08a00104:
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { c->r[31] = 0x08a00110u; c->r[5] = c->r[29] + 0u; func_08a03024(c, ram); }
    { int _c = ((s32)c->r[2] > 0); c->r[5] = c->r[2] + 0u; if (_c) goto L_089ffa54; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000006cu);
    mem_w32(ram, c->r[16] + 0x00000064u, 0u);
    mem_w16(ram, c->r[16] + 0x00000010u, 0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[16] + 0x00000084u, 0u); if (_c) goto L_08a0014c; }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { int _c = ((s32)c->r[4] < 0); c->r[2] = 0u + 0xffffffffu; if (_c) goto L_08a00150; }
L_08a00138:
    { c->r[31] = 0x08a00140u; hle_dispatch_stub(c, ram, 0x08a246ecu); /* sceIoClose */ }
    c->r[3] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[16] + 0x00000068u, c->r[3]); goto L_089ffa54; }
L_08a0014c:
    c->r[2] = 0u + 0xffffffffu;
L_08a00150:
    { int _c = (c->r[5] != c->r[2]); c->r[4] = 0u + 0u; if (_c) goto L_089ffa58; }
    c->r[2] = c->r[18] + 0x0000008cu;
    { mem_w32(ram, c->r[2] + 0x00000068u, c->r[5]); goto L_089ffa58; }
L_08a00164:
    c->r[17] = 0u + 0x0000000bu;
    if (c->r[2] == c->r[17]) { c->r[16] = c->r[18] + 0x0000008cu; goto L_089ff834; }
    { c->r[31] = 0x08a00178u; c->r[4] = 0u + 0x0000001du; func_089fc8b4(c, ram); }
    { c->r[31] = 0x08a00180u; c->r[4] = 0u + 0x0000001eu; func_089fc8b4(c, ram); }
    { c->r[31] = 0x08a00188u; c->r[4] = 0u + 0x0000001du; func_089fe070(c, ram); }
    { c->r[31] = 0x08a00190u; c->r[4] = 0u + 0x0000001eu; func_089fe070(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000084u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[4] = 0u + 0u; goto L_08a001ec; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000064u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    if (c->r[2] != 0u) { mem_w32(ram, c->r[16] + 0x00000064u, c->r[17]); goto L_089ff830; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000078u);
    if ((s32)c->r[2] <= 0) { c->r[2] = mem_r32(ram, c->r[16] + 0x0000006cu); goto L_08a001c8; }
    { mem_w32(ram, c->r[16] + 0x00000064u, c->r[17]); goto L_089ff830; }
L_08a001c8:
    mem_w32(ram, c->r[16] + 0x00000064u, 0u);
    mem_w16(ram, c->r[16] + 0x00000010u, 0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[16] + 0x00000084u, 0u); if (_c) goto L_089ffa54; }
    c->r[4] = mem_r32(ram, c->r[16] + 0x00000068u);
    { int _c = ((s32)c->r[4] >= 0); if (_c) goto L_08a00138; }
    { c->r[4] = 0u + 0u; goto L_089ffa58; }
L_08a001ec:
    mem_w16(ram, c->r[16] + 0x00000010u, 0u);
    { mem_w32(ram, c->r[16] + 0x00000064u, 0u); goto L_089ffa58; }
    return; /* fell out of func_089ff7e0 */
}

/* func_08a021f0  0x08a021f0..0x08a02240  80 bytes, source=fde */
void func_08a021f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a021f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[3] = c->r[7] + 0u;
    c->r[8] = c->r[6] + 0u;
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000000u);
    c->r[6] = c->r[4] + 0u;
    c->r[7] = c->r[5] + 0u;
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a0222c; }
L_08a0221c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0222c:
    c->r[2] = 0x08ba0000u;
    { c->r[31] = 0x08a02238u; c->r[4] = mem_r32(ram, c->r[2] + 0xffff9af0u); func_08a02a28(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a0221c; }
    return; /* fell out of func_08a021f0 */
}

/* func_08a030b8  0x08a030b8..0x08a030d8  32 bytes, source=sweep */
void func_08a030b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a030b8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a030ccu; c->r[5] = 0u | 0xffffu; func_08a03074(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a030b8 */
}

/* func_08a03f0c  0x08a03f0c..0x08a03ffc  240 bytes, source=residue */
void func_08a03f0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03f0cu);
    c->r[2] = 0x80440000u;
    c->r[7] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[7] == 0u); c->r[3] = c->r[2] | 0x0005u; if (_c) goto L_08a03fbc; }
    c->r[7] = 0x80440000u;
    { int _c = (c->r[5] == 0u); c->r[3] = c->r[7] | 0x000au; if (_c) goto L_08a03fbc; }
    c->r[8] = 0x80440000u;
    { int _c = (c->r[6] == 0u); c->r[3] = c->r[8] | 0x000au; if (_c) goto L_08a03fbc; }
    c->r[3] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[3]);
    c->r[7] = 0x08ba0000u;
    c->r[11] = c->r[7] + 0xffffaa78u;
    c->r[10] = c->lo;
    c->r[9] = c->r[10] + c->r[11];
    c->r[3] = mem_r32(ram, c->r[9] + 0x00000008u);
    { int _c = ((s32)c->r[3] <= 0); c->r[12] = ((s32)c->r[3] < (s32)0x00000080u) ? 1u : 0u; if (_c) goto L_08a03ff4; }
    { int _c = (c->r[12] != 0u); c->r[11] = (u32)((s32)c->r[3] >> 31); if (_c) goto L_08a03fe0; }
    c->r[15] = c->r[3] + 0xffffffffu;
    c->r[25] = (u32)((s32)c->r[15] >> 31);
    c->r[24] = c->r[25] >> 27;
    c->r[14] = c->r[15] + c->r[24];
    c->r[13] = (u32)((s32)c->r[14] >> 5);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[13]);
L_08a03f78:
    c->r[3] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[3]);
    c->r[2] = c->r[7] + 0xffffaa78u;
    c->r[5] = c->lo;
    c->r[4] = c->r[5] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x0000000cu);
    { int _c = ((s32)c->r[3] <= 0); c->r[7] = ((s32)c->r[3] < (s32)0x00000080u) ? 1u : 0u; if (_c) goto L_08a03fd8; }
    if (c->r[7] != 0u) { c->r[10] = (u32)((s32)c->r[3] >> 31); goto L_08a03fc4; }
    c->r[14] = c->r[3] + 0xffffffffu;
    c->r[24] = (u32)((s32)c->r[14] >> 31);
    c->r[15] = c->r[24] >> 27;
    c->r[13] = c->r[14] + c->r[15];
    c->r[12] = (u32)((s32)c->r[13] >> 5);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[12]);
L_08a03fb8:
    c->r[3] = 0u + 0u;
L_08a03fbc:
    { c->r[2] = c->r[3] + 0u; return; }
L_08a03fc4:
    c->r[9] = c->r[10] >> 27;
    c->r[8] = c->r[3] + c->r[9];
    c->r[25] = (u32)((s32)c->r[8] >> 5);
    { mem_w32(ram, c->r[6] + 0x00000000u, c->r[25]); goto L_08a03fb8; }
L_08a03fd8:
    { mem_w32(ram, c->r[6] + 0x00000000u, 0u); goto L_08a03fb8; }
L_08a03fe0:
    c->r[10] = c->r[11] >> 27;
    c->r[9] = c->r[3] + c->r[10];
    c->r[8] = (u32)((s32)c->r[9] >> 5);
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[8]); goto L_08a03f78; }
L_08a03ff4:
    { mem_w32(ram, c->r[5] + 0x00000000u, 0u); goto L_08a03f78; }
    return; /* fell out of func_08a03f0c */
}

/* func_08a05b10  0x08a05b10..0x08a05b4c  60 bytes, source=sweep */
void func_08a05b10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05b10u);
    c->r[5] = 0x08ba0000u;
    c->r[6] = mem_r32(ram, c->r[5] + 0xffffaf80u);
    c->r[2] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    c->r[5] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a05b40; }
    { c->r[31] = 0x08a05b40u; hle_dispatch_stub(c, ram, 0x08a24ce4u); /* __sceSasSetKeyOff */ }
L_08a05b40:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05b10 */
}

/* func_08a06b38  0x08a06b38..0x08a06bf4  188 bytes, source=sweep */
void func_08a06b38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06b38u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    c->r[2] = 0u + 0u;
    c->r[19] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    c->r[17] = c->r[5] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    { int _c = (c->r[5] != 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[6]); if (_c) goto L_08a06b88; }
L_08a06b6c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a06b88:
    { c->r[31] = 0x08a06b90u; c->r[4] = c->r[29] + 0x00000014u; func_08a06144(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a06be8; }
    c->r[4] = c->r[29] + 0x00000010u;
    { c->r[31] = 0x08a06ba4u; mem_w32(ram, c->r[29] + 0x00000010u, c->r[29]); func_08a062a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[4] = c->r[3] - c->r[29];
    c->r[2] = (c->r[17] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[17] - c->r[4]; if (_c) goto L_08a06be8; }
    c->r[4] = c->r[4] + 0xffffffffu;
    { int _c = (c->r[4] == c->r[19]); c->r[3] = c->r[29] + 0u; if (_c) goto L_08a06be0; }
    c->r[5] = 0u + 0xffffffffu;
L_08a06bc8:
    c->r[6] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[4] + 0xffffffffu;
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[6]);
    { int _c = (c->r[4] != c->r[5]); c->r[16] = c->r[16] + 0x00000001u; if (_c) goto L_08a06bc8; }
L_08a06be0:
    { c->r[18] = c->r[18] + 0x00000001u; goto L_08a06b88; }
L_08a06be8:
    mem_w8(ram, c->r[16] + 0x00000000u, 0u);
    { c->r[2] = c->r[18] + 0u; goto L_08a06b6c; }
    return; /* fell out of func_08a06b38 */
}

/* func_08a0b188  0x08a0b188..0x08a0b1d0  72 bytes, source=residue */
void func_08a0b188(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0b188u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    { c->r[31] = 0x08a0b1bcu; c->r[4] = c->r[2] + 0u; func_08a19564(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0b188 */
}

/* func_08a0e0fc  0x08a0e0fc..0x08a0e188  140 bytes, source=fde */
void func_08a0e0fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e0fcu);
    c->r[2] = 0x08ba0000u;
    c->r[5] = c->r[4] + 0u;
    c->r[6] = c->r[2] + 0xffffbe20u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = c->r[6] + 0x00004000u;
    c->r[2] = (c->r[5] < c->r[6]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[4] = c->r[4] + 0xffffffb0u;
    c->r[3] = (c->r[5] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a0e134; }
    c->r[2] = c->r[5] - c->r[6];
    { int _c = (c->r[3] != 0u); c->r[16] = c->r[2] >> 9; if (_c) goto L_08a0e14c; }
L_08a0e134:
    { c->r[31] = 0x08a0e13cu; func_08a19594(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
L_08a0e140:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0e14c:
    { c->r[31] = 0x08a0e154u; hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    c->r[6] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[6] + 0xfffffe20u);
    c->r[3] = 0u + 0x00000001u;
    c->r[3] = c->r[3] << (c->r[16] & 31u);
    c->r[3] = ~(0u | c->r[3]);
    c->r[5] = c->r[5] & c->r[3];
    c->r[4] = c->r[2] + 0u;
    c->r[3] = 0x08ba0000u;
    mem_w32(ram, c->r[6] + 0xfffffe20u, c->r[5]);
    { c->r[31] = 0x08a0e180u; mem_w32(ram, c->r[3] + 0xfffffe24u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a0e140; }
    return; /* fell out of func_08a0e0fc */
}

/* func_08a0e6d8  0x08a0e6d8..0x08a0e6e0  8 bytes, source=indirect */
void func_08a0e6d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e6d8u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_08a0e6d8 */
}

/* func_08a0ff08  0x08a0ff08..0x08a104b4  1452 bytes, source=sweep */
void func_08a0ff08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0ff08u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[19]);
    c->r[19] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[18]);
    mem_wf32(ram, c->r[29] + 0x00000058u, c->f[22]);
    c->f[22] = c->f[12];
    mem_wf32(ram, c->r[29] + 0x00000054u, c->f[21]);
    c->f[21] = c->f[13];
    mem_wf32(ram, c->r[29] + 0x00000050u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    { c->r[31] = 0x08a0ff40u; mem_wf32(ram, c->r[29] + 0x0000005cu, c->f[23]); func_08a1133c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[18] = mem_r32(ram, c->r[19] + 0x00000fa8u);
    { int _c = (c->r[18] == c->r[2]); c->f[20] = c->f[0]; if (_c) goto L_08a0ff60; }
    { c->r[31] = 0x08a0ff58u; c->f[12] = c->f[21]; func_08a13038(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0ff94; }
L_08a0ff60:
    c->f[12] = c->f[20];
L_08a0ff64:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[23] = mem_rf32(ram, c->r[29] + 0x0000005cu);
    c->f[22] = mem_rf32(ram, c->r[29] + 0x00000058u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000054u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000050u);
    c->f[0] = c->f[12];
    { c->r[29] = c->r[29] + 0x00000060u; return; }
L_08a0ff94:
    { c->r[31] = 0x08a0ff9cu; c->f[12] = c->f[22]; func_08a13038(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1008c; }
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[21], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[12] = c->f[20]; if (_c) goto L_08a0ff64; }
    c->r[2] = 0x08a50000u;
    c->f[12] = c->f[22];
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x000007b0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a0ffd8u; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[17]);
    { c->r[31] = 0x08a0fff0u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    c->r[4] = c->r[18] ^ 0x0002u;
    c->r[5] = ~(0u | c->r[18]);
    c->r[5] = (c->r[5] < 0x00000001u) ? 1u : 0u;
    c->r[4] = (c->r[4] < 0x00000001u) ? 1u : 0u;
    c->r[5] = c->r[5] | c->r[4];
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[17]);
    { int _c = (c->r[5] == 0u); if (_c) goto L_08a10068; }
L_08a1001c:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000007b8u);
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000007bcu);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
L_08a10034:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
L_08a10038:
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a10054; }
L_08a10040:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    { c->r[31] = 0x08a1004cu; c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu); func_08a14588(c, ram); }
    { c->f[12] = c->f[0]; goto L_08a0ff64; }
L_08a10054:
    { c->r[31] = 0x08a1005cu; func_08a19214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a10040; }
L_08a10068:
    { c->r[31] = 0x08a10070u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u); if (_c) goto L_08a10038; }
L_08a10078:
    { c->r[31] = 0x08a10080u; func_08a19214(c, ram); }
    c->r[3] = 0u + 0x00000021u;
L_08a10084:
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a10034; }
L_08a1008c:
    c->f[23] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[22], c->f[23]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_08a1019c; }
    alx_c_cond_s(c, 2, c->f[21], c->f[23]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a10104; }
    c->f[12] = c->f[22];
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x000007b0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a100ccu; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    { c->r[31] = 0x08a100dcu; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    { int _c = (c->r[18] != 0u); if (_c) goto L_08a1001c; }
    { goto L_08a10068; }
L_08a10104:
    { c->r[31] = 0x08a1010cu; c->f[12] = c->f[21]; func_08a1301c(c, ram); }
    if (c->r[2] == 0u) { c->f[12] = c->f[20]; goto L_08a0ff64; }
    alx_c_cond_s(c, 12, c->f[21], c->f[23]);
    if ((c->fcr31 & FCR31_C) == 0u) { c->f[12] = c->f[20]; goto L_08a0ff64; }
    c->r[2] = 0x08a50000u;
    c->f[12] = c->f[22];
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x000007b0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a10144u; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    { c->r[31] = 0x08a10154u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0u;
    { int _c = (c->r[18] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a1017c; }
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000fa0u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x08a1017cu; c->r[5] = mem_r32(ram, c->r[5] + 0x00000fa4u); func_08a14510(c, ram); }
L_08a1017c:
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u);
L_08a10188:
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a10068; }
    { goto L_08a10078; }
L_08a1019c:
    { c->r[31] = 0x08a101a4u; c->f[12] = c->f[20]; func_08a1301c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a10258; }
L_08a101ac:
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[20], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[12] = c->f[20]; if (_c) goto L_08a0ff64; }
    { c->r[31] = 0x08a101c8u; c->f[12] = c->f[22]; func_08a1301c(c, ram); }
    { int _c = (c->r[2] == 0u); c->f[12] = c->f[20]; if (_c) goto L_08a0ff64; }
    { c->r[31] = 0x08a101d8u; c->f[12] = c->f[21]; func_08a1301c(c, ram); }
    if (c->r[2] == 0u) { c->f[12] = c->f[20]; goto L_08a0ff64; }
    c->r[2] = 0x08a50000u;
    c->f[12] = c->f[22];
    c->r[3] = 0u + 0x00000004u;
    c->r[2] = c->r[2] + 0x000007b0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a10200u; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    { c->r[31] = 0x08a10210u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[19] + 0x00000fa8u);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0u;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_08a10248; }
L_08a10238:
    { c->r[31] = 0x08a10240u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u); goto L_08a10038; }
L_08a10248:
    { c->r[31] = 0x08a10250u; func_08a19214(c, ram); }
    { c->r[3] = 0u + 0x00000022u; goto L_08a10084; }
L_08a10258:
    { c->r[31] = 0x08a10260u; c->f[12] = c->f[22]; func_08a1301c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a101ac; }
    { c->r[31] = 0x08a10270u; c->f[12] = c->f[21]; func_08a1301c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a101ac; }
    { c->r[31] = 0x08a10280u; c->f[12] = c->f[20]; func_08a13038(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a102f0; }
    c->f[12] = c->f[22];
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x000007b0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a102a4u; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    { c->r[31] = 0x08a102b4u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    { int _c = (c->r[18] != 0u); if (_c) goto L_08a102dc; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[5]);
    { c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u); goto L_08a10188; }
L_08a102dc:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000007c0u);
    c->r[3] = 0x08a50000u;
    { c->r[3] = mem_r32(ram, c->r[3] + 0x000007c4u); goto L_08a1017c; }
L_08a102f0:
    c->f[12] = c->f[22];
    c->r[3] = 0u + 0x00000003u;
    c->r[2] = c->r[2] + 0x000007b0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a1030cu; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[17]);
    { c->r[31] = 0x08a10324u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    { int _c = (c->r[18] != 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a10400; }
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000007d0u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x000007d4u);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000007c8u);
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000007ccu);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    { c->r[31] = 0x08a10368u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a10374u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1038cu; c->f[21] = c->f[0]; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u); if (_c) goto L_08a103a8; }
L_08a10394:
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a10238; }
    { goto L_08a10248; }
L_08a103a8:
    { c->r[31] = 0x08a103b0u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08a103c4u; c->r[17] = c->r[3] + 0u; func_08a12b58(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a103d8u; c->r[7] = c->r[17] + 0u; func_08a1418c(c, ram); }
    if (c->r[2] == 0u) { c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u); goto L_08a10394; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000007d8u);
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000007dcu);
L_08a103f0:
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    { c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u); goto L_08a10394; }
L_08a10400:
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000007d0u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x000007d4u);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000fa0u);
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000fa4u);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    { c->r[31] = 0x08a10434u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a10440u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a10458u; c->f[21] = c->f[0]; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u); if (_c) goto L_08a10394; }
    { c->r[31] = 0x08a10468u; c->f[12] = c->f[21]; func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08a1047cu; c->r[17] = c->r[3] + 0u; func_08a12b58(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a10490u; c->r[7] = c->r[17] + 0u; func_08a1418c(c, ram); }
    if (c->r[2] == 0u) { c->r[3] = mem_r32(ram, c->r[19] + 0x00000fa8u); goto L_08a10394; }
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000fa0u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x08a104acu; c->r[5] = mem_r32(ram, c->r[5] + 0x00000fa4u); func_08a14510(c, ram); }
    { goto L_08a103f0; }
    return; /* fell out of func_08a0ff08 */
}

/* func_08a14214  0x08a14214..0x08a1429c  136 bytes, source=sweep */
void func_08a14214(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14214u);
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
    { c->r[31] = 0x08a14248u; c->r[16] = c->r[29] + 0x00000020u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000050u;
    { c->r[31] = 0x08a14254u; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a14278; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[5] = c->r[16] + 0u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a1428c; }
L_08a14278:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000070u; return; }
L_08a1428c:
    { c->r[31] = 0x08a14294u; func_08a18778(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a14278; }
    return; /* fell out of func_08a14214 */
}

/* func_08a16540  0x08a16540..0x08a166c8  392 bytes, source=fde */
void func_08a16540(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16540u);
    c->r[29] = c->r[29] + 0xfffff8a0u;
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
    mem_w32(ram, c->r[29] + 0x000006fcu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x000006f8u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x000006f4u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x000006f0u, c->r[4]);
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
    mem_wf32(ram, c->r[29] + 0x00000730u, c->f[20]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x000006e0u, c->r[4]); if (_c) goto L_08a16638; }
    { c->r[31] = 0x08a165c0u; func_08a15ec8(c, ram); }
    c->r[3] = 0u + 0u;
L_08a165c4:
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
L_08a16638:
    c->r[6] = c->r[31] + 0u;
    c->r[4] = c->r[29] + 0u;
    { c->r[31] = 0x08a16648u; c->r[5] = c->r[29] + 0x00000760u; func_08a1593c(c, ram); }
    c->r[7] = c->r[29] + 0x00000370u;
    c->r[6] = c->r[29] + 0u;
    c->r[8] = c->r[29] + 0x00000360u;
L_08a16654:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a16654; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    c->r[5] = c->r[29] + 0x00000370u;
    { c->r[31] = 0x08a1669cu; c->r[4] = mem_r32(ram, c->r[29] + 0x000006e0u); func_08a16108(c, ram); }
    c->r[3] = 0u + 0x00000007u;
    { int _c = (c->r[2] != c->r[3]); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a166c0; }
    { c->r[31] = 0x08a166b0u; c->r[5] = c->r[29] + 0x00000370u; func_08a159e0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000006c0u);
    c->r[3] = c->r[2] + 0u;
    { mem_w32(ram, c->r[29] + 0x00000724u, c->r[4]); goto L_08a165c4; }
L_08a166c0:
    { c->r[31] = 0x08a166c8u; func_08a19084(c, ram); }
    return; /* fell out of func_08a16540 */
}

/* func_08a17ee8  0x08a17ee8..0x08a181b8  720 bytes, source=fde */
void func_08a17ee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17ee8u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[17] = c->r[2] >> 11;
    { int _c = (c->r[17] != 0u); c->r[19] = c->r[4] + 0u; if (_c) goto L_08a17f64; }
    c->r[2] = alx_ext(c->r[2], 1u, 0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a181a0; }
    c->r[16] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    if (c->r[2] != 0u) { c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a18180; }
L_08a17f40:
    c->r[3] = mem_r32(ram, c->r[19] + 0x00000010u);
L_08a17f44:
    c->r[3] = alx_ins(c->r[3], c->r[17], 11u, 31u);
    c->r[2] = c->r[3] >> 11;
    { int _c = (c->r[2] == c->r[17]); mem_w32(ram, c->r[19] + 0x00000010u, c->r[3]); if (_c) goto L_08a17f5c; }
    c->r[2] = c->r[3] & 0x07ffu;
    mem_w32(ram, c->r[19] + 0x00000010u, c->r[2]);
L_08a17f5c:
    { int _c = (c->r[17] == 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u); if (_c) goto L_08a18100; }
L_08a17f64:
    c->r[2] = c->r[17] << 2;
    c->r[16] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08a17f74u; c->r[4] = c->r[16] + 0u; func_08a19564(c, ram); }
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]); if (_c) goto L_08a180fc; }
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    { c->r[31] = 0x08a17f88u; c->r[4] = c->r[16] + 0u; func_08a19564(c, ram); }
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]); if (_c) goto L_08a17f94; }
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
L_08a17f94:
    c->r[2] = mem_r32(ram, c->r[19] + 0x00000010u);
    c->r[2] = alx_ext(c->r[2], 1u, 0u);
    if (c->r[2] == 0u) { c->r[6] = mem_r32(ram, c->r[19] + 0x0000000cu); goto L_08a18168; }
    c->r[16] = mem_r32(ram, c->r[19] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[2] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a18140; }
L_08a17fb4:
    if (c->r[2] == 0u) { c->r[4] = mem_r32(ram, c->r[19] + 0x00000010u); goto L_08a17fcc; }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != c->r[17]); if (_c) goto L_08a181b0; }
    c->r[4] = mem_r32(ram, c->r[19] + 0x00000010u);
L_08a17fcc:
    c->r[3] = 0x08a10000u;
    c->r[2] = alx_ext(c->r[4], 2u, 0u);
    { int _c = (c->r[2] != 0u); c->r[30] = c->r[3] + 0x00007318u; if (_c) goto L_08a17ff4; }
    c->r[2] = 0x08a10000u;
    c->r[3] = alx_ext(c->r[4], 3u, 7u);
    { int _c = (c->r[3] == 0u); c->r[30] = c->r[2] + 0x00007240u; if (_c) goto L_08a17ff4; }
    c->r[2] = 0x08a10000u;
    c->r[30] = c->r[2] + 0x00007268u;
L_08a17ff4:
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000004u);
    { int _c = (c->r[7] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a1812c; }
    c->r[4] = c->r[19] + 0u;
    { c->r[31] = 0x08a1800cu; c->r[5] = c->r[30] + 0u; func_08a181b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[4];
    { int _c = (c->r[3] != c->r[17]); c->r[4] = c->r[19] + 0u; if (_c) goto L_08a181b0; }
    { c->r[31] = 0x08a18030u; c->r[5] = c->r[30] + 0u; func_08a173f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[21] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[21] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]); if (_c) goto L_08a180d8; }
    c->r[3] = c->r[21] << 2;
    c->r[18] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[23] = c->r[2] + 0x00000008u;
    c->r[22] = c->r[3] + c->r[7];
L_08a18058:
    c->r[23] = c->r[23] + 0xfffffffcu;
    c->r[3] = c->r[18] << 2;
    c->r[22] = c->r[22] + 0xfffffffcu;
    c->r[20] = mem_r32(ram, c->r[23] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[22];
    c->r[17] = c->r[2] + 0x00000008u;
    c->r[16] = c->r[3] + c->r[7];
    c->r[21] = c->r[21] + 0xffffffffu;
L_08a18078:
    c->r[4] = c->r[19] + 0u;
    { int _c = (c->r[18] == 0u); c->r[6] = c->r[20] + 0u; if (_c) goto L_08a180b0; }
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[7]);
    { u32 _t = c->r[30]; c->r[31] = 0x08a18090u; c->r[5] = mem_r32(ram, c->r[16] + 0x00000004u); recomp_call_indirect(c, ram, 0x08a18088u, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[7] = mem_r32(ram, c->r[29] + 0x00000020u); if (_c) goto L_08a180b0; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[18] = c->r[18] + 0xffffffffu;
    c->r[16] = c->r[16] + 0xfffffffcu;
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    { c->r[17] = c->r[17] + 0xfffffffcu; goto L_08a18078; }
L_08a180b0:
    c->r[2] = c->r[18] + c->r[21];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[7];
    { int _c = (c->r[21] != 0u); mem_w32(ram, c->r[2] + 0x00000008u, c->r[20]); if (_c) goto L_08a18058; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[2]);
L_08a180d8:
    { c->r[31] = 0x08a180e0u; c->r[4] = mem_r32(ram, c->r[29] + 0x00000004u); func_08a19594(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a180e4:
    c->r[3] = mem_r32(ram, c->r[19] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[19] + 0x00000010u);
    mem_w32(ram, c->r[19] + 0x0000000cu, c->r[4]);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[19] + 0x00000010u, c->r[2]);
L_08a180fc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
L_08a18100:
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
L_08a1812c:
    c->r[5] = c->r[30] + 0u;
    { c->r[31] = 0x08a18138u; c->r[4] = c->r[19] + 0u; func_08a173f0(c, ram); }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a180e4; }
L_08a18140:
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000000u);
L_08a18144:
    c->r[4] = c->r[19] + 0u;
    c->r[5] = c->r[29] + 0u;
    { c->r[31] = 0x08a18154u; c->r[16] = c->r[16] + 0x00000004u; func_08a177b4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    if (c->r[2] != 0u) { c->r[6] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a18144; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a17fb4; }
L_08a18168:
    c->r[4] = c->r[19] + 0u;
    { c->r[31] = 0x08a18174u; c->r[5] = c->r[29] + 0u; func_08a177b4(c, ram); }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a17fb4; }
L_08a1817c:
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
L_08a18180:
    c->r[4] = c->r[19] + 0u;
    { c->r[31] = 0x08a1818cu; c->r[16] = c->r[16] + 0x00000004u; func_08a17660(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[3] != 0u); c->r[17] = c->r[17] + c->r[2]; if (_c) goto L_08a1817c; }
    { c->r[3] = mem_r32(ram, c->r[19] + 0x00000010u); goto L_08a17f44; }
L_08a181a0:
    { c->r[31] = 0x08a181a8u; c->r[5] = mem_r32(ram, c->r[4] + 0x0000000cu); func_08a17660(c, ram); }
    { c->r[17] = c->r[2] + 0u; goto L_08a17f40; }
L_08a181b0:
    { c->r[31] = 0x08a181b8u; func_08a19084(c, ram); }
    return; /* fell out of func_08a17ee8 */
}

/* func_08a1906c  0x08a1906c..0x08a1907c  16 bytes, source=residue */
void func_08a1906c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1906cu);
    c->r[3] = 0u + 0xffffffffu;
    c->r[2] = 0u + 0u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]); return; }
    return; /* fell out of func_08a1906c */
}

/* func_08a1a62c  0x08a1a62c..0x08a1a6c0  148 bytes, source=sweep */
void func_08a1a62c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a62cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0x0000025cu;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[18] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a1a694; }
    c->r[17] = mem_r32(ram, c->r[18] + 0x00000004u);
L_08a1a654:
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] < 0); c->r[16] = mem_r32(ram, c->r[18] + 0x00000008u); if (_c) goto L_08a1a688; }
L_08a1a660:
    c->r[2] = mem_r16(ram, c->r[16] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[17] + 0xffffffffu; if (_c) goto L_08a1a680; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000010u);
    c->r[4] = c->r[19] + 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a1a6b0; }
L_08a1a680:
    { int _c = ((s32)c->r[17] >= 0); c->r[16] = c->r[16] + 0x0000005cu; if (_c) goto L_08a1a660; }
L_08a1a688:
    c->r[18] = mem_r32(ram, c->r[18] + 0x00000000u);
    if (c->r[18] != 0u) { c->r[17] = mem_r32(ram, c->r[18] + 0x00000004u); goto L_08a1a654; }
L_08a1a694:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a1a6b0:
    { c->r[31] = 0x08a1a6b8u; func_08a21690(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000010u, 0u); goto L_08a1a680; }
    return; /* fell out of func_08a1a62c */
}

/* func_08a1c5e8  0x08a1c5e8..0x08a1c664  124 bytes, source=sweep */
void func_08a1c5e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c5e8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x08a1c60cu; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08a1c64c; }
L_08a1c618:
    { c->r[31] = 0x08a1c620u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[17] + 0u;
    { c->r[31] = 0x08a1c634u; c->r[7] = c->r[18] + 0u; func_08a1c664(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1c64c:
    { c->r[31] = 0x08a1c654u; func_08a19374(c, ram); }
    { c->r[31] = 0x08a1c65cu; c->r[4] = c->r[2] + 0u; func_08a2160c(c, ram); }
    { goto L_08a1c618; }
    return; /* fell out of func_08a1c5e8 */
}

/* func_08a21fdc  0x08a21fdc..0x08a2201c  64 bytes, source=residue */
void func_08a21fdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21fdcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a21ff8u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a22008u; c->r[6] = c->r[17] + 0u; func_08a21f30(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a21fdc */
}

/* func_08a23e84  0x08a23e84..0x08a23ee8  100 bytes, source=sweep */
void func_08a23e84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23e84u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[5] = c->r[6] + 0u;
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[4] = c->r[2] + 0u;
    c->r[16] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { c->r[31] = 0x08a23eb0u; mem_w32(ram, c->r[16] + 0x000002acu, 0u); func_08a18f58(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = mem_r32(ram, c->r[16] + 0x000002acu); if (_c) goto L_08a23ed8; }
L_08a23ec0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a23ec4:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23ed8:
    if (c->r[2] != 0u) { mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_08a23ec0; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a23ec4; }
    return; /* fell out of func_08a23e84 */
}
