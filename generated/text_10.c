#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_0880481c  0x0880481c..0x08804ae4  712 bytes, source=fde */
void func_0880481c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880481cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08804834u; hle_dispatch_stub(c, ram, 0x08a247ccu); /* sceKernelTotalFreeMemSize */ }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08804844u; c->r[4] = c->r[4] + 0xffffc930u; func_089f56b0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe640u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffe644u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08804860u; c->f[13] = c->f[1]; func_08a0ff08(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe648u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = 0u + 0xfffffff0u;
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] & c->r[2];
    { c->r[31] = 0x08804888u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a247ccu); /* sceKernelTotalFreeMemSize */ }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003bd4u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002eb0u, c->r[2]);
    { c->r[31] = 0x088048a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a19564(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002fa4u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002fa4u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088048c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a19ec4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002fa4u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x003fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880490c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = c->r[2] << 6;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0880490c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08804920u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_08807a28(c, ram); }
    { c->r[31] = 0x08804928u; func_088077f4(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08804938u; c->r[6] = 0x00040000u; func_0880785c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0880494cu; c->r[6] = 0x00050000u; func_0880785c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08804960u; c->r[6] = 0x00040000u; func_0880785c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08804970u; c->r[4] = c->r[4] + 0xffffb640u; func_089dec58(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880497cu; c->r[4] = c->r[4] + 0xffffbf30u; func_089f1ba4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08804990u; c->r[6] = 0x00010000u; func_089ef328(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = 0u + 0x00000140u;
    c->r[6] = 0u + 0x00000400u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088049b0u; c->r[8] = 0u + 0x00000080u; func_089cac30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088049c0u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cad84(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = 0x089c0000u;
    { c->r[31] = 0x088049d4u; c->r[5] = c->r[5] + 0x00007b68u; func_088080dc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088049e0u; c->r[5] = 0x00080000u; func_0884d334(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x088049f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0885b398(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe640u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffe644u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08804a14u; c->f[13] = c->f[1]; func_08a0ff08(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe64cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = 0u + 0xfffffff0u;
    c->r[4] = f2u(c->f[0]);
    c->r[3] = c->r[4] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08804a5cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d5c84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x08804a6cu; c->r[4] = c->r[4] + 0x00005260u; func_089d7314(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08800000u;
    { c->r[31] = 0x08804a80u; c->r[5] = c->r[5] + 0x000046bcu; func_0880750c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe644u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e40u;
    { c->r[31] = 0x08804a98u; c->f[12] = c->f[0]; func_089b3880(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08804aacu; c->r[5] = c->r[5] + 0xffffe634u; func_089d7f98(c, ram); }
    { c->r[31] = 0x08804ab4u; func_089b3eb0(c, ram); }
    c->r[4] = 0u + 0x00000003u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08804ad0u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880481c */
}

/* func_08806d3c  0x08806d3c..0x08806d80  68 bytes, source=sweep */
void func_08806d3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806d3cu);
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
    { c->r[31] = 0x08806d6cu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806d3c */
}

/* func_08807c50  0x08807c50..0x08807d8c  316 bytes, source=sweep */
void func_08807c50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08807c50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08807c74u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08807c84u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08807c94u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x000001ffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08807cf0; }
L_08807cc0:
    { c->r[31] = 0x08807cc8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088082b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000006cu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08807cc0; }
L_08807cf0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xd848u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x000001ffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08807d50; }
L_08807d20:
    { c->r[31] = 0x08807d28u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088082f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08807d20; }
L_08807d50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xe870u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08807d64u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xe890u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08807d78u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08807c50 */
}

/* func_088094d4  0x088094d4..0x0880978c  696 bytes, source=fde */
void func_088094d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088094d4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088094fc; }
    { goto L_08809778; }
L_088094fc:
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08809508u; mem_w32(ram, c->r[1] + 0x00003c3cu, 0u); func_08924300(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08809518u; c->r[5] = 0u + 0u; func_089d7208(c, ram); }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe800u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe804u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe808u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe80cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe810u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe814u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe818u);
    { c->r[31] = 0x08809570u; mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); func_08928be0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880957cu; c->r[4] = c->r[4] + 0x00000af4u; func_089c8ddc(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809588u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x0880959cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08808e2c(c, ram); }
    { c->r[31] = 0x088095a4u; func_0884d478(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    { c->r[31] = 0x088095b4u; c->r[5] = c->r[2] + 0u; func_089cd1f4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffe81cu;
    { c->r[31] = 0x088095ccu; c->r[6] = 0u + 0x00000001u; func_089cd440(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c3cu, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088095e4u; c->r[4] = c->r[4] + 0xffffe828u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088095f0u; c->r[4] = c->r[4] + 0xffffe830u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088095fcu; c->r[4] = c->r[4] + 0xffffe838u; func_08808e2c(c, ram); }
L_088095fc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809608u; c->r[4] = c->r[4] + 0x00002dfcu; func_089cd548(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08809618; }
    { goto L_08809628; }
L_08809618:
    { c->r[31] = 0x08809620u; func_089d7cac(c, ram); }
    { goto L_088095fc; }
L_08809628:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809634u; c->r[4] = c->r[4] + 0x00002dfcu; func_089cd410(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08809648u; c->r[5] = c->r[5] + 0xffffe840u; func_089d705c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x000001feu;
    { c->r[31] = 0x0880965cu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000014u); func_089e0b84(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08809670u; c->r[5] = c->r[5] + 0xffffe84cu; func_089d705c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x000001fdu;
    { c->r[31] = 0x08809684u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000014u); func_089e0b84(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08809698u; c->r[5] = c->r[5] + 0xffffe858u; func_089d705c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x000001fbu;
    { c->r[31] = 0x088096acu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000014u); func_089e0b84(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088096c0u; c->r[5] = c->r[5] + 0xffffe868u; func_089d705c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x000001fau;
    { c->r[31] = 0x088096d4u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000014u); func_089e0b84(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088096e4u; c->r[5] = 0u + 0x00000001u; func_089d7194(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe894u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08809700u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffe878u;
    { c->r[31] = 0x08809718u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffe884u;
    { c->r[31] = 0x08809730u; c->r[6] = 0u + 0x00000001u; func_089f586c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffe88cu;
    { c->r[31] = 0x08809748u; c->r[6] = 0u + 0x00000001u; func_089f586c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809754u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809760u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880976cu; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
    c->r[2] = 0u + 0x0000000fu;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
L_08809778:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088094d4 */
}

/* func_0880d004  0x0880d004..0x0880d060  92 bytes, source=fde */
void func_0880d004(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d004u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880d02c; }
    { goto L_0880d04c; }
L_0880d02c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0880d03cu; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x0880d044u; func_0880b360(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, 0u);
L_0880d04c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d004 */
}

/* func_0880d6d4  0x0880d6d4..0x0880d700  44 bytes, source=sweep */
void func_0880d6d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d6d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00001cd8u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d6d4 */
}

/* func_0880f2cc  0x0880f2cc..0x0880f344  120 bytes, source=sweep */
void func_0880f2cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880f2ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880f328; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880f328; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0880f330; }
L_0880f328:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0880f330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880f2cc */
}

/* func_08812884  0x08812884..0x08812acc  584 bytes, source=fde */
void func_08812884(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812884u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x0000010cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088128a8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088128b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff194u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x088128d0u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x088128d8u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088128e4u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088128f4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812904u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff1a0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { c->r[31] = 0x08812930u; c->r[8] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812938u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812944u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08812998; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08812960u; c->r[4] = c->r[4] + 0xfffff1b0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881296cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff1b8u;
    { c->r[31] = 0x08812990u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812998u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
L_08812998:
    { c->r[31] = 0x088129a0u; func_08966c64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812a60; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812a04; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088129ccu; c->r[4] = c->r[4] + 0xfffff1c4u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088129d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff1ccu;
    { c->r[31] = 0x088129fcu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812a04u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
L_08812a04:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812a60; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08812a28u; c->r[4] = c->r[4] + 0xfffff1d8u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812a34u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff1e0u;
    { c->r[31] = 0x08812a58u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812a60u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
L_08812a60:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812a6cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812a98; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812a80u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08812a98; }
    { goto L_08812ab0; }
L_08812a98:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812aa4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08812ab0u; c->r[5] = 0u + 0x00000001u; func_0880b24c(c, ram); }
L_08812ab0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000010cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08812884 */
}

/* func_08816594  0x08816594..0x0881667c  232 bytes, source=fde */
void func_08816594(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08816594u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088165ccu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08816668; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000042u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08816648; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08816610u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08816634; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08816634u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08816634:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08816640u; c->r[5] = 0u + 0x00000001u; func_08814994(c, ram); }
    { goto L_08816668; }
L_08816648:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08816654u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08814604(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08816660u; c->r[5] = 0u + 0x00000009u; func_08814994(c, ram); }
    { c->r[31] = 0x08816668u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
L_08816668:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08816594 */
}

/* func_08819d84  0x08819d84..0x08819dd4  80 bytes, source=sweep */
void func_08819d84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819d84u);
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
    { c->r[31] = 0x08819dc0u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819d84 */
}

/* func_08820720  0x08820720..0x08820aac  908 bytes, source=fde */
void func_08820720(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820720u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820744u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08820a98; }
    { c->r[31] = 0x08820754u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08820a98; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820768u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8edc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08820a98; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088207f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088207ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088207d4; }
    { goto L_08820a98; }
L_088207ac:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882083c; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08820980; }
    { goto L_08820a98; }
L_088207d4:
    { c->r[31] = 0x088207dcu; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x088207f0u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_088207f8:
    { c->r[31] = 0x08820800u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08820814u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08820834u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_0882083c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820848u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08820884; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820864u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08820884; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08820884u; c->r[5] = 0u + 0x00000005u; func_0880d4c8(c, ram); }
L_08820884:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08820898u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088208a4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882090c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088208b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088208c4u; c->r[5] = 0u + 0u; func_0896948c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0882090c; }
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    mem_w8(ram, c->r[30] + 0x00000035u, c->r[2]);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x08820904u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_0882090c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08820918u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08820924u; c->r[5] = 0u + 0u; func_0896955c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08820964; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000016u;
    { c->r[31] = 0x0882095cu; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_08820964:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000cu;
    { c->r[31] = 0x08820978u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_08820980:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08820990u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088209bc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x088209b4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_088209bc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x088209ccu; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08820a20; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x088209f0u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000036u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000du;
    { c->r[31] = 0x08820a18u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_08820a20:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08820a30u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08820a84; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08820a54u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000036u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08820a7cu; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08820a98; }
L_08820a84:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08820a98u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08820a98:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08820720 */
}

/* func_08824fa4  0x08824fa4..0x08825020  124 bytes, source=sweep */
void func_08824fa4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824fa4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08824fb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08824fcc; }
    { goto L_08825004; }
L_08824fcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e60u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08824ff4; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_0882500c; }
L_08824ff4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08824fb4; }
L_08825004:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0882500c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08824fa4 */
}

/* func_08826e88  0x08826e88..0x08826ee4  92 bytes, source=sweep */
void func_08826e88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826e88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00001b90u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826e88 */
}

/* func_0882ac34  0x0882ac34..0x0882acd0  156 bytes, source=fde */
void func_0882ac34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882ac34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ac74; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x00001592u;
    { c->r[31] = 0x0882ac6cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0882acbc; }
L_0882ac74:
    { c->r[31] = 0x0882ac7cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ac98; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882ac98u; c->r[5] = c->r[5] + 0xffffad6cu; func_0880f03c(c, ram); }
L_0882ac98:
    { c->r[31] = 0x0882aca0u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882acbc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882acbcu; c->r[5] = c->r[5] + 0xffffa4c4u; func_0880f03c(c, ram); }
L_0882acbc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882ac34 */
}

/* func_0882ebf8  0x0882ebf8..0x0882f418  2080 bytes, source=fde */
void func_0882ebf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882ebf8u);
L_0882ebf8:
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000022cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000022cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882eedc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000022cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ec60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000022cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ec88; }
    { goto L_0882f404; }
L_0882ec60:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000022cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f18c; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000022cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f1a4; }
    { goto L_0882f404; }
L_0882ec88:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x0000463cu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882ec9cu; c->r[6] = 0u + 0x00000044u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x0000465eu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882ecb0u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004670u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004659u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ed10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000006u);
    mem_w8(ram, c->r[2] + 0x00000003u, c->r[3]);
L_0882ed10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000006u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ed34u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fd0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0882ee08; }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000018c4u;
    { c->r[31] = 0x0882ed70u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000220u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x0882ed7cu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882edb0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0882edb0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = 0u + 0x0000179au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ee08; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x0000465eu;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0882edd4u; c->r[5] = c->r[5] + 0x000018d0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0882ede0u; c->r[4] = c->r[4] + 0x000018dcu; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004670u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_0882ee08:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ee14u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ee30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_0882ee30:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ee3cu; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ee58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_0882ee58:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ee64u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ee80; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_0882ee80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882eea0u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000e40u);
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00000e40u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882eeccu; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    { c->r[31] = 0x0882eed4u; c->r[4] = c->r[2] + 0u; func_0880abac(c, ram); }
    { goto L_0882f404; }
L_0882eedc:
    { c->r[31] = 0x0882eee4u; func_089db894(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f170; }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882ef00u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882ef10u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ef4c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003c71u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ef4c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0882ef44u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0882f170; }
L_0882ef4c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882ef5cu; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882efa0; }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w8(ram, c->r[30] + 0x00000126u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000du;
    { c->r[31] = 0x0882ef98u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_0882f170; }
L_0882efa0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882efb0u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882efdc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x0882efd4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0882f170; }
L_0882efdc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882efe8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f154; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882effcu; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[2] = c->r[2] + 0xfffffffbu;
    mem_w32(ram, c->r[30] + 0x00000228u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000228u);
    c->r[2] = (c->r[3] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882f130; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000228u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000018fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0882ebf8u: goto L_0882ebf8; case 0x0882f034u: goto L_0882f034; case 0x0882f0f8u: goto L_0882f0f8; case 0x0882f130u: goto L_0882f130; default: recomp_trap_unknown_indirect(c, ram, 0x0882f02cu, _t); return; } }
L_0882f034:
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882f048u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f060; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000125u, c->r[2]);
L_0882f060:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882f06cu; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f084; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000125u, c->r[2]);
L_0882f084:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882f090u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f0a8; }
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[30] + 0x00000125u, c->r[2]);
L_0882f0a8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882f0b4u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f0cc; }
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[30] + 0x00000125u, c->r[2]);
L_0882f0cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0882f0f0u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_0882f170; }
L_0882f0f8:
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = 0u + 0x0000000bu;
    mem_w8(ram, c->r[30] + 0x00000125u, c->r[2]);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0882f128u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_0882f170; }
L_0882f130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882f14cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0882f170; }
L_0882f154:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882f170u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_0882f170:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882f184u; c->r[5] = c->r[5] + 0x0000463cu; func_089cd600(c, ram); }
    { goto L_0882f404; }
L_0882f18c:
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882f19cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0882f404; }
L_0882f1a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f1bc; }
    { goto L_0882f404; }
L_0882f1bc:
    mem_w32(ram, c->r[30] + 0x00000224u, 0u);
L_0882f1c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f1e4; }
    { goto L_0882f380; }
L_0882f1e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882f370; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001eecu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f370; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000006u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_0882f370; }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004659u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002dd4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004658u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000018f4u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004654u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x0000464cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x0000465au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002dd6u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00004650u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002dd8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00004652u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002ddau;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x0000465cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882f328u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fd0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0x0000179au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f358; }
    c->r[2] = 0u + 0x0000025cu;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
L_0882f358:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x0000463cu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000018e8u;
    { c->r[31] = 0x0882f370u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000114u); func_08a1ad34(c, ram); }
L_0882f370:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]); goto L_0882f1c0; }
L_0882f380:
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004659u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f3f4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000018f8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882f3acu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882f3c0u; c->r[5] = c->r[5] + 0x0000463cu; func_089cd654(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882f3ccu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004659u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f3f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
L_0882f3f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00001eecu);
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[2]);
L_0882f404:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_0882ebf8 */
}

/* func_0883212c  0x0883212c..0x08832370  580 bytes, source=fde */
void func_0883212c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883212cu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088321fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_088321fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001930u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0883224c; }
    { goto L_08832258; }
L_0883224c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001930u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
L_08832258:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000052u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000052u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000052u, c->r[2]);
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
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002df4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0883232cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000040u); func_08939c88(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08832354; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_08832358; }
L_08832354:
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_08832358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0883212c */
}

/* func_08833f00  0x08833f00..0x08834064  356 bytes, source=fde */
void func_08833f00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08833f00u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
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
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08833f70u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000038u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08833f8cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833facu; c->r[5] = 0u + 0x0000000au; func_08937a50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08833fe0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834038; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08834010u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000004cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0883402cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08834038:
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00004680u);
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0883404cu; c->r[5] = mem_r32(ram, c->r[5] + 0x00004684u); hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08833f00 */
}

/* func_08836a50  0x08836a50..0x08836ab0  96 bytes, source=fde */
void func_08836a50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08836a50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003724u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08836a8cu; c->r[5] = 0u + 0x00000001u; func_08937a50(c, ram); }
    { c->r[31] = 0x08836a94u; func_08925510(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08836a50 */
}

/* func_0883af4c  0x0883af4c..0x0883b080  308 bytes, source=fde */
void func_0883af4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883af4cu);
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
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883affc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883afa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883afc0; }
    { goto L_0883b06c; }
L_0883afa8:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883b024; }
    { goto L_0883b06c; }
L_0883afc0:
    { c->r[31] = 0x0883afc8u; func_0880f27c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883afdcu; c->r[5] = c->r[5] + 0xffffb17cu; func_0880f094(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000df4u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff52cu, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004894u, c->r[2]); goto L_0883b06c; }
L_0883affc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b008u; c->r[4] = c->r[4] + 0x00004874u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883b06c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883b01cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0883b06c; }
L_0883b024:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001cccu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0883b03cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x0883b044u; func_08902ea0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    { c->r[31] = 0x0883b054u; c->r[5] = 0u + 0x00000001u; func_08901e54(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b060u; c->r[4] = c->r[4] + 0x00004874u; func_0880f188(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0883b06cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0883b06c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883af4c */
}

/* func_0883d238  0x0883d238..0x0883d2b0  120 bytes, source=fde */
void func_0883d238(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883d238u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883d278; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001d90u;
    c->r[5] = 0u + 0x000015abu;
    { c->r[31] = 0x0883d270u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883d29c; }
L_0883d278:
    { c->r[31] = 0x0883d280u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883d29c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0883d29cu; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0883d29c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883d238 */
}

/* func_088467e8  0x088467e8..0x08846884  156 bytes, source=fde */
void func_088467e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088467e8u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884685c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08846844; }
    { goto L_08846870; }
L_08846844:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08846870; }
    { goto L_08846870; }
L_0884685c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08846870u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08846870:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088467e8 */
}

/* func_0884bf24  0x0884bf24..0x0884bf54  48 bytes, source=sweep */
void func_0884bf24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884bf24u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0884bf40u; c->r[5] = 0u | 0xffffu; func_0884bb50(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884bf24 */
}

/* func_0884d314  0x0884d314..0x0884d334  32 bytes, source=sweep */
void func_0884d314(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d314u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d314 */
}

/* func_088504f8  0x088504f8..0x08850614  284 bytes, source=sweep */
void func_088504f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088504f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    c->r[2] = c->r[2] + 0x00004c04u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000021u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850560; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08850560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000021u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088505f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000002u;
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08850590u; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a754(c, ram); }
    c->r[2] = (c->r[2] < c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088505a4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088505a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088505c0u; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a754(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_088505f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088505dcu; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a77c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088505f8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088505f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088504f8 */
}

/* func_08856718  0x08856718..0x08856a30  792 bytes, source=fde */
void func_08856718(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08856718u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08856744u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08856750u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0885675cu; c->r[4] = c->r[4] + 0x00002730u; func_089c6f64(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff8e24u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088567c4; }
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8c60u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]); goto L_088567fc; }
L_088567c4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8c60u);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[1]);
L_088567fc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b70u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b74u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b78u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b74u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c68u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885688c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c68u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[1] + 0xffff8c68u, c->r[2]); if (_c) goto L_088568b4; }
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08856884u; mem_w32(ram, c->r[1] + 0xffff8c60u, 0u); func_0885b09c(c, ram); }
    { goto L_088568b4; }
L_0885688c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    c->r[2] = (c->r[2] < 0x00000078u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088568b4; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c60u, c->r[2]);
L_088568b4:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088568c0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088568d4u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088568ecu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08856904u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08856928u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08856970u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
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
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf5cu, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b7cu);
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08856a00u; mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]); func_08857bac(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b80u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[12] = c->f[0];
    { c->r[31] = 0x08856a1cu; c->r[4] = 0u + 0x00000001u; func_08857860(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_08856718 */
}

/* func_08859f30  0x08859f30..0x08859fd4  164 bytes, source=sweep */
void func_08859f30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859f30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[3] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[4] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[16] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[4];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08859fb8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[16] + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859f30 */
}

/* func_0885abe8  0x0885abe8..0x0885ac24  60 bytes, source=sweep */
void func_0885abe8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885abe8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885abe8 */
}

/* func_0885d5f0  0x0885d5f0..0x0885d640  80 bytes, source=fde */
void func_0885d5f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885d5f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffb408u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885d614u; c->r[6] = 0u + 0x00000408u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffffb810u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffb812u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffb813u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0885d5f0 */
}

/* func_08861e00  0x08861e00..0x08861e44  68 bytes, source=sweep */
void func_08861e00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861e00u);
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
    { c->r[31] = 0x08861e30u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861e00 */
}

/* func_088632fc  0x088632fc..0x08863a30  1844 bytes, source=fde */
void func_088632fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088632fcu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08863344; }
    { goto L_08863354; }
L_08863344:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003088u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_08863354:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08863930; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00003098u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08863398u: goto L_08863398; case 0x088633b4u: goto L_088633b4; case 0x088634ccu: goto L_088634cc; case 0x08863620u: goto L_08863620; case 0x08863740u: goto L_08863740; default: recomp_trap_unknown_indirect(c, ram, 0x08863390u, _t); return; } }
L_08863398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003088u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
L_088633b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088633f8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000308cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x000000a8u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863454u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003090u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088634a8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_08863930; }
L_088634cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863510u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000308cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x000000a8u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0886356cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003090u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088635c0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08863614u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08863930; }
L_08863620:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863664u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000308cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x000000a8u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088636c0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003090u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863714u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08863930; }
L_08863740:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863784u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088637ecu; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863818u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000040u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[18] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863850u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000044u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[18] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863884u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000048u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003090u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088638d0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x088638f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08863098(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08863918; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_08863930; }
L_08863918:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[4] + 0x00000014u, c->r[2]);
L_08863930:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088639c8; }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf70u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003094u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf70u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08863988; }
    { goto L_0886399c; }
L_08863988:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]);
L_0886399c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088639ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]); goto L_088639ec; }
L_088639c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088639ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
L_088639ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08863a10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_08863a10:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088632fc */
}

/* func_088679d4  0x088679d4..0x08867a08  52 bytes, source=sweep */
void func_088679d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088679d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x000000b5u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088679d4 */
}

/* func_0886fc08  0x0886fc08..0x0886fc4c  68 bytes, source=sweep */
void func_0886fc08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886fc08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w32(ram, c->r[3] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003558u);
    mem_wf32(ram, c->r[2] + 0x00000238u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0886fc08 */
}

/* func_08875774  0x08875774..0x0887583c  200 bytes, source=fde */
void func_08875774(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08875774u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08875810; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088757f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x00010000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088757d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088757f8; }
L_088757d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x00020000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08875810; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875810; }
L_088757f8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003814u);
    { c->r[31] = 0x08875808u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_08875824; }
L_08875810:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003818u);
    { c->r[31] = 0x08875820u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_08875824:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08875774 */
}

/* func_0887dc0c  0x0887dc0c..0x0887dcb8  172 bytes, source=indirect */
void func_0887dc0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887dc0cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887dca8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000fcu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887dc58; }
    { goto L_0887dca8; }
L_0887dc58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0887dc80; }
    { goto L_0887dc90; }
L_0887dc80:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)fabsf(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_0887dc9c; }
L_0887dc90:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000399cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_0887dc9c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x000000fcu, c->f[0]);
L_0887dca8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887dc0c */
}

/* func_08882b84  0x08882b84..0x08882fcc  1096 bytes, source=fde */
void func_08882b84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08882b84u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000050u, c->f[20]);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08882d98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08882bf4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08882c1c; }
    { goto L_08882fb0; }
L_08882bf4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08882fb0; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08882e90; }
    { goto L_08882fb0; }
L_08882c1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882c28u; c->r[5] = 0u + 0x00000001u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882c34u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b40u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b40u);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b44u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882c7cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000030u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x0000003cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882c9cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000030u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x0000003cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882cb8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[20] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882cd0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08882cfcu; func_0880d140(c, ram); }
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
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b48u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08882d54u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf50u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf54u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf58u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf5cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b4cu);
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]); goto L_08882fb0; }
L_08882d98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b50u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b54u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08882ddc; }
    { goto L_08882df8; }
L_08882ddc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b58u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
L_08882df8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08882e20; }
    { goto L_08882e3c; }
L_08882e20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b5cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
L_08882e3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08882e64; }
    { goto L_08882e80; }
L_08882e64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003b5cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
L_08882e80:
    { c->r[31] = 0x08882e88u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    { goto L_08882fb0; }
L_08882e90:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882ea0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000030u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x0000003cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882ec0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000030u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x0000003cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882edcu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[20] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08882f00u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08882f48u; func_0880d140(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf40u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf44u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf48u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf4cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08882fb0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08882b84 */
}

/* func_08886d98  0x08886d98..0x08886dbc  36 bytes, source=residue */
void func_08886d98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08886d98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08886d98 */
}

/* func_0888be2c  0x0888be2c..0x0888be64  56 bytes, source=sweep */
void func_0888be2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888be2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888be50u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0888ca48(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888be2c */
}

/* func_0888cbc4  0x0888cbc4..0x0888cc04  64 bytes, source=sweep */
void func_0888cbc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888cbc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0888cbf0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888d008(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888cbc4 */
}

/* func_0888d910  0x0888d910..0x0888d9b8  168 bytes, source=sweep */
void func_0888d910(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d910u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888d968; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
L_0888d968:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d910 */
}

/* func_08890f54  0x08890f54..0x08891388  1076 bytes, source=fde */
void func_08890f54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08890f54u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08890f84u; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    c->r[2] = 0u + 0x0000019du;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08890fb0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08890fc0u; c->r[5] = 0u + 0x00000009u; func_0888b858(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08890fd0u; c->r[5] = 0u + 0x0000000au; func_0888b894(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x000000ffu;
    { c->r[31] = 0x08890fecu; c->r[8] = 0u + 0u; func_0888ccec(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08891008u; c->r[8] = 0u + 0x00000001u; func_0888b920(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0xb8000000u;
    { c->r[31] = 0x0889101cu; c->r[5] = c->r[5] | 0x0606u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0xb9000000u;
    { c->r[31] = 0x08891030u; c->r[5] = c->r[5] | 0x0505u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0xba000000u;
    { c->r[31] = 0x08891044u; c->r[5] = c->r[5] | 0x0404u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xa8000000u;
    c->r[2] = c->r[2] | 0x0040u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08891070u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xa9000000u;
    c->r[2] = c->r[2] | 0x0020u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0889109cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0xaa000000u;
    c->r[2] = c->r[2] | 0x0010u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088910c8u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088910d8u; c->r[5] = 0u + 0x00000004u; func_0888b858(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088910f0u; c->r[7] = 0u + 0x000000ffu; func_0888cd7c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0xdf000000u;
    { c->r[31] = 0x08891104u; c->r[5] = c->r[5] | 0x0032u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088911ec; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08891130; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
L_08891130:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08891140u; c->r[5] = 0u + 0x00000007u; func_0888cdc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08891150u; c->r[5] = 0u + 0u; func_0888cdfc(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000020u;
    { c->r[31] = 0x08891168u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000018u); func_0888cd3c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08891180u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000044u); func_0888cc04(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08891194u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000004cu); func_0888ccb4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x088911a8u; c->r[6] = 0u + 0x00000001u; func_0888cb84(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088911bcu; c->r[6] = 0u + 0x00000001u; func_0888cbc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x088911d0u; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xfffffffdu;
    { c->r[31] = 0x088911e4u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    { goto L_0889135c; }
L_088911ec:
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889120c; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
L_0889120c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889121cu; c->r[5] = 0u + 0x00000001u; func_0888cdc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889122cu; c->r[5] = 0u + 0x00000001u; func_0888cdfc(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000020u;
    { c->r[31] = 0x08891244u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000034u); func_0888cd3c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889125cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000048u); func_0888cc04(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08891270u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000050u); func_0888ccb4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x08891284u; c->r[6] = 0u + 0x00000001u; func_0888cb84(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08891298u; c->r[6] = 0u + 0u; func_0888cbc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000040e4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000040e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x088912bcu; c->f[13] = c->f[1]; func_0888cc74(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xa0000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088912e4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xa1000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0889130cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xa2000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08891334u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x08891348u; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0889135cu; c->r[6] = 0u + 0u; func_089debc4(c, ram); }
L_0889135c:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891368u; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891374u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_08890f54 */
}

/* func_088970c8  0x088970c8..0x088976d4  1548 bytes, source=fde */
void func_088970c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088970c8u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    { c->r[31] = 0x088970f0u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_088832e0(c, ram); }
    { c->r[31] = 0x088970f8u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08897118u; mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08897130u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_088832e0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000ccu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08897164:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08897194; }
    { goto L_088976bc; }
L_08897194:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x000000c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x000000c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x000000c8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000041f4u);
    mem_wf32(ram, c->r[2] + 0x000000ccu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[3] + 0x000000d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[3] + 0x000000d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[3] + 0x000000d8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x000000dcu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08897334; }
    { c->r[31] = 0x08897268u; func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x08897284u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08883448(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[16] + 0x00000078u, c->r[2]);
    { c->r[31] = 0x088972a0u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu); func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[16] + 0x000000f0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x000000fau, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x000000fcu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x088972f4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000074u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[4] = c->r[2] - c->r[3];
    c->r[2] = 0x2aaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    { mem_w16(ram, c->r[5] + 0x000000f8u, c->r[2]); goto L_08897368; }
L_08897334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x00000078u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x000000f0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[2] + 0x000000fcu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[2] + 0x000000fau, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x00000074u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000000f8u, c->r[2]);
L_08897368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088973d4; }
    { c->r[31] = 0x08897384u; func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x088973a0u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000001cu); func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[16] + 0x000000f4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    { mem_w8(ram, c->r[3] + 0x000000feu, c->r[2]); goto L_088973e4; }
L_088973d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[2] + 0x000000f4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x000000feu, 0u);
L_088973e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000ccu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000074u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000ccu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08897404:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889741c; }
    { goto L_08897470; }
L_0889741c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000007cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08897444u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08897460; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08897460u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08897460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08897404; }
L_08897470:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08897474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000feu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08897494; }
    { goto L_088975f4; }
L_08897494:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088975e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000041f4u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000010u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000041f8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000041f4u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08897568u; func_0880d140(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[8] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088975a4u; c->r[7] = 0u + 0u; func_0893e354(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088975e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x0000007cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088975d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088975e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08897474; }
L_088975f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000041fcu);
    mem_wf32(ram, c->r[2] + 0x00000070u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08897610u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08897644; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0889762cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08897644; }
    { goto L_088976ac; }
L_08897644:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000024u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088976ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088976ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088976ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003fe0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[4] + 0x00000070u, c->f[0]);
L_088976ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08897164; }
L_088976bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088970c8 */
}

/* func_0889a1e4  0x0889a1e4..0x0889a228  68 bytes, source=sweep */
void func_0889a1e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a1e4u);
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
    { c->r[31] = 0x0889a214u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a1e4 */
}

/* func_0889e930  0x0889e930..0x0889e968  56 bytes, source=sweep */
void func_0889e930(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889e930u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889e954u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0889f00c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889e930 */
}

/* func_0889f938  0x0889f938..0x0889f97c  68 bytes, source=sweep */
void func_0889f938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f938u);
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
    { c->r[31] = 0x0889f968u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f938 */
}

/* func_088a3950  0x088a3950..0x088a39b4  100 bytes, source=sweep */
void func_088a3950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3950u);
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
    c->r[2] = 0xdd000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a39a0u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a3950 */
}

/* func_088a72f4  0x088a72f4..0x088a8708  5140 bytes, source=fde */
void func_088a72f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a72f4u);
L_088a72f4:
    c->r[29] = c->r[29] + 0xfffffda0u;
    mem_w32(ram, c->r[29] + 0x0000024cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000248u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000244u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000240u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000254u, c->f[21]);
    mem_wf32(ram, c->r[29] + 0x00000250u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->r[2] = (c->r[3] < 0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a86e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004650u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088a72f4u: goto L_088a72f4; case 0x088a7368u: goto L_088a7368; case 0x088a761cu: goto L_088a761c; case 0x088a7640u: goto L_088a7640; case 0x088a7774u: goto L_088a7774; case 0x088a86e4u: goto L_088a86e4; default: recomp_trap_unknown_indirect(c, ram, 0x088a7360u, _t); return; } }
L_088a7368:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088a7374u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088a7384u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a73c0u; c->r[5] = 0u + 0x00000004u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a73ccu; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a73d8u; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a73ecu; c->r[5] = c->r[5] + 0x00004584u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a7404; }
    { goto L_088a7474; }
L_088a7404:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000244u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000604u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000061cu;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000620u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000624u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000628u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000630u;
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088a7474:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088a7484u; c->r[5] = c->r[5] + 0x00004604u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8bb0u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8bb0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a74b0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a74a8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088a86e4; }
L_088a74b0:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088a74b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000080u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a74cc; }
    { goto L_088a86e4; }
L_088a74cc:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088a74ecu; c->r[4] = c->r[2] + 0u; func_088ad340(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088a74f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a750c; }
    { goto L_088a7584; }
L_088a750c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a7574; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000001u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a7574; }
    { mem_w32(ram, c->r[30] + 0x00000028u, 0u); goto L_088a7584; }
L_088a7574:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088a74f0; }
L_088a7584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a7598; }
    { goto L_088a74cc; }
L_088a7598:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088a75b0u; c->r[4] = c->r[2] + 0u; func_088ad3d0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067b0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x00006690u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a760cu; c->r[6] = 0u + 0x00000048u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088a74b4; }
L_088a761c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088a7628u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088a7634u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u); func_089b73e0(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffff8bb0u, 0u); goto L_088a86e4; }
L_088a7640:
    { c->r[31] = 0x088a7648u; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004614u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004614u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a76bc; }
    { goto L_088a76c8; }
L_088a76bc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { mem_wf32(ram, c->r[30] + 0x00000220u, c->f[0]); goto L_088a76d0; }
L_088a76c8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x00000220u, c->f[1]);
L_088a76d0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000220u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a76f8; }
    { goto L_088a7704; }
L_088a76f8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    { mem_wf32(ram, c->r[30] + 0x00000224u, c->f[1]); goto L_088a770c; }
L_088a7704:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x00000224u, c->f[0]);
L_088a770c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000224u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[1]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]); goto L_088a86e4; }
L_088a7774:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000461cu);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004614u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004620u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004624u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004628u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a7890; }
L_088a7860:
    { c->r[31] = 0x088a7868u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088a7860; }
L_088a7890:
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a78ccu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[5] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a792cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    { c->r[31] = 0x088a7954u; c->r[16] = c->r[30] + 0x00000070u; func_08820f58(c, ram); }
    c->r[17] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000462cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000462cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a7988u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x088a799cu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000462cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000462cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a79ecu; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a7a00u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    { c->r[31] = 0x088a7a08u; c->r[17] = c->r[30] + 0x00000080u; func_08820f58(c, ram); }
    { c->r[31] = 0x088a7a10u; c->r[16] = c->r[2] + 0x00000030u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x088a7a24u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004630u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a7a40u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8bb0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a7a5cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088a7a70u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a7ab8u; c->r[5] = 0u + 0x00000007u; func_088ad228(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a7b08u; c->r[7] = 0u + 0u; func_088ad1a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a7b50u; c->r[5] = 0u + 0x00000005u; func_088ad228(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a7b60u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089e0008(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a7bacu; c->r[5] = c->r[5] | 0x009eu; func_088ad160(c, ram); }
    { c->r[31] = 0x088a7bb4u; func_08820f58(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a7c00u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004634u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_088a7c24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088a7c40; }
    { goto L_088a85e8; }
L_088a7c40:
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000462cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000462cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088a7c70u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004638u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004638u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = c->f[0] + c->f[1];
    { c->r[31] = 0x088a7cdcu; mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]); func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x088a7cf0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a7d08u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x088a7d14u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a85d8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a85d8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[21] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    { c->r[31] = 0x088a7d98u; c->f[20] = c->f[1] - c->f[0]; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = c->f[20] * c->f[0];
    c->f[0] = c->f[21] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000e0u;
    { c->r[31] = 0x088a7db4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a7dccu; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a7de0u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a85d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000463cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a85d8; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000100u;
    { c->r[31] = 0x088a7e70u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088a7eacu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088a7ec0u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088a7eccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_0884c1d8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088a7edcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0884d26c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    { c->r[31] = 0x088a7ee8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000140u); func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000148u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a7f18; }
    { goto L_088a7f20; }
L_088a7f18:
    { mem_w32(ram, c->r[30] + 0x00000228u, 0u); goto L_088a7f28; }
L_088a7f20:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000148u);
    mem_wf32(ram, c->r[30] + 0x00000228u, c->f[0]);
L_088a7f28:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000228u);
    mem_wf32(ram, c->r[30] + 0x0000014cu, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004640u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000150u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000150u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000022cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a7fa4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004644u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000022cu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000022cu, c->f[1]);
L_088a7fa4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000022cu);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000154u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000158u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088a7fdc; }
    { goto L_088a7fe0; }
L_088a7fdc:
    mem_w32(ram, c->r[30] + 0x00000158u, 0u);
L_088a7fe0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000158u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000158u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = c->f[2] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000015cu, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000015cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000160u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000015cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004628u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000164u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004628u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000168u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x088a8064u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    { c->r[31] = 0x088a8070u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000190u;
    { c->r[31] = 0x088a807cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088a8094u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000168u); func_088ae204(c, ram); }
    c->r[3] = c->r[30] + 0x00000190u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000168u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088a80c0u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[6] = c->r[30] + 0x00000190u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a80d8u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088a80e8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000150u); func_088ae204(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000140u);
    { c->r[31] = 0x088a80f8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000154u); func_088ae204(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[30] + 0x000001a0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a8114u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a4u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a8u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001acu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x000001b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004648u);
    c->f[3] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000464cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[3] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004648u);
    c->f[3] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000464cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004618u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[3] + c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x000001a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x000001acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x000001c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x000001c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x000001c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x000001ccu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x000001d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x000001d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x000001d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x000001dcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x000001e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x000001e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x000001e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x000001ecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x000001f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x000001f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x000001f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x000001fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x00000204u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x00000208u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x0000020cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x00000214u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x00000218u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x0000021cu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000164u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001acu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x000001ccu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000160u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001ecu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000160u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001fcu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x0000020cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x0000021cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067b4u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x000001a0u;
    { c->r[31] = 0x088a8338u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067c0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x000001c0u;
    { c->r[31] = 0x088a8368u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067ccu;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x000001d0u;
    { c->r[31] = 0x088a8398u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067d8u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x000001e0u;
    { c->r[31] = 0x088a83c8u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067e4u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x000001f0u;
    { c->r[31] = 0x088a83f8u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067f0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x00000200u;
    { c->r[31] = 0x088a8428u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a843cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089e0008(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088a848cu; c->r[6] = c->r[3] + 0u; func_088ad264(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a8504u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067b0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088a857cu; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a85c8u; c->r[5] = c->r[5] | 0x0006u; func_088ad160(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088a85d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_088a7c24; }
L_088a85e8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a8630u; c->r[5] = 0u + 0x00000007u; func_088ad1ec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a8680u; c->r[7] = 0u + 0x00000002u; func_088ad1a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088a86c8u; c->r[5] = 0u + 0x00000005u; func_088ad1ec(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088a86d8u; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088a86e4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088a86e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000024cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000244u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000240u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000254u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000250u);
    { c->r[29] = c->r[29] + 0x00000260u; return; }
    return; /* fell out of func_088a72f4 */
}

/* func_088adf60  0x088adf60..0x088ae00c  172 bytes, source=sweep */
void func_088adf60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adf60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088adfc0; }
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
    { c->r[31] = 0x088adfb8u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_088ae0e0(c, ram); }
    { goto L_088adff8; }
L_088adfc0:
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
    { c->r[31] = 0x088adff8u; c->r[8] = c->r[2] + 0u; func_088ae0e0(c, ram); }
L_088adff8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adf60 */
}

/* func_088b2828  0x088b2828..0x088b286c  68 bytes, source=sweep */
void func_088b2828(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2828u);
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
    { c->r[31] = 0x088b2858u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2828 */
}

/* func_088b5a78  0x088b5a78..0x088b5adc  100 bytes, source=sweep */
void func_088b5a78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b5a78u);
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
    c->r[2] = 0xdd000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b5ac8u; c->r[5] = c->r[2] + 0u; func_088b59ec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b5a78 */
}

/* func_088bc5ac  0x088bc5ac..0x088bc6e0  308 bytes, source=fde */
void func_088bc5ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bc5acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088bc5dcu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088bc5f0u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088bc638u; c->r[5] = 0u + 0x0000000au; func_088be260(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088bc680u; c->r[5] = 0u + 0x00000001u; func_088be378(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x088bc6ccu; c->r[5] = c->r[5] | 0x019eu; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bc5ac */
}

/* func_088bedc4  0x088bedc4..0x088bee08  68 bytes, source=sweep */
void func_088bedc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bedc4u);
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
    { c->r[31] = 0x088bedf4u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bedc4 */
}

/* func_088bfde4  0x088bfde4..0x088bfe18  52 bytes, source=sweep */
void func_088bfde4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bfde4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bfde4 */
}

/* func_088c359c  0x088c359c..0x088c3918  892 bytes, source=fde */
void func_088c359c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c359cu);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c3658; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c3614; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c363c; }
    { goto L_088c3900; }
L_088c3614:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c3900; }
    c->r[2] = 0u + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c3674; }
    { goto L_088c3900; }
L_088c363c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c3650u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_088c3284(c, ram); }
    { goto L_088c3900; }
L_088c3658:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c366cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_088c3518(c, ram); }
    { goto L_088c3900; }
L_088c3674:
    { c->r[31] = 0x088c367cu; c->r[16] = c->r[30] + 0x00000020u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c369cu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c36f4; }
L_088c36c4:
    { c->r[31] = 0x088c36ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c36c4; }
L_088c36f4:
    c->r[2] = c->r[30] + 0x00000060u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c374c; }
L_088c371c:
    { c->r[31] = 0x088c3724u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c371c; }
L_088c374c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c3760u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c3774u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ef8u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c3798u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c37b4u; c->r[6] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c37bcu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c37d4u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004efcu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c37fcu; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c381cu; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f00u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f04u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004f08u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00004f00u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x088c3858u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f00u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004f04u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004f08u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00004f00u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x088c38b4u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088c38f4u; c->r[7] = c->r[3] + 0u; func_089ebb10(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c3900u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c3900:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088c359c */
}

/* func_088c8fe0  0x088c8fe0..0x088c9024  68 bytes, source=sweep */
void func_088c8fe0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8fe0u);
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
    { c->r[31] = 0x088c9010u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8fe0 */
}

/* func_088cd108  0x088cd108..0x088cd3c0  696 bytes, source=fde */
void func_088cd108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cd108u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebc0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cd130u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cd14c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_088cd3a8; }
L_088cd14c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cd164u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cd3a4; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005144u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088cd19cu; func_0880d140(c, ram); }
    { c->r[31] = 0x088cd1a4u; func_08867ab8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cd1bcu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005148u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088cd1e4u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd204; }
    { goto L_088cd20c; }
L_088cd204:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd3a8; }
L_088cd20c:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005148u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cd238u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_0884c224(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000514cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005150u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088cd26cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088cd274u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cd290u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005148u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088cd2b8u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd2d8; }
    { goto L_088cd2e0; }
L_088cd2d8:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd3a8; }
L_088cd2e0:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005148u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cd30cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0884c224(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000514cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005150u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cd34cu; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005154u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd390; }
    { goto L_088cd398; }
L_088cd390:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd3a8; }
L_088cd398:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_088cd3a8; }
L_088cd3a4:
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_088cd3a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088cd108 */
}

/* func_088d3790  0x088d3790..0x088d38c8  312 bytes, source=sweep */
void func_088d3790(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3790u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d37bc; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_088d38b0; }
L_088d37bc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d37c8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d3814; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d382c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d382c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088d38b0; }
L_088d3814:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d382c; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_088d38b0; }
L_088d382c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d3860; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d38a8; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_088d38b0; }
L_088d3860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d38a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d38a8; }
L_088d38a0:
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_088d38b0; }
L_088d38a8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088d38b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d3790 */
}

/* func_088d6f10  0x088d6f10..0x088d7000  240 bytes, source=fde */
void func_088d6f10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6f10u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x088d6f38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6e4c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6f48; }
    { goto L_088d6fe8; }
L_088d6f48:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088d6f54u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088d6f70u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d6f88u; c->r[5] = c->r[3] + 0u; func_088f0e54(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059bcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d6fc0u; c->r[5] = c->r[2] + 0u; func_08867860(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d6fd0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d6fe4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000024u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000024u, c->f[0]);
L_088d6fe8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d6f10 */
}

/* func_088db458  0x088db458..0x088db4a0  72 bytes, source=sweep */
void func_088db458(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088db458u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000000au, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088db458 */
}

/* func_088ded64  0x088ded64..0x088dede8  132 bytes, source=sweep */
void func_088ded64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ded64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ded8c; }
    { goto L_088dedd8; }
L_088ded8c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000020u, c->r[2]);
L_088dedd8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ded64 */
}

/* func_088e129c  0x088e129c..0x088e1d14  2680 bytes, source=fde */
void func_088e129c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e129cu);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e12c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e12d8; }
    { goto L_088e1cfc; }
L_088e12d8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1308; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e12f8u; c->r[5] = 0u + 0x0000000fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1308; }
    { goto L_088e1360; }
L_088e1308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c2cu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e1334u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[4] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e1360u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
L_088e1360:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e136cu; c->r[5] = 0u + 0x00000003u; func_088d26fc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e137c; }
    { goto L_088e1cfc; }
L_088e137c:
    { c->r[31] = 0x088e1384u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d38c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u | 0xffdfu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1424; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005314u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1424; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
L_088e1424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1468; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088e1448u; c->r[4] = c->r[2] + 0u; func_088deaa4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1468; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1460u; c->r[6] = 0u + 0x00000002u; func_088e0e00(c, ram); }
    { goto L_088e1cfc; }
L_088e1468:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1598; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e14d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e14d0; }
    { goto L_088e14e8; }
L_088e14d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e14e0u; c->r[6] = 0u + 0x00000001u; func_088e0e00(c, ram); }
    { goto L_088e1cfc; }
L_088e14e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e14f4u; c->r[5] = 0u + 0x0000000fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1598; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x088e1510u; c->r[4] = c->r[2] + 0u; func_08886934(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e153c; }
    { goto L_088e1554; }
L_088e153c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e154cu; c->r[6] = 0u + 0x00000001u; func_088e0e00(c, ram); }
    { goto L_088e1cfc; }
L_088e1554:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e1560u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088e1068(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1580; }
    { goto L_088e1598; }
L_088e1580:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1590u; c->r[6] = 0u + 0x00000001u; func_088e0e00(c, ram); }
    { goto L_088e1cfc; }
L_088e1598:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1614; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1614; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1614; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e15f4; }
    { goto L_088e1cfc; }
L_088e15f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1604u; c->r[6] = 0u + 0x00000004u; func_088e0e00(c, ram); }
    { c->r[31] = 0x088e160cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e0ea8(c, ram); }
    { goto L_088e1cfc; }
L_088e1614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000029u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e162c; }
    { goto L_088e1cfc; }
L_088e162c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e1638u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1ac0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1ac0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1ac0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e169c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e169c; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_088e169c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e16c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e16c0; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_088e16c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e16f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c30u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e16f4; }
    { goto L_088e16f8; }
L_088e16f4:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_088e16f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1ac0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1728; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000031u, c->r[2]);
L_088e1728:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1758; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e1748u; c->r[5] = 0u + 0x0000000fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1758; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088e1758:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e177c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e177c; }
    { goto L_088e1798; }
L_088e177c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x0000005au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1798; }
    { goto L_088e1a40; }
L_088e1798:
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e17bcu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088e17c8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088e17d4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    { c->r[31] = 0x088e17dcu; c->r[16] = c->r[30] + 0x00000080u; func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e17f4u; c->r[6] = c->r[3] + 0u; func_0886ec48(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e180cu; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x088e1818u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088e1830u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088e1848u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1868; }
    { goto L_088e1a24; }
L_088e1868:
    { c->r[31] = 0x088e1870u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088e188cu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e18a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u);
    { c->r[31] = 0x088e18a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[3]);
L_088e18a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u);
    { c->r[31] = 0x088e18b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    { c->r[31] = 0x088e18c0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088e18dcu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e18f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    { c->r[31] = 0x088e18f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[3]);
L_088e18f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    { c->r[31] = 0x088e1904u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000ecu); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    { c->r[31] = 0x088e1910u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088e192cu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e1948; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    { c->r[31] = 0x088e1940u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[3]);
L_088e1948:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00005c38u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088e1964u; c->r[7] = mem_r32(ram, c->r[7] + 0x00005c3cu); func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088e1970u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1994; }
    { goto L_088e1a24; }
L_088e1994:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e19b4; }
    { goto L_088e1a24; }
L_088e19b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e19d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000031u, c->r[2]);
L_088e19d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x0000005au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1a24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e19f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088e0f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1a24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1a08u; c->r[6] = 0u + 0x00000003u; func_088e0e00(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e1a18u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e0f08(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x00000031u, 0u); goto L_088e1cfc; }
L_088e1a24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1a40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000031u, 0u);
L_088e1a40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1ac0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088e1a70u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1ac0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e1a90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088e0f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1ac0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1aa8u; c->r[6] = 0u + 0x00000003u; func_088e0e00(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e1ab8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e0f08(c, ram); }
    { goto L_088e1cfc; }
L_088e1ac0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u | 0xffdfu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1b10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1b10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
L_088e1b10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1b58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x088e1b38u; c->r[4] = c->r[2] + 0u; func_088deaa4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1b58; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1b50u; c->r[6] = 0u + 0x00000002u; func_088e0e00(c, ram); }
    { goto L_088e1cfc; }
L_088e1b58:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e1b64u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1b7c; }
    { goto L_088e1cfc; }
L_088e1b7c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = 0x91a20000u;
    c->r[2] = c->r[2] | 0xb3c5u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 10);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
    c->r[2] = 0u + 0x00000708u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000384u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1bc8; }
    { goto L_088e1cfc; }
L_088e1bc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1be4; }
    { goto L_088e1cfc; }
L_088e1be4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1cfc; }
    { c->r[31] = 0x088e1c00u; func_088de790(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1cfc; }
    { c->r[31] = 0x088e1c18u; func_088de438(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1cfc; }
    { c->r[31] = 0x088e1c40u; func_088de358(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e1c5cu; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u); func_088de3a4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_088e1cfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088e1c7cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088e1c88u; c->r[4] = c->r[2] + 0u; func_088de7dc(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1cb0; }
    { goto L_088e1cfc; }
L_088e1cb0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1cd8; }
    { goto L_088e1cfc; }
L_088e1cd8:
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088e1ce4u; c->r[4] = c->r[2] + 0u; func_088deaa4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1cfc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e1cfcu; c->r[6] = 0u + 0x00000005u; func_088e0e00(c, ram); }
L_088e1cfc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_088e129c */
}

/* func_088e75fc  0x088e75fc..0x088e76ec  240 bytes, source=fde */
void func_088e75fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e75fcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e7628u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a5u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e7640; }
    { goto L_088e76c0; }
L_088e7640:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[1];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e7684u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e76c0u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
L_088e76c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088e76d8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000004u); func_088e691c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e75fc */
}

/* func_088eca78  0x088eca78..0x088ecf00  1160 bytes, source=fde */
void func_088eca78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088eca78u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ecaf4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ecde8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ecbc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088ecb88u; c->r[4] = c->r[2] + 0u; func_088df4cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[8] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088ecbb8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000028u); func_088ef654(c, ram); }
    { goto L_088ecdf8; }
L_088ecbc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[8] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088ecbecu; c->r[7] = mem_r32(ram, c->r[3] + 0x00000050u); func_088ef654(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e9u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ecdf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000040u;
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
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005f2cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ecc74u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000044u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ecc84u; c->r[5] = 0u + 0x0000001fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ecdbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x088eccacu; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088eccc8u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088ecce4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x088eccdcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
L_088ecce4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00005f30u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088ecd00u; c->r[7] = mem_r32(ram, c->r[7] + 0x00005f34u); func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088ecd10; }
    { goto L_088ecd24; }
L_088ecd10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
L_088ecd24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x088ecd44u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088ecd60u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088ecd7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x088ecd74u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[3]);
L_088ecd7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00005f30u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088ecd98u; c->r[7] = mem_r32(ram, c->r[7] + 0x00005f34u); func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088ecda8; }
    { goto L_088ecdbc; }
L_088ecda8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
L_088ecdbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    { mem_wf32(ram, c->r[3] + 0x000000a4u, c->f[0]); goto L_088ecdf8; }
L_088ecde8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088ecdf8u; c->r[4] = c->r[2] + 0u; func_088d68a0(c, ram); }
L_088ecdf8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ece50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ece4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000b4u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ece4c; }
    { goto L_088ece50; }
L_088ece4c:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_088ece50:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ece80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ece80; }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_088ece80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ecea0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x0000004cu, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000048u, c->f[0]);
L_088ecea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ecec8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088eca78 */
}

/* func_088f4464  0x088f4464..0x088f45d4  368 bytes, source=sweep */
void func_088f4464(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4464u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f44c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f44c0u; c->r[5] = c->r[2] + 0u; func_088f4944(c, ram); }
L_088f44c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4514; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f44f0u; c->r[5] = c->r[2] + 0u; func_088f4944(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f4514u; c->r[5] = c->r[2] + 0u; func_088f4944(c, ram); }
L_088f4514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4568; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f4544u; c->r[5] = c->r[2] + 0u; func_088f4944(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f4568u; c->r[5] = c->r[2] + 0u; func_088f4944(c, ram); }
L_088f4568:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_088f456c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f4588; }
    { goto L_088f45c0; }
L_088f4588:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f45b0u; c->r[5] = c->r[2] + 0u; func_088f4944(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088f456c; }
L_088f45c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f4464 */
}

/* func_088f80d0  0x088f80d0..0x088f8450  896 bytes, source=fde */
void func_088f80d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f80d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088f8100u; c->r[4] = c->r[2] + 0u; func_088def2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f8180; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f8180; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f8180; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f8178u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f803c(c, ram); }
    { goto L_088f843c; }
L_088f8180:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f81f4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f819cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f803c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f843c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f81ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f7f5c(c, ram); }
    { goto L_088f843c; }
L_088f81f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f83ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f82d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f8294; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000005u, 0u);
L_088f8294:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f82bc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f82b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f7f5c(c, ram); }
    { goto L_088f82d0; }
L_088f82bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
L_088f82d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f843c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f8354; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088f8354u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
L_088f8354:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f83b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000022u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f843c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000022u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x00000006u, 0u); goto L_088f843c; }
L_088f83b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088f843c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]); goto L_088f843c; }
L_088f83ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f83f8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f803c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000005u, c->r[2]);
L_088f843c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f80d0 */
}

/* func_088fd4cc  0x088fd4cc..0x088fd554  136 bytes, source=fde */
void func_088fd4cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fd4ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088fd4ecu; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fd50c; }
    { c->r[31] = 0x088fd504u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088fd554(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088fd53c; }
L_088fd50c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088fd518u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fd538; }
    { c->r[31] = 0x088fd530u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088fd788(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088fd53c; }
L_088fd538:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088fd53c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088fd4cc */
}

/* func_08901658  0x08901658..0x089018e8  656 bytes, source=fde */
void func_08901658(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08901658u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901688; }
    { goto L_089018d0; }
L_08901688:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffff4c0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08901700; }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff4d4u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x089016b4u; c->r[5] = 0u + 0x00000020u; func_089d9844(c, ram); }
    { c->r[31] = 0x089016bcu; func_0884d49c(c, ram); }
    { c->r[31] = 0x089016c4u; c->r[16] = c->r[2] + 0u; func_0884d478(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x089016d8u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = c->r[6] + 0x000064f8u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00006504u;
    c->r[8] = 0x08a40000u;
    { c->r[31] = 0x08901700u; c->r[8] = c->r[8] + 0x00006510u; func_089d8dfc(c, ram); }
L_08901700:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff4c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089018d0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08901720u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089017a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[3] < (s32)0xffffffffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901760; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0306u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089017bc; }
    { goto L_089017d8; }
L_08901760:
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089017ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901784; }
    { goto L_089017d8; }
L_08901784:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x08901798u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
    { goto L_089017ec; }
L_089017a0:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x089017b4u; c->r[5] = c->r[5] + 0x00001658u; func_0880f03c(c, ram); }
    { goto L_089017ec; }
L_089017bc:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x089017d0u; c->r[5] = c->r[5] + 0x00001658u; func_0880f03c(c, ram); }
    { goto L_089017ec; }
L_089017d8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x089017ecu; c->r[5] = c->r[5] + 0x000018e8u; func_0880f03c(c, ram); }
L_089017ec:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffff4f4u);
    c->r[2] = 0x08900000u;
    c->r[2] = c->r[2] + 0x00002cacu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089018d0; }
    { c->r[31] = 0x0890180cu; func_0884d478(c, ram); }
    { c->r[31] = 0x08901814u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); func_0884d478(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x08901820u; mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); func_0884d49c(c, ram); }
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08901844u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d9d14(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08901860; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08901860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000001ffu);
    c->r[2] = 0u + 0x00000023u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08901878; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08901878:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089018b4; }
    { c->r[31] = 0x0890188cu; func_0884d4c0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff4d4u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x089018acu; c->r[5] = c->r[5] + 0x000018e8u; func_0880f03c(c, ram); }
    { goto L_089018d0; }
L_089018b4:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001b54u;
    c->r[6] = 0x08900000u;
    { c->r[31] = 0x089018d0u; c->r[6] = c->r[6] + 0x00001658u; func_0880f1d4(c, ram); }
L_089018d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08901658 */
}

/* func_08903ecc  0x08903ecc..0x08903f2c  96 bytes, source=fde */
void func_08903ecc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903eccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08903ef0u; c->r[4] = c->r[4] + 0x000065f4u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08903ecc */
}

/* func_0890bd34  0x0890bd34..0x0890c51c  2024 bytes, source=fde */
void func_0890bd34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890bd34u);
    c->r[29] = c->r[29] + 0xffffff30u;
    mem_w32(ram, c->r[29] + 0x000000c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890bd68u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0890bd78; }
    { goto L_0890c504; }
L_0890bd78:
    mem_w8(ram, c->r[30] + 0x0000000du, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0890bd88u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x0890bd90u; c->r[16] = c->r[30] + 0x00000020u; func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0890bda4u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0890bdd0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x0890bddcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0890bde8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0890bdf4u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0890be08u; c->r[5] = c->r[5] + 0xffffbf40u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0890be24u; c->r[6] = c->r[6] + 0xffffbf50u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890be38u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0890be6cu; c->r[5] = c->r[5] + 0xffffbf50u; func_088678f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890bec0u; c->r[5] = c->r[3] + 0u; func_08921908(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890bed8u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x0890befcu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890bf20; }
    { goto L_0890bf5c; }
L_0890bf20:
    mem_w32(ram, c->r[30] + 0x00000090u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890bf44; }
    { goto L_0890bf54; }
L_0890bf44:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000673cu);
    { mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]); goto L_0890bf7c; }
L_0890bf54:
    { mem_w32(ram, c->r[30] + 0x00000094u, 0u); goto L_0890bf7c; }
L_0890bf5c:
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0890bf68u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000098u);
    { c->r[31] = 0x0890bf78u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000018u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
L_0890bf7c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006740u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890c504; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006744u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000673cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006748u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006750u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006754u);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890c2c8; }
    mem_w8(ram, c->r[30] + 0x0000000du, 0u);
L_0890c000:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890c018; }
    { goto L_0890c4b8; }
L_0890c018:
    { c->r[31] = 0x0890c020u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089035ac(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000080u;
    c->r[4] = 0u + 0x00000012u;
    { c->r[31] = 0x0890c03cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0890c05cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_08a0f760(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x000000f0u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0890c0a0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_08a0f5bc(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x0890c110u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x000000f0u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x0890c164u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x0890c1c4u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x000000f0u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x0890c218u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x0100u;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890c2b8u; c->r[9] = mem_r32(ram, c->r[2] + 0x00000000u); func_0892083c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000du);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x0000000du, c->r[2]); goto L_0890c000; }
L_0890c2c8:
    { c->r[31] = 0x0890c2d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000012u;
    { c->r[31] = 0x0890c2dcu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000080u);
    { c->r[31] = 0x0890c2ecu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_08a0f760(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x000000f0u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000080u);
    { c->r[31] = 0x0890c320u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_08a0f5bc(c, ram); }
    c->f[2] = c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[16] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x0890c370u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x000000f0u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[16] = c->r[2] + 0x00000006u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x0890c3acu; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x0890c3f4u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x000000f0u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x0890c430u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006758u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000674cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    c->r[6] = c->r[6] | 0x0100u;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890c4b8u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000080u); func_0892083c(c, ram); }
L_0890c4b8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0890c504u; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
L_0890c504:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000c0u);
    { c->r[29] = c->r[29] + 0x000000d0u; return; }
    return; /* fell out of func_0890bd34 */
}

/* func_08919c68  0x08919c68..0x0891a240  1496 bytes, source=sweep */
void func_08919c68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08919c68u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08919cb0; }
    { goto L_0891a22c; }
L_08919cb0:
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08919ccc; }
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08919ccc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08919ec8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a22c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08919d10; }
    { goto L_0891a22c; }
L_08919d10:
    c->r[4] = 0x7f400000u;
    { c->r[31] = 0x08919d1cu; c->r[4] = c->r[4] | 0x6000u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08919d28u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000090u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000f0u;
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
    { c->r[31] = 0x08919e18u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08919e74u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x08919ec0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { goto L_0891a22c; }
L_08919ec8:
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x08919edcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08919ee8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08919fd8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a034u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0891a080u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { c->r[31] = 0x0891a088u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891a094u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x000000f0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000090u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000100u;
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
    { c->r[31] = 0x0891a184u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a1e0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x0891a22cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0891a22c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08919c68 */
}

/* func_08920894  0x08920894..0x089208f4  96 bytes, source=sweep */
void func_08920894(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08920894u);
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
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089208e0u; c->r[10] = mem_r32(ram, c->r[30] + 0x00000018u); func_08920ce8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08920894 */
}

/* func_089217d4  0x089217d4..0x08921844  112 bytes, source=sweep */
void func_089217d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089217d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921808; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_08921810; }
L_08921808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_08921810:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x08921830u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_08921844(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089217d4 */
}

/* func_08923508  0x08923508..0x08923908  1024 bytes, source=sweep */
void func_08923508(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08923508u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    c->r[2] = c->r[9] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892354cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08923574; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08923574:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08923594u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089235a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089235c0; }
    { goto L_089237c0; }
L_089235c0:
    c->r[3] = c->r[30] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089235e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892360c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    { mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]); goto L_0892365c; }
L_0892360c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
L_0892365c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08923724; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_0892377c; }
L_08923724:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
L_0892377c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089235a4; }
L_089237c0:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892381cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08923878u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_0892387c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08923898; }
    { goto L_089238f4; }
L_08923898:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089238e4u; c->r[5] = c->r[5] | 0x0002u; func_089258bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0892387c; }
L_089238f4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08923508 */
}

/* func_08925eec  0x08925eec..0x08925f30  68 bytes, source=sweep */
void func_08925eec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925eecu);
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
    { c->r[31] = 0x08925f1cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925eec */
}

/* func_08928b54  0x08928b54..0x08928b84  48 bytes, source=sweep */
void func_08928b54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08928b54u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08928b70u; c->r[5] = 0u | 0xffffu; func_0892892c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08928b54 */
}

/* func_0892f050  0x0892f050..0x0892f580  1328 bytes, source=fde */
void func_0892f050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892f050u);
    c->r[29] = c->r[29] + 0xfffffea0u;
    mem_w32(ram, c->r[29] + 0x00000154u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000150u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[8]);
    c->r[2] = c->r[9] + 0u;
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0892f080:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892f09c; }
    { goto L_0892f56c; }
L_0892f09c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0030u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f210; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f0f4; }
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_0892f100; }
L_0892f0f4:
    c->r[2] = 0xff0c0000u;
    c->r[2] = c->r[2] | 0x094cu;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0892f100:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f144; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0892f144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f1b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0xff000000u;
    c->r[5] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0x007f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 3;
    c->r[2] = 0x001f0000u;
    c->r[2] = c->r[2] | 0x1f1fu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[5] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0892f1b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f210; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0892f210:
    mem_w8(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f280; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000032u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff0u;
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0892f2a4; }
L_0892f280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
L_0892f2a4:
    c->r[2] = c->r[30] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xfffff000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w16(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000144u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = 0u + 0x00003000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f408; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00003001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f340; }
    c->r[2] = 0u + 0x00001000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f3c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f328; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f3a0; }
    { goto L_0892f500; }
L_0892f328:
    c->r[2] = 0u + 0x00002000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f3dc; }
    { goto L_0892f500; }
L_0892f340:
    c->r[2] = 0u + 0x00005000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f460; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00005001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892f378; }
    c->r[2] = 0u + 0x00004000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f434; }
    { goto L_0892f500; }
L_0892f378:
    c->r[2] = 0u + 0x00006000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f498; }
    c->r[2] = 0u + 0x00007000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f4d0; }
    { goto L_0892f500; }
L_0892f3a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892f3b8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]); goto L_0892f500; }
L_0892f3c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]); goto L_0892f500; }
L_0892f3dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000070dcu;
    { c->r[31] = 0x0892f400u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a1ad34(c, ram); }
    { goto L_0892f500; }
L_0892f408:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000070e0u;
    { c->r[31] = 0x0892f42cu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a1ad34(c, ram); }
    { goto L_0892f500; }
L_0892f434:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007100u;
    { c->r[31] = 0x0892f458u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000004u); func_08a1ad34(c, ram); }
    { goto L_0892f500; }
L_0892f460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007108u;
    c->r[6] = f2u(c->f[0]);
    { c->r[31] = 0x0892f490u; func_08a1ad34(c, ram); }
    { goto L_0892f500; }
L_0892f498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892f4b0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_08a136f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000070e4u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0892f4c8u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { goto L_0892f500; }
L_0892f4d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892f4e8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_08a136f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007110u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0892f500u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
L_0892f500:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892f51cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08933888(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000032u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000140u);
    { c->r[31] = 0x0892f55cu; c->r[7] = 0u + 0x00000001u; func_089ce998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0892f080; }
L_0892f56c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000154u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000150u);
    { c->r[29] = c->r[29] + 0x00000160u; return; }
    return; /* fell out of func_0892f050 */
}

/* func_08932528  0x08932528..0x08932564  60 bytes, source=sweep */
void func_08932528(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932528u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x0000001cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932528 */
}

/* func_08933bd4  0x08933bd4..0x0893435c  1928 bytes, source=sweep */
void func_08933bd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933bd4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000090du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933f94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000909u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x000002c7u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000002c8u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933dbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000013cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933cec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000013au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000073u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933ca8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000071u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934338; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x00000011u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933ca8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000000dcu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000000deu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893432c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffffeccu;
    c->r[2] = 0u + 0xfffffeccu;
    c->r[2] = c->r[2] + 0x00000138u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_0893432c; }
L_08933cec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000020du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933d5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000020au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000141u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933d44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000013fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x0000013du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933d44:
    c->r[2] = 0u + 0x00000142u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933d5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000278u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933da4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000275u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x0000026au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934308; }
    c->r[2] = 0u + 0x0000026cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933da4:
    c->r[2] = 0u + 0x000002c5u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933dbc:
    c->r[2] = 0u + 0x00000586u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000587u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933ea8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000046eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933e58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000046bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000346u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933e40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000344u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffffcc0u;
    c->r[2] = 0u + 0xfffffcc0u;
    c->r[2] = c->r[2] + 0x00000342u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_0893432c; }
L_08933e40:
    c->r[2] = 0u + 0x000003b3u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933e58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000004d3u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933e90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000004d1u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x000004c1u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933e90:
    c->r[2] = 0u + 0x000004d9u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933ea8:
    c->r[2] = 0u + 0x00000792u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000793u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933f28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000006bcu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933f10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000006b9u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x00000656u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934338; }
    c->r[2] = 0u + 0x000006acu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933f10:
    c->r[2] = 0u + 0x00000733u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933f28:
    c->r[2] = 0u + 0x000007e0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000007e1u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08933f6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffff826u;
    c->r[2] = 0u + 0xfffff826u;
    c->r[2] = c->r[2] + 0x000007ddu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_0893432c; }
L_08933f6c:
    c->r[2] = 0u + 0x000008acu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x000008b8u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08933f94:
    c->r[2] = 0u + 0x00000bf3u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000bf4u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893416c; }
    c->r[2] = 0u + 0x000009eau;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000009ebu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934094; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000978u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934038; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000976u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000090fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000913u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893432c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffff6dbu;
    c->r[2] = 0u + 0xfffff6dbu;
    c->r[2] = c->r[2] + 0x00000928u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_0893432c; }
L_08934038:
    c->r[2] = 0u + 0x000009e5u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000009e6u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893407c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xfffff665u;
    c->r[2] = 0u + 0xfffff665u;
    c->r[2] = c->r[2] + 0x0000099eu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_0893432c; }
L_0893407c:
    c->r[2] = 0u + 0x000009e7u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08934094:
    c->r[2] = 0u + 0x00000b09u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934338; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000b0au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089340fc; }
    c->r[2] = 0u + 0x00000b06u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934320; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000b07u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x00000a3du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x00000b02u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_089340fc:
    c->r[2] = 0u + 0x00000b78u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000b79u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934144; }
    c->r[2] = 0u + 0x00000b74u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934320; }
    c->r[2] = 0u + 0x00000b75u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08934144:
    c->r[2] = 0u + 0x00000b9du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934314; }
    c->r[2] = 0u + 0x00000bdfu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_0893416c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001f60u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934234; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001f5du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934320; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d5bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089341e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d55u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d00u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000d06u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934320; }
    c->r[2] = 0u + 0x00000d54u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934320; }
    { goto L_08934344; }
L_089341e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001f57u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893421c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001f4fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934338; }
    c->r[2] = 0u + 0x00001f4cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934320; }
    { goto L_08934344; }
L_0893421c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001f58u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_08934338; }
L_08934234:
    c->r[2] = 0u + 0x00002016u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934320; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00002017u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08934298; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001fa9u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00001fadu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893432c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xffffdff1u;
    c->r[2] = 0u + 0xffffdff1u;
    c->r[2] = c->r[2] + 0x00002014u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934344; }
    { goto L_08934320; }
L_08934298:
    c->r[2] = 0u + 0x0000206cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000206du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089342e0; }
    c->r[2] = 0u + 0x00002026u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x00002027u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08934320; }
    { goto L_08934344; }
L_089342e0:
    c->r[2] = 0u + 0x00002078u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    c->r[2] = 0u + 0x00002097u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893432c; }
    { goto L_08934344; }
L_08934308:
    c->r[2] = 0u + 0x00000096u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08934348; }
L_08934314:
    c->r[3] = 0u + 0x0000005au;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]); goto L_08934348; }
L_08934320:
    c->r[2] = 0u + 0x0000001eu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08934348; }
L_0893432c:
    c->r[3] = 0u + 0x0000002du;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]); goto L_08934348; }
L_08934338:
    c->r[2] = 0u + 0x0000003cu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08934348; }
L_08934344:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08934348:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933bd4 */
}

/* func_08937f80  0x08937f80..0x08938064  228 bytes, source=fde */
void func_08937f80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08937f80u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_08938050; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08937fe8u; c->r[4] = c->r[4] + 0x00007408u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08937ffcu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08938010u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x08938018u; c->r[4] = 0u + 0x0000000au; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0xc8240000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000018u;
    c->r[9] = 0u + 0x0000000du;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08938050u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_08938050:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08937f80 */
}

/* func_0893c620  0x0893c620..0x0893c664  68 bytes, source=sweep */
void func_0893c620(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c620u);
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
    { c->r[31] = 0x0893c650u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c620 */
}

/* func_0893da44  0x0893da44..0x0893da88  68 bytes, source=sweep */
void func_0893da44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893da44u);
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
    { c->r[31] = 0x0893da74u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893da44 */
}

/* func_0893fad8  0x0893fad8..0x0893fbb4  220 bytes, source=sweep */
void func_0893fad8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893fad8u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893fb6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893fb30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893fb58; }
    { goto L_0893fba0; }
L_0893fb30:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893fb80; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893fb94; }
    { goto L_0893fba0; }
L_0893fb58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893fb64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893fc20(c, ram); }
    { goto L_0893fba0; }
L_0893fb6c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893fb78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893fd20(c, ram); }
    { goto L_0893fba0; }
L_0893fb80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893fb8cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893fdf0(c, ram); }
    { goto L_0893fba0; }
L_0893fb94:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893fba0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893fec0(c, ram); }
L_0893fba0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893fad8 */
}

/* func_08941c48  0x08941c48..0x089423b8  1904 bytes, source=fde */
void func_08941c48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08941c48u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->r[4] = c->r[30] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08941c8cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000000fcu, c->r[2]);
    c->r[2] = 0u + 0xffffff80u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000102u, c->r[2]);
    c->r[2] = 0u + 0xffffff80u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000101u, c->r[2]);
    c->r[2] = 0u + 0xffffff80u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000100u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000103u, 0u);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08941cf4u; c->r[4] = c->r[4] + 0x00007708u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089421b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000634u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000064cu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f8u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007744u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000f0u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007744u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000f4u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007740u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007744u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000f8u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f8u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000000f0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007748u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08941f04; }
    { goto L_08941f14; }
L_08941f04:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000f0u);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_08941f20; }
L_08941f14:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007748u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[1]);
L_08941f20:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f0u, c->f[2]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000000f4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007748u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08941f54; }
    { goto L_08941f64; }
L_08941f54:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000f4u);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_08941f70; }
L_08941f64:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007748u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
L_08941f70:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f4u, c->f[2]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007748u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08941fa4; }
    { goto L_08941fb4; }
L_08941fa4:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000000f8u);
    { mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]); goto L_08941fc0; }
L_08941fb4:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007748u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[1]);
L_08941fc0:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x000000f8u, c->f[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000002d0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007748u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000774cu);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000038u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08942024; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]); goto L_08942048; }
L_08942024:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
L_08942048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007748u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000774cu);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089420a4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]); goto L_089420c8; }
L_089420a4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[3]);
L_089420c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000101u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007748u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000774cu);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000050u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08942124; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]); goto L_08942148; }
L_08942124:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[3]);
L_08942148:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000102u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000100u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000101u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000102u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x55550000u;
    c->r[2] = c->r[2] | 0x5556u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000102u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000102u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000101u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00000100u, c->r[2]);
L_089421b4:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089421c0u; c->r[4] = c->r[4] + 0x00007710u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00000104u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089421d4u; c->r[4] = c->r[4] + 0x0000771cu; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00000106u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089421e8u; c->r[4] = c->r[4] + 0x00007728u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00000108u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x089421fcu; c->r[4] = c->r[4] + 0x00007734u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x0000010au, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08942208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08942220; }
    { goto L_08942310; }
L_08942220:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00000190u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0894225cu; c->r[7] = 0u + 0u; func_089448a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00001950u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08942298u; c->r[7] = 0u + 0u; func_089448a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00001f40u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089422d4u; c->r[7] = 0u + 0x00000001u; func_089448a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 7;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00002828u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08942300u; c->r[6] = c->r[2] + 0u; func_08945084(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08942208; }
L_08942310:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00000110u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x0894232cu; func_088a00e0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007750u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00000150u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0894234cu; c->f[14] = c->f[0]; func_088a00e0(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00000110u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x08942364u; c->r[6] = c->r[6] + 0x00000110u; func_0884c668(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00000150u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x0894237cu; c->r[6] = c->r[6] + 0x00000150u; func_0884c668(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08942388u; c->r[4] = c->r[4] + 0xffffb640u; func_089ef438(c, ram); }
    c->r[4] = 0u + 0x0000005cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089423a4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08941c48 */
}

/* func_0894618c  0x0894618c..0x089461d0  68 bytes, source=sweep */
void func_0894618c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894618cu);
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
    { c->r[31] = 0x089461bcu; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894618c */
}

/* func_0894b984  0x0894b984..0x0894ba84  256 bytes, source=sweep */
void func_0894b984(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894b984u);
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
    return; /* fell out of func_0894b984 */
}

/* func_0894da74  0x0894da74..0x0894db34  192 bytes, source=residue */
void func_0894da74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894da74u);
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
    return; /* fell out of func_0894da74 */
}

/* func_089550d4  0x089550d4..0x08955110  60 bytes, source=sweep */
void func_089550d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089550d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089550fcu; c->r[6] = 0u + 0x00000001u; func_08955310(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089550d4 */
}

/* func_08957f9c  0x08957f9c..0x08957fc8  44 bytes, source=sweep */
void func_08957f9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08957f9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x000000e0u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08957f9c */
}

/* func_0895a550  0x0895a550..0x0895a5f8  168 bytes, source=sweep */
void func_0895a550(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895a550u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895a5e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895a5e4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004900u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895a5e4; }
L_0895a5b4:
    { c->r[31] = 0x0895a5bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895a5b4; }
L_0895a5e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895a550 */
}

/* func_0895bcd4  0x0895bcd4..0x0895c098  964 bytes, source=fde */
void func_0895bcd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895bcd4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0895bd08u; c->r[6] = 0u + 0x0000007cu; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895bd24u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x0895bd2cu; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0080u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0895bd84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895bd9c; }
    { goto L_0895bdc4; }
L_0895bd9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0895bd84; }
L_0895bdc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000048u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000004au, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005200u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000046u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0895bdf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895be0c; }
    { goto L_0895be8c; }
L_0895be0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005220u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895be54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000046u, c->r[3]); goto L_0895be8c; }
L_0895be54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895be7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000046u, c->r[3]); goto L_0895be8c; }
L_0895be7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0895bdf0; }
L_0895be8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0895bea0u; c->r[4] = c->r[4] + 0x000051e0u; func_0895b664(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895beacu; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895bf18; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000d2cu;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0895bed8u; c->r[6] = c->r[6] + 0x00000cccu; func_089c97b8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895bee4u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895bef4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0895bf18u; c->r[7] = c->r[3] + 0u; func_089c97f8(c, ram); }
L_0895bf18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000d2cu;
    mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000d8cu;
    mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000068u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000069u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000006au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000006cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000b4u;
    mem_w16(ram, c->r[3] + 0x0000006eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000004cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000054u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000058u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000005cu, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895bf98u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895bfc0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0008u;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0895c044; }
L_0895bfc0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895bfccu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895bfec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0895c044; }
L_0895bfec:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895bff8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895c014; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_0895c014:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895c020u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895c044; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_0895c044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000070u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000071u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000074u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000078u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0895c074u; c->r[5] = 0u + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895bcd4 */
}

/* func_089603b0  0x089603b0..0x089604f0  320 bytes, source=fde */
void func_089603b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089603b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089603ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089603dc; }
    { goto L_089604dc; }
L_089603dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08960410; }
    { goto L_089604dc; }
L_08960410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08960454u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088d3bfc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005318u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089604dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000a4u, 0u);
L_089604dc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089603b0 */
}

/* func_0896280c  0x0896280c..0x0896284c  64 bytes, source=fde */
void func_0896280c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896280cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    { c->r[31] = 0x08962838u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08962740(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896280c */
}

/* func_08965728  0x08965728..0x08965780  88 bytes, source=sweep */
void func_08965728(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965728u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896576c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896576c; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0896576cu; c->r[4] = c->r[4] + 0x000051e0u; func_08808240(c, ram); }
L_0896576c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965728 */
}

/* func_08968d40  0x08968d40..0x08968d84  68 bytes, source=sweep */
void func_08968d40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08968d40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9b1cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08968d40 */
}

/* func_08969d74  0x08969d74..0x08969dbc  72 bytes, source=fde */
void func_08969d74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969d74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08969d98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffba0cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08969d74 */
}

/* func_0896ad24  0x0896ad24..0x0896af94  624 bytes, source=fde */
void func_0896ad24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896ad24u);
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
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896ad6c; }
    { goto L_0896af7c; }
L_0896ad6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896ae84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896adb0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896add8; }
    { goto L_0896af7c; }
L_0896adb0:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896aebc; }
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896af48; }
    { goto L_0896af7c; }
L_0896add8:
    { c->r[31] = 0x0896ade0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0896adecu; mem_w8(ram, c->r[2] + 0x00000010u, 0u); func_0896a284(c, ram); }
    { c->r[31] = 0x0896adf4u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    { c->r[31] = 0x0896adfcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896ae30; }
    { c->r[31] = 0x0896ae14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0896af7c; }
L_0896ae30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896ae5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896ae54u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0896af7c; }
L_0896ae5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896ae70u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896ae7cu; c->r[5] = 0u + 0x00000009u; func_0896a7b8(c, ram); }
    { goto L_0896af7c; }
L_0896ae84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0896aea4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0896af7c; }
L_0896aea4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0896af7c; }
L_0896aebc:
    { c->r[31] = 0x0896aec4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896af00; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896aee4u; c->r[5] = 0u + 0x00000009u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896aef8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_0896af38; }
L_0896af00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896af38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896af24u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896af38u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_0896af38:
    { c->r[31] = 0x0896af40u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_0896af7c; }
L_0896af48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896af64u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896af74; }
    { goto L_0896af7c; }
L_0896af74:
    { c->r[31] = 0x0896af7cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0896af7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896ad24 */
}

/* func_0896dd64  0x0896dd64..0x0896dd9c  56 bytes, source=fde */
void func_0896dd64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896dd64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896dd7cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_08980f00(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0896dd88u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896dfe8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896dd64 */
}

/* func_0896eb5c  0x0896eb5c..0x0896ec90  308 bytes, source=fde */
void func_0896eb5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896eb5cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006858u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896ec7c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006858u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006858u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000685cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896ebb8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896ec7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000000c6u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0896ebe8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ec38; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896ec08u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x0000685cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ec24u; c->r[5] = 0x00020000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8754u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ec38u; c->f[12] = c->f[0]; func_08932528(c, ram); }
L_0896ec38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896ec54u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ec7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0896ec70u; c->r[5] = 0x00020000u; func_0892ffa8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0896ec7cu; c->r[5] = 0u | 0x8000u; func_0892ff54(c, ram); }
L_0896ec7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896eb5c */
}

/* func_0896f9f8  0x0896f9f8..0x0896fa68  112 bytes, source=fde */
void func_0896f9f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f9f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896fa14u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896fa2c; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0896fa4c; }
L_0896fa2c:
    { c->r[31] = 0x0896fa34u; func_089794c4(c, ram); }
    { c->r[31] = 0x0896fa3cu; c->r[16] = mem_r8(ram, c->r[2] + 0x00000005u); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0896fa44u; c->r[4] = c->r[2] + 0u; func_0896f9c0(c, ram); }
    c->r[16] = c->r[16] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[16]);
L_0896fa4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f9f8 */
}

/* func_08973298  0x08973298..0x089732e4  76 bytes, source=fde */
void func_08973298(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08973298u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089732b0u; c->r[4] = 0u + 0x0000001au; func_089c6f04(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006d54u;
    { c->r[31] = 0x089732c0u; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    { c->r[31] = 0x089732c8u; c->r[4] = 0u + 0x0000004fu; func_089c6f04(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00006d78u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08973298 */
}

/* func_08975704  0x08975704..0x08975728  36 bytes, source=sweep */
void func_08975704(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975704u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff8ed0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08975704 */
}

/* func_08978c04  0x08978c04..0x08978c30  44 bytes, source=sweep */
void func_08978c04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978c04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08978c04 */
}

/* func_0897e3dc  0x0897e3dc..0x0897e4cc  240 bytes, source=fde */
void func_0897e3dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897e3dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0897e3f4u; mem_w32(ram, c->r[30] + 0x00000000u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x0897e408u; c->r[7] = 0u + 0x000000ffu; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897e428; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0897e4b4; }
L_0897e428:
    { c->r[31] = 0x0897e430u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897e4a4; }
    { c->r[31] = 0x0897e444u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897e4a4; }
    { c->r[31] = 0x0897e460u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9124u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0897e480u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9134u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897e49cu; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897e4a4:
    { c->r[31] = 0x0897e4acu; func_0897e1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0897e4b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897e3dc */
}

/* func_08986950  0x08986950..0x08986994  68 bytes, source=fde */
void func_08986950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08986950u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000009u;
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = 0x08980000u;
    { c->r[31] = 0x08986978u; c->r[6] = c->r[6] + 0x000061d0u; func_08974c4c(c, ram); }
    { c->r[31] = 0x08986980u; func_08986620(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08986950 */
}

/* func_08993330  0x08993330..0x089943d0  4256 bytes, source=fde */
void func_08993330(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08993330u);
L_08993330:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899339c; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089940e0; }
    { goto L_089943b4; }
L_0899339c:
    { c->r[31] = 0x089933a4u; func_0885d884(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089940d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9e10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08993330u: goto L_08993330; case 0x089933e0u: goto L_089933e0; case 0x08993668u: goto L_08993668; case 0x089937e8u: goto L_089937e8; case 0x0899386cu: goto L_0899386c; case 0x0899399cu: goto L_0899399c; case 0x08993a84u: goto L_08993a84; case 0x08993ac8u: goto L_08993ac8; case 0x08993b04u: goto L_08993b04; case 0x08993b38u: goto L_08993b38; case 0x08993c34u: goto L_08993c34; case 0x08993d18u: goto L_08993d18; case 0x08993d58u: goto L_08993d58; case 0x08993de0u: goto L_08993de0; case 0x08993ee4u: goto L_08993ee4; case 0x08994030u: goto L_08994030; case 0x08994090u: goto L_08994090; case 0x089940d0u: goto L_089940d0; case 0x08994120u: goto L_08994120; case 0x08994278u: goto L_08994278; case 0x089942ecu: goto L_089942ec; case 0x08994364u: goto L_08994364; case 0x089943a4u: goto L_089943a4; case 0x089943acu: goto L_089943ac; default: recomp_trap_unknown_indirect(c, ram, 0x089933d8u, _t); return; } }
L_089933e0:
    { c->r[31] = 0x089933e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089933f8u; c->r[5] = 0u + 0x00000006u; func_0896df68(c, ram); }
    { c->r[31] = 0x08993400u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9900u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9904u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000004bu, 0u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff94f4u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08993434u; c->r[6] = 0u + 0x000000c8u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff95bcu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08993448u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff95fcu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899345cu; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff963cu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08993470u; c->r[6] = 0u + 0x000000a0u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff96dcu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08993484u; c->r[6] = 0u + 0x0000003cu; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9718u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08993498u; c->r[6] = 0u + 0x0000003cu; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9754u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089934acu; c->r[6] = 0u + 0x00000064u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff97b8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089934c0u; c->r[6] = 0u + 0x00000078u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089934c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089934dc; }
    { goto L_08993508; }
L_089934dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9830u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xfffffffeu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089934c4; }
L_08993508:
    { c->r[31] = 0x08993510u; func_0898e2f0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08993518:
    { c->r[31] = 0x08993520u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899353c; }
    { goto L_089935d4; }
L_0899353c:
    { c->r[31] = 0x08993544u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0899355c; }
    { goto L_089935c4; }
L_0899355c:
    { c->r[31] = 0x08993564u; func_0896a3c0(c, ram); }
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
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089935c4; }
    { c->r[31] = 0x0899359cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_089935c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08993518; }
L_089935d4:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089935d8:
    { c->r[31] = 0x089935e0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089935fc; }
    { goto L_0899360c; }
L_089935fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089935d8; }
L_0899360c:
    { c->r[31] = 0x08993614u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08993620u; c->r[5] = 0u + 0x00000096u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x08993628u; func_0896a284(c, ram); }
    { c->r[31] = 0x08993630u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9830u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000eu;
    c->r[7] = 0u + 0x00000008u;
    { c->r[31] = 0x08993658u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993668:
    { c->r[31] = 0x08993670u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000eu;
    { c->r[31] = 0x08993684u; c->r[7] = 0u + 0x000000ffu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089936b8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08993744; }
    { goto L_089940d0; }
L_089936b8:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089936bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089936d4; }
    { goto L_08993704; }
L_089936d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089936f4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089936bc; }
L_08993704:
    { c->r[31] = 0x0899370cu; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993724; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08993730; }
L_08993724:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08993730:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899373cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_089940d0; }
L_08993744:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08993748:
    { c->r[31] = 0x08993750u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899376c; }
    { goto L_089937cc; }
L_0899376c:
    { c->r[31] = 0x08993774u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0899378c; }
    { goto L_089937bc; }
L_0899378c:
    { c->r[31] = 0x08993794u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[5] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9830u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089937bcu; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
L_089937bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08993748; }
L_089937cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000011u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_089937e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08993854; }
    { c->r[31] = 0x08993800u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993844; }
    { c->r[31] = 0x08993810u; func_0898e410(c, ram); }
    { c->r[31] = 0x08993818u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000fu;
    c->r[7] = 0u + 0x00000058u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08993834u; c->r[8] = c->r[8] + 0xffff9850u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993844:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993854:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089940d0; }
L_0899386c:
    { c->r[31] = 0x08993874u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000fu;
    { c->r[31] = 0x08993888u; c->r[7] = 0u + 0x000000ffu; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089938bc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08993948; }
    { goto L_089940d0; }
L_089938bc:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089938c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089938d8; }
    { goto L_08993908; }
L_089938d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089938f8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089938c0; }
L_08993908:
    { c->r[31] = 0x08993910u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993928; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08993934; }
L_08993928:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08993934:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08993940u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_089940d0; }
L_08993948:
    { c->r[31] = 0x08993950u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9850u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899396cu; c->r[6] = 0u + 0x00000058u; func_08a19db8(c, ram); }
    { c->r[31] = 0x08993974u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000cu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0899398cu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_0899399c:
    { c->r[31] = 0x089939a4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000eu;
    { c->r[31] = 0x089939b4u; c->r[6] = 0u + 0x0000000cu; func_0896d35c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089939e8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08993a74; }
    { goto L_089940d0; }
L_089939e8:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089939ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993a04; }
    { goto L_08993a34; }
L_08993a04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08993a24u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089939ec; }
L_08993a34:
    { c->r[31] = 0x08993a3cu; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08993a60; }
L_08993a54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08993a60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08993a6cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_089940d0; }
L_08993a74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993a84:
    { c->r[31] = 0x08993a8cu; func_088c4f00(c, ram); }
    c->r[4] = 0u + 0x0000002au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08993aa8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08993ab8u; c->r[6] = 0u + 0u; func_08850614(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993ac8:
    { c->r[31] = 0x08993ad0u; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089940d0; }
    { c->r[31] = 0x08993aecu; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x08993af4u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993b04:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9e08u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08993b20u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x08993b28u; c->r[4] = 0u + 0x00000005u; func_08924620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993b38:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08993b44u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993b54; }
    { goto L_089940d0; }
L_08993b54:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08993b64u; c->r[5] = 0u + 0x00000005u; func_089d7208(c, ram); }
    { c->r[31] = 0x08993b6cu; c->r[4] = 0u + 0x00000002u; func_0880b0d4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08993b7cu; c->r[5] = 0u + 0x00000006u; func_089d7194(c, ram); }
    { c->r[31] = 0x08993b84u; c->r[4] = 0u + 0x00000002u; func_0880b118(c, ram); }
    { c->r[31] = 0x08993b8cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08993bac; }
    { c->r[31] = 0x08993ba4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08993280(c, ram); }
    { goto L_08993bdc; }
L_08993bac:
    { c->r[31] = 0x08993bb4u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08993bd4; }
    { c->r[31] = 0x08993bccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089932f8(c, ram); }
    { goto L_08993bdc; }
L_08993bd4:
    { c->r[31] = 0x08993bdcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089932c0(c, ram); }
L_08993bdc:
    { c->r[31] = 0x08993be4u; func_089794c4(c, ram); }
    { c->r[31] = 0x08993becu; c->r[16] = mem_r8(ram, c->r[2] + 0x00000001u); func_0896dc4c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08993bfcu; c->r[6] = c->r[2] + 0u; func_0885d640(c, ram); }
    { c->r[31] = 0x08993c04u; c->r[4] = 0u + 0x00000001u; func_0885d5c4(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98a8u;
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x08993c18u; c->r[5] = c->r[5] + 0xffff98acu; hle_dispatch_stub(c, ram, 0x08a249acu); /* sceCtrlGetIdleCancelThreshold */ }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08993c24u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993c34:
    { c->r[31] = 0x08993c3cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089940d0; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08993c48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993c60; }
    { goto L_08993cb4; }
L_08993c60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08993c88u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993ca4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08993ca4u; c->r[5] = 0u + 0x00001000u; func_0892ff54(c, ram); }
L_08993ca4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08993c48; }
L_08993cb4:
    { c->r[31] = 0x08993cbcu; func_0896a3e4(c, ram); }
    c->r[16] = 0x08ab0000u;
    c->r[16] = c->r[16] + c->r[2];
    { c->r[31] = 0x08993cccu; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9898u); func_0896a3c0(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08993cd8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0896f134(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002660u);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    mem_w8(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    { c->r[31] = 0x08993d08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08991634(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993d18:
    { c->r[31] = 0x08993d20u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08991864(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x08993d2cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993d48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993d48; }
    { goto L_089940d0; }
L_08993d48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993d58:
    { c->r[31] = 0x08993d60u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08991bb0(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9900u, c->r[2]);
    { c->r[31] = 0x08993d70u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089940d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08993d88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993da0; }
    { goto L_08993dd0; }
L_08993da0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08993dc0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08993d88; }
L_08993dd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993de0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08993df4u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993e04; }
    { goto L_089940d0; }
L_08993e04:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08993e10u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca0e0(c, ram); }
    { c->r[31] = 0x08993e18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08992174(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08993e24u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca1d8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993ec8; }
    { c->r[31] = 0x08993e34u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08992944(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9904u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08993e40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993e58; }
    { goto L_08993e94; }
L_08993e58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08993e84; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9904u, c->r[2]); goto L_08993e94; }
L_08993e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08993e40; }
L_08993e94:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9904u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa594u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9900u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000du;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993ec8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001eu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08993ee4:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08993f00u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08993f10u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993f30; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08993f30:
    { c->r[31] = 0x08993f38u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08994008; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9904u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9904u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9904u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08993f64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08993f7c; }
    { goto L_08993fc0; }
L_08993f7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08993fb0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9904u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08993fc0; }
L_08993fb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08993f64; }
L_08993fc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993ff4; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9904u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa594u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0xffff9900u, c->r[2]); goto L_08994008; }
L_08993ff4:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9900u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08994008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089940d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089940d0; }
L_08994030:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08994078; }
    { c->r[31] = 0x08994048u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08994064; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899405cu; c->r[5] = 0u + 0x00000031u; func_0896a7b8(c, ram); }
    { goto L_089940d0; }
L_08994064:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08994070u; c->r[5] = 0u + 0x00000032u; func_0896a7b8(c, ram); }
    { goto L_089940d0; }
L_08994078:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089940d0; }
L_08994090:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089940a4u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089940b4; }
    { goto L_089940d0; }
L_089940b4:
    c->r[4] = 0x08ab0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff98a8u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x089940c8u; c->r[5] = mem_r32(ram, c->r[5] + 0xffff98acu); hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    { c->r[31] = 0x089940d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_089940d0:
    { c->r[31] = 0x089940d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_089943b4; }
L_089940e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (c->r[3] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089943ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9ec0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08993330u: goto L_08993330; case 0x089933e0u: goto L_089933e0; case 0x08993668u: goto L_08993668; case 0x089937e8u: goto L_089937e8; case 0x0899386cu: goto L_0899386c; case 0x0899399cu: goto L_0899399c; case 0x08993a84u: goto L_08993a84; case 0x08993ac8u: goto L_08993ac8; case 0x08993b04u: goto L_08993b04; case 0x08993b38u: goto L_08993b38; case 0x08993c34u: goto L_08993c34; case 0x08993d18u: goto L_08993d18; case 0x08993d58u: goto L_08993d58; case 0x08993de0u: goto L_08993de0; case 0x08993ee4u: goto L_08993ee4; case 0x08994030u: goto L_08994030; case 0x08994090u: goto L_08994090; case 0x089940d0u: goto L_089940d0; case 0x08994120u: goto L_08994120; case 0x08994278u: goto L_08994278; case 0x089942ecu: goto L_089942ec; case 0x08994364u: goto L_08994364; case 0x089943a4u: goto L_089943a4; case 0x089943acu: goto L_089943ac; default: recomp_trap_unknown_indirect(c, ram, 0x08994118u, _t); return; } }
L_08994120:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9e0cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08994138u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08994140u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089941d8; }
    { c->r[31] = 0x08994154u; func_08998dcc(c, ram); }
    { c->r[31] = 0x0899415cu; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089941bc; }
    { c->r[31] = 0x08994178u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089941a0; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x00001554u;
    { c->r[31] = 0x08994198u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08994264; }
L_089941a0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x00001552u;
    { c->r[31] = 0x089941b4u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08994264; }
L_089941bc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x00001553u;
    { c->r[31] = 0x089941d0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08994264; }
L_089941d8:
    { c->r[31] = 0x089941e0u; func_08998dcc(c, ram); }
    { c->r[31] = 0x089941e8u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x089941f0u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[2] = (u32)((s32)c->r[16] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08994250; }
    { c->r[31] = 0x0899420cu; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08994234; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x00001554u;
    { c->r[31] = 0x0899422cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08994264; }
L_08994234:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x0000158bu;
    { c->r[31] = 0x08994248u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08994264; }
L_08994250:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x0000158cu;
    { c->r[31] = 0x08994264u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
L_08994264:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08994270u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_089943ac; }
L_08994278:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9e0cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08994290u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9900u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089942c0; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0x000013e0u;
    { c->r[31] = 0x089942b8u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_089942d8; }
L_089942c0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0x08ab0000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffff9900u);
    { c->r[31] = 0x089942d8u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
L_089942d8:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089942e4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_089943ac; }
L_089942ec:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9e0cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08994304u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9900u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08994338; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0x08ab0000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffff9900u);
    { c->r[31] = 0x08994330u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_08994350; }
L_08994338:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0x08ab0000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffff9900u);
    { c->r[31] = 0x08994350u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
L_08994350:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0899435cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_089943ac; }
L_08994364:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9e0cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0899437cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9dfcu;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08994390u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0899439cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_089943ac; }
L_089943a4:
    { c->r[31] = 0x089943acu; func_088513dc(c, ram); }
L_089943ac:
    { c->r[31] = 0x089943b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08991e38(c, ram); }
L_089943b4:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08993330 */
}

/* func_08998cc0  0x08998cc0..0x08998cec  44 bytes, source=sweep */
void func_08998cc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998cc0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002a94u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002a98u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998cc0 */
}

/* func_08999344  0x08999344..0x08999384  64 bytes, source=residue */
void func_08999344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999344u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0x00002ae0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08999344 */
}

/* func_0899f170  0x0899f170..0x0899f234  196 bytes, source=fde */
void func_0899f170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899f170u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899f1c4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899f220; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0xfffb0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899f220; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
L_0899f220:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0899f170 */
}

/* func_089a2100  0x089a2100..0x089a23a4  676 bytes, source=fde */
void func_089a2100(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a2100u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a211cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_089710e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089a2120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2138; }
    { goto L_089a21bc; }
L_089a2138:
    { c->r[31] = 0x089a2140u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2174; }
    { c->r[31] = 0x089a2160u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a21ac; }
L_089a2174:
    { c->r[31] = 0x089a217cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xff670000u;
    c->r[2] = c->r[2] | 0x6981u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a21ac; }
    { c->r[31] = 0x089a219cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0xff670000u;
    c->r[2] = c->r[2] | 0x6981u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a21ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a2120; }
L_089a21bc:
    { c->r[31] = 0x089a21c4u; c->r[4] = 0u + 0u; func_089714dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a220c; }
    { c->r[31] = 0x089a21d4u; c->r[4] = 0u + 0x00000001u; func_089714dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a21f4; }
    { c->r[31] = 0x089a21e4u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a2200; }
L_089a21f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000042u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a2200:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a220c:
    { c->r[31] = 0x089a2214u; c->r[4] = 0u + 0x00000001u; func_089714dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2234; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000041u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a2234:
    { c->r[31] = 0x089a223cu; c->r[4] = 0u + 0u; func_08971434(c, ram); }
    { c->r[31] = 0x089a2244u; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2274; }
    { c->r[31] = 0x089a2258u; c->r[4] = 0u + 0x00000001u; func_08971434(c, ram); }
    { c->r[31] = 0x089a2260u; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2274; }
    { goto L_089a2294; }
L_089a2274:
    { c->r[31] = 0x089a227cu; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a2294:
    { c->r[31] = 0x089a229cu; c->r[4] = 0u + 0u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a22ec; }
    { c->r[31] = 0x089a22acu; c->r[4] = 0u + 0x00000001u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a22d4; }
    { c->r[31] = 0x089a22bcu; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a22d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a22ec:
    { c->r[31] = 0x089a22f4u; c->r[4] = 0u + 0x00000001u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2314; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a2314:
    { c->r[31] = 0x089a231cu; func_089990dc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a235c; }
    { c->r[31] = 0x089a232cu; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a2388; }
L_089a235c:
    { c->r[31] = 0x089a2364u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089a2388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a2100 */
}

/* func_089a71fc  0x089a71fc..0x089a73c4  456 bytes, source=fde */
void func_089a71fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a71fcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a7214u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e50u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa760u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa764u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089a7298:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a72b0; }
    { goto L_089a7374; }
L_089a72b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a72d4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a7364; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a7300; }
    { goto L_089a7364; }
L_089a7300:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa760u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a735c; }
    { goto L_089a7364; }
L_089a735c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_089a7364:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089a7298; }
L_089a7374:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a7394; }
    { goto L_089a7398; }
L_089a7394:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089a7398:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab3cu);
    c->f[0] = c->f[0] - c->f[1];
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a71fc */
}

/* func_089ac86c  0x089ac86c..0x089ac8a0  52 bytes, source=sweep */
void func_089ac86c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac86cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030f4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac86c */
}

/* func_089b2c60  0x089b2c60..0x089b2ca4  68 bytes, source=sweep */
void func_089b2c60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2c60u);
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
    { c->r[31] = 0x089b2c90u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2c60 */
}

/* func_089b39b8  0x089b39b8..0x089b3a48  144 bytes, source=fde */
void func_089b39b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b39b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089b39d0u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); hle_dispatch_stub(c, ram, 0x08a249c4u); /* sceDisplayGetAccumulatedHcount */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b3a10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089b3a24; }
L_089b3a10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089b3a24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b39b8 */
}

/* func_089b6d0c  0x089b6d0c..0x089b6d3c  48 bytes, source=sweep */
void func_089b6d0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6d0cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x089b6d28u; c->r[5] = 0u | 0xffffu; func_089b6c14(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089b6d0c */
}

/* func_089b8454  0x089b8454..0x089b8478  36 bytes, source=sweep */
void func_089b8454(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8454u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b8454 */
}

/* func_089b9be8  0x089b9be8..0x089b9c5c  116 bytes, source=sweep */
void func_089b9be8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9be8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b9c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9c28; }
    { goto L_089b9c44; }
L_089b9c28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b9c0c; }
L_089b9c44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b9be8 */
}

/* func_089c3c1c  0x089c3c1c..0x089c3c84  104 bytes, source=indirect */
void func_089c3c1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3c1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x00f0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3c4c; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089c3c70; }
L_089c3c4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3c6c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c3c70; }
L_089c3c6c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089c3c70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c3c1c */
}

/* func_089c6fd8  0x089c6fd8..0x089c76d4  1788 bytes, source=fde */
void func_089c6fd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6fd8u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c76c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089c7038:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c7058; }
    { goto L_089c76c0; }
L_089c7058:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c70a8; }
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb38cu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089c70a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c70b8u; c->r[5] = c->r[5] + 0xffffb390u; func_08a1b1a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c70d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c70d8u; c->r[5] = c->r[5] + 0xffffb398u; func_08a1af70(c, ram); }
L_089c70d8:
    { c->r[31] = 0x089c70e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c7110; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    { mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089c712c; }
L_089c7110:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089c712c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c71c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c717c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c71a4; }
    { goto L_089c721c; }
L_089c717c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c71e0; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c7200; }
    { goto L_089c721c; }
L_089c71a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    { mem_w8(ram, c->r[2] + 0x00000008u, 0u); goto L_089c721c; }
L_089c71c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_089c721c; }
L_089c71e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_089c721c; }
L_089c7200:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
L_089c721c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 7;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 7;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000058u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c7278; }
    { goto L_089c72a8; }
L_089c7278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb3a0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]); goto L_089c72d4; }
L_089c72a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a0u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
L_089c72d4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c730c; }
    { goto L_089c733c; }
L_089c730c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb3a0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]); goto L_089c7368; }
L_089c733c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a0u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a4u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[1]);
L_089c7368:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000034u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000034u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000038u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000038u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3acu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c7498; }
    { goto L_089c74b8; }
L_089c7498:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3b0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_089c74b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c7508; }
    { goto L_089c7514; }
L_089c7508:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000034u, c->f[1]); goto L_089c7530; }
L_089c7514:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_089c7530:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[1]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000050u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c756c; }
    { goto L_089c7578; }
L_089c756c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]); goto L_089c7594; }
L_089c7578:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000050u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[1]);
L_089c7594:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000054u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c75d0; }
    { goto L_089c75dc; }
L_089c75d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[1]); goto L_089c75f8; }
L_089c75dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000054u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
L_089c75f8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[1]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000001cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000002cu;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c7680; }
    { goto L_089c7690; }
L_089c7680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    { mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]); goto L_089c76a4; }
L_089c7690:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3a8u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[1]);
L_089c76a4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089c7038; }
L_089c76c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089c6fd8 */
}

/* func_089c9b00  0x089c9b00..0x089c9d8c  652 bytes, source=fde */
void func_089c9b00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c9b00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000299u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000029au);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000029bu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000298u);
    mem_w8(ram, c->r[3] + 0x00000350u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000404u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000029cu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c9b8cu; c->r[6] = 0u + 0x00000020u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00001404u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000002bcu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c9bc4u; c->r[6] = 0u + 0x00000018u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002d4u);
    mem_w32(ram, c->r[3] + 0x000017c4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002d8u);
    mem_w32(ram, c->r[3] + 0x000017c8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002dcu);
    mem_w32(ram, c->r[3] + 0x000017ccu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002e0u);
    mem_w32(ram, c->r[3] + 0x000017d0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002e4u);
    mem_w32(ram, c->r[3] + 0x000017d4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002e8u);
    mem_w32(ram, c->r[3] + 0x000017d8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002ecu);
    mem_w32(ram, c->r[3] + 0x000017dcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000002f0u);
    mem_w32(ram, c->r[3] + 0x000017e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017c4u);
    c->r[2] = 0x405f0000u;
    c->r[2] = c->r[2] | 0x7de2u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9c70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x405f0000u;
    c->r[2] = c->r[2] | 0x7de2u;
    mem_w32(ram, c->r[3] + 0x000017c4u, c->r[2]);
L_089c9c70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017ccu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9c9c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x000017ccu, c->r[2]);
L_089c9c9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017d0u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9cc8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000017d0u, c->r[2]);
L_089c9cc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017d4u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9cf4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000017d4u, c->r[2]);
L_089c9cf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017d8u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9d20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000017d8u, c->r[2]);
L_089c9d20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017dcu);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9d4c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000017dcu, c->r[2]);
L_089c9d4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000017e0u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9d78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000017e0u, c->r[2]);
L_089c9d78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c9b00 */
}

/* func_089cb8e8  0x089cb8e8..0x089cb95c  116 bytes, source=sweep */
void func_089cb8e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb8e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
L_089cb8fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); if (_c) goto L_089cb914; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089cb948; }
L_089cb914:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cb930; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089cb948; }
L_089cb930:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb8fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089cb948:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb8e8 */
}

/* func_089d09a4  0x089d09a4..0x089d12c0  2332 bytes, source=fde */
void func_089d09a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d09a4u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[8] + 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089d09f4u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x089d09fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d12c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d0aa8; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089d0a44u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_089d138c(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0a78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
L_089d0a78:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0aa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
L_089d0aa8:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    mem_w16(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0xfffffff0u;
    c->r[1] = 0x08b80000u;
    mem_w16(ram, c->r[1] + 0xfffffd10u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[1] = 0x08b80000u;
    mem_w16(ram, c->r[1] + 0xfffffd12u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089d0b14u; c->r[5] = 0u + 0x00000009u; func_089d2394(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_089d0b28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d0b3c; }
    { goto L_089d1194; }
L_089d0b3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x000eu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = (c->r[3] < 0x0000000eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d0e60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb6d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089d0b84u: goto L_089d0b84; case 0x089d0b94u: goto L_089d0b94; case 0x089d0bd4u: goto L_089d0bd4; case 0x089d0d1cu: goto L_089d0d1c; case 0x089d0e04u: goto L_089d0e04; case 0x089d0e50u: goto L_089d0e50; case 0x089d1184u: goto L_089d1184; default: recomp_trap_unknown_indirect(c, ram, 0x089d0b7cu, _t); return; } }
L_089d0b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d1184; }
L_089d0b94:
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0bb4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
L_089d0bb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xfffeu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d1184; }
    { mem_w32(ram, c->r[30] + 0x00000068u, 0u); goto L_089d1184; }
L_089d0bd4:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08b80000u;
    mem_w16(ram, c->r[1] + 0xfffffd14u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[1] = 0x08b80000u;
    mem_w16(ram, c->r[1] + 0xfffffd16u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0c30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
L_089d0c30:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0c68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
L_089d0c68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d0ca0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d0ca0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d0ca0; }
    { goto L_089d0cb0; }
L_089d0ca0:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[2] = c->r[2] + 0x00000010u;
    { mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]); goto L_089d0cd4; }
L_089d0cb0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6b8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000056u, c->r[2]);
L_089d0cd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0d0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d0d0c; }
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
L_089d0d0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d1184; }
L_089d0d1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d0df4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0xff000000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]); goto L_089d1184; }
L_089d0df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000006u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d1184; }
L_089d0e04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089d0e34u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_089d1bf0(c, ram); }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
    { c->r[31] = 0x089d0e48u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d12c0(c, ram); }
    { goto L_089d1184; }
L_089d0e50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d1184; }
L_089d0e60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08b80000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xfffff460u);
    c->r[2] = c->r[2] & 0x003fu;
    mem_w8(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = 0u + 0xffffff80u;
    c->r[1] = 0x08b80000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xfffff460u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x0000006du, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08b80000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xfffff460u);
    c->r[2] = c->r[2] & 0x0040u;
    mem_w8(ram, c->r[30] + 0x0000006eu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000006du);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d0f4c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000006cu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6bcu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6c0u);
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000084u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089d0f1c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089d0f40; }
L_089d0f1c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[3]);
L_089d0f40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { mem_w16(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_089d0fc4; }
L_089d0f4c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000006cu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6c0u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000090u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089d0f98; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]); goto L_089d0fbc; }
L_089d0f98:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[3]);
L_089d0fbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w16(ram, c->r[30] + 0x00000070u, c->r[2]);
L_089d0fc4:
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
L_089d0fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d0fe4; }
    { goto L_089d1158; }
L_089d0fe4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6c4u);
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d10b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d10b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d1044; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000003u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089d11b0; }
L_089d1044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d1070; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6c8u);
    { mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]); goto L_089d10a4; }
L_089d1070:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d1098; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6ccu);
    { mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]); goto L_089d10a4; }
L_089d1098:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6c4u);
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
L_089d10a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089d10b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[3]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000056u);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000006eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d10ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[2] = c->r[3] + 0xfffffffeu;
    c->r[2] = c->r[2] & 0xffffu;
    { mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]); goto L_089d10f8; }
L_089d10ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[2] = c->r[2] & 0xffffu;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
L_089d10f8:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000070u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000006cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[8] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[9] = c->r[3] + 0u;
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089d1128u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000078u); func_089d1718(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000006du);
    c->r[2] = c->r[2] >> 7;
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_089d0fc8; }
L_089d1158:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d117c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089d117c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089d1184:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d0b28; }
L_089d1194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d11b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + 0x00000006u;
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
L_089d11b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d1268; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d1268; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
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
    { c->r[31] = 0x089d1218u; c->r[5] = 0u + 0x00000009u; func_089d23d0(c, ram); }
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000005cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = c->r[2] << 16;
    c->r[6] = (u32)((s32)c->r[2] >> 16);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6b8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d1268u; c->r[7] = c->r[2] + 0u; func_089d1e14(c, ram); }
L_089d1268:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d128c; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08b80000u;
    mem_w16(ram, c->r[1] + 0xfffffd14u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000056u);
    c->r[1] = 0x08b80000u;
    mem_w16(ram, c->r[1] + 0xfffffd16u, c->r[2]);
L_089d128c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d12a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_089d12a8; }
L_089d12a4:
    mem_w32(ram, c->r[30] + 0x000000a8u, 0u);
L_089d12a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_089d09a4 */
}

/* func_089d2d88  0x089d2d88..0x089d2dcc  68 bytes, source=sweep */
void func_089d2d88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2d88u);
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
    { c->r[31] = 0x089d2db8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2d88 */
}

/* func_089d3d4c  0x089d3d4c..0x089d3d74  40 bytes, source=sweep */
void func_089d3d4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3d4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3d4c */
}

/* func_089d57d4  0x089d57d4..0x089d5824  80 bytes, source=fde */
void func_089d57d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d57d4u);
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
    { c->r[31] = 0x089d5810u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08975a38(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d57d4 */
}

/* func_089d7018  0x089d7018..0x089d705c  68 bytes, source=sweep */
void func_089d7018(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7018u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7018 */
}

/* func_089d88c8  0x089d88c8..0x089d88f8  48 bytes, source=sweep */
void func_089d88c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d88c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000002e4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000002e8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d88c8 */
}

/* func_089d9a14  0x089d9a14..0x089d9a3c  40 bytes, source=sweep */
void func_089d9a14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9a14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000654u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9a14 */
}

/* func_089dafb0  0x089dafb0..0x089db028  120 bytes, source=fde */
void func_089dafb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dafb0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089dafd0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089db14c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089db008; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]); goto L_089db010; }
L_089db008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089db010:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dafb0 */
}

/* func_089dc154  0x089dc154..0x089dc198  68 bytes, source=sweep */
void func_089dc154(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc154u);
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
    { c->r[31] = 0x089dc184u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc154 */
}

/* func_089ddd58  0x089ddd58..0x089de0e4  908 bytes, source=fde */
void func_089ddd58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ddd58u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[4] = 0u + 0x00000002u;
    { c->r[31] = 0x089ddd98u; c->r[5] = 0u + 0x00000800u; func_08a04448(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dddac; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ddfb8; }
L_089dddac:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc1d8u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x089dddccu; c->r[8] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a247e4u); /* sceKernelCreateSema */ }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc1e8u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089dddecu; c->r[7] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2486cu); /* sceKernelCreateEventFlag */ }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    { c->r[31] = 0x089dde04u; c->r[4] = c->r[2] + 0u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dde24; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ddfb8; }
L_089dde24:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089dde28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dde44; }
    { goto L_089dde6c; }
L_089dde44:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089dde28; }
L_089dde6c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089dde70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dde8c; }
    { goto L_089ddee8; }
L_089dde8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ddea8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dded8; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ddfb8; }
L_089dded8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089dde70; }
L_089ddee8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    { c->r[31] = 0x089ddefcu; c->r[4] = c->r[2] + 0u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddf1c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ddfb8; }
L_089ddf1c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089ddf20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddf38; }
    { goto L_089ddf90; }
L_089ddf38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000006e0u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ddf54u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000006e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddf80; }
    { goto L_089ddfb8; }
L_089ddf80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089ddf20; }
L_089ddf90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00001053u;
    c->r[1] = 0x08b90000u;
    { mem_w32(ram, c->r[1] + 0x000006dcu, c->r[2]); goto L_089de0c8; }
L_089ddfb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089de044; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089ddfcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ddfec; }
    { goto L_089de038; }
L_089ddfec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089de028; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089de028u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089dd960(c, ram); }
L_089de028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089ddfcc; }
L_089de038:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089de044u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089dd960(c, ram); }
L_089de044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089de060; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089de060u; c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu); func_089dd960(c, ram); }
L_089de060:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089de064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089de07c; }
    { goto L_089de0c8; }
L_089de07c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000006e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089de0b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000006e0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089de0b8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089dd960(c, ram); }
L_089de0b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089de064; }
L_089de0c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ddd58 */
}

/* func_089e08f0  0x089e08f0..0x089e0b2c  572 bytes, source=fde */
void func_089e08f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e08f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000044u);
    { c->r[31] = 0x089e093cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f1e54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x00005440u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e0960u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x00005480u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e0984u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x000001e0u;
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x000054c0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e09a8u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089e0a08u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089e0a68u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089e0ac0u; c->r[6] = c->r[2] + 0u; func_089e2300(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089e0b18u; c->r[6] = c->r[2] + 0u; func_089e2300(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e08f0 */
}

/* func_089e2000  0x089e2000..0x089e2048  72 bytes, source=sweep */
void func_089e2000(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2000u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089e2034u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089e3ac4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2000 */
}

/* func_089e3314  0x089e3314..0x089e334c  56 bytes, source=sweep */
void func_089e3314(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3314u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x37000000u;
    { c->r[31] = 0x089e3338u; c->r[5] = c->r[5] | 0x0002u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3314 */
}

/* func_089e4344  0x089e4344..0x089e4564  544 bytes, source=sweep */
void func_089e4344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4344u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4550; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffc278u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089e4390u: goto L_089e4390; case 0x089e43a4u: goto L_089e43a4; case 0x089e43b8u: goto L_089e43b8; case 0x089e43ccu: goto L_089e43cc; case 0x089e43e0u: goto L_089e43e0; case 0x089e43f4u: goto L_089e43f4; case 0x089e4408u: goto L_089e4408; case 0x089e441cu: goto L_089e441c; case 0x089e4430u: goto L_089e4430; case 0x089e4444u: goto L_089e4444; case 0x089e4458u: goto L_089e4458; case 0x089e446cu: goto L_089e446c; case 0x089e4480u: goto L_089e4480; case 0x089e4494u: goto L_089e4494; case 0x089e44acu: goto L_089e44ac; case 0x089e44c4u: goto L_089e44c4; case 0x089e44dcu: goto L_089e44dc; case 0x089e44f4u: goto L_089e44f4; case 0x089e4508u: goto L_089e4508; case 0x089e451cu: goto L_089e451c; case 0x089e4530u: goto L_089e4530; case 0x089e4544u: goto L_089e4544; default: recomp_trap_unknown_indirect(c, ram, 0x089e4388u, _t); return; } }
L_089e4390:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e439cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e46ac(c, ram); }
    { goto L_089e4550; }
L_089e43a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e43b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e46f0(c, ram); }
    { goto L_089e4550; }
L_089e43b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e43c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4d18(c, ram); }
    { goto L_089e4550; }
L_089e43cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e43d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4734(c, ram); }
    { goto L_089e4550; }
L_089e43e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e43ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4778(c, ram); }
    { goto L_089e4550; }
L_089e43f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4400u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e47bc(c, ram); }
    { goto L_089e4550; }
L_089e4408:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4414u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4800(c, ram); }
    { goto L_089e4550; }
L_089e441c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4428u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4844(c, ram); }
    { goto L_089e4550; }
L_089e4430:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e443cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4888(c, ram); }
    { goto L_089e4550; }
L_089e4444:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4450u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e48cc(c, ram); }
    { goto L_089e4550; }
L_089e4458:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4464u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4910(c, ram); }
    { goto L_089e4550; }
L_089e446c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4478u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4954(c, ram); }
    { goto L_089e4550; }
L_089e4480:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e448cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4998(c, ram); }
    { goto L_089e4550; }
L_089e4494:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089e44a4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e49dc(c, ram); }
    { goto L_089e4550; }
L_089e44ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089e44bcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e49dc(c, ram); }
    { goto L_089e4550; }
L_089e44c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089e44d4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e49dc(c, ram); }
    { goto L_089e4550; }
L_089e44dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089e44ecu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e49dc(c, ram); }
    { goto L_089e4550; }
L_089e44f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4500u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4a2c(c, ram); }
    { goto L_089e4550; }
L_089e4508:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4514u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4a70(c, ram); }
    { goto L_089e4550; }
L_089e451c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4528u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4ab4(c, ram); }
    { goto L_089e4550; }
L_089e4530:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e453cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4af8(c, ram); }
    { goto L_089e4550; }
L_089e4544:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4550u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4dc4(c, ram); }
L_089e4550:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4344 */
}

/* func_089e5dec  0x089e5dec..0x089e6354  1384 bytes, source=fde */
void func_089e5dec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e5decu);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f0u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e5e90; }
L_089e5e60:
    { c->r[31] = 0x089e5e68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e5e60; }
L_089e5e90:
    c->r[2] = c->r[30] + 0x00000130u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e5ee8; }
L_089e5eb8:
    { c->r[31] = 0x089e5ec0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e5eb8; }
L_089e5ee8:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089e5eec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e5f08; }
    { goto L_089e5f4c; }
L_089e5f08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000130u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089e5eec; }
L_089e5f4c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089e5f50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e5f6c; }
    { goto L_089e6080; }
L_089e5f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f4u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089e5fc0u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f4u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089e6014u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2fcu);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e6070u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089e5f50; }
L_089e6080:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089e609cu; c->r[7] = c->r[3] + 0u; func_089ebb10(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089e60a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e60bc; }
    { goto L_089e61d0; }
L_089e60bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f4u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089e6110u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f4u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089e6164u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2fcu);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e61c0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089e60a0; }
L_089e61d0:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089e61ecu; c->r[7] = c->r[3] + 0u; func_089ebb10(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089e61f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e620c; }
    { goto L_089e6320; }
L_089e620c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f4u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089e6260u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f4u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2f8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089e62b4u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2fcu);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e6310u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089e61f0; }
L_089e6320:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089e633cu; c->r[7] = c->r[3] + 0u; func_089ebb10(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_089e5dec */
}

/* func_089ea67c  0x089ea67c..0x089ea6d0  84 bytes, source=sweep */
void func_089ea67c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea67cu);
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
    c->r[2] = 0xc1000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea6bcu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea67c */
}

/* func_089eb6dc  0x089eb6dc..0x089eb728  76 bytes, source=sweep */
void func_089eb6dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb6dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[8] = f2u(c->f[0]);
    vfpu_exec(c, ram, 0x48e80001u); /* mtv */
    vfpu_exec(c, ram, 0xd8400000u); /* lv.q */
    vfpu_exec(c, ram, 0x65018082u); /* vscl.q */
    vfpu_exec(c, ram, 0xd0048280u); /* vsat0.q */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb6dc */
}

/* func_089f03b4  0x089f03b4..0x089f03f0  60 bytes, source=sweep */
void func_089f03b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f03b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f03dcu; c->r[6] = 0u + 0x00000001u; func_089f0890(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f03b4 */
}

/* func_089f1170  0x089f1170..0x089f11bc  76 bytes, source=fde */
void func_089f1170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f1170u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] | 0x08dcu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f11a8u; c->r[6] = 0u + 0x00000003u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f1170 */
}

/* func_089f53c8  0x089f53c8..0x089f53f4  44 bytes, source=residue */
void func_089f53c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f53c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f53c8 */
}

/* func_089f6b84  0x089f6b84..0x089f6d90  524 bytes, source=fde */
void func_089f6b84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f6b84u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[30] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f6bbcu; c->r[6] = c->r[2] + 0u; func_089f8254(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f6d70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6be4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f6bf0; }
L_089f6be4:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_089f6d78; }
L_089f6bf0:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0e0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f6c10u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0e0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6c30u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0e4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f6c50u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6c84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f6c6cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f6c7cu; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6ca4; }
L_089f6c84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f6c94u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6ca4u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6ca4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6cd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6cc0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6cd0u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6cf8; }
L_089f6cd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6ce8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6cf8u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6cf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6d2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f6d14u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f6d24u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6d4c; }
L_089f6d2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f6d3cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6d4cu; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6d4c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f6d68u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a021f0(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_089f6d78; }
L_089f6d70:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_089f6d78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089f6b84 */
}

/* func_089f8c6c  0x089f8c6c..0x089f8cbc  80 bytes, source=fde */
void func_089f8c6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8c6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f8c94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089fe4f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000019u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8c6c */
}

/* func_089f9920  0x089f9920..0x089f9940  32 bytes, source=residue */
void func_089f9920(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9920u);
    { int _c = (c->r[4] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_089f9938; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[4] + 0x0000001cu); goto L_089f9938; }
L_089f9938:
    { c->r[2] = c->r[3] + 0u; return; }
    return; /* fell out of func_089f9920 */
}

/* func_089fa43c  0x089fa43c..0x089fa460  36 bytes, source=fde */
void func_089fa43c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa43cu);
    c->r[2] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fa454u; func_089fa048(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa43c */
}

/* func_089fad14  0x089fad14..0x089fad3c  40 bytes, source=sweep */
void func_089fad14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fad14u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00006590u);
    { c->r[31] = 0x089fad30u; c->r[5] = c->r[5] & 0xffffu; func_089fa9f8(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fad14 */
}

/* func_089fba80  0x089fba80..0x089fbb30  176 bytes, source=fde */
void func_089fba80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fba80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000a00u);
    { int _c = ((s32)c->r[3] <= 0); c->r[17] = 0u + 0u; if (_c) goto L_089fbaec; }
    c->r[20] = 0u + 0xffffffffu;
    c->r[16] = c->r[4] + 0u;
L_089fbab8:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    if (c->r[2] == c->r[20]) { c->r[17] = c->r[17] + 0x00000001u; goto L_089fbae0; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000018u);
    c->r[2] = c->r[2] - c->r[19];
    { int _c = ((s32)c->r[2] <= 0); c->r[6] = c->r[16] + 0u; if (_c) goto L_089fbb10; }
    mem_w32(ram, c->r[16] + 0x00000018u, c->r[2]);
L_089fbad8:
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000a00u);
    c->r[17] = c->r[17] + 0x00000001u;
L_089fbae0:
    c->r[2] = ((s32)c->r[17] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0x00000028u; if (_c) goto L_089fbab8; }
L_089fbaec:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fbb10:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000024u);
    c->r[4] = mem_r16(ram, c->r[16] + 0x00000006u);
    c->r[5] = mem_r16(ram, c->r[16] + 0x00000004u);
    mem_w32(ram, c->r[16] + 0x00000018u, 0u);
    { c->r[31] = 0x089fbb28u; mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]); func_089fd7d4(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[20]); goto L_089fbad8; }
    return; /* fell out of func_089fba80 */
}

/* func_089fc520  0x089fc520..0x089fc56c  76 bytes, source=sweep */
void func_089fc520(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc520u);
    c->r[5] = 0x80000000u;
    { int _c = (c->r[4] == 0u); c->r[5] = c->r[5] | 0x001au; if (_c) goto L_089fc564; }
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = 0x08ba0000u;
    c->r[6] = c->r[2] + 0xffff88b8u;
    c->r[2] = c->r[3] << 4;
    c->r[3] = ((s32)c->r[3] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[2] + c->r[6]; if (_c) goto L_089fc564; }
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[6];
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
L_089fc564:
    { c->r[2] = c->r[5] + 0u; return; }
    return; /* fell out of func_089fc520 */
}

/* func_089fda90  0x089fda90..0x089fda9c  12 bytes, source=sweep */
void func_089fda90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fda90u);
    c->r[3] = 0x08ba0000u;
    { c->r[2] = mem_r32(ram, c->r[3] + 0xffff92d8u); return; }
    return; /* fell out of func_089fda90 */
}

/* func_089fe9f4  0x089fe9f4..0x089fea88  148 bytes, source=residue */
void func_089fe9f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe9f4u);
    c->r[2] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000016cu);
    c->r[6] = c->r[4] << 3;
    c->r[6] = c->r[6] - c->r[4];
    c->r[3] = ((s32)c->r[4] < (s32)c->r[3]) ? 1u : 0u;
    c->r[2] = 0x08ba0000u;
    c->r[4] = c->r[4] >> 31;
    c->r[3] = c->r[3] ^ 0x0001u;
    c->r[6] = c->r[6] << 5;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[3] = c->r[3] | c->r[4];
    c->r[4] = 0x80000000u;
    c->r[6] = c->r[6] + c->r[2];
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[4] | 0x000au; if (_c) goto L_089fea80; }
    c->r[2] = mem_r16(ram, c->r[6] + 0x00000010u);
    c->r[3] = 0x24920000u;
    c->r[5] = c->r[5] >> 2;
    c->r[2] = c->r[2] + 0xfffffffeu;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    c->r[3] = c->r[3] | 0x4925u;
    { int _c = (c->r[2] != 0u); c->r[4] = 0x80000000u; if (_c) goto L_089fea80; }
    alx_multu(c, c->r[5], c->r[3]);
    c->r[4] = 0u + 0u;
    c->r[2] = c->hi;
    c->r[2] = c->r[2] << 4;
    c->r[3] = (u32)((s32)c->r[2] >> 31);
    c->r[3] = c->r[3] >> 20;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> 12);
    c->r[2] = c->r[2] << 12;
    mem_w32(ram, c->r[6] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[6] + 0x00000088u, c->r[2]);
L_089fea80:
    { c->r[2] = c->r[4] + 0u; return; }
    return; /* fell out of func_089fe9f4 */
}

/* func_08a00b60  0x08a00b60..0x08a00df4  660 bytes, source=residue */
void func_08a00b60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a00b60u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    c->r[17] = 0u + 0x00000094u;
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[2] + 0x000001d8u;
    c->r[6] = 0u + 0x00000005u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[7] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd2f0u;
    alx_mult(c, c->r[7], c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[7]);
    c->r[4] = c->lo;
    { c->r[31] = 0x08a00bacu; c->r[4] = c->r[4] + c->r[16]; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[7] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a00dd8; }
    c->r[3] = 0u + 0x00000400u;
    alx_mult(c, c->r[7], c->r[17]);
    c->r[2] = c->lo;
    c->r[2] = c->r[16] + c->r[2];
    mem_w32(ram, c->r[2] + 0xffffffd8u, c->r[3]);
L_08a00bc8:
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[7], c->r[2]);
    c->r[20] = 0x08ba0000u;
    c->r[3] = c->r[20] + 0x00000184u;
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[4] == 0u); c->r[18] = 0u + 0x00000094u; if (_c) goto L_08a00c34; }
    c->r[5] = 0x02420000u;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffd2e8u;
    c->r[5] = c->r[5] | 0x5823u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = c->r[29] + 0u;
    { c->r[31] = 0x08a00c10u; c->r[9] = 0u + 0x00000004u; hle_dispatch_stub(c, ram, 0x08a246ccu); /* sceIoDevctl */ }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a00c24; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[3] = (c->r[2] < 0x00000001u) ? 1u : 0u;
L_08a00c24:
    { int _c = (c->r[3] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a00db0; }
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[18] = 0u + 0x00000094u;
L_08a00c34:
    alx_mult(c, c->r[7], c->r[18]);
    c->r[17] = c->r[20] + 0x00000184u;
    c->r[4] = c->r[17] + 0x00000054u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0u;
    c->r[16] = c->lo;
    { c->r[31] = 0x08a00c54u; c->r[4] = c->r[16] + c->r[4]; hle_dispatch_stub(c, ram, 0x08a246f4u); /* sceIoOpenAsync */ }
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[16] = c->r[16] + c->r[17];
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    alx_mult(c, c->r[7], c->r[18]);
    c->r[19] = c->r[17] + 0u;
    c->r[18] = c->lo;
    c->r[18] = c->r[18] + c->r[17];
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000014u);
    { int _c = ((s32)c->r[2] < 0); c->r[16] = 0u + 0x00000094u; if (_c) goto L_08a00dcc; }
L_08a00c7c:
    alx_mult(c, c->r[7], c->r[16]);
    c->r[5] = c->r[29] + 0x00000008u;
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[19];
    { c->r[31] = 0x08a00c94u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u); hle_dispatch_stub(c, ram, 0x08a24724u); /* sceIoPollAsync */ }
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu); if (_c) goto L_08a00cac; }
    { c->r[31] = 0x08a00ca4u; hle_dispatch_stub(c, ram, 0x08a249e4u); /* sceDisplayWaitVblankStart */ }
    { c->r[7] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a00c7c; }
L_08a00cac:
    { int _c = ((s32)c->r[2] < 0); c->r[8] = 0u + 0u; if (_c) goto L_08a00dac; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
    alx_mult(c, c->r[2], c->r[16]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[19];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08a00cd8u; c->r[7] = (u32)((s32)c->r[3] >> 31); hle_dispatch_stub(c, ram, 0x08a2471cu); /* sceIoLseek */ }
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000010u);
    alx_mult(c, c->r[7], c->r[16]);
    c->r[7] = c->lo;
    c->r[7] = c->r[7] + c->r[19];
    c->r[6] = mem_r32(ram, c->r[7] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[7] + 0x00000014u);
    { c->r[31] = 0x08a00cf8u; c->r[5] = mem_r32(ram, c->r[7] + 0x00000008u); hle_dispatch_stub(c, ram, 0x08a246fcu); /* sceIoReadAsync */ }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a00cfc:
    c->r[16] = 0u + 0x00000094u;
    c->r[17] = c->r[20] + 0x00000184u;
    alx_mult(c, c->r[2], c->r[16]);
    c->r[5] = c->r[29] + 0x00000008u;
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    { c->r[31] = 0x08a00d1cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u); hle_dispatch_stub(c, ram, 0x08a24724u); /* sceIoPollAsync */ }
    if (c->r[2] == 0u) { c->r[2] = c->r[29] + 0x00000008u; goto L_08a00d34; }
    { c->r[31] = 0x08a00d2cu; hle_dispatch_stub(c, ram, 0x08a249e4u); /* sceDisplayWaitVblankStart */ }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a00cfc; }
L_08a00d34:
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[3] < 0); c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a00d94; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[5] = 0u + 0x00000004u;
    alx_mult(c, c->r[2], c->r[16]);
    c->r[6] = c->r[29] + 0x00000010u;
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000038u);
    { c->r[31] = 0x08a00d64u; mem_w32(ram, c->r[2] + 0x00000024u, c->r[3]); hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    { c->r[31] = 0x08a00d6cu; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a248c4u); /* sceKernelExitThread */ }
    c->r[5] = 0u + 0u;
L_08a00d70:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a00d94:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000008u);
    alx_mult(c, c->r[2], c->r[16]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
L_08a00da4:
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08a00d70; }
L_08a00dac:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a00db0:
    c->r[3] = 0u + 0x00000094u;
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000008u);
    alx_mult(c, c->r[2], c->r[3]);
    c->r[4] = c->r[20] + 0x00000184u;
    c->r[2] = c->lo;
    { c->r[2] = c->r[2] + c->r[4]; goto L_08a00da4; }
L_08a00dcc:
    c->r[5] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[18] + 0x00000000u, 0u); goto L_08a00d70; }
L_08a00dd8:
    c->r[2] = c->r[16] + 0xffffffacu;
    alx_mult(c, c->r[7], c->r[17]);
    c->r[3] = c->lo;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000004u);
    { mem_w32(ram, c->r[3] + 0x0000002cu, c->r[4]); goto L_08a00bc8; }
    return; /* fell out of func_08a00b60 */
}

/* func_08a02360  0x08a02360..0x08a02368  8 bytes, source=residue */
void func_08a02360(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02360u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_08a02360 */
}

/* func_08a03170  0x08a03170..0x08a03178  8 bytes, source=sweep */
void func_08a03170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03170u);
    { return; }
    return; /* fell out of func_08a03170 */
}

/* func_08a04158  0x08a04158..0x08a042c4  364 bytes, source=residue */
void func_08a04158(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04158u);
    c->r[2] = 0x80440000u;
    c->r[8] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    c->r[3] = (c->r[5] < 0x00000080u) ? 1u : 0u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[2] | 0x0005u; if (_c) goto L_08a0426c; }
    c->r[9] = 0x80440000u;
    c->r[8] = (c->r[6] < 0x00000080u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[7] = c->r[9] | 0x000au; if (_c) goto L_08a0426c; }
    c->r[7] = 0x08ba0000u;
    c->r[3] = 0x80440000u;
    c->r[2] = c->r[7] + 0xffffaa78u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[3] | 0x000au; if (_c) goto L_08a0426c; }
    c->r[8] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[8]);
    c->r[12] = 0x80440000u;
    c->r[8] = c->r[2] + 0u;
    c->r[11] = c->lo;
    c->r[3] = c->r[11] + c->r[2];
    c->r[10] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[10] != 0u); c->r[7] = c->r[12] | 0x0006u; if (_c) goto L_08a041c4; }
    c->r[14] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[13] = c->r[14] & 0x0400u;
    { int _c = (c->r[13] == 0u); if (_c) goto L_08a0426c; }
L_08a041c4:
    c->r[11] = c->r[5] << 12;
    c->r[5] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[5]);
    c->r[10] = c->r[6] << 12;
    c->r[7] = 0x08ba0000u;
    c->r[15] = 0x81020000u;
    c->r[5] = (u32)((s32)c->r[11] >> 31);
    c->r[2] = c->lo;
    c->r[8] = c->r[2] + c->r[8];
    c->r[25] = mem_r32(ram, c->r[8] + 0x0000001cu);
    c->r[24] = (u32)((s32)c->r[10] >> 31);
    c->r[4] = c->r[7] + 0xffffacd8u;
    c->r[13] = c->r[15] | 0x0409u;
    c->r[6] = c->r[10] + 0u;
    c->r[14] = c->r[5] + 0u;
    c->r[15] = c->r[24] + 0u;
    { int _c = (c->r[25] == 0u); c->r[7] = c->r[2] + c->r[4]; if (_c) goto L_08a04274; }
    alx_mult(c, c->r[10], c->r[13]);
    c->r[10] = mem_r32(ram, c->r[8] + 0x00000018u);
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[7] + 0x0000001cu, c->r[4]);
    c->r[5] = c->hi;
    alx_mult(c, c->r[11], c->r[13]);
    c->r[3] = c->r[5] + c->r[6];
    c->r[2] = (u32)((s32)c->r[3] >> 6);
    c->r[6] = c->r[2] - c->r[15];
    mem_w32(ram, c->r[7] + 0x0000002cu, 0u);
    c->r[25] = c->hi;
    c->r[13] = c->r[25] + c->r[11];
    c->r[12] = (u32)((s32)c->r[13] >> 6);
    c->r[11] = 0x00110000u;
    c->r[24] = c->r[12] - c->r[14];
    c->r[9] = c->r[10] | c->r[11];
    mem_w32(ram, c->r[7] + 0x00000020u, 0u);
    mem_w32(ram, c->r[7] + 0x00000030u, 0u);
    mem_w32(ram, c->r[7] + 0x00000034u, 0u);
    mem_w32(ram, c->r[8] + 0x00000018u, c->r[9]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[24]);
    mem_w32(ram, c->r[7] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[7] + 0x00000028u, 0u);
L_08a04268:
    c->r[7] = 0u + 0u;
L_08a0426c:
    { c->r[2] = c->r[7] + 0u; return; }
L_08a04274:
    alx_mult(c, c->r[10], c->r[13]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[8] + 0x0000001cu, c->r[2]);
    c->r[25] = c->hi;
    alx_mult(c, c->r[11], c->r[13]);
    c->r[13] = c->r[25] + c->r[10];
    c->r[15] = (u32)((s32)c->r[13] >> 6);
    c->r[14] = c->r[15] - c->r[24];
    mem_w32(ram, c->r[8] + 0x0000002cu, 0u);
    c->r[12] = c->hi;
    c->r[9] = c->r[12] + c->r[11];
    c->r[6] = (u32)((s32)c->r[9] >> 6);
    c->r[7] = c->r[6] - c->r[5];
    mem_w32(ram, c->r[8] + 0x00000020u, 0u);
    mem_w32(ram, c->r[8] + 0x00000030u, 0u);
    mem_w32(ram, c->r[8] + 0x00000034u, 0u);
    mem_w32(ram, c->r[8] + 0x00000028u, 0u);
    mem_w32(ram, c->r[8] + 0x00000008u, c->r[7]);
    { mem_w32(ram, c->r[8] + 0x0000000cu, c->r[14]); goto L_08a04268; }
    return; /* fell out of func_08a04158 */
}

/* func_08a05c90  0x08a05c90..0x08a05ce0  80 bytes, source=sweep */
void func_08a05c90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05c90u);
    c->r[7] = 0x08ba0000u;
    c->r[6] = mem_r32(ram, c->r[7] + 0xffffaf80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[7] = c->r[5] + 0u;
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a05cd4; }
    c->r[2] = 0x08ba0000u;
    c->r[8] = 0x80420000u;
    c->r[5] = c->r[4] + 0u;
    c->r[6] = c->r[7] + 0u;
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[7] == 0u); c->r[2] = c->r[8] | 0x0012u; if (_c) goto L_08a05cd4; }
    { c->r[31] = 0x08a05cd4u; hle_dispatch_stub(c, ram, 0x08a24cf4u); /* __sceSasSetPitch */ }
L_08a05cd4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05c90 */
}

/* func_08a06c38  0x08a06c38..0x08a06c44  12 bytes, source=residue */
void func_08a06c38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06c38u);
    c->r[3] = ~(0u | c->r[4]);
    { c->r[2] = c->r[3] >> 31; return; }
    return; /* fell out of func_08a06c38 */
}

/* func_08a0b6e4  0x08a0b6e4..0x08a0be5c  1912 bytes, source=sweep */
void func_08a0b6e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0b6e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = ~(0u | c->r[3]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
L_08a0b710:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0b78c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0b734; }
    { goto L_08a0b78c; }
L_08a0b734:
    c->r[5] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] ^ c->r[2];
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[6] >> 8;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0b710; }
L_08a0b78c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08a0b794:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0b7ac; }
    { goto L_08a0bcfc; }
L_08a0b7ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffe0u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0b794; }
L_08a0bcfc:
L_08a0bd00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0bd18; }
    { goto L_08a0bdd0; }
L_08a0bd18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff064u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffec64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0bd00; }
L_08a0bdd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0be3c; }
L_08a0bde4:
    c->r[5] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[6] >> 8;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); if (_c) goto L_08a0bde4; }
L_08a0be3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ~(0u | c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a0b6e4 */
}

/* func_08a0e318  0x08a0e318..0x08a0e328  16 bytes, source=indirect */
void func_08a0e318(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e318u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000510u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); return; }
    return; /* fell out of func_08a0e318 */
}

/* func_08a0e790  0x08a0e790..0x08a0e7b8  40 bytes, source=indirect */
void func_08a0e790(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e790u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000005d0u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e7acu; func_08a0e6e0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e790 */
}

/* func_08a10f28  0x08a10f28..0x08a11174  588 bytes, source=sweep */
void func_08a10f28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a10f28u);
    c->r[5] = f2u(c->f[13]);
    c->r[4] = f2u(c->f[12]);
    c->r[2] = 0x7f800000u;
    c->r[5] = alx_ins(c->r[5], 0u, 31u, 31u);
    c->r[4] = alx_ins(c->r[4], 0u, 31u, 31u);
    c->r[3] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[5]) ? 1u : 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->f[1] = c->f[12];
    c->r[6] = f2u(c->f[13]);
    c->r[7] = f2u(c->f[12]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a10f78; }
    c->f[0] = c->f[13] + c->f[12];
L_08a10f68:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
L_08a10f6c:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a10f78:
    c->r[2] = 0x3f800000u;
    { int _c = (c->r[6] == c->r[2]); c->r[2] = (u32)((s32)c->r[6] >> 30); if (_c) goto L_08a11164; }
    c->r[2] = c->r[2] & 0x0002u;
    c->r[3] = c->r[7] >> 31;
    { int _c = (c->r[4] != 0u); c->r[16] = c->r[3] | c->r[2]; if (_c) goto L_08a10fb0; }
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[16] == c->r[2]); c->r[2] = ((s32)c->r[16] < (s32)0x00000003u) ? 1u : 0u; if (_c) goto L_08a110d0; }
    if (c->r[2] == 0u) { c->r[2] = 0u + 0x00000003u; goto L_08a11154; }
    { int _c = ((s32)c->r[16] >= 0); c->f[0] = c->f[12]; if (_c) goto L_08a10f68; }
L_08a10fb0:
    { int _c = (c->r[5] == 0u); c->r[2] = 0x7f800000u; if (_c) goto L_08a11080; }
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_08a1109c; }
L_08a10fc0:
    { int _c = (c->r[4] == c->r[2]); c->r[2] = c->r[4] - c->r[5]; if (_c) goto L_08a11080; }
    c->r[4] = (u32)((s32)c->r[2] >> 23);
    c->r[3] = ((s32)c->r[4] < (s32)0x0000003du) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[6] >> 31; if (_c) goto L_08a11054; }
    c->r[2] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000093cu);
L_08a10fe0:
    c->r[2] = 0u + 0x00000001u;
L_08a10fe4:
    { int _c = (c->r[16] == c->r[2]); c->r[2] = ((s32)c->r[16] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a1103c; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a1102c; }
    { int _c = (c->r[16] == c->r[2]); c->r[2] = 0x08a50000u; if (_c) goto L_08a11014; }
L_08a10ffc:
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000940u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000918u);
    c->f[0] = c->f[2] - c->f[0];
    { c->f[0] = c->f[0] - c->f[1]; goto L_08a10f68; }
L_08a11014:
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000940u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000918u);
    c->f[0] = c->f[2] - c->f[0];
    { c->f[0] = c->f[1] - c->f[0]; goto L_08a10f68; }
L_08a1102c:
    { int _c = (c->r[16] == 0u); c->f[0] = c->f[2]; if (_c) goto L_08a10f68; }
    { c->r[2] = 0x08a50000u; goto L_08a10ffc; }
L_08a1103c:
    c->r[3] = f2u(c->f[2]);
    c->r[2] = 0x80000000u;
    c->r[3] = c->r[3] ^ c->r[2];
    c->f[0] = u2f(c->r[3]);
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a10f6c; }
L_08a11054:
    c->r[3] = ((s32)c->r[4] < (s32)0xffffffc4u) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    c->f[2] = u2f(0u);
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a10fe4; }
    { c->r[31] = 0x08a11070u; c->f[12] = c->f[1] / c->f[13]; func_08a13008(c, ram); }
    { c->r[31] = 0x08a11078u; c->f[12] = c->f[0]; func_08a12d6c(c, ram); }
    { c->f[2] = c->f[0]; goto L_08a10fe0; }
L_08a11080:
    { int _c = ((s32)c->r[7] < 0); c->r[2] = 0x08a50000u; if (_c) goto L_08a11090; }
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000924u); goto L_08a10f68; }
L_08a11090:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000920u); goto L_08a10f68; }
L_08a1109c:
    { int _c = (c->r[4] == c->r[5]); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a110fc; }
    { int _c = (c->r[16] == c->r[2]); c->r[2] = ((s32)c->r[16] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a110f0; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a110dc; }
    { int _c = (c->r[16] == c->r[2]); c->r[2] = 0u + 0x00000003u; if (_c) goto L_08a110d0; }
    { int _c = (c->r[16] != c->r[2]); c->r[2] = 0x7f800000u; if (_c) goto L_08a10fc0; }
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x0000091cu); goto L_08a10f68; }
L_08a110d0:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000918u); goto L_08a10f68; }
L_08a110dc:
    c->f[0] = u2f(0u);
    { int _c = (c->r[16] != 0u); c->r[2] = 0x7f800000u; if (_c) goto L_08a10fc0; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a10f6c; }
L_08a110f0:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000938u); goto L_08a10f68; }
L_08a110fc:
    { int _c = (c->r[16] == c->r[2]); c->r[2] = ((s32)c->r[16] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a11148; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a11134; }
    { int _c = (c->r[16] == c->r[2]); c->r[2] = 0u + 0x00000003u; if (_c) goto L_08a11128; }
    { int _c = (c->r[16] != c->r[2]); c->r[2] = 0x7f800000u; if (_c) goto L_08a10fc0; }
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000934u); goto L_08a10f68; }
L_08a11128:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000930u); goto L_08a10f68; }
L_08a11134:
    { int _c = (c->r[16] != 0u); c->r[2] = 0x7f800000u; if (_c) goto L_08a10fc0; }
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000928u); goto L_08a10f68; }
L_08a11148:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x0000092cu); goto L_08a10f68; }
L_08a11154:
    { int _c = (c->r[16] != c->r[2]); c->r[2] = 0x08a50000u; if (_c) goto L_08a10fb0; }
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x0000091cu); goto L_08a10f68; }
L_08a11164:
    { c->r[31] = 0x08a1116cu; func_08a12d6c(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u); goto L_08a10f6c; }
    return; /* fell out of func_08a10f28 */
}

/* func_08a14510  0x08a14510..0x08a14554  68 bytes, source=sweep */
void func_08a14510(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14510u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[29] + 0x00000020u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[3]);
    { c->r[31] = 0x08a14534u; c->r[5] = c->r[29] + 0u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    { c->r[31] = 0x08a14548u; mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]); func_08a183fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08a14510 */
}

/* func_08a1686c  0x08a1686c..0x08a16874  8 bytes, source=sweep */
void func_08a1686c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1686cu);
    { c->r[2] = mem_r32(ram, c->r[4] + 0x00000350u); return; }
    return; /* fell out of func_08a1686c */
}

/* func_08a18664  0x08a18664..0x08a18778  276 bytes, source=sweep */
void func_08a18664(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18664u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[8] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[10] = c->r[5] + 0u;
    c->r[3] = c->r[2] >> 31;
    c->r[9] = c->r[2] + 0u;
    c->r[7] = alx_ext(c->r[2], 20u, 10u);
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[3]);
    { int _c = (c->r[7] != 0u); c->r[9] = alx_ins(c->r[9], 0u, 20u, 31u); if (_c) goto L_08a18704; }
    c->r[2] = c->r[8] | c->r[9];
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[8] >> 24; if (_c) goto L_08a186a0; }
    c->r[2] = 0u + 0x00000002u;
L_08a18698:
    { mem_w32(ram, c->r[10] + 0x00000000u, c->r[2]); return; }
L_08a186a0:
    c->r[4] = 0x0fff0000u;
    c->r[9] = c->r[9] << 8;
    c->r[9] = c->r[9] | c->r[2];
    c->r[4] = c->r[4] | 0xffffu;
    c->r[2] = 0u + 0xfffffc02u;
    c->r[3] = 0u + 0x00000003u;
    c->r[4] = (c->r[4] < c->r[9]) ? 1u : 0u;
    c->r[8] = c->r[8] << 8;
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]); if (_c) goto L_08a186f8; }
    c->r[5] = 0x0fff0000u;
    c->r[5] = c->r[5] | 0xffffu;
    c->r[4] = 0u + 0xfffffc02u;
L_08a186d8:
    c->r[3] = c->r[8] >> 31;
    c->r[9] = c->r[9] << 1;
    c->r[9] = c->r[9] | c->r[3];
    c->r[2] = (c->r[5] < c->r[9]) ? 1u : 0u;
    c->r[8] = c->r[8] << 1;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[4] + 0xffffffffu; if (_c) goto L_08a186d8; }
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[4]);
L_08a186f8:
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[8]);
    { mem_w32(ram, c->r[10] + 0x00000014u, c->r[9]); return; }
L_08a18704:
    c->r[2] = 0u + 0x000007ffu;
    { int _c = (c->r[7] == c->r[2]); c->r[6] = c->r[8] >> 24; if (_c) goto L_08a18744; }
    c->r[3] = c->r[9] << 8;
    c->r[3] = c->r[3] | c->r[6];
    c->r[4] = 0u + 0x00000000u;
    c->r[5] = 0x10000000u;
    c->r[2] = c->r[8] << 8;
    c->r[2] = c->r[2] | c->r[4];
    c->r[3] = c->r[3] | c->r[5];
    c->r[6] = c->r[7] + 0xfffffc01u;
    mem_w32(ram, c->r[10] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[10] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[10] + 0x00000008u, c->r[6]); goto L_08a18698; }
L_08a18744:
    c->r[2] = c->r[8] | c->r[9];
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000004u; if (_c) goto L_08a18698; }
    c->r[2] = 0u + 0x00000000u;
    c->r[3] = 0x00080000u;
    c->r[2] = c->r[8] & c->r[2];
    c->r[3] = c->r[9] & c->r[3];
    c->r[2] = c->r[2] | c->r[3];
    if (c->r[2] == 0u) { mem_w32(ram, c->r[5] + 0x00000000u, 0u); goto L_08a186f8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]); goto L_08a186f8; }
    return; /* fell out of func_08a18664 */
}

/* func_08a191b8  0x08a191b8..0x08a191d4  28 bytes, source=sweep */
void func_08a191b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a191b8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a191c8u; c->r[5] = 0u + 0u; func_08a1c254(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a191b8 */
}

/* func_08a1a9a0  0x08a1a9a0..0x08a1aa28  136 bytes, source=sweep */
void func_08a1a9a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a9a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = (c->r[5] < 0x00000020u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[3] = 0u + 0xffffffffu;
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]); if (_c) goto L_08a1a9f0; }
    c->r[2] = 0u + 0x00000016u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08a1a9d4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1a9f0:
    c->r[5] = mem_r32(ram, c->r[4] + 0x00000258u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_08a1aa10; }
L_08a1a9fc:
    c->r[2] = c->r[17] << 2;
    c->r[2] = c->r[2] + c->r[5];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[18]); goto L_08a1a9d4; }
L_08a1aa10:
    { c->r[31] = 0x08a1aa18u; func_08a1a940(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a1a9d4; }
    { c->r[5] = mem_r32(ram, c->r[16] + 0x00000258u); goto L_08a1a9fc; }
    return; /* fell out of func_08a1a9a0 */
}

/* func_08a1d758  0x08a1d758..0x08a1f170  6680 bytes, source=sweep */
void func_08a1d758(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1d758u);
    c->r[29] = c->r[29] + 0xfffffd70u;
    mem_w32(ram, c->r[29] + 0x00000260u, c->r[16]);
    c->r[16] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x0000021cu, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000284u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000280u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000027cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000278u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000274u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000270u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000026cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000268u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000264u, c->r[17]);
    { c->r[31] = 0x08a1d798u; mem_w32(ram, c->r[29] + 0x00000224u, c->r[7]); func_08a2201c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000240u, 0u);
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[2]);
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    c->r[2] = c->r[3] & 0x0008u;
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000023cu, c->r[5]);
    mem_w32(ram, c->r[29] + 0x0000024cu, 0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000250u, 0u); if (_c) goto L_08a1d7dc; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000220u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000010u);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] & 0x001au; if (_c) goto L_08a1d7f8; }
L_08a1d7dc:
    { c->r[31] = 0x08a1d7e4u; c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u); func_08a1fb68(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a1ddd8; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000220u);
    c->r[3] = mem_r16(ram, c->r[6] + 0x0000000cu);
    c->r[3] = c->r[3] & 0x001au;
L_08a1d7f8:
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x00000220u); if (_c) goto L_08a1f150; }
L_08a1d804:
    c->r[18] = c->r[29] + 0x00000040u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[18]);
    c->r[19] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, 0u);
    mem_w32(ram, c->r[29] + 0x0000022cu, 0u);
    mem_w32(ram, c->r[29] + 0x00000034u, 0u);
L_08a1d81c:
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
L_08a1d820:
    c->r[2] = alx_seb(c->r[6]);
    c->r[3] = c->r[2] ^ 0x0025u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[20] = c->r[19] + 0u; if (_c) goto L_08a1d860; }
    c->r[19] = c->r[19] + 0x00000001u;
L_08a1d840:
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[2] = alx_seb(c->r[6]);
    c->r[3] = c->r[2] ^ 0x0025u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    if (c->r[2] != 0u) { c->r[19] = c->r[19] + 0x00000001u; goto L_08a1d840; }
L_08a1d860:
    c->r[17] = c->r[19] - c->r[20];
    { int _c = (c->r[17] == 0u); c->r[2] = alx_seb(c->r[6]); if (_c) goto L_08a1d8ac; }
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + c->r[17];
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1f134; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000022cu);
L_08a1d89c:
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[4] = c->r[4] + c->r[17];
    mem_w32(ram, c->r[29] + 0x0000022cu, c->r[4]);
    c->r[2] = alx_seb(c->r[6]);
L_08a1d8ac:
    { int _c = (c->r[2] == 0u); c->r[19] = c->r[19] + 0x00000001u; if (_c) goto L_08a1f0fc; }
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[21] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000228u, 0u);
    mem_w32(ram, c->r[29] + 0x00000244u, 0u);
    mem_w32(ram, c->r[29] + 0x00000230u, 0u);
    mem_w8(ram, c->r[29] + 0x00000010u, 0u);
L_08a1d8cc:
    c->r[23] = alx_seb(c->r[6]);
    c->r[19] = c->r[19] + 0x00000001u;
L_08a1d8d4:
    c->r[3] = c->r[23] + 0xffffffe0u;
L_08a1d8d8:
    c->r[2] = (c->r[3] < 0x00000059u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] << 2; if (_c) goto L_08a1f0e8; }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x0000197cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a1d8fcu: goto L_08a1d8fc; case 0x08a1d91cu: goto L_08a1d91c; case 0x08a1d930u: goto L_08a1d930; case 0x08a1d954u: goto L_08a1d954; case 0x08a1d968u: goto L_08a1d968; case 0x08a1d974u: goto L_08a1d974; case 0x08a1d9e8u: goto L_08a1d9e8; case 0x08a1d9fcu: goto L_08a1d9fc; case 0x08a1da34u: goto L_08a1da34; case 0x08a1da40u: goto L_08a1da40; case 0x08a1e97cu: goto L_08a1e97c; case 0x08a1e98cu: goto L_08a1e98c; case 0x08a1e998u: goto L_08a1e998; case 0x08a1ea24u: goto L_08a1ea24; case 0x08a1ea30u: goto L_08a1ea30; case 0x08a1eab8u: goto L_08a1eab8; case 0x08a1eb68u: goto L_08a1eb68; case 0x08a1ebecu: goto L_08a1ebec; case 0x08a1ee54u: goto L_08a1ee54; case 0x08a1ee64u: goto L_08a1ee64; case 0x08a1ee98u: goto L_08a1ee98; case 0x08a1ef34u: goto L_08a1ef34; case 0x08a1ef6cu: goto L_08a1ef6c; case 0x08a1ef7cu: goto L_08a1ef7c; case 0x08a1f0e8u: goto L_08a1f0e8; case 0x08a1f128u: goto L_08a1f128; default: recomp_trap_unknown_indirect(c, ram, 0x08a1d8f4u, _t); return; } }
L_08a1d8fc:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[29] + 0x00000010u);
    { int _c = (c->r[2] != 0u); c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u); if (_c) goto L_08a1d8cc; }
    c->r[3] = 0u + 0x00000020u;
L_08a1d90c:
    { mem_w8(ram, c->r[29] + 0x00000010u, c->r[3]); goto L_08a1d8cc; }
L_08a1d914:
    { c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u); goto L_08a1d8cc; }
L_08a1d91c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[5] = c->r[5] | 0x0001u;
L_08a1d928:
    { mem_w32(ram, c->r[29] + 0x00000228u, c->r[5]); goto L_08a1d8cc; }
L_08a1d930:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[6] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[6]);
    { int _c = ((s32)c->r[2] >= 0); mem_w32(ram, c->r[29] + 0x00000230u, c->r[2]); if (_c) goto L_08a1d914; }
    c->r[2] = 0u - c->r[2];
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[2]);
L_08a1d954:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0004u;
L_08a1d960:
    { mem_w32(ram, c->r[29] + 0x00000228u, c->r[2]); goto L_08a1d8cc; }
L_08a1d968:
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    { c->r[3] = 0u + 0x0000002bu; goto L_08a1d90c; }
L_08a1d974:
    c->r[23] = (u32)(s32)(s8)mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[2] = 0u + 0x0000002au;
    { int _c = (c->r[23] == c->r[2]); c->r[19] = c->r[19] + 0x00000001u; if (_c) goto L_08a1d9c8; }
    c->r[2] = c->r[23] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[16] = 0u + 0u; if (_c) goto L_08a1d9bc; }
L_08a1d994:
    c->r[2] = c->r[16] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[23];
    c->r[23] = (u32)(s32)(s8)mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[16] = c->r[2] + 0xffffffd0u;
    c->r[2] = c->r[23] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[19] = c->r[19] + 0x00000001u; if (_c) goto L_08a1d994; }
L_08a1d9bc:
    c->r[2] = 0u + 0xffffffffu;
    { c->r[21] = alx_max(c->r[16], c->r[2]); goto L_08a1d8d4; }
L_08a1d9c8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[21] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000004u;
    { int _c = ((s32)c->r[21] >= 0); mem_w32(ram, c->r[29] + 0x00000224u, c->r[3]); if (_c) goto L_08a1d914; }
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    { c->r[21] = 0u + 0xffffffffu; goto L_08a1d8cc; }
L_08a1d9e8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[4] = c->r[4] | 0x0080u;
L_08a1d9f4:
    { mem_w32(ram, c->r[29] + 0x00000228u, c->r[4]); goto L_08a1d8cc; }
L_08a1d9fc:
    c->r[16] = 0u + 0u;
L_08a1da00:
    c->r[2] = c->r[16] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[23];
    c->r[23] = (u32)(s32)(s8)mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[16] = c->r[2] + 0xffffffd0u;
    c->r[19] = c->r[19] + 0x00000001u;
    c->r[2] = c->r[23] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000230u, c->r[16]); if (_c) goto L_08a1da00; }
    { c->r[3] = c->r[23] + 0xffffffe0u; goto L_08a1d8d8; }
L_08a1da34:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[5] = c->r[5] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x00000228u, c->r[5]);
L_08a1da40:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[6] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1e928; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[2] = c->r[2] + 0x00000007u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[3]);
L_08a1da6c:
    { int _c = ((s32)c->r[17] < 0); c->r[3] = 0u + 0x0000002du; if (_c) goto L_08a1e910; }
L_08a1da74:
    c->r[5] = 0u + 0x00000001u;
L_08a1da78:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[3] = c->r[16] | c->r[17];
    c->r[2] = (0u < c->r[21]) ? 1u : 0u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    c->r[4] = alx_ins(c->r[4], 0u, 7u, 7u);
    c->r[2] = ((s32)c->r[21] < (s32)0x00000000u) ? 1u : 0u;
    if (c->r[2] == 0u) c->r[6] = c->r[4];
    mem_w32(ram, c->r[29] + 0x00000244u, c->r[21]);
    c->r[20] = c->r[29] + 0x000001dcu;
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x00000228u, c->r[6]); if (_c) goto L_08a1e8e8; }
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[5] == c->r[2]); c->r[2] = ((s32)c->r[5] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a1e868; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a1e810; }
    { int _c = (c->r[5] == c->r[2]); c->r[5] = mem_r32(ram, c->r[29] + 0x0000024cu); if (_c) goto L_08a1e7d8; }
    c->r[2] = 0x08a50000u;
L_08a1dacc:
    c->r[20] = c->r[2] + 0x00001920u;
L_08a1dad0:
    { c->r[31] = 0x08a1dad8u; c->r[4] = c->r[20] + 0u; func_08a1b008(c, ram); }
    c->r[22] = c->r[2] + 0u;
L_08a1dadc:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000244u);
L_08a1dae0:
    c->r[3] = mem_r8(ram, c->r[29] + 0x00000010u);
    c->r[2] = alx_max(c->r[22], c->r[2]);
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x00000248u, c->r[2]); if (_c) goto L_08a1e7bc; }
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000248u, c->r[2]);
L_08a1daf8:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[30] = c->r[6] & 0x0084u;
    { int _c = (c->r[30] != 0u); c->r[2] = alx_seb(c->r[3]); if (_c) goto L_08a1dba4; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000230u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[16] = c->r[2] - c->r[4];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1dba0; }
    { int _c = (c->r[2] != 0u); c->r[5] = 0x08a50000u; if (_c) goto L_08a1db68; }
    c->r[21] = c->r[5] + 0x00001900u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
L_08a1db30:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[21]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e7a0; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1db5c:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]); goto L_08a1db30; }
L_08a1db68:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[6] = 0x08a50000u;
    c->r[2] = c->r[6] + 0x00001900u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1e784; }
    c->r[3] = mem_r8(ram, c->r[29] + 0x00000010u);
L_08a1dba0:
    c->r[2] = alx_seb(c->r[3]);
L_08a1dba4:
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1e71c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[3] = c->r[29] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = ((s32)c->r[4] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[4]); if (_c) goto L_08a1e6fc; }
L_08a1dbe0:
    c->r[2] = 0u + 0x00000080u;
L_08a1dbe4:
    if (c->r[30] == c->r[2]) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000230u); goto L_08a1e638; }
L_08a1dbec:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000244u);
L_08a1dbf0:
    c->r[16] = c->r[6] - c->r[22];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1dc78; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1dc48; }
    c->r[21] = c->r[30] + 0x00001910u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
L_08a1dc10:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[21]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e61c; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1dc3c:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]); goto L_08a1dc10; }
L_08a1dc48:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001910u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1e600; }
L_08a1dc78:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u);
L_08a1dc7c:
    c->r[2] = c->r[3] & 0x0100u;
    { int _c = (c->r[2] != 0u); c->r[2] = ((s32)c->r[23] < (s32)0x00000066u) ? 1u : 0u; if (_c) goto L_08a1de60; }
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[22]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + c->r[22];
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    c->r[18] = c->r[18] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]);
L_08a1dcb0:
    { int _c = (c->r[4] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u); if (_c) goto L_08a1de44; }
L_08a1dcb8:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
L_08a1dcbc:
    c->r[2] = c->r[6] & 0x0004u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000230u); if (_c) goto L_08a1dd5c; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000230u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[16] = c->r[2] - c->r[3];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1dd58; }
    { int _c = (c->r[2] != 0u); c->r[4] = 0x08a50000u; if (_c) goto L_08a1dd28; }
    c->r[20] = c->r[4] + 0x00001900u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
L_08a1dcf0:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1de28; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1dd1c:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]); goto L_08a1dcf0; }
L_08a1dd28:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[5] = 0x08a50000u;
    c->r[2] = c->r[5] + 0x00001900u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1de0c; }
L_08a1dd58:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000230u);
L_08a1dd5c:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000022cu);
    c->r[2] = alx_max(c->r[6], c->r[3]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = c->r[4] + c->r[2];
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x0000022cu, c->r[4]); if (_c) goto L_08a1dd98; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000250u);
L_08a1dd7c:
    mem_w32(ram, c->r[29] + 0x00000034u, 0u);
    { int _c = (c->r[5] == 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1d81c; }
    { c->r[31] = 0x08a1dd90u; c->r[4] = c->r[5] + 0u; func_08a19594(c, ram); }
    { mem_w32(ram, c->r[29] + 0x00000250u, 0u); goto L_08a1d81c; }
L_08a1dd98:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1dda4u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    if (c->r[2] == 0u) { c->r[5] = mem_r32(ram, c->r[29] + 0x00000250u); goto L_08a1dd7c; }
L_08a1ddac:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u);
L_08a1ddb0:
    { int _c = (c->r[6] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000220u); if (_c) goto L_08a1ddc4; }
    { c->r[31] = 0x08a1ddc0u; c->r[4] = c->r[6] + 0u; func_08a19594(c, ram); }
L_08a1ddc0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000220u);
L_08a1ddc4:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000022cu);
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000cu);
    c->r[3] = 0u + 0xffffffffu;
    c->r[2] = c->r[2] & 0x0040u;
    if (c->r[2] == 0u) c->r[3] = c->r[4];
L_08a1ddd8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000284u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000280u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000027cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000278u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000274u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000270u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000026cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000268u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000264u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000260u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000290u; return; }
L_08a1de0c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1de18u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000230u); if (_c) goto L_08a1dd5c; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); goto L_08a1ddb0; }
L_08a1de28:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1de34u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1dd1c; }
L_08a1de44:
    c->r[5] = c->r[29] + 0x00000030u;
    { c->r[31] = 0x08a1de50u; c->r[18] = c->r[29] + 0x00000040u; func_08a1d5e8(c, ram); }
    if (c->r[2] == 0u) { c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); goto L_08a1dcbc; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); goto L_08a1ddb0; }
L_08a1de60:
    { int _c = (c->r[2] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000210u); if (_c) goto L_08a1e3d4; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000023cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a1de7cu; c->r[7] = 0u + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000214u); if (_c) goto L_08a1dff0; }
    c->r[16] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000193cu;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000001u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1dfd4; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u);
L_08a1dec0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000210u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    if (c->r[2] != 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]); goto L_08a1dee4; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[4] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1dcbc; }
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
L_08a1dee4:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[5]);
    c->r[18] = c->r[18] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1dfb8; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000210u);
L_08a1df14:
    c->r[16] = c->r[2] + 0xffffffffu;
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1dcb8; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1df6c; }
    c->r[20] = c->r[30] + 0x00001910u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
L_08a1df34:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1df9c; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1df60:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]); goto L_08a1df34; }
L_08a1df6c:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001910u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + c->r[16];
L_08a1df88:
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    c->r[18] = c->r[18] + 0x00000008u;
L_08a1df94:
    { mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]); goto L_08a1dcb0; }
L_08a1df9c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1dfa8u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1df60; }
L_08a1dfb8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1dfc4u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000210u); goto L_08a1df14; }
L_08a1dfd4:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1dfe0u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u); goto L_08a1dec0; }
L_08a1dff0:
    { int _c = ((s32)c->r[5] <= 0); c->r[3] = mem_r32(ram, c->r[29] + 0x00000210u); if (_c) goto L_08a1e22c; }
    c->r[2] = ((s32)c->r[5] < (s32)c->r[3]) ? 1u : 0u;
    if (c->r[2] != 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[5]); goto L_08a1e14c; }
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]);
    c->r[5] = c->r[3] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + c->r[5];
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e130; }
L_08a1e034:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u);
    c->r[16] = c->r[2] - c->r[5];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1e0c0; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1e090; }
    c->r[17] = c->r[30] + 0x00001910u;
    c->r[20] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[20]);
L_08a1e058:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[17]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e114; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1e084:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[20]); goto L_08a1e058; }
L_08a1e090:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001910u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1e0f8; }
L_08a1e0c0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u);
L_08a1e0c4:
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1dcbc; }
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001940u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = c->r[3] + 0x00000001u;
    { c->r[2] = c->r[2] + 0x00000001u; goto L_08a1df88; }
L_08a1e0f8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e104u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u); goto L_08a1e0c4; }
L_08a1e114:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e120u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1e084; }
L_08a1e130:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e13cu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[5] = mem_r32(ram, c->r[29] + 0x00000210u); goto L_08a1e034; }
L_08a1e14c:
    c->r[9] = c->r[5] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + c->r[5];
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e210; }
L_08a1e178:
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001940u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[20] = c->r[20] + c->r[9];
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]); if (_c) goto L_08a1e1f4; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u);
L_08a1e1b8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000210u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[4] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[4]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + c->r[4];
    c->r[5] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    { int _c = (c->r[5] != 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]); if (_c) goto L_08a1dcb8; }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u); goto L_08a1de44; }
L_08a1e1f4:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e200u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u); goto L_08a1e1b8; }
L_08a1e210:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e21cu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[9] = mem_r32(ram, c->r[29] + 0x00000214u); if (_c) goto L_08a1ddac; }
    { c->r[18] = c->r[29] + 0x00000040u; goto L_08a1e178; }
L_08a1e22c:
    c->r[16] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000193cu;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000001u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1e3b8; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u);
L_08a1e268:
    if (c->r[2] != 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]); goto L_08a1e280; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000210u);
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1dcbc; }
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
L_08a1e280:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[6]);
    c->r[18] = c->r[18] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e39c; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u);
L_08a1e2b0:
    c->r[16] = 0u - c->r[2];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1e338; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1e308; }
    c->r[17] = c->r[30] + 0x00001910u;
    c->r[21] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[21]);
L_08a1e2d0:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[17]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e380; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1e2fc:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[21]); goto L_08a1e2d0; }
L_08a1e308:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001910u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1e364; }
L_08a1e338:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000210u);
L_08a1e33c:
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[5]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + c->r[5];
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); goto L_08a1df94; }
L_08a1e364:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e370u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[5] = mem_r32(ram, c->r[29] + 0x00000210u); goto L_08a1e33c; }
L_08a1e380:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e38cu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1e2fc; }
L_08a1e39c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e3a8u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u); goto L_08a1e2b0; }
L_08a1e3b8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e3c4u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000214u); goto L_08a1e268; }
L_08a1e3d4:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1e5a8; }
    c->r[2] = mem_r8(ram, c->r[20] + 0x00000000u);
L_08a1e3e4:
    c->r[3] = 0u + 0x00000002u;
    c->r[20] = c->r[20] + 0x00000001u;
    mem_w8(ram, c->r[29] + 0x000001e0u, c->r[2]);
    c->r[2] = 0u + 0x0000002eu;
    mem_w8(ram, c->r[29] + 0x000001e1u, c->r[2]);
    c->r[2] = c->r[29] + 0x000001e0u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000002u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1e58c; }
L_08a1e428:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000023cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a1e43cu; c->r[7] = 0u + 0u; func_08a1418c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000210u); if (_c) goto L_08a1e4ec; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000210u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[4] + 0xffffffffu;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
L_08a1e474:
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]); if (_c) goto L_08a1e4cc; }
L_08a1e47c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000240u);
L_08a1e480:
    c->r[2] = c->r[29] + 0x00000020u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[5]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + c->r[5];
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]); if (_c) goto L_08a1dcb8; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e4bcu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); goto L_08a1dcbc; }
L_08a1e4cc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    c->r[5] = c->r[29] + 0x00000030u;
    { c->r[31] = 0x08a1e4dcu; c->r[18] = c->r[29] + 0x00000040u; func_08a1d5e8(c, ram); }
    if (c->r[2] == 0u) { c->r[5] = mem_r32(ram, c->r[29] + 0x00000240u); goto L_08a1e480; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); goto L_08a1ddb0; }
L_08a1e4ec:
    c->r[16] = c->r[2] + 0xffffffffu;
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1e47c; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1e544; }
    c->r[20] = c->r[30] + 0x00001910u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
L_08a1e50c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e570; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1e538:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]); goto L_08a1e50c; }
L_08a1e544:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001910u;
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = c->r[2] + c->r[16];
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    { c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u; goto L_08a1e474; }
L_08a1e570:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e57cu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1e538; }
L_08a1e58c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e598u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { goto L_08a1e428; }
L_08a1e5a8:
    c->r[2] = c->r[4] & 0x0001u;
    if (c->r[2] != 0u) { c->r[2] = mem_r8(ram, c->r[20] + 0x00000000u); goto L_08a1e3e4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[20]);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]); if (_c) goto L_08a1e47c; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e5f0u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[5] = mem_r32(ram, c->r[29] + 0x00000240u); goto L_08a1e480; }
L_08a1e600:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e60cu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u); goto L_08a1dc7c; }
L_08a1e61c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e628u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1dc3c; }
L_08a1e638:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[16] = c->r[4] - c->r[5];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1dbec; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1e694; }
    c->r[21] = c->r[30] + 0x00001910u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]);
L_08a1e65c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[21]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[2]); if (_c) goto L_08a1e6e0; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1e688:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[18] + 0x00000004u, c->r[17]); goto L_08a1e65c; }
L_08a1e694:
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001910u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); if (_c) goto L_08a1dbec; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e6d0u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000244u); goto L_08a1dbf0; }
L_08a1e6e0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e6ecu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1e688; }
L_08a1e6fc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    c->r[5] = c->r[29] + 0x00000030u;
    { c->r[31] = 0x08a1e70cu; c->r[18] = c->r[29] + 0x00000040u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000080u; if (_c) goto L_08a1dbe4; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); goto L_08a1ddb0; }
L_08a1e71c:
    c->r[2] = c->r[3] & 0x0002u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000080u; if (_c) goto L_08a1dbe4; }
    c->r[2] = 0u + 0x00000030u;
    mem_w8(ram, c->r[29] + 0x000001e0u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = c->r[29] + 0x000001e0u;
    mem_w8(ram, c->r[29] + 0x000001e1u, c->r[23]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = ((s32)c->r[4] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]);
    c->r[18] = c->r[18] + 0x00000008u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x00000034u, c->r[4]); if (_c) goto L_08a1dbe0; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e774u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[2] = 0u + 0x00000080u; goto L_08a1dbe4; }
L_08a1e784:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e790u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r8(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a1ddac; }
    { c->r[18] = c->r[29] + 0x00000040u; goto L_08a1dba0; }
L_08a1e7a0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1e7acu; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1db5c; }
L_08a1e7bc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000248u);
    c->r[2] = c->r[4] & 0x0002u;
    c->r[5] = c->r[2] + c->r[5];
    { mem_w32(ram, c->r[29] + 0x00000248u, c->r[5]); goto L_08a1daf8; }
L_08a1e7d4:
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000024cu);
L_08a1e7d8:
    c->r[2] = c->r[16] & 0x000fu;
    c->r[4] = c->r[17] << 28;
    c->r[2] = c->r[5] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[16] >> 4;
    c->r[16] = c->r[16] | c->r[4];
    c->r[17] = c->r[17] >> 4;
    c->r[20] = c->r[20] + 0xffffffffu;
    c->r[2] = c->r[16] | c->r[17];
    { int _c = (c->r[2] != 0u); mem_w8(ram, c->r[20] + 0x00000000u, c->r[3]); if (_c) goto L_08a1e7d4; }
L_08a1e804:
    c->r[2] = c->r[29] - c->r[20];
L_08a1e808:
    { c->r[22] = c->r[2] + 0x000001dcu; goto L_08a1dadc; }
L_08a1e810:
    { int _c = (c->r[5] != 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a1dacc; }
L_08a1e818:
    c->r[2] = c->r[16] & 0x0007u;
    c->r[3] = c->r[17] << 29;
    c->r[16] = c->r[16] >> 3;
    c->r[16] = c->r[16] | c->r[3];
    c->r[17] = c->r[17] >> 3;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[20] = c->r[20] + 0xffffffffu;
    c->r[2] = c->r[16] | c->r[17];
    { int _c = (c->r[2] != 0u); mem_w8(ram, c->r[20] + 0x00000000u, c->r[3]); if (_c) goto L_08a1e818; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[4] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[29] - c->r[20]; if (_c) goto L_08a1e808; }
    c->r[2] = 0u + 0x00000030u;
    if (c->r[3] == c->r[2]) { c->r[2] = c->r[29] - c->r[20]; goto L_08a1e808; }
L_08a1e85c:
    c->r[20] = c->r[20] + 0xffffffffu;
    { mem_w8(ram, c->r[20] + 0x00000000u, c->r[2]); goto L_08a1e804; }
L_08a1e868:
    { int _c = (c->r[17] == 0u); if (_c) goto L_08a1e8cc; }
L_08a1e870:
    c->r[4] = c->r[16] + 0u;
L_08a1e874:
    c->r[7] = 0u + 0x00000000u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a1e884u; c->r[5] = c->r[17] + 0u; func_08a23fb8(c, ram); }
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[20] = c->r[20] + 0xffffffffu;
    mem_w8(ram, c->r[20] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[16] + 0u;
    c->r[7] = 0u + 0x00000000u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a1e8a4u; c->r[5] = c->r[17] + 0u; func_08a13184(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { int _c = (c->r[3] != 0u); c->r[17] = c->r[3] + 0u; if (_c) goto L_08a1e870; }
    if (c->r[3] != 0u) { c->r[2] = c->r[16] + 0x00000030u; goto L_08a1e85c; }
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[4] = c->r[16] + 0u; goto L_08a1e874; }
    { c->r[2] = c->r[16] + 0x00000030u; goto L_08a1e85c; }
L_08a1e8cc:
    { int _c = (c->r[17] != 0u); c->r[2] = c->r[16] + 0x00000030u; if (_c) goto L_08a1e85c; }
    c->r[2] = (c->r[16] < 0x0000000au) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[4] = c->r[16] + 0u; goto L_08a1e874; }
    { c->r[2] = c->r[16] + 0x00000030u; goto L_08a1e85c; }
L_08a1e8e8:
    { int _c = (c->r[5] != 0u); c->r[2] = c->r[29] - c->r[20]; if (_c) goto L_08a1e808; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[6] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[29] - c->r[20]; if (_c) goto L_08a1e808; }
    c->r[2] = 0u + 0x00000030u;
    mem_w8(ram, c->r[29] + 0x000001dbu, c->r[2]);
    { c->r[20] = c->r[29] + 0x000001dbu; goto L_08a1e804; }
L_08a1e910:
    c->r[16] = 0u - c->r[16];
    c->r[17] = 0u - c->r[17];
    c->r[2] = (0u < c->r[16]) ? 1u : 0u;
    c->r[17] = c->r[17] - c->r[2];
    { mem_w8(ram, c->r[29] + 0x00000010u, c->r[3]); goto L_08a1da74; }
L_08a1e928:
    c->r[2] = c->r[4] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1e950; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[5]);
L_08a1e944:
    c->r[16] = c->r[3] + 0u;
    { c->r[17] = (u32)((s32)c->r[3] >> 31); goto L_08a1da6c; }
L_08a1e950:
    c->r[2] = c->r[6] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1e96c; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[2]); goto L_08a1e944; }
L_08a1e96c:
    c->r[4] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[4]); goto L_08a1e944; }
L_08a1e97c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    { c->r[5] = c->r[5] | 0x0008u; goto L_08a1d928; }
L_08a1e98c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x00000228u, c->r[2]);
L_08a1e998:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[3] & 0x0020u;
    if (c->r[2] == 0u) { c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u); goto L_08a1e9d0; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[4] = c->r[4] + 0x00000007u;
    c->r[4] = alx_ins(c->r[4], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[4] = c->r[4] + 0x00000008u;
L_08a1e9c0:
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[4]);
L_08a1e9c4:
    c->r[5] = 0u + 0u;
L_08a1e9c8:
    { mem_w8(ram, c->r[29] + 0x00000010u, 0u); goto L_08a1da78; }
L_08a1e9d0:
    c->r[2] = c->r[5] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1e9f4; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[6]); goto L_08a1e9c4; }
L_08a1e9f4:
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1ea10; }
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r16(ram, c->r[2] + 0x00000000u);
    { c->r[4] = c->r[2] + 0x00000004u; goto L_08a1e9c0; }
L_08a1ea10:
    c->r[17] = 0u + 0u;
    c->r[5] = c->r[2] + 0x00000004u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[5]); goto L_08a1e9c4; }
L_08a1ea24:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = c->r[6] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x00000228u, c->r[6]);
L_08a1ea30:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[3] & 0x0020u;
    if (c->r[2] == 0u) { c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u); goto L_08a1ea64; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[4] = c->r[4] + 0x00000007u;
    c->r[4] = alx_ins(c->r[4], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[4] = c->r[4] + 0x00000008u;
L_08a1ea58:
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[4]);
L_08a1ea5c:
    { c->r[5] = 0u + 0x00000001u; goto L_08a1e9c8; }
L_08a1ea64:
    c->r[2] = c->r[5] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1ea88; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[6]); goto L_08a1ea5c; }
L_08a1ea88:
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1eaa4; }
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r16(ram, c->r[2] + 0x00000000u);
    { c->r[4] = c->r[2] + 0x00000004u; goto L_08a1ea58; }
L_08a1eaa4:
    c->r[17] = 0u + 0u;
    c->r[5] = c->r[2] + 0x00000004u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[5]); goto L_08a1ea5c; }
L_08a1eab8:
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001944u;
L_08a1eac0:
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    mem_w32(ram, c->r[29] + 0x0000024cu, c->r[2]);
    c->r[2] = c->r[6] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1eb14; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[2] = c->r[2] + 0x00000007u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
L_08a1eaec:
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[3]);
L_08a1eaf0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[16] | c->r[17];
    c->r[5] = 0u + 0x00000002u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[4] & 0x0001u; if (_c) goto L_08a1e9c8; }
    c->r[2] = c->r[4] | 0x0002u;
    if (c->r[3] != 0u) c->r[4] = c->r[2];
    { mem_w32(ram, c->r[29] + 0x00000228u, c->r[4]); goto L_08a1e9c8; }
L_08a1eb14:
    c->r[2] = c->r[4] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1eb38; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[5]); goto L_08a1eaf0; }
L_08a1eb38:
    c->r[2] = c->r[6] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1eb58; }
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[2]); goto L_08a1eaf0; }
L_08a1eb58:
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[3] = c->r[2] + 0x00000004u; goto L_08a1eaec; }
L_08a1eb68:
    c->r[2] = 0u + 0x00000043u;
    { int _c = (c->r[23] == c->r[2]); c->r[20] = c->r[29] + 0x00000080u; if (_c) goto L_08a1eb84; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[6] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1ebd4; }
L_08a1eb84:
    c->r[16] = c->r[29] + 0x000001f0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a1eb98u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000021cu);
    c->r[7] = c->r[16] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x08a1ebb0u; c->r[5] = c->r[20] + 0u; func_08a1f4d4(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[22] == c->r[2]); c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); if (_c) goto L_08a1ddb0; }
L_08a1ebcc:
    { mem_w8(ram, c->r[29] + 0x00000010u, 0u); goto L_08a1dadc; }
L_08a1ebd4:
    c->r[22] = 0u + 0x00000001u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[4]);
    { mem_w8(ram, c->r[29] + 0x00000080u, c->r[3]); goto L_08a1ebcc; }
L_08a1ebec:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[21] == c->r[2]); c->r[3] = c->r[23] ^ 0x0067u; if (_c) goto L_08a1ee4c; }
    c->r[2] = c->r[23] ^ 0x0047u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    { int _c = (c->r[3] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1ec1c; }
    c->r[2] = 0u + 0x00000001u;
    if (c->r[21] == 0u) c->r[21] = c->r[2];
L_08a1ec18:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
L_08a1ec1c:
    c->r[2] = c->r[5] & 0x0008u;
    { int _c = (c->r[2] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1ee24; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[6] = c->r[6] + 0x00000007u;
    c->r[6] = alx_ins(c->r[6], 0u, 0u, 2u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[6] = c->r[6] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000023cu, c->r[5]);
L_08a1ec4c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000238u);
    { c->r[31] = 0x08a1ec58u; c->r[5] = mem_r32(ram, c->r[29] + 0x0000023cu); func_08a23a24(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1ec94; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000023cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08a1ec74u; c->r[7] = 0u + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[3] = 0u + 0x0000002du; if (_c) goto L_08a1ec8c; }
L_08a1ec7c:
    c->r[2] = 0x08a50000u;
    c->r[20] = c->r[2] + 0x00001958u;
    { c->r[22] = 0u + 0x00000003u; goto L_08a1dadc; }
L_08a1ec8c:
    { mem_w8(ram, c->r[29] + 0x00000010u, c->r[3]); goto L_08a1ec7c; }
L_08a1ec94:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000023cu);
    { c->r[31] = 0x08a1eca4u; c->r[22] = 0u + 0x00000003u; func_08a12b2c(c, ram); }
    c->r[3] = 0x08a50000u;
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[3] + 0x0000195cu; if (_c) goto L_08a1dadc; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000021cu);
    c->r[2] = c->r[29] + 0x00000210u;
    c->r[6] = c->r[6] | 0x0100u;
    mem_w32(ram, c->r[29] + 0x00000228u, c->r[6]);
    c->r[10] = c->r[29] + 0x00000011u;
    c->r[8] = c->r[21] + 0u;
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x0000023cu);
    c->r[9] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[11] = c->r[29] + 0x00000214u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a1ece8u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[23]); func_08a1f170(c, ram); }
    c->r[4] = c->r[23] ^ 0x0067u;
    c->r[3] = c->r[23] ^ 0x0047u;
    c->r[20] = c->r[2] + 0u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[4] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] | c->r[3];
    { int _c = (c->r[2] == 0u); c->r[9] = mem_r32(ram, c->r[29] + 0x00000214u); if (_c) goto L_08a1ed2c; }
    c->r[2] = ((s32)c->r[9] < (s32)0xfffffffdu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[23] = 0u + 0x00000065u; if (_c) goto L_08a1ed24; }
    c->r[2] = ((s32)c->r[21] < (s32)c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[23] = 0u + 0x00000067u; if (_c) goto L_08a1ed38; }
    c->r[23] = 0u + 0x00000065u;
L_08a1ed24:
    c->r[2] = 0u + 0x00000045u;
    if (c->r[4] != 0u) c->r[23] = c->r[2];
L_08a1ed2c:
    c->r[2] = ((s32)c->r[23] < (s32)0x00000066u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[9] = c->r[9] + 0xffffffffu; goto L_08a1edd8; }
L_08a1ed38:
    c->r[2] = 0u + 0x00000066u;
    { int _c = (c->r[23] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x00000210u); if (_c) goto L_08a1ed8c; }
    c->r[2] = ((s32)c->r[9] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] - c->r[9]; if (_c) goto L_08a1ed7c; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[4] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[22] = c->r[9] + 0u; if (_c) goto L_08a1ed64; }
    c->r[22] = c->r[9] + 0x00000001u;
L_08a1ed64:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[29] + 0x00000011u);
L_08a1ed68:
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000244u); if (_c) goto L_08a1dae0; }
    c->r[3] = 0u + 0x0000002du;
    { mem_w8(ram, c->r[29] + 0x00000010u, c->r[3]); goto L_08a1dadc; }
L_08a1ed7c:
    { int _c = ((s32)c->r[9] <= 0); c->r[22] = c->r[2] + 0x00000002u; if (_c) goto L_08a1ed64; }
    { c->r[22] = c->r[3] + 0x00000001u; goto L_08a1ed64; }
L_08a1ed8c:
    { int _c = ((s32)c->r[9] <= 0); if (_c) goto L_08a1edb8; }
    { int _c = (c->r[21] != 0u); c->r[22] = c->r[9] + 0u; if (_c) goto L_08a1edac; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[6] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[29] + 0x00000011u); if (_c) goto L_08a1ed68; }
L_08a1edac:
    c->r[2] = c->r[9] + c->r[21];
    { c->r[22] = c->r[2] + 0x00000001u; goto L_08a1ed64; }
L_08a1edb8:
    { int _c = (c->r[21] != 0u); c->r[22] = c->r[21] + 0x00000002u; if (_c) goto L_08a1ed64; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[22] = 0u + 0x00000001u; if (_c) goto L_08a1ed64; }
    { c->r[22] = c->r[21] + 0x00000002u; goto L_08a1ed64; }
L_08a1edd8:
    c->r[4] = c->r[29] + 0x00000020u;
    c->r[5] = c->r[9] + 0u;
    c->r[6] = c->r[23] + 0u;
    { c->r[31] = 0x08a1edecu; mem_w32(ram, c->r[29] + 0x00000214u, c->r[9]); func_08a1f338(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000240u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000210u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000240u);
    c->r[3] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[22] = c->r[4] + c->r[2]; if (_c) goto L_08a1ee0c; }
    { c->r[22] = c->r[22] + 0x00000001u; goto L_08a1ed64; }
L_08a1ee0c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[5] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[29] + 0x00000011u); if (_c) goto L_08a1ed68; }
    { c->r[22] = c->r[22] + 0x00000001u; goto L_08a1ed68; }
L_08a1ee24:
    c->r[5] = c->r[5] + 0x00000007u;
    c->r[5] = alx_ins(c->r[5], 0u, 0u, 2u);
    c->r[2] = c->r[5] + 0u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000004u);
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000023cu, c->r[5]);
    c->r[5] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[29] + 0x00000224u, c->r[5]); goto L_08a1ec4c; }
L_08a1ee4c:
    { c->r[21] = 0u + 0x00000006u; goto L_08a1ec18; }
L_08a1ee54:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    { c->r[2] = c->r[2] | 0x0040u; goto L_08a1d960; }
L_08a1ee64:
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[2] = 0u + 0x0000006cu;
    c->r[3] = alx_seb(c->r[6]);
    { int _c = (c->r[3] == c->r[2]); c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1ee80; }
    { c->r[4] = c->r[4] | 0x0010u; goto L_08a1d9f4; }
L_08a1ee80:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[19] = c->r[19] + 0x00000001u;
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    c->r[3] = c->r[3] | 0x0020u;
    { mem_w32(ram, c->r[29] + 0x00000228u, c->r[3]); goto L_08a1d8cc; }
L_08a1ee98:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[2] = c->r[5] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1eed0; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000022cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)((s32)c->r[4] >> 31);
    c->r[6] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[6]);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[5]);
    { c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u); goto L_08a1d820; }
L_08a1eed0:
    c->r[2] = c->r[3] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1eef8; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000022cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[4]);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[5]); goto L_08a1d81c; }
L_08a1eef8:
    c->r[2] = c->r[6] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1ef1c; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000022cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[2]);
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[4]); goto L_08a1d81c; }
L_08a1ef1c:
    c->r[6] = mem_r32(ram, c->r[29] + 0x0000022cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[5]);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[6]); goto L_08a1d81c; }
L_08a1ef34:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001960u;
    mem_w32(ram, c->r[29] + 0x0000024cu, c->r[2]);
    c->r[6] = c->r[3] + 0x00000004u;
    c->r[17] = 0u + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[16] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    c->r[2] = c->r[2] | 0x0002u;
    c->r[23] = 0u + 0x00000078u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[6]);
    { mem_w32(ram, c->r[29] + 0x00000228u, c->r[2]); goto L_08a1e9c8; }
L_08a1ef6c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[6] = mem_r8(ram, c->r[19] + 0x00000000u);
    { c->r[5] = c->r[5] | 0x0020u; goto L_08a1d928; }
L_08a1ef7c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[20] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000004u;
    mem_w8(ram, c->r[29] + 0x00000010u, 0u);
    { int _c = (c->r[20] == 0u); mem_w32(ram, c->r[29] + 0x00000224u, c->r[3]); if (_c) goto L_08a1f0d8; }
    c->r[2] = 0u + 0x00000053u;
    { int _c = (c->r[23] == c->r[2]); c->r[4] = mem_r32(ram, c->r[29] + 0x00000228u); if (_c) goto L_08a1efac; }
    c->r[2] = c->r[4] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1f0a4; }
L_08a1efac:
    c->r[4] = c->r[29] + 0x00000200u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000218u, c->r[20]);
    c->r[17] = 0u + 0u;
    { c->r[31] = 0x08a1efc8u; c->r[22] = 0u + 0u; func_08a19ec4(c, ram); }
    { int _c = ((s32)c->r[21] < 0); c->r[30] = 0u + 0xffffffffu; if (_c) goto L_08a1f074; }
L_08a1efd0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000218u);
    c->r[2] = c->r[17] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[6] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x0000021cu); if (_c) goto L_08a1f014; }
    c->r[5] = c->r[29] + 0x00000080u;
    { c->r[31] = 0x08a1eff4u; c->r[7] = c->r[29] + 0x00000200u; func_08a1f4d4(c, ram); }
    { int _c = (c->r[2] == c->r[30]); c->r[3] = c->r[2] + c->r[22]; if (_c) goto L_08a1ddac; }
    c->r[2] = ((s32)c->r[21] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a1f014; }
    c->r[22] = c->r[3] + 0u;
    { int _c = (c->r[3] != c->r[21]); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_08a1efd0; }
L_08a1f014:
    { int _c = (c->r[22] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000244u); if (_c) goto L_08a1dae0; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000021cu);
    { c->r[31] = 0x08a1f028u; c->r[5] = c->r[22] + 0x00000001u; func_08a197ec(c, ram); }
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000250u, c->r[2]); if (_c) goto L_08a1ddc0; }
    c->r[6] = 0u + 0x00000008u;
    c->r[4] = c->r[29] + 0x00000200u;
    { c->r[31] = 0x08a1f040u; c->r[5] = 0u + 0u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000021cu);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000250u);
    c->r[8] = c->r[29] + 0x00000200u;
    c->r[6] = c->r[29] + 0x00000218u;
    { c->r[31] = 0x08a1f058u; c->r[7] = c->r[22] + 0u; func_08a1f590(c, ram); }
    { int _c = (c->r[2] != c->r[22]); c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); if (_c) goto L_08a1ddb0; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000250u);
    c->r[2] = c->r[5] + c->r[22];
    c->r[20] = c->r[5] + 0u;
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_08a1dadc; }
L_08a1f074:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000021cu);
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[29] + 0x00000218u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1f08cu; c->r[8] = c->r[29] + 0x00000200u; func_08a1f590(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[22] == c->r[2]); c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); if (_c) goto L_08a1ddb0; }
    { mem_w32(ram, c->r[29] + 0x00000218u, c->r[20]); goto L_08a1f014; }
L_08a1f0a4:
    { int _c = ((s32)c->r[21] < 0); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a1dad0; }
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a1f0b8u; c->r[6] = c->r[21] + 0u; func_08a221a8(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[22] = c->r[21] + 0u; if (_c) goto L_08a1dadc; }
    c->r[22] = c->r[2] - c->r[20];
    c->r[2] = ((s32)c->r[21] < (s32)c->r[22]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[22] = c->r[21] + 0u; goto L_08a1dadc; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000244u); goto L_08a1dae0; }
L_08a1f0d8:
    c->r[2] = 0x08a50000u;
    c->r[20] = c->r[2] + 0x00001974u;
    { c->r[22] = 0u + 0x00000006u; goto L_08a1dadc; }
L_08a1f0e8:
    { int _c = (c->r[23] == 0u); c->r[20] = c->r[29] + 0x00000080u; if (_c) goto L_08a1f0fc; }
    mem_w8(ram, c->r[29] + 0x00000080u, c->r[23]);
    { c->r[22] = 0u + 0x00000001u; goto L_08a1ebcc; }
L_08a1f0fc:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u); if (_c) goto L_08a1f110; }
    { mem_w32(ram, c->r[29] + 0x00000034u, 0u); goto L_08a1ddac; }
L_08a1f110:
    { c->r[31] = 0x08a1f118u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    if (c->r[2] == 0u) { mem_w32(ram, c->r[29] + 0x00000034u, 0u); goto L_08a1ddac; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000250u); goto L_08a1ddb0; }
L_08a1f128:
    c->r[2] = 0x08a50000u;
    { c->r[2] = c->r[2] + 0x00001960u; goto L_08a1eac0; }
L_08a1f134:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[31] = 0x08a1f140u; c->r[5] = c->r[29] + 0x00000030u; func_08a1d5e8(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[29] + 0x00000040u; if (_c) goto L_08a1ddac; }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x0000022cu); goto L_08a1d89c; }
L_08a1f150:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x0000000eu);
    { int _c = ((s32)c->r[2] < 0); c->r[6] = mem_r32(ram, c->r[29] + 0x00000224u); if (_c) goto L_08a1d804; }
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08a1f168u; c->r[5] = c->r[16] + 0u; func_08a1d634(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a1ddd8; }
    return; /* fell out of func_08a1d758 */
}

/* func_08a225c0  0x08a225c0..0x08a22678  184 bytes, source=sweep */
void func_08a225c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a225c0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[6] = 0u + 0x00000010u;
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[5] = 0u + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    c->r[7] = mem_r32(ram, c->r[4] + 0x0000004cu);
    { int _c = (c->r[7] == 0u); c->r[16] = c->r[4] + 0u; if (_c) goto L_08a2265c; }
L_08a225e8:
    c->r[3] = c->r[17] << 2;
    c->r[3] = c->r[3] + c->r[7];
    c->r[2] = 0u + 0x00000001u;
    c->r[7] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[16] + 0u;
    c->r[16] = c->r[2] << (c->r[17] & 31u);
    c->r[6] = c->r[16] << 2;
    c->r[5] = 0u + 0x00000001u;
    { int _c = (c->r[7] == 0u); c->r[6] = c->r[6] + 0x00000014u; if (_c) goto L_08a2263c; }
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a22618:
    mem_w32(ram, c->r[7] + 0x00000010u, 0u);
    c->r[3] = c->r[7] + 0u;
    mem_w32(ram, c->r[7] + 0x0000000cu, 0u);
L_08a22624:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a2263c:
    { c->r[31] = 0x08a22644u; func_08a23d6c(c, ram); }
    c->r[7] = c->r[2] + 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a22624; }
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[17]);
    { mem_w32(ram, c->r[2] + 0x00000008u, c->r[16]); goto L_08a22618; }
L_08a2265c:
    { c->r[31] = 0x08a22664u; func_08a23d6c(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000004cu, c->r[2]);
    { int _c = (c->r[2] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a22624; }
    { c->r[7] = c->r[2] + 0u; goto L_08a225e8; }
    return; /* fell out of func_08a225c0 */
}

/* func_08a24638  0x08a24638..0x08a24690  88 bytes, source=sweep */
void func_08a24638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a24638u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[2] = 0x08a20000u;
    c->r[2] = c->r[2] + 0x000056e8u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[4] = mem_r32(ram, c->r[2] + 0xfffffffcu);
    { int _c = (c->r[4] == c->r[3]); c->r[16] = c->r[2] + 0xfffffffcu; if (_c) goto L_08a2467c; }
    c->r[3] = c->r[4] + 0u;
    c->r[17] = 0u + 0xffffffffu;
L_08a24668:
    { u32 _t = c->r[3]; c->r[31] = 0x08a24670u; c->r[16] = c->r[16] + 0xfffffffcu; recomp_call_indirect(c, ram, 0x08a24668u, _t); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[2] != c->r[17]); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a24668; }
L_08a2467c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a24638 */
}
