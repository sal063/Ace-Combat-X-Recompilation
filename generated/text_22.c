#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08805b24  0x08805b24..0x08805e70  844 bytes, source=fde */
void func_08805b24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08805b24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805b68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805b68; }
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x08805b68u; c->r[4] = c->r[4] + 0x00005260u; func_088074cc(c, ram); }
L_08805b68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805b94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805b94; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08805b94u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880753c(c, ram); }
L_08805b94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805bc0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805bc0; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08805bc0u; c->r[4] = c->r[4] + 0xffffb640u; func_08807c50(c, ram); }
L_08805bc0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805bec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805bec; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805becu; c->r[4] = c->r[4] + 0xffffbf30u; func_0880757c(c, ram); }
L_08805bec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c18; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805c18u; c->r[4] = c->r[4] + 0xffffc810u; func_0880801c(c, ram); }
L_08805c18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c44; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805c44u; c->r[4] = c->r[4] + 0xffffc930u; func_08807e6c(c, ram); }
L_08805c44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c70; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805c70u; c->r[4] = c->r[4] + 0x00000ac8u; func_0880809c(c, ram); }
L_08805c70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c9c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805c9c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805c9cu; c->r[4] = c->r[4] + 0x000027dcu; func_08808170(c, ram); }
L_08805c9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805cc8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805cc8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805cc8u; c->r[4] = c->r[4] + 0x00002e40u; func_0880805c(c, ram); }
L_08805cc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805cf4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805cf4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805cf4u; c->r[4] = c->r[4] + 0x00002ee0u; func_088081bc(c, ram); }
L_08805cf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805d1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805d1c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805d1cu; c->r[4] = c->r[4] + 0x00002e40u; func_0880807c(c, ram); }
L_08805d1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805d44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805d44; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805d44u; c->r[4] = c->r[4] + 0x000027dcu; func_0880819c(c, ram); }
L_08805d44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805d6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805d6c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805d6cu; c->r[4] = c->r[4] + 0x00000ac8u; func_088080bc(c, ram); }
L_08805d6c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805d94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805d94; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805d94u; c->r[4] = c->r[4] + 0xffffc930u; func_08807ffc(c, ram); }
L_08805d94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805dbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805dbc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805dbcu; c->r[4] = c->r[4] + 0xffffc810u; func_0880803c(c, ram); }
L_08805dbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805de4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805de4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08805de4u; c->r[4] = c->r[4] + 0xffffbf30u; func_088077d4(c, ram); }
L_08805de4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805e0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805e0c; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08805e0cu; c->r[4] = c->r[4] + 0xffffb640u; func_08807d8c(c, ram); }
L_08805e0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805e34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805e34; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08805e34u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880755c(c, ram); }
L_08805e34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08805e5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08805e5c; }
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x08805e5cu; c->r[4] = c->r[4] + 0x00005260u; func_088074ec(c, ram); }
L_08805e5c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08805b24 */
}

/* func_08807078  0x08807078..0x088070bc  68 bytes, source=sweep */
void func_08807078(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08807078u);
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
    { c->r[31] = 0x088070a8u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08807078 */
}

/* func_08808134  0x08808134..0x08808154  32 bytes, source=sweep */
void func_08808134(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808134u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08808134 */
}

/* func_0880a814  0x0880a814..0x0880ab4c  824 bytes, source=fde */
void func_0880a814(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880a814u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a83c; }
    { goto L_0880ab38; }
L_0880a83c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf14u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe9a8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffe9acu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0880a874u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe9b0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffe9b0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffe9b0u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffe9b0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880a8b0u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a9a0; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003c44u);
    c->r[2] = 0x0fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ab38; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880a8f8; }
    { goto L_0880a934; }
L_0880a8f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0x08b90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00005430u);
    c->r[6] = 0u + 0x00000200u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0x00000200u;
    { c->r[31] = 0x0880a92cu; c->r[11] = 0u + 0x00000200u; func_089e0fac(c, ram); }
    { goto L_0880ab38; }
L_0880a934:
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000200u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000200u;
    c->r[9] = 0u + 0x00000200u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0880a964u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000014u); func_089e10c4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880a978u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880a998u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { goto L_0880ab38; }
L_0880a9a0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c44u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c44u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003c44u);
    c->r[2] = 0x0fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0880aa40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880ab38; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880aa00; }
    { goto L_0880aa40; }
L_0880aa00:
    { c->r[31] = 0x0880aa08u; c->r[4] = 0u + 0x0000012cu; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880aa14u; c->r[4] = c->r[4] + 0x00002e04u; func_08813b98(c, ram); }
    { c->r[31] = 0x0880aa1cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe9b4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880aa38u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { goto L_0880ab38; }
L_0880aa40:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880aa4cu; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880ab38; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c44u);
    c->r[3] = 0xf0000000u;
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0x10000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880aac8; }
    c->r[2] = 0x10000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880aaa0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880aab8; }
    { goto L_0880ab38; }
L_0880aaa0:
    c->r[2] = 0x20000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880aad8; }
    { goto L_0880ab38; }
L_0880aab8:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_0880ab38; }
L_0880aac8:
    c->r[2] = 0u + 0x00000006u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_0880ab38; }
L_0880aad8:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0880aae8u; c->r[5] = 0u + 0x00000001u; func_089d7208(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe9b4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0880ab04u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x0880ab0cu; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001ee8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ab2c; }
    c->r[2] = 0u + 0x0000000fu;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_0880ab38; }
L_0880ab2c:
    c->r[2] = 0u + 0x0000000bu;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
L_0880ab38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0880a814 */
}

/* func_0880d34c  0x0880d34c..0x0880d380  52 bytes, source=sweep */
void func_0880d34c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d34cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000147u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d34c */
}

/* func_0880e198  0x0880e198..0x0880e278  224 bytes, source=fde */
void func_0880e198(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e198u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e1d8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015b6u;
    { c->r[31] = 0x0880e1d0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880e264; }
L_0880e1d8:
    { c->r[31] = 0x0880e1e0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e1fc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e1fcu; c->r[5] = c->r[5] + 0xffffe278u; func_0880f03c(c, ram); }
L_0880e1fc:
    { c->r[31] = 0x0880e204u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e220; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0880e220u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0880e220:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003cd4u);
    c->r[2] = 0x08810000u;
    c->r[2] = c->r[2] + 0xffffe278u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e264; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e244u; c->r[4] = c->r[4] + 0x00000330u; func_089d9a14(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e264; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e264u; c->r[5] = c->r[5] + 0xffffe6c4u; func_0880f03c(c, ram); }
L_0880e264:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880e198 */
}

/* func_088112e8  0x088112e8..0x08811320  56 bytes, source=sweep */
void func_088112e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088112e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088112e8 */
}

/* func_08813c50  0x08813c50..0x08813c78  40 bytes, source=sweep */
void func_08813c50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08813c50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000014du);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08813c50 */
}

/* func_088192bc  0x088192bc..0x08819398  220 bytes, source=sweep */
void func_088192bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088192bcu);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08819350; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08819314; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881933c; }
    { goto L_08819384; }
L_08819314:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08819364; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08819378; }
    { goto L_08819384; }
L_0881933c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819348u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088194c4(c, ram); }
    { goto L_08819384; }
L_08819350:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881935cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088195c4(c, ram); }
    { goto L_08819384; }
L_08819364:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819370u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819694(c, ram); }
    { goto L_08819384; }
L_08819378:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08819384u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08819764(c, ram); }
L_08819384:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088192bc */
}

/* func_0881a2cc  0x0881a2cc..0x0881cda8  10972 bytes, source=fde */
void func_0881a2cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881a2ccu);
L_0881a2cc:
    c->r[29] = c->r[29] + 0xfffffe30u;
    mem_w32(ram, c->r[29] + 0x000001c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000001c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000001c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x0881a320u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = (c->r[3] < 0x00000022u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881cd90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff614u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0881a2ccu: goto L_0881a2cc; case 0x0881a358u: goto L_0881a358; case 0x0881aa98u: goto L_0881aa98; case 0x0881affcu: goto L_0881affc; case 0x0881b200u: goto L_0881b200; case 0x0881b228u: goto L_0881b228; case 0x0881b26cu: goto L_0881b26c; case 0x0881bb90u: goto L_0881bb90; case 0x0881bbe0u: goto L_0881bbe0; case 0x0881bc18u: goto L_0881bc18; case 0x0881bc6cu: goto L_0881bc6c; case 0x0881ccd0u: goto L_0881ccd0; case 0x0881cd90u: goto L_0881cd90; default: recomp_trap_unknown_indirect(c, ram, 0x0881a350u, _t); return; } }
L_0881a358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x0000000bu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2du, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a394u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881a3c8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a3b0u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881a3c8; }
    { goto L_0881a3e4; }
L_0881a3c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]); goto L_0881a440; }
L_0881a3e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881a434; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000000bu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]); goto L_0881a440; }
L_0881a434:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
L_0881a440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881a49c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    { c->r[31] = 0x0881a464u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[4] = 0u + 0x00000037u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0881a480u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000036u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0881a49cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
L_0881a49c:
    { c->r[31] = 0x0881a4a4u; func_08928be0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881a4d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881a4d0u; c->r[6] = 0u + 0x00000009u; func_0881ced0(c, ram); }
    { goto L_0881a4f0; }
L_0881a4d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881a4f0u; c->r[6] = 0u + 0u; func_0881ced0(c, ram); }
L_0881a4f0:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0881a4fcu; c->r[4] = c->r[4] + 0xfffff59cu; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003e30u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0881a514u; c->r[4] = c->r[4] + 0xfffff5acu; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003e34u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a530u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000170u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000017u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a594u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000013u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881a5ecu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881a634u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x0881a670u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0881a68cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000eu;
    { c->r[31] = 0x0881a6a0u; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0881a6acu; c->r[4] = c->r[4] + 0xfffff5bcu; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881a72c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a6dcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a704u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0881a724u; c->r[7] = 0u + 0x00000009u; func_0881ef98(c, ram); }
    { goto L_0881a780; }
L_0881a72c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a738u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a760u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0881a780u; c->r[7] = 0u + 0x0000001du; func_0881ef98(c, ram); }
L_0881a780:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881a798; }
    { c->r[31] = 0x0881a798u; c->r[4] = 0u + 0x00000001u; func_0880b118(c, ram); }
L_0881a798:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a7a4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881a7e0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a7c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881a7e0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a7e0u; c->r[5] = 0u + 0x00000005u; func_0880d4c8(c, ram); }
L_0881a7e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881a7fcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x0881a80cu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881a828u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { c->r[31] = 0x0881a830u; c->r[4] = c->r[2] + 0u; func_0882061c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881a840u; c->r[5] = 0u + 0x00004000u; func_08820ce8(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881a850u; c->r[5] = 0u + 0x00004000u; func_08820d18(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a85cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881a870u; c->r[6] = 0u + 0x00000c00u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000184u, c->r[2]);
    c->r[2] = 0u + 0x00000400u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881a8d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[2] = (c->r[4] < 0x00000401u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881a8a8; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_0881a8c0; }
    { goto L_0881a900; }
L_0881a8a8:
    c->r[2] = 0u + 0x00000800u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0881a8f0; }
    { goto L_0881a900; }
L_0881a8c0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a8d0u; c->r[5] = 0u + 0u; func_0880d4c8(c, ram); }
    { goto L_0881a900; }
L_0881a8d8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a8e8u; c->r[5] = 0u + 0x00000001u; func_0880d4c8(c, ram); }
    { goto L_0881a900; }
L_0881a8f0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a900u; c->r[5] = 0u + 0x00000002u; func_0880d4c8(c, ram); }
L_0881a900:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a90cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881a920u; c->r[6] = 0u + 0x00007000u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000188u, c->r[2]);
    c->r[2] = 0u + 0x00001000u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[7] == c->r[2]); if (_c) goto L_0881a998; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000188u);
    c->r[2] = (c->r[3] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881a958; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[4] == 0u); if (_c) goto L_0881a980; }
    { goto L_0881a9d8; }
L_0881a958:
    c->r[2] = 0u + 0x00002000u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_0881a9b0; }
    c->r[2] = 0u + 0x00004000u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0881a9c8; }
    { goto L_0881a9d8; }
L_0881a980:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a990u; c->r[5] = 0u + 0u; func_0880d46c(c, ram); }
    { goto L_0881a9d8; }
L_0881a998:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a9a8u; c->r[5] = 0u + 0x00000001u; func_0880d46c(c, ram); }
    { goto L_0881a9d8; }
L_0881a9b0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a9c0u; c->r[5] = 0u + 0x00000002u; func_0880d46c(c, ram); }
    { goto L_0881a9d8; }
L_0881a9c8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881a9d8u; c->r[5] = 0u + 0x00000003u; func_0880d46c(c, ram); }
L_0881a9d8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881a9e8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000015u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    mem_w32(ram, c->r[30] + 0x0000018cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881aa1c; }
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000018cu);
    c->r[7] = c->r[7] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000190u, c->r[7]); goto L_0881aa28; }
L_0881aa1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000018cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000190u, c->r[2]);
L_0881aa28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000190u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881aa40u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000265u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881aa60u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881aa70u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0881aa90u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0881cd90; }
L_0881aa98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881aac4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { c->r[31] = 0x0881aabcu; c->r[4] = c->r[2] + 0u; func_08820720(c, ram); }
    { goto L_0881cd90; }
L_0881aac4:
    { c->r[31] = 0x0881aaccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881aae8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881ab08u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ab18u; c->r[4] = c->r[4] + 0x00002e04u; func_08820f30(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ab5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ab5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881ab5c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x0881ab50u; c->r[5] = 0x07000000u; func_0892ffa8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_0881ab5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ab7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x0881ab7cu; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
L_0881ab7c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ab8cu; c->r[5] = 0u + 0x0000000bu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881afb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881abbc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x0881abbcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0881abbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000017u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ac00; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_0881ac08; }
L_0881ac00:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, 0u);
L_0881ac08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w8(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0881ac3cu; c->r[5] = c->r[2] + 0u; func_088204e8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ac54u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881ac70u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { c->r[31] = 0x0881ac78u; c->r[4] = c->r[2] + 0u; func_0882061c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ac84u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881ac98u; c->r[6] = 0u + 0x00000c00u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000194u, c->r[2]);
    c->r[2] = 0u + 0x00000400u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000194u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_0881ad00; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000194u);
    c->r[2] = (c->r[5] < 0x00000401u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881acd0; }
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000194u);
    { int _c = (c->r[6] == 0u); if (_c) goto L_0881ace8; }
    { goto L_0881ad28; }
L_0881acd0:
    c->r[2] = 0u + 0x00000800u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000194u);
    { int _c = (c->r[7] == c->r[2]); if (_c) goto L_0881ad18; }
    { goto L_0881ad28; }
L_0881ace8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881acf8u; c->r[5] = 0u + 0u; func_0880d4c8(c, ram); }
    { goto L_0881ad28; }
L_0881ad00:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ad10u; c->r[5] = 0u + 0x00000001u; func_0880d4c8(c, ram); }
    { goto L_0881ad28; }
L_0881ad18:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ad28u; c->r[5] = 0u + 0x00000002u; func_0880d4c8(c, ram); }
L_0881ad28:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ad38u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0881ad58u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ad64u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881ad78u; c->r[6] = 0u + 0x00007000u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000198u, c->r[2]);
    c->r[2] = 0u + 0x00001000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000198u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881adf0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000198u);
    c->r[2] = (c->r[4] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881adb0; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000198u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_0881add8; }
    { goto L_0881ae30; }
L_0881adb0:
    c->r[2] = 0u + 0x00002000u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000198u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0881ae08; }
    c->r[2] = 0u + 0x00004000u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000198u);
    { int _c = (c->r[7] == c->r[2]); if (_c) goto L_0881ae20; }
    { goto L_0881ae30; }
L_0881add8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ade8u; c->r[5] = 0u + 0u; func_0880d46c(c, ram); }
    { goto L_0881ae30; }
L_0881adf0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ae00u; c->r[5] = 0u + 0x00000001u; func_0880d46c(c, ram); }
    { goto L_0881ae30; }
L_0881ae08:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ae18u; c->r[5] = 0u + 0x00000002u; func_0880d46c(c, ram); }
    { goto L_0881ae30; }
L_0881ae20:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881ae30u; c->r[5] = 0u + 0x00000003u; func_0880d46c(c, ram); }
L_0881ae30:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881ae40u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000015u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    mem_w32(ram, c->r[30] + 0x0000019cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ae74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000019cu);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]); goto L_0881ae80; }
L_0881ae74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000019cu);
    c->r[3] = c->r[3] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000001a0u, c->r[3]);
L_0881ae80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881ae98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000265u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881aeb8u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881af3c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881aed8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881af00u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0881af20u; c->r[7] = 0u + 0x00000009u; func_0881ef98(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881af2cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { c->r[31] = 0x0881af34u; c->r[4] = c->r[2] + 0u; func_088fd4cc(c, ram); }
    { goto L_0881af90; }
L_0881af3c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881af48u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881af70u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0881af90u; c->r[7] = 0u + 0x0000001du; func_0881ef98(c, ram); }
L_0881af90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881cd90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_0881cd90; }
L_0881afb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000001a4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b274; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001a4u);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff69cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0881a2ccu: goto L_0881a2cc; case 0x0881a358u: goto L_0881a358; case 0x0881aa98u: goto L_0881aa98; case 0x0881affcu: goto L_0881affc; case 0x0881b200u: goto L_0881b200; case 0x0881b228u: goto L_0881b228; case 0x0881b26cu: goto L_0881b26c; case 0x0881bb90u: goto L_0881bb90; case 0x0881bbe0u: goto L_0881bbe0; case 0x0881bc18u: goto L_0881bc18; case 0x0881bc6cu: goto L_0881bc6c; case 0x0881ccd0u: goto L_0881ccd0; case 0x0881cd90u: goto L_0881cd90; default: recomp_trap_unknown_indirect(c, ram, 0x0881aff4u, _t); return; } }
L_0881affc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b024; }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881b01cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881e654(c, ram); }
    { goto L_0881b274; }
L_0881b024:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b118; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881b118; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0881b06cu; c->r[4] = c->r[2] + 0u; func_08820d48(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0881b0a0u; c->r[4] = c->r[2] + 0u; func_08820d48(c, ram); }
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf24u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b0d4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000025u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b100; }
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf24u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff5e8u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]);
L_0881b100:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_0881b274; }
L_0881b118:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b274; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0881b154u; c->r[4] = c->r[2] + 0u; func_08820d48(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0881b188u; c->r[4] = c->r[2] + 0u; func_08820d48(c, ram); }
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf24u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b1bcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000025u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b1e8; }
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf24u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff5e8u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]);
L_0881b1e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_0881b274; }
L_0881b200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b274; }
    { c->r[31] = 0x0881b214u; func_088fd984(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881b220u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u); func_088204a8(c, ram); }
    { goto L_0881b274; }
L_0881b228:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b25c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881b25cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881e4b4(c, ram); }
L_0881b25c:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_0881b274; }
L_0881b26c:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, 0u);
L_0881b274:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b2a0; }
    { c->r[31] = 0x0881b290u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u); func_08930048(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b2a0; }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_0881b2a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b53c; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0xfffff598u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000002u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[5]);
    mem_w8(ram, c->r[2] + 0x00000002u, c->r[6]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf20u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0881b2f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x0881b2f0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881fea0(c, ram); }
    { goto L_0881b7c8; }
L_0881b2f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881b320u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b374; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b374; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881b374u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u); func_088204a8(c, ram); }
L_0881b374:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881b388u; c->r[5] = c->r[2] + 0u; func_0881dc58(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b7c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b3ac; }
    { c->r[31] = 0x0881b3acu; func_088fd984(c, ram); }
L_0881b3ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b46c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0881b3ccu; c->r[16] = c->r[2] + 0x00000050u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0881b3fcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x0881b404u; func_08820f58(c, ram); }
    { c->r[31] = 0x0881b40cu; c->r[16] = c->r[2] + 0x00000020u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x0881b424u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0881b438u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000018u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000060u);
    { c->r[31] = 0x0881b44cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000068u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[16] + 0x0000001cu, c->f[0]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbf20u);
    c->r[2] = 0u + 0u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]); goto L_0881b7c8; }
L_0881b46c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b488; }
    { goto L_0881b7c8; }
L_0881b488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b4b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
L_0881b4b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000013u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b4d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w8(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0881b4d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000013u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b4f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
L_0881b4f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881b504u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881dd0c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0881b530; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[2] = c->r[2] + 0xfffffffeu;
    mem_w8(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0881b530:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w8(ram, c->r[2] + 0x00000013u, 0u); goto L_0881b7c8; }
L_0881b53c:
    { c->r[31] = 0x0881b544u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u); func_0892ff00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b568; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000013u, c->r[2]);
L_0881b568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b750; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0881b594u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881b5a4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b750; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b750; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
L_0881b5dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000015u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b610; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w8(ram, c->r[2] + 0x00000015u, 0u); goto L_0881b64c; }
L_0881b610:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b61cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000010u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881b644u; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b5dc; }
L_0881b64c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0881b750; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881b678u; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b684u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881b698u; c->r[6] = 0u + 0x00007000u; func_08820df8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881b6dc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b6b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881b6dcu; c->r[6] = c->r[2] + 0u; func_08820d98(c, ram); }
L_0881b6dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    mem_w32(ram, c->r[30] + 0x000001a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881b70c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a8u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x000001acu, c->r[2]); goto L_0881b718; }
L_0881b70c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001a8u);
    c->r[3] = c->r[3] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000001acu, c->r[3]);
L_0881b718:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001acu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881b730u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = c->r[2] + 0x00000265u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881b750u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_0881b750:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000001b0u);
    { int _c = ((s32)c->r[5] < 0); if (_c) goto L_0881b7c8; }
    c->r[6] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = ((s32)c->r[6] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881b790; }
    c->r[2] = 0u + 0x00000002u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x000001b0u);
    { int _c = (c->r[7] == c->r[2]); if (_c) goto L_0881b7b8; }
    { goto L_0881b7c8; }
L_0881b790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881b7c8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x0881b7b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881eb78(c, ram); }
    { goto L_0881b7c8; }
L_0881b7b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x0881b7c8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881ee94(c, ram); }
L_0881b7c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ba74; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881b7ecu; c->r[5] = 0u + 0x00000015u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881b94c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b810u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881b94c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881b844u; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b850u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881b864u; c->r[6] = 0u + 0x00000c00u; func_08820df8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881b8a8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b880u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000400u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881b8a8u; c->r[6] = c->r[2] + 0u; func_08820d98(c, ram); }
L_0881b8a8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b8b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0881b8ecu; c->r[6] = c->r[2] + 0u; func_0881f914(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881b908u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881b918u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0881b94cu; c->r[6] = c->r[2] + 0u; func_0881fc98(c, ram); }
L_0881b94c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881b968u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881ba28; }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5ecu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5f0u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff5f4u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x0881b9bcu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0881b9d4u; c->r[5] = c->r[2] + 0u; func_08820bb0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881baec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5f8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5fcu);
    { mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]); goto L_0881baec; }
L_0881ba28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881ba50u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_0881baec; }
L_0881ba74:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf20u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881baec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881baacu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbf20u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881baec; }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
L_0881baec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf00u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf04u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf08u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf0cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf14u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf18u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf1cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881cd90; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff600u);
    c->r[1] = 0x08a90000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf24u, c->f[0]); goto L_0881cd90; }
L_0881bb90:
    { c->r[31] = 0x0881bb98u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881bba8; }
    { goto L_0881bbb8; }
L_0881bba8:
    { c->r[31] = 0x0881bbb0u; func_089d7cac(c, ram); }
    { goto L_0881bb90; }
L_0881bbb8:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881bbc8u; c->r[5] = 0x00010000u; func_08820ce8(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881bbd8u; c->r[5] = 0x00010000u; func_08820d18(c, ram); }
    { goto L_0881cd90; }
L_0881bbe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881cd90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881cd90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000013u, c->r[2]); goto L_0881cd90; }
L_0881bc18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000013u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881bc40u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881cd90; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0881bc64u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    { goto L_0881cd90; }
L_0881bc6c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff604u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0881bc84u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881bca0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    { c->r[31] = 0x0881bcacu; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881bcd8; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0881bcd0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881bcd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881bd24; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bd04u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = c->r[2] + 0x0000135au;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881bd1cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881bd24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881bea0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881bd64; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x000001b4u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_0881bd7c; }
    { goto L_0881c5c8; }
L_0881bd64:
    c->r[2] = 0u + 0x00000002u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000001b4u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0881bf44; }
    { goto L_0881c5c8; }
L_0881bd7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881be10; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bd9cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881bdb0u; c->r[6] = 0u + 0x00000070u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881bde4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bdc4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = c->r[2] + 0x000016dcu;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881bddcu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881bde4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bdf0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = c->r[2] + 0x0000135au;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881be08u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881be10:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881be1cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881be30u; c->r[6] = 0u + 0x00000070u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881be64; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881be44u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = c->r[2] + 0x00001331u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881be5cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881be64:
    { c->r[31] = 0x0881be6cu; c->r[4] = 0u + 0x00000005u; func_08928c60(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881be78u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = c->r[2] + 0x00001331u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881be90u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x0881be98u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_0881c5c8; }
L_0881bea0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881beacu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881bf20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00001383u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881bf18u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881bf20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00001383u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881bf3cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881bf44:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bf50u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000179u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bf80u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bfa8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000142u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881bfd0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000017au);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c000u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c028u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000143u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c050u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881c18c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c068u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c18c; }
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_0881c078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881c090; }
    { goto L_0881c15c; }
L_0881c090:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c09cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881c0b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u); func_08820ea4(c, ram); }
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0881c0cc; }
    { goto L_0881c14c; }
L_0881c0cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000ddu;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000deu;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_0881c14c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0881c078; }
L_0881c15c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c174; }
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
L_0881c174:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c18c; }
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_0881c18c:
    { c->r[31] = 0x0881c194u; func_0896793c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c1d8; }
    { c->r[31] = 0x0881c1acu; func_08967990(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c1d8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x000014ebu;
    { c->r[31] = 0x0881c1d0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c1d8:
    { c->r[31] = 0x0881c1e0u; func_0896793c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c20c; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x000014eau;
    { c->r[31] = 0x0881c204u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c20c:
    { c->r[31] = 0x0881c214u; func_08967990(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c240; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x000014e9u;
    { c->r[31] = 0x0881c238u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c240:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x00001405u;
    { c->r[31] = 0x0881c254u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c25c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881c2a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c5c8; }
    { c->r[31] = 0x0881c288u; c->r[4] = 0u + 0x00000002u; func_08928c60(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x00001312u;
    { c->r[31] = 0x0881c29cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c2a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881c5c8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c2c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000179u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c2f4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c31cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000142u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c344u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000017au);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c374u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c39cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000143u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c3c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881c500; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c3dcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c500; }
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_0881c3ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881c404; }
    { goto L_0881c4d0; }
L_0881c404:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c410u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881c424u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u); func_08820ea4(c, ram); }
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0881c440; }
    { goto L_0881c4c0; }
L_0881c440:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000ddu;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000deu;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_0881c4c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0881c3ec; }
L_0881c4d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c4e8; }
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
L_0881c4e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c500; }
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_0881c500:
    { c->r[31] = 0x0881c508u; func_0896793c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c54c; }
    { c->r[31] = 0x0881c520u; func_08967990(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c54c; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x000014ebu;
    { c->r[31] = 0x0881c544u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c54c:
    { c->r[31] = 0x0881c554u; func_0896793c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c580; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x000014eau;
    { c->r[31] = 0x0881c578u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c580:
    { c->r[31] = 0x0881c588u; func_08967990(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c5b4; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x000014e9u;
    { c->r[31] = 0x0881c5acu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0881c5c8; }
L_0881c5b4:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff5c8u;
    c->r[5] = 0u + 0x00001405u;
    { c->r[31] = 0x0881c5c8u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_0881c5c8:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881c5d4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff608u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0881c5ecu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c5f8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000129u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881c868; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881c868; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881c868; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0881c690u; c->r[5] = c->r[5] | 0x011eu; func_08820aac(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881c6a4u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x0881c6acu; c->r[4] = 0u + 0x00000050u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881c6c0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x0881c6ccu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u + 0x00000090u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u + 0x0000001fu;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u + 0x000000ddu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000009au;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x00000029u;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000000e7u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000008au;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0881c7c0u; c->r[5] = c->r[2] + 0u; func_08820aac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0881c81cu; c->r[5] = c->r[2] + 0u; func_08820aac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0881c868u; c->r[5] = c->r[5] | 0x0002u; func_08820aac(c, ram); }
L_0881c868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881cb78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881c898u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881cb78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881c8bcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { c->r[31] = 0x0881c8c4u; c->r[4] = c->r[2] + 0u; func_08930048(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881cb78; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0881c91cu; c->r[5] = c->r[5] | 0x011eu; func_08820aac(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881c930u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881c93cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff5d4u;
    { c->r[31] = 0x0881c958u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0881c964u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881c978u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x0881c984u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u + 0x0000007bu;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u + 0x0000004bu;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = c->r[2] << 8;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = c->r[2] << 7;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x0000017bu;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0x000000cbu;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000100u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000080u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0881cad0u; c->r[5] = c->r[2] + 0u; func_08820aac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0881cb2cu; c->r[5] = c->r[2] + 0u; func_08820aac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0881cb78u; c->r[5] = c->r[5] | 0x0002u; func_08820aac(c, ram); }
L_0881cb78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881ccbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881cba8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881ccbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881cc6c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881cbd0u; c->r[5] = 0u + 0x0000000bu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[4] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0xcccc0000u;
    c->r[2] = c->r[2] | 0xcccdu;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 4;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x000000b3u;
    mem_w16(ram, c->r[30] + 0x00000180u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0xcccc0000u;
    c->r[2] = c->r[2] | 0xcccdu;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] >> 4;
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000022u;
    mem_w16(ram, c->r[30] + 0x00000182u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000180u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000182u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0881cc64u; c->r[6] = 0u + 0u; func_0892566c(c, ram); }
    { goto L_0881ccbc; }
L_0881cc6c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881cc7cu; c->r[5] = 0u + 0x00000015u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x000000e6u;
    mem_w16(ram, c->r[30] + 0x00000180u, c->r[2]);
    c->r[2] = 0u + 0x00000082u;
    mem_w16(ram, c->r[30] + 0x00000182u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000180u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000182u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0881ccbcu; c->r[6] = 0u + 0u; func_0892566c(c, ram); }
L_0881ccbc:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881ccc8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0881cd90; }
L_0881ccd0:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5f0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0881ccf8u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff60cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff60cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xfffff60cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xfffff5e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0881cd34u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff610u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff610u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xfffff610u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xfffff5e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0881cd70u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = c->r[30] + 0x00000080u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881cd90u; c->r[6] = c->r[3] + 0u; func_089e6684(c, ram); }
L_0881cd90:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000001c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000001c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000001c0u);
    { c->r[29] = c->r[29] + 0x000001d0u; return; }
    return; /* fell out of func_0881a2cc */
}

/* func_08820e5c  0x08820e5c..0x08820ea4  72 bytes, source=sweep */
void func_08820e5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820e5cu);
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
    c->r[2] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & c->r[3];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820e5c */
}

/* func_08826ac8  0x08826ac8..0x08826afc  52 bytes, source=sweep */
void func_08826ac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826ac8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b8cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826ac8 */
}

/* func_0882879c  0x0882879c..0x08828804  104 bytes, source=fde */
void func_0882879c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882879cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088287b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088287c8; }
    { goto L_088287f0; }
L_088287c8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088287e0u; c->r[7] = 0u + 0u; func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088287b0; }
L_088287f0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882879c */
}

/* func_0882bbf4  0x0882bbf4..0x0882bc7c  136 bytes, source=sweep */
void func_0882bbf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882bbf4u);
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
    return; /* fell out of func_0882bbf4 */
}

/* func_08830cec  0x08830cec..0x08830e74  392 bytes, source=sweep */
void func_08830cec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08830cecu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08830d14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08830d2c; }
    { goto L_08830d70; }
L_08830d2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08830d60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08830d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08830d14; }
L_08830d70:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08830d74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08830d90; }
    { goto L_08830ddc; }
L_08830d90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08830dcc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08830ddc; }
L_08830dcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08830d74; }
L_08830ddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08830e58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08830e14; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08830e14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08830e2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08830e2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08830e60; }
L_08830e58:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08830e60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08830cec */
}

/* func_08832b20  0x08832b20..0x08832bb8  152 bytes, source=fde */
void func_08832b20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832b20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x0000000du;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0xffffffffu;
    { c->r[31] = 0x08832b50u; c->r[9] = 0u + 0x0000003cu; func_08831aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000du;
    c->r[6] = 0u + 0x0000000du;
    c->r[7] = 0u + 0xffffffffu;
    { c->r[31] = 0x08832b6cu; c->r[8] = 0u + 0x0000001eu; func_0883212c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832b84; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08832ba0; }
L_08832b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832b98; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08832ba0; }
L_08832b98:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08832ba0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832b20 */
}

/* func_08834b64  0x08834b64..0x08834f30  972 bytes, source=fde */
void func_08834b64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08834b64u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08834bd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000029u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08834bd8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08834bf0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08834c00u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834c60; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08834c30u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08834c40u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834c60; }
    { goto L_08834cc4; }
L_08834c60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08834c7cu; c->r[6] = 0u + 0x00000001u; func_08830cec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08834ef8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[3] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834cb4u; c->r[5] = 0u + 0x0000000eu; func_08937a50(c, ram); }
    { c->r[31] = 0x08834cbcu; func_08925598(c, ram); }
    { goto L_08834ef8; }
L_08834cc4:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08834cdcu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08834cecu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834d4c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08834d1cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08834d2cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834d4c; }
    { goto L_08834db0; }
L_08834d4c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08834d68u; c->r[6] = 0u + 0xffffffffu; func_08830cec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08834ef8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[3] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834da0u; c->r[5] = 0u + 0x0000000eu; func_08937a50(c, ram); }
    { c->r[31] = 0x08834da8u; func_08925598(c, ram); }
    { goto L_08834ef8; }
L_08834db0:
    { c->r[31] = 0x08834db8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08834ec8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08834ef8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08834e68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w8(ram, c->r[3] + 0x00000029u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = c->r[2] + 0u;
    { c->r[31] = 0x08834e48u; c->r[9] = 0u + 0u; func_08830f6c(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834e60u; c->r[5] = 0u + 0x0000000eu; func_08937a50(c, ram); }
    { goto L_08834ef8; }
L_08834e68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834e7cu; c->r[5] = 0u + 0x00000010u; func_08937a50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x08834e9cu; c->r[6] = c->r[2] + 0u; func_08968bc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x08834ea8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089691c4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08834ec0u; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    { goto L_08834ef8; }
L_08834ec8:
    { c->r[31] = 0x08834ed0u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08834ef8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08834ee4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088307d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834ef8u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
L_08834ef8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000029u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08834b64 */
}

/* func_088382d4  0x088382d4..0x08838a88  1972 bytes, source=fde */
void func_088382d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088382d4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08838304u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088383d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[2] + 0x000002d7u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08838330u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883834cu; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000f04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088383ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000263u;
    { c->r[31] = 0x088383a4u; c->r[6] = 0u + 0x00000004u; func_0893009c(c, ram); }
    { goto L_088383c4; }
L_088383ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x000002b5u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088383c4u; c->r[6] = 0u + 0x00000004u; func_0893009c(c, ram); }
L_088383c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088383d0u; c->r[5] = 0u + 0x00000001u; func_0893303c(c, ram); }
L_088383d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088383ecu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883896c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00730000u;
    { c->r[31] = 0x0883840cu; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00220000u;
    { c->r[31] = 0x0883841cu; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    { c->r[31] = 0x08838424u; c->r[4] = 0u + 0x000004bcu; func_089241c8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x0000472cu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001b5cu;
    { c->r[31] = 0x0883843cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x0000472cu;
    { c->r[31] = 0x08838450u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    { c->r[31] = 0x08838458u; c->r[4] = 0u + 0x000004bdu; func_089241c8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x0000474cu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001b5cu;
    { c->r[31] = 0x08838470u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x0000474cu;
    { c->r[31] = 0x08838484u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08838488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088384a0; }
    { goto L_0883896c; }
L_088384a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000ef8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000efcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00730000u;
    { c->r[31] = 0x08838540u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000046ccu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001b60u;
    { c->r[31] = 0x08838570u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088385b8; }
    { c->r[31] = 0x08838584u; c->r[4] = 0u + 0x000004beu; func_089241c8(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000476cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001b68u;
    { c->r[31] = 0x088385b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1ad34(c, ram); }
    { goto L_088385e8; }
L_088385b8:
    { c->r[31] = 0x088385c0u; c->r[4] = 0u + 0x000004beu; func_089241c8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000476cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088385e8u; c->r[5] = c->r[5] + 0x00001b70u; func_08a1ad34(c, ram); }
L_088385e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08838764; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
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
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x91a20000u;
    c->r[2] = c->r[2] | 0xb3c5u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 10);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
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
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x9b580000u;
    c->r[2] = c->r[2] | 0x3739u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08838730; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088386f8; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088386f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000478cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001b7cu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08838728u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000018u); func_08a1ad34(c, ram); }
    { goto L_08838788; }
L_08838730:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000478cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001b8cu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0883875cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000018u); func_08a1ad34(c, ram); }
    { goto L_08838788; }
L_08838764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000478cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08838788u; c->r[5] = c->r[5] + 0x00001b98u; func_08a1ad34(c, ram); }
L_08838788:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000482cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004830u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000046ccu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004834u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004838u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000476cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004834u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000000eu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000483cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004840u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000478cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000483cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00400000u;
    { c->r[31] = 0x0883890cu; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000482cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08838944u; c->r[6] = c->r[2] + 0u; func_08933498(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0883895cu; c->r[6] = c->r[2] + 0u; func_08933428(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08838488; }
L_0883896c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08838988u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088389c0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088389a8u; c->r[5] = 0u + 0x0000009bu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088389bcu; c->r[5] = 0u + 0x0000009cu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088389c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088389dcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08838a14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    { c->r[31] = 0x088389fcu; c->r[4] = c->r[2] + 0u; func_089691c4(c, ram); }
    c->r[2] = c->r[2] + 0x0000004bu;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08838a14u; c->r[5] = c->r[2] + 0u; func_08932eec(c, ram); }
L_08838a14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001b4cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08838a74u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088382d4 */
}

/* func_0883bc5c  0x0883bc5c..0x0883bd04  168 bytes, source=fde */
void func_0883bc5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883bc5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bc9c; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x00001596u;
    { c->r[31] = 0x0883bc94u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883bcf0; }
L_0883bc9c:
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000048dcu, c->r[2]);
    { c->r[31] = 0x0883bcb0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bccc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bcccu; c->r[5] = c->r[5] + 0xffffbda0u; func_0880f03c(c, ram); }
L_0883bccc:
    { c->r[31] = 0x0883bcd4u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bcf0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883bcf0u; c->r[5] = c->r[5] + 0xffffbd04u; func_0880f03c(c, ram); }
L_0883bcf0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883bc5c */
}

/* func_0884543c  0x0884543c..0x088454a8  108 bytes, source=residue */
void func_0884543c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884543cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
L_08845454:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08845468u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845478; }
    { goto L_08845490; }
L_08845478:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845454; }
L_08845490:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884543c */
}

/* func_08847290  0x08847290..0x08847338  168 bytes, source=fde */
void func_08847290(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08847290u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088472c8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088472e0; }
    { goto L_08847324; }
L_088472e0:
    { c->r[31] = 0x088472e8u; c->r[4] = 0u + 0x00000002u; func_089c3618(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003734u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003738u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x08847324u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088475b4(c, ram); }
L_08847324:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08847290 */
}

/* func_0884c314  0x0884c314..0x0884c4f4  480 bytes, source=sweep */
void func_0884c314(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c314u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0884c33cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
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
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
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
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
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
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
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
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0884c314 */
}

/* func_0884d8f8  0x0884d8f8..0x0884d994  156 bytes, source=fde */
void func_0884d8f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d8f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0884d910:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884d928; }
    { goto L_0884d978; }
L_0884d928:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884d968; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0884d968u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
L_0884d968:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0884d910; }
L_0884d978:
    { c->r[31] = 0x0884d980u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d850(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d8f8 */
}

/* func_0885367c  0x0885367c..0x08853a70  1012 bytes, source=fde */
void func_0885367c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885367cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < 0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853814; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000028b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088536e0u: goto L_088536e0; case 0x0885371cu: goto L_0885371c; case 0x08853798u: goto L_08853798; case 0x088537acu: goto L_088537ac; case 0x088537c0u: goto L_088537c0; case 0x08853814u: goto L_08853814; default: recomp_trap_unknown_indirect(c, ram, 0x088536d8u, _t); return; } }
L_088536e0:
    c->r[4] = 0u + 0x0000004cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088536fcu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08853708u; c->r[5] = 0u + 0x00000040u; func_0884d1b0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x00003a70u;
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_08853814; }
L_0885371c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08853720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000021u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08853740; }
    { goto L_08853814; }
L_08853740:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885374cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088995a4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e54u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[4] + 0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08853788u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08853720; }
L_08853798:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x0000002fu);
    { mem_w8(ram, c->r[2] + 0x00000014u, c->r[3]); goto L_08853814; }
L_088537ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x00004398u;
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_08853814; }
L_088537c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x00004480u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x000000cau, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088537f4u; c->r[5] = c->r[5] + 0x0000285cu; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000044u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853810u; c->r[5] = c->r[5] + 0x00002868u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08853814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853840; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08853838u; c->r[5] = 0x00800000u; func_0884d1b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c8u, 0u);
L_08853840:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003eu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853870; }
    c->r[4] = 0u + 0x00000053u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08853870u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
L_08853870:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853880u; c->r[5] = c->r[5] + 0x00002874u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088538f8; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e74u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088538ac; }
    mem_w8(ram, c->r[30] + 0x00000010u, 0u);
L_088538ac:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e74u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088538c8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088538c8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088538f8; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000004eu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088538f8u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
L_088538f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853908u; c->r[5] = c->r[5] + 0x00002878u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885392c; }
    c->r[4] = 0u + 0x0000004du;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885392cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c6bec(c, ram); }
L_0885392c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0885393cu; c->r[5] = c->r[5] + 0x0000287cu; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853984; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0u + 0x00000055u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08853968u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08853978u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08853984:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853994u; c->r[5] = c->r[5] + 0x00002888u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088539c8; }
    c->r[4] = 0u + 0x00000057u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088539b8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x00004544u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088539c8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088539d8u; c->r[5] = c->r[5] + 0x00002894u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088539fc; }
    c->r[4] = 0u + 0x00000052u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088539fcu; c->r[9] = 0u + 0x00000004u; func_089c6bec(c, ram); }
L_088539fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853a0cu; c->r[5] = c->r[5] + 0x0000289cu; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853a24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x00004238u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08853a24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08853a34u; c->r[5] = c->r[5] + 0x000028a8u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08853a58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08850000u;
    c->r[2] = c->r[2] + 0x0000470cu;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x000000cau, c->r[2]);
L_08853a58:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885367c */
}

/* func_088586a8  0x088586a8..0x08858710  104 bytes, source=fde */
void func_088586a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088586a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088586bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088586d4; }
    { goto L_088586fc; }
L_088586d4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088586ecu; c->r[7] = 0u + 0u; func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088586bc; }
L_088586fc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088586a8 */
}

/* func_0885a494  0x0885a494..0x0885a660  460 bytes, source=sweep */
void func_0885a494(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a494u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[3] = c->r[4] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885a574; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0885a538:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885a564; }
    { goto L_0885a574; }
L_0885a564:
    { c->r[31] = 0x0885a56cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885b240(c, ram); }
    { goto L_0885a538; }
L_0885a574:
L_0885a578:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885a590; }
    { goto L_0885a5ec; }
L_0885a590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_0885a5b0; }
    { goto L_0885a5ec; }
L_0885a5b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885a5dc; }
    { goto L_0885a5ec; }
L_0885a5dc:
    { c->r[31] = 0x0885a5e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0885b240(c, ram); }
    { goto L_0885a578; }
L_0885a5ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[4] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a494 */
}

/* func_0885b300  0x0885b300..0x0885b358  88 bytes, source=sweep */
void func_0885b300(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b300u);
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
    return; /* fell out of func_0885b300 */
}

/* func_08861158  0x08861158..0x08861194  60 bytes, source=sweep */
void func_08861158(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861158u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08861180u; c->r[6] = 0u + 0u; func_08861a04(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861158 */
}

/* func_088621d0  0x088621d0..0x08862234  100 bytes, source=sweep */
void func_088621d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088621d0u);
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
    { c->r[31] = 0x08862220u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088621d0 */
}

/* func_088662e0  0x088662e0..0x08866378  152 bytes, source=sweep */
void func_088662e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088662e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08866320u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088662e0 */
}

/* func_0886b8a0  0x0886b8a0..0x0886daa8  8712 bytes, source=fde */
void func_0886b8a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886b8a0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886b8c8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886da94; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886b8e0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886da94; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886b8f8u; c->r[4] = c->r[4] + 0x00003434u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0886b90cu; c->r[4] = c->r[4] + 0x00003444u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00003d40u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00003ec8u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0886b930:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886b948; }
    { goto L_0886da94; }
L_0886b948:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886b954u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0886b968u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08820ea4(c, ram); }
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0886b984; }
    { goto L_0886da84; }
L_0886b984:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886b9f4; }
    { goto L_0886ba08; }
L_0886b9f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_0886ba40; }
L_0886ba08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ba30; }
    { goto L_0886ba40; }
L_0886ba30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0886ba40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bab0; }
    { goto L_0886bac4; }
L_0886bab0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    { mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]); goto L_0886bafc; }
L_0886bac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886baec; }
    { goto L_0886bafc; }
L_0886baec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
L_0886bafc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bb6c; }
    { goto L_0886bb80; }
L_0886bb6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    { mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]); goto L_0886bbb8; }
L_0886bb80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bba8; }
    { goto L_0886bbb8; }
L_0886bba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
L_0886bbb8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bc28; }
    { goto L_0886bc3c; }
L_0886bc28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    { mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]); goto L_0886bc74; }
L_0886bc3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bc64; }
    { goto L_0886bc74; }
L_0886bc64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
L_0886bc74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bce4; }
    { goto L_0886bcf8; }
L_0886bce4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    { mem_wf32(ram, c->r[2] + 0x00000014u, c->f[0]); goto L_0886bd30; }
L_0886bcf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bd20; }
    { goto L_0886bd30; }
L_0886bd20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x00000014u, c->f[0]);
L_0886bd30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bda0; }
    { goto L_0886bdb4; }
L_0886bda0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    { mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]); goto L_0886bdec; }
L_0886bdb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bddc; }
    { goto L_0886bdec; }
L_0886bddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]);
L_0886bdec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886be5c; }
    { goto L_0886be70; }
L_0886be5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    { mem_wf32(ram, c->r[2] + 0x0000001cu, c->f[0]); goto L_0886bea8; }
L_0886be70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886be98; }
    { goto L_0886bea8; }
L_0886be98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x0000001cu, c->f[0]);
L_0886bea8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bf18; }
    { goto L_0886bf2c; }
L_0886bf18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    { mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]); goto L_0886bf64; }
L_0886bf2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bf54; }
    { goto L_0886bf64; }
L_0886bf54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_0886bf64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886bfd4; }
    { goto L_0886bfe8; }
L_0886bfd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    { mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]); goto L_0886c020; }
L_0886bfe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c010; }
    { goto L_0886c020; }
L_0886c010:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
L_0886c020:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c090; }
    { goto L_0886c0a4; }
L_0886c090:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    { mem_wf32(ram, c->r[2] + 0x0000002cu, c->f[0]); goto L_0886c0dc; }
L_0886c0a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c0cc; }
    { goto L_0886c0dc; }
L_0886c0cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    mem_wf32(ram, c->r[2] + 0x0000002cu, c->f[0]);
L_0886c0dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c14c; }
    { goto L_0886c160; }
L_0886c14c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_0886c198; }
L_0886c160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c188; }
    { goto L_0886c198; }
L_0886c188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_0886c198:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c208; }
    { goto L_0886c21c; }
L_0886c208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000034u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_0886c254; }
L_0886c21c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c244; }
    { goto L_0886c254; }
L_0886c244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
L_0886c254:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c2c4; }
    { goto L_0886c2d8; }
L_0886c2c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    { mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]); goto L_0886c310; }
L_0886c2d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c300; }
    { goto L_0886c310; }
L_0886c300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
L_0886c310:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000003cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c380; }
    { goto L_0886c394; }
L_0886c380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000003cu);
    { mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]); goto L_0886c3cc; }
L_0886c394:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000003cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c3bc; }
    { goto L_0886c3cc; }
L_0886c3bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000003cu);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
L_0886c3cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c43c; }
    { goto L_0886c450; }
L_0886c43c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000040u, c->f[0]); goto L_0886c488; }
L_0886c450:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c478; }
    { goto L_0886c488; }
L_0886c478:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000040u, c->f[0]);
L_0886c488:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c4f8; }
    { goto L_0886c50c; }
L_0886c4f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]); goto L_0886c544; }
L_0886c50c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c534; }
    { goto L_0886c544; }
L_0886c534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
L_0886c544:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c5b4; }
    { goto L_0886c5c8; }
L_0886c5b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    { mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]); goto L_0886c600; }
L_0886c5c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c5f0; }
    { goto L_0886c600; }
L_0886c5f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]);
L_0886c600:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c670; }
    { goto L_0886c684; }
L_0886c670:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000050u);
    { mem_wf32(ram, c->r[2] + 0x00000050u, c->f[0]); goto L_0886c6bc; }
L_0886c684:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c6ac; }
    { goto L_0886c6bc; }
L_0886c6ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000050u);
    mem_wf32(ram, c->r[2] + 0x00000050u, c->f[0]);
L_0886c6bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000054u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c72c; }
    { goto L_0886c740; }
L_0886c72c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000054u);
    { mem_wf32(ram, c->r[2] + 0x00000054u, c->f[0]); goto L_0886c778; }
L_0886c740:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c768; }
    { goto L_0886c778; }
L_0886c768:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000054u);
    mem_wf32(ram, c->r[2] + 0x00000054u, c->f[0]);
L_0886c778:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000058u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c7e8; }
    { goto L_0886c7fc; }
L_0886c7e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000058u);
    { mem_wf32(ram, c->r[2] + 0x00000058u, c->f[0]); goto L_0886c834; }
L_0886c7fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000058u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c824; }
    { goto L_0886c834; }
L_0886c824:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000058u);
    mem_wf32(ram, c->r[2] + 0x00000058u, c->f[0]);
L_0886c834:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000005cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000005cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000005cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000005cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000005cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c8a4; }
    { goto L_0886c8b8; }
L_0886c8a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000005cu);
    { mem_wf32(ram, c->r[2] + 0x0000005cu, c->f[0]); goto L_0886c8f0; }
L_0886c8b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000005cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000005cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c8e0; }
    { goto L_0886c8f0; }
L_0886c8e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000005cu);
    mem_wf32(ram, c->r[2] + 0x0000005cu, c->f[0]);
L_0886c8f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000068u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000068u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c960; }
    { goto L_0886c974; }
L_0886c960:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000068u);
    { mem_wf32(ram, c->r[2] + 0x00000068u, c->f[0]); goto L_0886c9ac; }
L_0886c974:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000068u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886c99c; }
    { goto L_0886c9ac; }
L_0886c99c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000068u);
    mem_wf32(ram, c->r[2] + 0x00000068u, c->f[0]);
L_0886c9ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000006cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000006cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000006cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000006cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000006cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ca1c; }
    { goto L_0886ca30; }
L_0886ca1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000006cu);
    { mem_wf32(ram, c->r[2] + 0x0000006cu, c->f[0]); goto L_0886ca68; }
L_0886ca30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000006cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000006cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ca58; }
    { goto L_0886ca68; }
L_0886ca58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000006cu);
    mem_wf32(ram, c->r[2] + 0x0000006cu, c->f[0]);
L_0886ca68:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000070u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000070u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000070u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cad8; }
    { goto L_0886caec; }
L_0886cad8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000070u);
    { mem_wf32(ram, c->r[2] + 0x00000070u, c->f[0]); goto L_0886cb24; }
L_0886caec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000070u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000070u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cb14; }
    { goto L_0886cb24; }
L_0886cb14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000070u);
    mem_wf32(ram, c->r[2] + 0x00000070u, c->f[0]);
L_0886cb24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000074u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000074u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cb94; }
    { goto L_0886cba8; }
L_0886cb94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000074u);
    { mem_wf32(ram, c->r[2] + 0x00000074u, c->f[0]); goto L_0886cbe0; }
L_0886cba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000074u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cbd0; }
    { goto L_0886cbe0; }
L_0886cbd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000074u);
    mem_wf32(ram, c->r[2] + 0x00000074u, c->f[0]);
L_0886cbe0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000078u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000078u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000078u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000078u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000078u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cc50; }
    { goto L_0886cc64; }
L_0886cc50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000078u);
    { mem_wf32(ram, c->r[2] + 0x00000078u, c->f[0]); goto L_0886cc9c; }
L_0886cc64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000078u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000078u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cc8c; }
    { goto L_0886cc9c; }
L_0886cc8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000078u);
    mem_wf32(ram, c->r[2] + 0x00000078u, c->f[0]);
L_0886cc9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x0000007cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000007cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000007cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000007cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000007cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cd0c; }
    { goto L_0886cd20; }
L_0886cd0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000007cu);
    { mem_wf32(ram, c->r[2] + 0x0000007cu, c->f[0]); goto L_0886cd58; }
L_0886cd20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000007cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000007cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cd48; }
    { goto L_0886cd58; }
L_0886cd48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000007cu);
    mem_wf32(ram, c->r[2] + 0x0000007cu, c->f[0]);
L_0886cd58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000080u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cdc8; }
    { goto L_0886cddc; }
L_0886cdc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000080u);
    { mem_wf32(ram, c->r[2] + 0x00000080u, c->f[0]); goto L_0886ce14; }
L_0886cddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000080u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ce04; }
    { goto L_0886ce14; }
L_0886ce04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000080u);
    mem_wf32(ram, c->r[2] + 0x00000080u, c->f[0]);
L_0886ce14:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000084u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000084u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000084u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ce84; }
    { goto L_0886ce98; }
L_0886ce84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000084u);
    { mem_wf32(ram, c->r[2] + 0x00000084u, c->f[0]); goto L_0886ced0; }
L_0886ce98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000084u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cec0; }
    { goto L_0886ced0; }
L_0886cec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000084u);
    mem_wf32(ram, c->r[2] + 0x00000084u, c->f[0]);
L_0886ced0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000088u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000088u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000088u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cf40; }
    { goto L_0886cf54; }
L_0886cf40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000088u);
    { mem_wf32(ram, c->r[2] + 0x00000088u, c->f[0]); goto L_0886cf8c; }
L_0886cf54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000088u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886cf7c; }
    { goto L_0886cf8c; }
L_0886cf7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000088u);
    mem_wf32(ram, c->r[2] + 0x00000088u, c->f[0]);
L_0886cf8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[5] + 0x00000120u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000120u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000120u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d004; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000120u);
    { mem_w16(ram, c->r[2] + 0x00000120u, c->r[3]); goto L_0886d030; }
L_0886d004:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000120u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000120u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d030; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000120u);
    mem_w16(ram, c->r[2] + 0x00000120u, c->r[3]);
L_0886d030:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[5] + 0x00000128u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000008eu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000128u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000128u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d0a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000128u);
    { mem_w8(ram, c->r[2] + 0x00000128u, c->r[3]); goto L_0886d0d4; }
L_0886d0a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000128u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000128u);
    c->r[2] = (c->r[2] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d0d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000128u);
    mem_w8(ram, c->r[2] + 0x00000128u, c->r[3]);
L_0886d0d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000130u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886d144; }
    { goto L_0886d158; }
L_0886d144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    { mem_wf32(ram, c->r[2] + 0x00000130u, c->f[0]); goto L_0886d190; }
L_0886d158:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886d180; }
    { goto L_0886d190; }
L_0886d180:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    mem_wf32(ram, c->r[2] + 0x00000130u, c->f[0]);
L_0886d190:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000134u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000134u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886d200; }
    { goto L_0886d214; }
L_0886d200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000134u);
    { mem_wf32(ram, c->r[2] + 0x00000134u, c->f[0]); goto L_0886d24c; }
L_0886d214:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000134u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886d23c; }
    { goto L_0886d24c; }
L_0886d23c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000134u);
    mem_wf32(ram, c->r[2] + 0x00000134u, c->f[0]);
L_0886d24c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[5] + 0x00000179u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000ddu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000179u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000179u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000179u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d2c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000179u);
    { mem_w8(ram, c->r[2] + 0x00000179u, c->r[3]); goto L_0886d2f0; }
L_0886d2c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000179u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000179u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d2f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000179u);
    mem_w8(ram, c->r[2] + 0x00000179u, c->r[3]);
L_0886d2f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[5] + 0x0000017au);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000deu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x0000017au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000017au);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000017au);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d368; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x0000017au);
    { mem_w8(ram, c->r[2] + 0x0000017au, c->r[3]); goto L_0886d394; }
L_0886d368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000017au);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000017au);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d394; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x0000017au);
    mem_w8(ram, c->r[2] + 0x0000017au, c->r[3]);
L_0886d394:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000139u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000139u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003454u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886d430; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0886d454; }
L_0886d430:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[3]);
L_0886d454:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w8(ram, c->r[2] + 0x00000139u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000139u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000139u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d490; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000139u);
    { mem_w8(ram, c->r[2] + 0x00000139u, c->r[3]); goto L_0886d4bc; }
L_0886d490:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000139u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000139u);
    c->r[2] = (c->r[2] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d4bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000139u);
    mem_w8(ram, c->r[2] + 0x00000139u, c->r[3]);
L_0886d4bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000013cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000009cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[4] + 0x0000013cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000013cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000013cu);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d53c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000013cu);
    { mem_w32(ram, c->r[2] + 0x0000013cu, c->r[3]); goto L_0886d568; }
L_0886d53c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000013cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000013cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d568; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000013cu);
    mem_w32(ram, c->r[2] + 0x0000013cu, c->r[3]);
L_0886d568:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000141u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[4] + 0x00000141u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000141u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000141u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d5f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000141u);
    { mem_w8(ram, c->r[2] + 0x00000141u, c->r[3]); goto L_0886d61c; }
L_0886d5f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000141u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000141u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d61c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000141u);
    mem_w8(ram, c->r[2] + 0x00000141u, c->r[3]);
L_0886d61c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000149u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[4] + 0x00000149u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000149u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000149u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d6a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000149u);
    { mem_w8(ram, c->r[2] + 0x00000149u, c->r[3]); goto L_0886d6d0; }
L_0886d6a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000149u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000149u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d6d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000149u);
    mem_w8(ram, c->r[2] + 0x00000149u, c->r[3]);
L_0886d6d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000151u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[4] + 0x00000151u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000151u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000151u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d758; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000151u);
    { mem_w8(ram, c->r[2] + 0x00000151u, c->r[3]); goto L_0886d784; }
L_0886d758:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000151u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000151u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d784; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000151u);
    mem_w8(ram, c->r[2] + 0x00000151u, c->r[3]);
L_0886d784:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000159u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000acu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[4] + 0x00000159u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000159u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000159u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d80c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000159u);
    { mem_w8(ram, c->r[2] + 0x00000159u, c->r[3]); goto L_0886d838; }
L_0886d80c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000159u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000159u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d838; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000159u);
    mem_w8(ram, c->r[2] + 0x00000159u, c->r[3]);
L_0886d838:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000161u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w8(ram, c->r[4] + 0x00000161u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000161u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000161u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d8c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000161u);
    { mem_w8(ram, c->r[2] + 0x00000161u, c->r[3]); goto L_0886d8ec; }
L_0886d8c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000161u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000161u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886d8ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000161u);
    mem_w8(ram, c->r[2] + 0x00000161u, c->r[3]);
L_0886d8ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886d960u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000bcu); func_0886b688(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886d9d4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000c4u); func_0886b688(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0886da48u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000ccu); func_0886b688(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000002cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886da84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[3] + 0x00000218u, c->r[2]);
L_0886da84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0886b930; }
L_0886da94:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0886b8a0 */
}

/* func_08871088  0x08871088..0x08871278  496 bytes, source=fde */
void func_08871088(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08871088u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088710c0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088710d0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887116c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08871104u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08871114u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887116c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08871144u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08871154u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887116c; }
    { goto L_08871174; }
L_0887116c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08871174:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (0u < c->r[3]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08871198u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088711a8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08871260; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088711dcu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088711ecu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08871260; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0887121cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0887122cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08871260; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08871260; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08871260u; c->r[6] = 0u + 0u; func_0886a514(c, ram); }
L_08871260:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08871088 */
}

/* func_0887b998  0x0887b998..0x0887bdcc  1076 bytes, source=sweep */
void func_0887b998(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887b998u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[15]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b9d8; }
    { goto L_0887bbac; }
L_0887b9d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b9f8; }
    { goto L_0887bb30; }
L_0887b9f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887baa0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[1]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887ba40; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]); goto L_0887ba78; }
L_0887ba40:
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
L_0887ba78:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003934u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[0] / c->f[1];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[2] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_0887bb30; }
L_0887baa0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887bad4; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_0887bb0c; }
L_0887bad4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002e6cu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[1]);
L_0887bb0c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003934u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[0] / c->f[1];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[2] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0887bb30:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887bb50; }
    { goto L_0887bb68; }
L_0887bb50:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0887bb68:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887bb88; }
    { goto L_0887bdb8; }
L_0887bb88:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_0887bdb8; }
L_0887bbac:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887bbcc; }
    { goto L_0887bda0; }
L_0887bbcc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887bbec; }
    { goto L_0887bd24; }
L_0887bbec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887bc94; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[1]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887bc34; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0887bc6c; }
L_0887bc34:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002e6cu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
L_0887bc6c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003934u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[0] / c->f[1];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[2] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_0887bd24; }
L_0887bc94:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887bcc8; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e6cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0887bd00; }
L_0887bcc8:
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
L_0887bd00:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003934u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] / c->f[1];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = c->f[2] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0887bd24:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887bd44; }
    { goto L_0887bd5c; }
L_0887bd44:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0887bd5c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887bd7c; }
    { goto L_0887bdb8; }
L_0887bd7c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_0887bdb8; }
L_0887bda0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_0887bdb8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0887b998 */
}

/* func_0887e70c  0x0887e70c..0x0887e77c  112 bytes, source=sweep */
void func_0887e70c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887e70cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0887e71c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e734; }
    { goto L_0887e760; }
L_0887e734:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0887e71c; }
L_0887e760:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbec0u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887e70c */
}

/* func_08883328  0x08883328..0x08883370  72 bytes, source=residue */
void func_08883328(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883328u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe678u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08883328 */
}

/* func_0888b728  0x0888b728..0x0888b770  72 bytes, source=sweep */
void func_0888b728(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b728u);
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
    { c->r[31] = 0x0888b75cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0888b9c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b728 */
}

/* func_0888c394  0x0888c394..0x0888c3d8  68 bytes, source=sweep */
void func_0888c394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c394u);
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
    { c->r[31] = 0x0888c3c4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c394 */
}

/* func_0888cf50  0x0888cf50..0x0888cfa4  84 bytes, source=sweep */
void func_0888cf50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888cf50u);
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
    c->r[2] = 0xc6000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888cf90u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888cf50 */
}

/* func_0888e6cc  0x0888e6cc..0x0888e798  204 bytes, source=sweep */
void func_0888e6cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888e6ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0888e6ecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0xfffffffcu;
    c->r[2] = 0u + 0xfffffffcu;
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888e724; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000002b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004054u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000002b0u, c->f[0]); goto L_0888e740; }
L_0888e724:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000002b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x000002b0u, c->f[0]);
L_0888e740:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000002b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000405cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888e768; }
    { goto L_0888e784; }
L_0888e768:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000002b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000405cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x000002b0u, c->f[0]);
L_0888e784:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888e6cc */
}

/* func_08892f00  0x08892f00..0x0889319c  668 bytes, source=fde */
void func_08892f00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08892f00u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004114u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004114u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08892f78u; func_0880d140(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004118u);
    c->f[12] = c->f[2];
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x08892fbcu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08892fc8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004118u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_08892fe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08892ff8; }
    { goto L_08893188; }
L_08892ff8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[0] + c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[0] + c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088930e0u; c->r[6] = c->r[3] + 0u; func_08892c24(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088930f8; }
    { goto L_08893178; }
L_088930f8:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08893110u; c->r[6] = c->r[3] + 0u; func_08892d48(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08893120; }
    { goto L_08893178; }
L_08893120:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0889314c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x08893144u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000058u); func_08893af8(c, ram); }
    { goto L_08893178; }
L_0889314c:
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x08893178u; c->r[10] = c->r[2] + 0u; func_08892f00(c, ram); }
L_08893178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_08892fe0; }
L_08893188:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08892f00 */
}

/* func_088995a4  0x088995a4..0x088995f4  80 bytes, source=sweep */
void func_088995a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088995a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088995a4 */
}

/* func_0889a520  0x0889a520..0x0889a564  68 bytes, source=sweep */
void func_0889a520(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a520u);
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
    { c->r[31] = 0x0889a550u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a520 */
}

/* func_0889ee9c  0x0889ee9c..0x0889ef94  248 bytes, source=sweep */
void func_0889ee9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889ee9cu);
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
    { c->r[31] = 0x0889ef18u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
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
    { c->r[31] = 0x0889ef4cu; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889ef78u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    { c->r[31] = 0x0889ef80u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0889ef94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889ee9c */
}

/* func_0889fd28  0x0889fd28..0x0889fdd8  176 bytes, source=sweep */
void func_0889fd28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fd28u);
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
    { c->r[31] = 0x0889fd70u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889fd94u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889fda0u; c->r[5] = 0x15000000u; func_0889eb70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889fdc4u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889fd28 */
}

/* func_088a40dc  0x088a40dc..0x088a4120  68 bytes, source=sweep */
void func_088a40dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a40dcu);
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
    { c->r[31] = 0x088a410cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a40dc */
}

/* func_088ad710  0x088ad710..0x088ad7e0  208 bytes, source=sweep */
void func_088ad710(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ad710u);
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
    return; /* fell out of func_088ad710 */
}

/* func_088aea3c  0x088aea3c..0x088aede4  936 bytes, source=fde */
void func_088aea3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088aea3cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088aeaa4u; c->r[5] = 0u + 0x0000000au; func_088b1f98(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088aeaecu; c->r[5] = 0u + 0x00000001u; func_088b20b0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088aeb38u; c->r[5] = c->r[5] | 0x019eu; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x088aeb88u; c->r[6] = c->r[6] + 0xffff8bd0u; func_088b1fd4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088aeb9cu; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff8c54u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088aebccu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088aec2cu; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088aec8cu; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088aed04; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x088aed04u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
L_088aed04:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088aed08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088aed2c; }
    { goto L_088aed88; }
L_088aed2c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088aed78u; c->r[5] = c->r[5] | 0x0004u; func_088b1ee0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088aed08; }
L_088aed88:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088aedd0u; c->r[5] = 0u + 0u; func_088b20b0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088aea3c */
}

/* func_088b2b58  0x088b2b58..0x088b2ba8  80 bytes, source=sweep */
void func_088b2b58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2b58u);
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
    { c->r[31] = 0x088b2b94u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2b58 */
}

/* func_088b7bb0  0x088b7bb0..0x088b81c4  1556 bytes, source=fde */
void func_088b7bb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b7bb0u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b7bd0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b7bd4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7bec; }
    { goto L_088b7c38; }
L_088b7bec:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a30u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b7bd4; }
L_088b7c38:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b7c3c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7c54; }
    { goto L_088b7ca0; }
L_088b7c54:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a30u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b7c3c; }
L_088b7ca0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088b7cacu; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
L_088b7cb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7cc4; }
    { goto L_088b7fa8; }
L_088b7cc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000087u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b7f90; }
    { c->r[31] = 0x088b7cdcu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088b7cf8u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088b7d04u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a34u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a38u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b7d40; }
    { goto L_088b7f90; }
L_088b7d40:
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[2]);
L_088b7d48:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088b7d5c; }
    { goto L_088b7f90; }
L_088b7d5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000087u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b7e48; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b7da0; }
    { goto L_088b7f90; }
L_088b7da0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b7e00; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000034u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000054u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088b7e00:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b7e38u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088b7f80; }
L_088b7e48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000087u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b7f80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000087u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b7eac; }
    { c->r[31] = 0x088b7e74u; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7e84; }
    { goto L_088b7f80; }
L_088b7e84:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a40u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7f80; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a40u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7f80; }
L_088b7eac:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b7edc; }
    { goto L_088b7f90; }
L_088b7edc:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b7f3c; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088b7f3c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b7f74u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7f80:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x00000001u, c->r[2]); goto L_088b7d48; }
L_088b7f90:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b7fa0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000080u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_088b7cb0; }
L_088b7fa8:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b7fac:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b7fc4; }
    { goto L_088b80a4; }
L_088b7fc4:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9290u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b8038u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b8050; }
    { goto L_088b8094; }
L_088b8050:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000087u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088b8094:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b7fac; }
L_088b80a4:
    mem_w8(ram, c->r[30] + 0x00000000u, 0u);
L_088b80a8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b80c0; }
    { goto L_088b818c; }
L_088b80c0:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff92f0u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b8134u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b814c; }
    { goto L_088b817c; }
L_088b814c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088b817c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088b80a8; }
L_088b818c:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9290u;
    { c->r[31] = 0x088b819cu; c->r[5] = 0u + 0u; func_088b81c4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff92f0u;
    { c->r[31] = 0x088b81acu; c->r[5] = 0u + 0x00000001u; func_088b81c4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088b7bb0 */
}

/* func_088be4c0  0x088be4c0..0x088be4f4  52 bytes, source=sweep */
void func_088be4c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be4c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088be4e0u; c->r[5] = 0x9b000000u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be4c0 */
}

/* func_088bf1cc  0x088bf1cc..0x088bf2c4  248 bytes, source=sweep */
void func_088bf1cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf1ccu);
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
    { c->r[31] = 0x088bf248u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    { c->r[31] = 0x088bf27cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf2a8u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    { c->r[31] = 0x088bf2b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088bf2c4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088bf1cc */
}

/* func_088c1980  0x088c1980..0x088c1ab8  312 bytes, source=fde */
void func_088c1980(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c1980u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1a1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1a1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c19fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1a1c; }
L_088c19fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1a1c; }
    { goto L_088c1aa0; }
L_088c1a1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c1a38u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1aa0; }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c1a64u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c1a80u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088c1aa0u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
L_088c1aa0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c1980 */
}

/* func_088c86dc  0x088c86dc..0x088c8760  132 bytes, source=sweep */
void func_088c86dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c86dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c8720; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c8720; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088c8720u; c->r[4] = c->r[4] + 0xffff9b80u; func_08808240(c, ram); }
L_088c8720:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c874c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c874c; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088c874cu; c->r[4] = c->r[4] + 0xffff9b90u; func_08808240(c, ram); }
L_088c874c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c86dc */
}

/* func_088c943c  0x088c943c..0x088c946c  48 bytes, source=sweep */
void func_088c943c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c943cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088c9458u; c->r[5] = 0u | 0xffffu; func_088c86dc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088c943c */
}

/* func_088d0dbc  0x088d0dbc..0x088d0e2c  112 bytes, source=sweep */
void func_088d0dbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d0dbcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x088d0dd8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x088d0de8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088d0df8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x088d0e08u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088d0e18u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d0dbc */
}

/* func_088d3d90  0x088d3d90..0x088d3fec  604 bytes, source=fde */
void func_088d3d90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3d90u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d3db4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d3dc4; }
    { goto L_088d3fd8; }
L_088d3dc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d3de0; }
    { goto L_088d3fd8; }
L_088d3de0:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088d3decu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d3df8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000588cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005890u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005894u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d3e8cu; c->r[5] = c->r[3] + 0u; func_08886dbc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000c8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d3fd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d3ee4; }
    { goto L_088d3fd8; }
L_088d3ee4:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088d3ef0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088d3efcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088d3f08u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00005884u;
    { c->r[31] = 0x088d3f20u; c->r[6] = c->r[2] + 0u; func_089b9b00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088d3fa0; }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d3f50u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[2] + 0x000000c8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d3fa0u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
L_088d3fa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d3fd8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005898u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005898u);
    mem_wf32(ram, c->r[2] + 0x000000c8u, c->f[0]);
L_088d3fd8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_088d3d90 */
}

/* func_088d8f58  0x088d8f58..0x088d9744  2028 bytes, source=fde */
void func_088d8f58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d8f58u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9044; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d9044; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000c9u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d8fdc; }
    c->r[4] = 0u + 0x00000057u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d8fd4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { goto L_088d9030; }
L_088d8fdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d9030; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0u + 0x0000004du;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9030u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c6bec(c, ram); }
L_088d9030:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d9044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9198; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9198; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000001fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d9198; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d9198; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e9u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d9198; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000058u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d90dcu; c->r[9] = 0u + 0x00000005u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a10u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9110u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[4] = c->r[2] + 0x00000040u;
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
L_088d9198:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9278; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d9278; }
    mem_w8(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005200u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d9264; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d922c; }
    mem_w8(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x0000004eu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9224u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    { goto L_088d9264; }
L_088d922c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d9264; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x0000004eu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9264u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
L_088d9264:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d9278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d969c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088d92b4u; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d9318; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000051u;
    c->r[5] = 0u + 0x00000446u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d92e0u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a14u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088d92fcu; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = 0u + 0x00001046u;
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000064u;
    mem_w16(ram, c->r[30] + 0x0000004au, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9318u; c->r[5] = 0u + 0x00000008u; func_0884d1b0(c, ram); }
L_088d9318:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d935c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000052u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9348u; c->r[9] = 0u + 0x00000001u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = 0u + 0x00002000u;
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x0000004au, c->r[2]);
L_088d935c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d93f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d93f8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000053u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d93a0u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000019u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088d93b8u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0080u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d93f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9454; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x0000005au;
    c->r[5] = 0u + 0x00000451u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088d9428u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a18u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088d9444u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = 0u + 0x00003051u;
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x000001f4u;
    mem_w16(ram, c->r[30] + 0x0000004au, c->r[2]);
L_088d9454:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d94dc; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000440u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088d9484u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a14u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088d94a0u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = 0u + 0x00000040u;
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000064u;
    mem_w16(ram, c->r[30] + 0x0000004au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x002bu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d94dcu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
L_088d94dc:
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d95b0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000440u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088d9520u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a14u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { c->r[31] = 0x088d953cu; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = 0u + 0x00000040u;
    mem_w16(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000064u;
    mem_w16(ram, c->r[30] + 0x0000004au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x002bu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088d9578u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d95b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d95b0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088d95b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d9608; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    { mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_088d963c; }
L_088d9608:
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
L_088d963c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d969c; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000004au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d969c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000b8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088d966cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d9684u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d969cu; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
L_088d969c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000061u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d96d0; }
    c->r[4] = 0u + 0x00000052u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d96d0u; c->r[9] = 0u + 0x00000004u; func_089c6bec(c, ram); }
L_088d96d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d9708; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d9708; }
    { goto L_088d972c; }
L_088d9708:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0u + 0x00000055u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9728u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000b8u, c->r[2]);
L_088d972c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088d8f58 */
}

/* func_088de3a4  0x088de3a4..0x088de3f0  76 bytes, source=sweep */
void func_088de3a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de3a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de3cc; }
    c->r[2] = 0u + 0x000000ffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088de3dc; }
L_088de3cc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001au);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088de3dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de3a4 */
}

/* func_088df30c  0x088df30c..0x088df354  72 bytes, source=sweep */
void func_088df30c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df30cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df330; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088df340; }
L_088df330:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000023u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088df340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df30c */
}

/* func_088e482c  0x088e482c..0x088e4854  40 bytes, source=sweep */
void func_088e482c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e482cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e482c */
}

/* func_088e9f58  0x088e9f58..0x088ea04c  244 bytes, source=fde */
void func_088e9f58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e9f58u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e9f84u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a5u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9f9c; }
    { goto L_088ea01c; }
L_088e9f9c:
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
    { c->r[31] = 0x088e9fe0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x088ea01cu; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
L_088ea01c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088ea038u; c->r[8] = c->r[2] + 0u; func_088e9d94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e9f58 */
}

/* func_088ef798  0x088ef798..0x088ef870  216 bytes, source=sweep */
void func_088ef798(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ef798u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ef7c0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ef7d4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08820ca4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ef848; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ef848; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ef848; }
    { goto L_088ef854; }
L_088ef848:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088ef858; }
L_088ef854:
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088ef858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ef798 */
}

/* func_088f4dc4  0x088f4dc4..0x088f4e20  92 bytes, source=sweep */
void func_088f4dc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4dc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00004980u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4df0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088f4df0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00004982u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4e0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088f4e0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f4dc4 */
}

/* func_088f9fbc  0x088f9fbc..0x088f9fec  48 bytes, source=sweep */
void func_088f9fbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f9fbcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088f9fd8u; c->r[5] = 0u | 0xffffu; func_088f9f14(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088f9fbc */
}

/* func_08900538  0x08900538..0x089006e0  424 bytes, source=fde */
void func_08900538(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900538u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000093u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0890057cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089005b4; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089005a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089005b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088fee8c(c, ram); }
L_089005b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000094u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089005d4u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08900610; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089005fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x08900610u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ff20c(c, ram); }
L_08900610:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000095u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08900630u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890066c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08900658u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x0890066cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ff48c(c, ram); }
L_0890066c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000096u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0890068cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089006c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089006b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089006c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08900234(c, ram); }
L_089006c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08900538 */
}

/* func_08902ea0  0x08902ea0..0x08903058  440 bytes, source=fde */
void func_08902ea0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08902ea0u);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000018u;
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000015u;
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08902ed4u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x08902edcu; func_08902e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902fd4; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e84u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e88u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] >> 1;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0x55e60000u;
    c->r[2] = c->r[2] | 0x3b89u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 25;
    c->r[2] = 0x05f50000u;
    c->r[2] = c->r[2] | 0xe100u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000065a4u;
    { c->r[31] = 0x08902f58u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000120u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x08902f60u; c->r[4] = 0u + 0x0000000eu; func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08902f74u; c->r[5] = c->r[3] + 0u; func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x08902f88u; c->r[5] = c->r[5] + 0x00002ea0u; func_08a1ae50(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08902f9cu; c->r[5] = c->r[5] + 0x000065acu; func_08a1ae50(c, ram); }
    { c->r[31] = 0x08902fa4u; c->r[4] = 0u + 0x00000011u; func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08902fb8u; c->r[5] = c->r[3] + 0u; func_08a1ae50(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08902fccu; c->r[5] = c->r[3] + 0u; func_08a1ae50(c, ram); }
    { goto L_08902ff0; }
L_08902fd4:
    { c->r[31] = 0x08902fdcu; c->r[4] = 0u + 0x000002ccu; func_089241c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08902ff0u; c->r[5] = c->r[3] + 0u; func_08a1af70(c, ram); }
L_08902ff0:
    { c->r[31] = 0x08902ff8u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0890300cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000018u;
    c->r[9] = 0u + 0x00000015u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08903044u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_08902ea0 */
}

/* func_089061bc  0x089061bc..0x08906470  692 bytes, source=sweep */
void func_089061bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089061bcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb00u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb04u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb08u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb0cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x0890621cu; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba64u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890645c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890645c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006664u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006668u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000666cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006670u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x089062bcu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e8u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000090u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089063b4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08906410u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890645cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0890645c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089061bc */
}

/* func_0890f4bc  0x0890f4bc..0x0890f7fc  832 bytes, source=fde */
void func_0890f4bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890f4bcu);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000138u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000c34u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890f67c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890f4f4u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a40(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890f520; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0890f518u; c->r[5] = c->r[5] + 0x00006848u; func_08a1ad34(c, ram); }
    { goto L_0890f7bc; }
L_0890f520:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890f52cu; c->r[4] = c->r[4] + 0x00000af4u; func_08921a40(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890f53cu; c->r[4] = c->r[4] + 0x00000af4u; func_0886fc7c(c, ram); }
    c->r[2] = c->r[16] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0890f554; }
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
L_0890f554:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0x47950000u;
    c->r[2] = c->r[2] | 0x319du;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
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
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0x431b0000u;
    c->r[2] = c->r[2] | 0xde83u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 18);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
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
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = 0x68db0000u;
    c->r[2] = c->r[2] | 0x8badu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 12);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
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
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006854u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000118u);
    { c->r[31] = 0x0890f674u; c->r[8] = mem_r32(ram, c->r[30] + 0x0000011cu); func_08a1ad34(c, ram); }
    { goto L_0890f7bc; }
L_0890f67c:
    { c->r[31] = 0x0890f684u; func_0895ba4c(c, ram); }
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006864u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006868u);
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000128u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890f6d0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]); goto L_0890f6f4; }
L_0890f6d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[3]);
L_0890f6f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = 0x05760000u;
    c->r[2] = c->r[2] | 0x19f1u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 7;
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[6] = c->r[4] - c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 5;
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[7] = c->r[4] - c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    c->r[4] = c->r[5] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006854u;
    { c->r[31] = 0x0890f7bcu; c->r[8] = c->r[2] + 0u; func_08a1ad34(c, ram); }
L_0890f7bc:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0u + 0x00000016u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0890f7e4u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000138u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_0890f4bc */
}

/* func_0891c3d4  0x0891c3d4..0x0891c43c  104 bytes, source=fde */
void func_0891c3d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891c3d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0891c3f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0891c300(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891c40c; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_0891c424; }
L_0891c40c:
    { c->r[31] = 0x0891c414u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998b48(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0008u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0891c424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0891c3d4 */
}

/* func_08920fc8  0x08920fc8..0x08921078  176 bytes, source=sweep */
void func_08920fc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08920fc8u);
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
    { c->r[31] = 0x08921010u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08921034u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08921040u; c->r[5] = 0x15000000u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08921064u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08920fc8 */
}

/* func_08921ec8  0x08921ec8..0x08921f34  108 bytes, source=sweep */
void func_08921ec8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921ec8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921f08; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    { mem_w8(ram, c->r[4] + 0x00000010u, c->r[2]); goto L_08921f24; }
L_08921f08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000010u, c->r[2]);
L_08921f24:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921ec8 */
}

/* func_08924ca4  0x08924ca4..0x08924e10  364 bytes, source=fde */
void func_08924ca4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08924ca4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9c8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08924cdc; }
    { goto L_08924dfc; }
L_08924cdc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08924d28u; c->r[5] = c->r[5] | 0x0102u; func_089258bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000038u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08924d44u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08924d58u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08924db4u; c->r[5] = c->r[2] + 0u; func_08925900(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08924dfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e78u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0u + 0xfffffff0u;
    c->r[7] = 0u + 0xfffffff8u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08924dfcu; c->r[9] = 0u + 0u; func_08923508(c, ram); }
L_08924dfc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08924ca4 */
}

/* func_08926320  0x08926320..0x089263cc  172 bytes, source=sweep */
void func_08926320(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08926320u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926380; }
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
    { c->r[31] = 0x08926378u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089264a0(c, ram); }
    { goto L_089263b8; }
L_08926380:
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
    { c->r[31] = 0x089263b8u; c->r[8] = c->r[2] + 0u; func_089264a0(c, ram); }
L_089263b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08926320 */
}

/* func_08929428  0x08929428..0x08929cd4  2220 bytes, source=fde */
void func_08929428(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08929428u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08929844; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929494; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089294bc; }
    { goto L_08929cbc; }
L_08929494:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08929be8; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08929c10; }
    { goto L_08929cbc; }
L_089294bc:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089294c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089294ecu; c->r[6] = 0u + 0x00000044u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892954c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892954c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] << 1;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x08929538u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    { mem_w8(ram, c->r[3] + 0x00000054u, c->r[2]); goto L_08929564; }
L_0892954c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0892955cu; c->r[6] = 0u + 0x00000030u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000054u, 0u);
L_08929564:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08929574u; c->r[4] = c->r[4] + 0x00007004u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089295ac; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007010u;
    { c->r[31] = 0x089295a4u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000044u, c->r[2]); goto L_089295b8; }
L_089295ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
L_089295b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08929664; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007014u;
    { c->r[31] = 0x089295ecu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000701cu;
    { c->r[31] = 0x0892960cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08929628u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000040u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x0892963cu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000053u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    { mem_w8(ram, c->r[3] + 0x00000052u, c->r[2]); goto L_08929690; }
L_08929664:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000053u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000052u, c->r[2]);
L_08929690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089296bc; }
    c->r[3] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000050u, c->r[3]); goto L_089296c0; }
L_089296bc:
    mem_w8(ram, c->r[30] + 0x00000050u, 0u);
L_089296c0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w8(ram, c->r[2] + 0x00000055u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x0000004eu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x00000050u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000056u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089297c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089297c8; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08929770u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089297c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000034u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08929798u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[5] = 0x07000000u;
    { c->r[31] = 0x089297b4u; c->r[5] = c->r[5] | 0x0008u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000702cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x089297c8u; c->f[12] = c->f[0]; func_08932528(c, ram); }
L_089297c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929830; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007030u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x0000001eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000017u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000cdu;
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x0000000fu;
    { mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_08929cbc; }
L_08929830:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892983cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08929cbc; }
L_08929844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000056u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089298a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08929884u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08929cbc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089298a0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08929cbc; }
L_089298a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000056u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892991c; }
    { c->r[31] = 0x089298c4u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929cbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089298e8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892990c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0892990cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0892990c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000056u, c->r[2]); goto L_08929cbc; }
L_0892991c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08929984; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08929948u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08929960; }
    { goto L_08929cbc; }
L_08929960:
    { c->r[31] = 0x08929968u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08929984; }
    { goto L_08929cbc; }
L_08929984:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089299a4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089299b4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089299d8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08929ac0; }
L_089299d8:
    { c->r[31] = 0x089299e0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089299f4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08929ac0; }
L_089299f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000056u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08929a44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08929a2c; }
    { c->r[31] = 0x08929a20u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08929208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000056u, 0u); goto L_08929ac0; }
L_08929a2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]); goto L_08929ac0; }
L_08929a44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000056u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08929a94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08929a7c; }
    { c->r[31] = 0x08929a70u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08929208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000056u, 0u); goto L_08929ac0; }
L_08929a7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]); goto L_08929ac0; }
L_08929a94:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    { c->r[31] = 0x08929aa4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_089cd600(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08929ac0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08929ac0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08929af0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08929af0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000048u); func_089f73a0(c, ram); }
L_08929af0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x0000004eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929b3c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000056u, c->r[2]); goto L_08929b44; }
L_08929b3c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08929b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929cbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000048u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08929b74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08929b74u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000048u); func_089f73a0(c, ram); }
L_08929b74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000057u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929b98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000056u, c->r[2]); goto L_08929cbc; }
L_08929b98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08929bb4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929bd8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08929bd8u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08929bd8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000056u, c->r[2]); goto L_08929cbc; }
L_08929be8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08929cbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08929c04u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000030u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000030u, 0u); goto L_08929cbc; }
L_08929c10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08929c88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08929c4cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08929c64; }
    { goto L_08929cbc; }
L_08929c64:
    { c->r[31] = 0x08929c6cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08929c88; }
    { goto L_08929cbc; }
L_08929c88:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007034u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08929ca0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    { c->r[31] = 0x08929cb0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000048u); func_089cd654(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08929cbcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08929cbc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08929428 */
}

/* func_08930048  0x08930048..0x0893009c  84 bytes, source=sweep */
void func_08930048(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930048u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08930080; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08930088; }
L_08930080:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08930088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08930048 */
}

/* func_08932c98  0x08932c98..0x08932e8c  500 bytes, source=fde */
void func_08932c98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932c98u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[9]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000071e4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08932d00u; c->f[12] = c->f[0]; func_089cffc4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08932d10u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_0893299c(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08932d2c; }
    { c->r[31] = 0x08932d28u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08932908(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08932d2c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000036u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08932dc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff4u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08932dacu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08932ad0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000036u, c->r[2]);
L_08932dc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932e2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932e2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932e2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932e2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08932e2c; }
    { goto L_08932e78; }
L_08932e2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08932e48u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_08933888(c, ram); }
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000036u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08932e78u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_08932e78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08932c98 */
}

/* func_089349a4  0x089349a4..0x08934b94  496 bytes, source=residue */
void func_089349a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089349a4u);
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
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089349fc; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089349fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934a14; }
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08934a14:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934a2c; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08934a2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934a44; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08934a44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934a5c; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08934a5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934a74; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08934a74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934a8c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08934a8c:
    { c->r[31] = 0x08934a94u; func_0883a25c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x08934aa8u, 0x7u); goto L_08934aac; }
L_08934aac:
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934acc; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934acc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934ae8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934ae8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934b04; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934b04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934b20; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934b20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934b3c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934b3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934b58; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934b58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08934b74; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08934b7c; }
L_08934b74:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08934b7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089349a4 */
}

/* func_0893ac78  0x0893ac78..0x0893b140  1224 bytes, source=fde */
void func_0893ac78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893ac78u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = c->r[4] + 0u;
    c->r[4] = c->r[5] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893acb4u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893acc4u; c->r[5] = 0u + 0u; func_089dfeb4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893ad10u; c->r[5] = c->r[5] | 0x0100u; func_0893bf80(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893ad24u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0893ad3cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08903b2c(c, ram); }
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
    { c->r[31] = 0x0893ad88u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0893c01c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893add0u; c->r[5] = 0u + 0x00000009u; func_0893c090(c, ram); }
    c->r[4] = 0u + 0x00000018u;
    { c->r[31] = 0x0893addcu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ae08; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac0u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[1] = 0x08aa0000u;
    { mem_w16(ram, c->r[1] + 0xfffffac2u, c->r[2]); goto L_0893af40; }
L_0893ae08:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac0u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ae34; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac0u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac0u, c->r[2]);
L_0893ae34:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac0u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893ae60; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac0u);
    c->r[2] = c->r[2] + 0xfffffffau;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac0u, c->r[2]);
L_0893ae60:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac0u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0xfffffffbu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893aea4; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac0u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893aea4; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac0u, c->r[2]);
L_0893aea4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac2u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893aed0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac2u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac2u, c->r[2]);
L_0893aed0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac2u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893aefc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac2u);
    c->r[2] = c->r[2] + 0xfffffffau;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac2u, c->r[2]);
L_0893aefc:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac2u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0xfffffffbu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893af40; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffac2u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893af40; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffffac2u, c->r[2]);
L_0893af40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac0u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac0u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0u + 0x00000110u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac2u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000012u;
    c->r[2] = 0u + 0x000001e0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000012u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffffac2u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0893b01cu; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893b078u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0x04010000u;
    { c->r[31] = 0x0893b0c4u; c->r[5] = c->r[5] | 0x0004u; func_0893bf80(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0893b10cu; c->r[5] = 0u + 0x00000009u; func_0893c054(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b11cu; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b12cu; c->r[5] = 0u + 0x00000001u; func_089dfeb4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893ac78 */
}

/* func_0893c95c  0x0893c95c..0x0893c9a0  68 bytes, source=sweep */
void func_0893c95c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c95cu);
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
    { c->r[31] = 0x0893c98cu; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c95c */
}

/* func_0893dd80  0x0893dd80..0x0893de2c  172 bytes, source=sweep */
void func_0893dd80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893dd80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893dde0; }
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
    { c->r[31] = 0x0893ddd8u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_0893df00(c, ram); }
    { goto L_0893de18; }
L_0893dde0:
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
    { c->r[31] = 0x0893de18u; c->r[8] = c->r[2] + 0u; func_0893df00(c, ram); }
L_0893de18:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893dd80 */
}

/* func_08940304  0x08940304..0x08940348  68 bytes, source=sweep */
void func_08940304(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940304u);
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
    { c->r[31] = 0x08940334u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08940304 */
}

/* func_089457e0  0x089457e0..0x08945820  64 bytes, source=sweep */
void func_089457e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089457e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0894580cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u); func_08945bf8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089457e0 */
}

/* func_089464c8  0x089464c8..0x08946574  172 bytes, source=sweep */
void func_089464c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089464c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946528; }
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
    { c->r[31] = 0x08946520u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_08946648(c, ram); }
    { goto L_08946560; }
L_08946528:
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
    { c->r[31] = 0x08946560u; c->r[8] = c->r[2] + 0u; func_08946648(c, ram); }
L_08946560:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089464c8 */
}

/* func_0894c0f0  0x0894c0f0..0x0894c134  68 bytes, source=sweep */
void func_0894c0f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c0f0u);
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
    { c->r[31] = 0x0894c120u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c0f0 */
}

/* func_089520c0  0x089520c0..0x08952104  68 bytes, source=sweep */
void func_089520c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089520c0u);
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
    return; /* fell out of func_089520c0 */
}

/* func_089556c8  0x089556c8..0x0895570c  68 bytes, source=sweep */
void func_089556c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089556c8u);
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
    { c->r[31] = 0x089556f8u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089556c8 */
}

/* func_08958480  0x08958480..0x089584c4  68 bytes, source=sweep */
void func_08958480(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958480u);
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
    { c->r[31] = 0x089584b0u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958480 */
}

/* func_0895ac04  0x0895ac04..0x0895b080  1148 bytes, source=fde */
void func_0895ac04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895ac04u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895aca0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895ac60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895ac88; }
    { goto L_0895b06c; }
L_0895ac60:
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895adec; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895af30; }
    { goto L_0895b06c; }
L_0895ac88:
    c->f[0] = u2f(0u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00004954u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    { mem_wf32(ram, c->r[1] + 0x00004950u, c->f[0]); goto L_0895b06c; }
L_0895aca0:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004950u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895acc8; }
    { goto L_0895acf0; }
L_0895acc8:
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80ecu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00004954u, c->f[0]);
L_0895acf0:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004950u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895ad18; }
    { goto L_0895ad40; }
L_0895ad18:
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80ecu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00004954u, c->f[0]);
L_0895ad40:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895ad68; }
    { goto L_0895ad78; }
L_0895ad68:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    { mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]); goto L_0895ad84; }
L_0895ad78:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f0u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
L_0895ad84:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00004954u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895adb4; }
    { goto L_0895adc4; }
L_0895adb4:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    { mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]); goto L_0895adc8; }
L_0895adc4:
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_0895adc8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0x00004954u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004950u, 0u);
    { c->r[31] = 0x0895ade4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    { goto L_0895b06c; }
L_0895adec:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895ae10; }
    { goto L_0895b06c; }
L_0895ae10:
    { c->r[31] = 0x0895ae18u; func_08854c94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895b06c; }
    { c->r[31] = 0x0895ae30u; func_089c3a94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895ae48; }
    { goto L_0895b06c; }
L_0895ae48:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff80f0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0895ae64u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff80f0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0895aeb0u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff80f0u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0895aefcu; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]); goto L_0895b06c; }
L_0895af30:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0895af54; }
    { goto L_0895b06c; }
L_0895af54:
    { c->r[31] = 0x0895af5cu; func_08854c94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895b06c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x0895af80u; func_089f1210(c, ram); }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80fcu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8100u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004954u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8104u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8108u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff810cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0895aff4u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80f0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0895b018u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0895b02cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0895b040u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0895b060u; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0895b06cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0895b06c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0895ac04 */
}

/* func_0895d5f8  0x0895d5f8..0x0895da58  1120 bytes, source=fde */
void func_0895d5f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895d5f8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d6c4; }
    c->r[4] = 0x30000000u;
    { c->r[31] = 0x0895d624u; c->r[4] = c->r[4] | 0x0016u; func_08881760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d64c; }
    c->r[4] = 0u + 0x00000013u;
    { c->r[31] = 0x0895d644u; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
    { goto L_0895d678; }
L_0895d64c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d658u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895d664u; c->r[5] = 0u + 0x00000002u; func_08968c78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895d678u; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
L_0895d678:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d6c4; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0895d698u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08965780(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d6b8; }
    c->r[2] = 0u + 0x000000b4u;
    c->r[1] = 0x08aa0000u;
    { mem_w16(ram, c->r[1] + 0x000049ceu, c->r[2]); goto L_0895d6c4; }
L_0895d6b8:
    c->r[2] = 0u + 0x000000b4u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049ceu, c->r[2]);
L_0895d6c4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x0895d6dcu; mem_w16(ram, c->r[1] + 0x000049aau, c->r[2]); func_0895b15c(c, ram); }
    c->r[2] = c->r[2] & 0x0007u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d920; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049aau);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d920; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x1400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d730; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d71cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d730; }
    c->r[4] = 0u + 0x0000001au;
    { c->r[31] = 0x0895d730u; c->r[5] = 0u + 0xffffffffu; func_0880aed0(c, ram); }
L_0895d730:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d744u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d868; }
    { c->r[31] = 0x0895d754u; func_0895b15c(c, ram); }
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d920; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d780; }
    c->r[2] = 0u + 0x0000200bu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895d7dc; }
L_0895d780:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d7a0; }
    c->r[2] = 0u + 0x0000200cu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895d7dc; }
L_0895d7a0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d7c0; }
    c->r[2] = 0u + 0x00002018u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895d7dc; }
L_0895d7c0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d7dc; }
    c->r[2] = 0u + 0x0000200du;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895d7dc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d820; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d820; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895d820; }
    { goto L_0895d828; }
L_0895d820:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895d828:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0895d920; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x00000007u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x0895d860u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
    { goto L_0895d920; }
L_0895d868:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d8e8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d888u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d8a0; }
    c->r[2] = 0u + 0x000020e0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895d8a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d8acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d8c4; }
    c->r[2] = 0u + 0x0000211fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895d8c4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d8d0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895d8e8; }
    c->r[2] = 0u + 0x0000215bu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895d8e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0895d920; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000007u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x0895d920u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
L_0895d920:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049ceu);
    c->r[3] = c->r[3] + 0xffffffe2u;
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0895d958; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff81e4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0895d958u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_0895d958:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049ceu);
    c->r[3] = c->r[3] + 0xffffffffu;
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0895da08; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d980u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895da08; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895d99cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895d9a8u; c->r[5] = 0u + 0x00000003u; func_08969240(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x1400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895d9c8; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0895d9c8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000496cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895d9e0; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0895d9e0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895da00; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0895da00:
    { c->r[31] = 0x0895da08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0895ce34(c, ram); }
L_0895da08:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049aau);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049ceu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895da38; }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00004961u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_0895da40; }
L_0895da38:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0895da40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895d5f8 */
}

/* func_08960cac  0x08960cac..0x08960de8  316 bytes, source=fde */
void func_08960cac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960cacu);
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
    { c->r[31] = 0x08960ce0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08960cf0; }
    { goto L_08960dd4; }
L_08960cf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08960d1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08960d1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08960d4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08960d4c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08960d7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08960d7c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08960d9c; }
    { goto L_08960db0; }
L_08960d9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08960dc0; }
L_08960db0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08960dc0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08960dd4u; c->r[5] = c->r[3] + 0u; func_089616d4(c, ram); }
L_08960dd4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08960cac */
}

/* func_08963708  0x08963708..0x089637f0  232 bytes, source=sweep */
void func_08963708(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08963708u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08963748:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963764; }
    { goto L_089637e0; }
L_08963764:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089637d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089637c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_089637e0; }
L_089637c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089637d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08963748; }
L_089637e0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08963708 */
}

/* func_08965ccc  0x08965ccc..0x08965dc8  252 bytes, source=sweep */
void func_08965ccc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965cccu);
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
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965ccc */
}

/* func_089691fc  0x089691fc..0x08969240  68 bytes, source=sweep */
void func_089691fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089691fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9b5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089691fc */
}

/* func_0896a1b4  0x0896a1b4..0x0896a260  172 bytes, source=fde */
void func_0896a1b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a1b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e1cu;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896a1f8; }
    { c->r[31] = 0x0896a1e8u; c->r[4] = 0u + 0x0000000fu; func_089241c8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000e1cu;
    { c->r[31] = 0x0896a1f8u; c->r[5] = c->r[2] + 0u; func_08a1ad34(c, ram); }
L_0896a1f8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000053e2u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0896a20cu; c->r[5] = c->r[5] + 0x00000e1cu; func_08a1af70(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053ebu, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000053d4u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e00u;
    { c->r[31] = 0x0896a234u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000053dcu;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000df8u;
    { c->r[31] = 0x0896a24cu; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a1b4 */
}

/* func_0896c89c  0x0896c89c..0x0896ca98  508 bytes, source=fde */
void func_0896c89c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896c89cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0896c8b8:
    { c->r[31] = 0x0896c8c0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c8dc; }
    { goto L_0896c9c8; }
L_0896c8dc:
    { c->r[31] = 0x0896c8e4u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896c8fc; }
    { goto L_0896c9b8; }
L_0896c8fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x0896c924u; c->r[4] = c->r[2] + 0u; func_0896e128(c, ram); }
    { c->r[31] = 0x0896c92cu; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c9b8; }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c998; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c998; }
    { goto L_0896c9a0; }
L_0896c998:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0896c9a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0896c9b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896c8b8; }
L_0896c9c8:
    { c->r[31] = 0x0896c9d0u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ca24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000028eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896ca00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000028fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896ca00; }
    { goto L_0896ca14; }
L_0896ca00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0896ca24; }
L_0896ca14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0896ca24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x0000007fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[4] + 0x000009c5u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896ca68; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x000009c5u, c->r[2]);
L_0896ca68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x000009c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    { c->r[31] = 0x0896ca84u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a248ccu); /* sceKernelSetGPO */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896c89c */
}

/* func_0896e344  0x0896e344..0x0896e378  52 bytes, source=sweep */
void func_0896e344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e344u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000047u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e344 */
}

/* func_0896f1d0  0x0896f1d0..0x0896f1f4  36 bytes, source=sweep */
void func_0896f1d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f1d0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006860u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896f1d0 */
}

/* func_0897093c  0x0897093c..0x08970ab8  380 bytes, source=fde */
void func_0897093c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897093cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089709fc; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089709fc; }
    { c->r[31] = 0x08970988u; func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970998; }
    { goto L_08970aa0; }
L_08970998:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + 0x0000012cu;
    mem_w32(ram, c->r[3] + 0x000000ccu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x089709d4u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089709e0u; c->r[5] = 0u + 0x0000012cu; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x089709ecu; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x089709f4u; c->r[4] = c->r[2] + 0u; func_0896f680(c, ram); }
    { goto L_08970aa0; }
L_089709fc:
    { c->r[31] = 0x08970a04u; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08970aa0; }
    { c->r[31] = 0x08970a14u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970a50; }
    { c->r[31] = 0x08970a28u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x08970a30u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08970a40u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08970a50; }
    { goto L_08970aa0; }
L_08970a50:
    { c->r[31] = 0x08970a58u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08970a64u; c->r[5] = 0u + 0x0000012cu; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08970a74u; c->r[5] = 0u + 0x0000012cu; func_0896fac8(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { c->r[31] = 0x08970a80u; c->r[4] = c->r[2] + 0u; func_0896f680(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08970a8cu; c->r[4] = c->r[2] + 0u; func_0896f2b4(c, ram); }
    { c->r[31] = 0x08970a94u; func_0896f494(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08970aa0u; c->r[4] = c->r[2] + 0u; func_0896ef9c(c, ram); }
L_08970aa0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897093c */
}

/* func_08973f98  0x08973f98..0x08973ff8  96 bytes, source=fde */
void func_08973f98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08973f98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006984u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08973fc0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08973fd8; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08973fe0; }
L_08973fd8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08973fe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08973f98 */
}

/* func_08976104  0x08976104..0x08976140  60 bytes, source=sweep */
void func_08976104(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08976104u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d88u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08976104 */
}

/* func_08979620  0x08979620..0x0897965c  60 bytes, source=sweep */
void func_08979620(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08979620u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08979638u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a60000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0xffffa2a8u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08979620 */
}

/* func_089818d4  0x089818d4..0x08981b8c  696 bytes, source=fde */
void func_089818d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089818d4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089818f0u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08981914; }
    { c->r[31] = 0x08981908u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08981914:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08981918:
    { c->r[31] = 0x08981920u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898193c; }
    { goto L_08981a34; }
L_0898193c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8facu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0898196c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981988; }
    { goto L_08981a10; }
L_08981988:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08981a00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    c->r[2] = c->r[2] + 0x000002fau;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08981a00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0898196c; }
L_08981a10:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08981a24u; c->r[6] = 0u + 0u; func_089746b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08981918; }
L_08981a34:
    { c->r[31] = 0x08981a3cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08981a44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981a5c; }
    { goto L_08981b78; }
L_08981a5c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8facu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08981b54; }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08981ab0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981acc; }
    { goto L_08981b54; }
L_08981acc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08981b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000002fau;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08981b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08981ab0; }
L_08981b54:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08981b68u; c->r[6] = 0u + 0u; func_089746b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08981a44; }
L_08981b78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089818d4 */
}

/* func_0898ced4  0x0898ced4..0x0898e2f0  5148 bytes, source=fde */
void func_0898ced4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898ced4u);
L_0898ced4:
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[30]);
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
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898cf34; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e0c8; }
    { goto L_0898e2d4; }
L_0898cf34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9bd8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898ced4u: goto L_0898ced4; case 0x0898cf70u: goto L_0898cf70; case 0x0898cfecu: goto L_0898cfec; case 0x0898d020u: goto L_0898d020; case 0x0898d3fcu: goto L_0898d3fc; case 0x0898d7c8u: goto L_0898d7c8; case 0x0898d924u: goto L_0898d924; case 0x0898da84u: goto L_0898da84; case 0x0898dbf0u: goto L_0898dbf0; case 0x0898ddfcu: goto L_0898ddfc; case 0x0898de38u: goto L_0898de38; case 0x0898de84u: goto L_0898de84; case 0x0898dec4u: goto L_0898dec4; case 0x0898df00u: goto L_0898df00; case 0x0898df14u: goto L_0898df14; case 0x0898df28u: goto L_0898df28; case 0x0898df5cu: goto L_0898df5c; case 0x0898df98u: goto L_0898df98; case 0x0898e08cu: goto L_0898e08c; case 0x0898e11cu: goto L_0898e11c; case 0x0898e138u: goto L_0898e138; case 0x0898e154u: goto L_0898e154; case 0x0898e170u: goto L_0898e170; case 0x0898e18cu: goto L_0898e18c; case 0x0898e1a8u: goto L_0898e1a8; case 0x0898e1ecu: goto L_0898e1ec; case 0x0898e208u: goto L_0898e208; case 0x0898e224u: goto L_0898e224; case 0x0898e240u: goto L_0898e240; case 0x0898e25cu: goto L_0898e25c; case 0x0898e280u: goto L_0898e280; case 0x0898e2acu: goto L_0898e2ac; case 0x0898e2c8u: goto L_0898e2c8; default: recomp_trap_unknown_indirect(c, ram, 0x0898cf68u, _t); return; } }
L_0898cf70:
    { c->r[31] = 0x0898cf78u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000045u, c->r[2]);
    { c->r[31] = 0x0898cf8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0897950c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    { c->r[31] = 0x0898cfa8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0898b938(c, ram); }
    { c->r[31] = 0x0898cfb0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898cfc8u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898cfd0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898cfdcu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898cfec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d000u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d010; }
    { goto L_0898e08c; }
L_0898d010:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d020:
    { c->r[31] = 0x0898d028u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898d03cu; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d0dc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d080; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d098; }
    { goto L_0898d1c8; }
L_0898d080:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d16c; }
    { goto L_0898d1c8; }
L_0898d098:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d0acu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d0bcu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898d0d4u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898d0dc:
    { c->r[31] = 0x0898d0e4u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0898d0fcu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1a510(c, ram); }
    { c->r[31] = 0x0898d104u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d11cu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d124u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d130u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d144u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d154u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d16c:
    { c->r[31] = 0x0898d174u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d18cu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d194u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d1a0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d1b0u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d1c8:
    { c->r[31] = 0x0898d1d0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d22c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d1e8u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898d1f0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d208u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d210u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d21cu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d22c:
    { c->r[31] = 0x0898d234u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d24c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d24c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898d2cc; }
    { c->r[31] = 0x0898d27cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d294u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d29cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d2a8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d2c4u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0898e08c; }
L_0898d2cc:
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
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[7] = 0u + 0x00000168u;
    c->r[8] = 0u + 0x000000c0u;
    { c->r[31] = 0x0898d328u; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898d344u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898d364u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    { c->r[31] = 0x0898d388u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x0898d394u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0898d3a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932b30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x0898d3acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000038u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0898d3f4u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
    { goto L_0898e08c; }
L_0898d3fc:
    { c->r[31] = 0x0898d404u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898d418u; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d4b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d45c; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d474; }
    { goto L_0898d594; }
L_0898d45c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d540; }
    { goto L_0898d594; }
L_0898d474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d488u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d498u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898d4b0u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898d4b8:
    { c->r[31] = 0x0898d4c0u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898d4d8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1a510(c, ram); }
    { c->r[31] = 0x0898d4e0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d4f8u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d500u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d50cu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d520u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d530u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d540:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d550u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898d558u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d570u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d578u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d584u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d594:
    { c->r[31] = 0x0898d59cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d5f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d5b4u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x0898d5bcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d5d4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d5dcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d5e8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d5f8:
    { c->r[31] = 0x0898d600u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d618; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d618:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898d698; }
    { c->r[31] = 0x0898d648u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d660u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d668u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d674u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0898d690u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_0898e08c; }
L_0898d698:
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
    { c->r[31] = 0x0898d6f4u; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898d710u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898d730u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    { c->r[31] = 0x0898d754u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x0898d760u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x0898d76cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08932b30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x0898d778u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08932b84(c, ram); }
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
    { c->r[31] = 0x0898d7c0u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
    { goto L_0898e08c; }
L_0898d7c8:
    { c->r[31] = 0x0898d7d0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898d7e4u; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d874; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d828; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d840; }
    { goto L_0898e08c; }
L_0898d828:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d8d8; }
    { goto L_0898e08c; }
L_0898d840:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d854u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898d86cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898d874:
    { c->r[31] = 0x0898d87cu; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898d894u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1a510(c, ram); }
    { c->r[31] = 0x0898d89cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d8b4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d8bcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d8c8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d8d8:
    { c->r[31] = 0x0898d8e0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d8f8u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d900u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898d90cu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898d924:
    { c->r[31] = 0x0898d92cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000eu;
    { c->r[31] = 0x0898d940u; c->r[7] = 0u + 0x00000011u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d9d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898d984; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898d99c; }
    { goto L_0898e08c; }
L_0898d984:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898da34; }
    { goto L_0898e08c; }
L_0898d99c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898d9b0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898d9c8u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898d9d0:
    { c->r[31] = 0x0898d9d8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898d9f0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898d9f8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898da04u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898da18u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898da34:
    { c->r[31] = 0x0898da3cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000011u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898da54u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898da5cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898da68u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000004bu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898da84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898dbd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898dab0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898dacc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0898daccu; c->r[5] = 0u | 0x8000u; func_0892ff54(c, ram); }
L_0898dacc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x000000c4u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0898daf8u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898db14u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9bd0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898db28u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0898db34u; mem_w8(ram, c->r[2] + 0x00000011u, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898db60; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898db50u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); goto L_0898db70; }
L_0898db60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898db70u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
L_0898db70:
    { c->r[31] = 0x0898db78u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898db9c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898db94u; c->r[6] = 0u + 0x00000002u; func_08930178(c, ram); }
    { goto L_0898dbac; }
L_0898db9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x0898dbacu; c->r[6] = 0u + 0x00000002u; func_08930208(c, ram); }
L_0898dbac:
    { c->r[31] = 0x0898dbb4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x0898dbbcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898dbc8u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898dbd8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898e08c; }
L_0898dbf0:
    { c->r[31] = 0x0898dbf8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000fu;
    { c->r[31] = 0x0898dc0cu; c->r[7] = 0u + 0x000000ffu; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898dc40; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898dc9c; }
    { goto L_0898dd68; }
L_0898dc40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dc54u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dc68u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dc7cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898dc94u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898dc9c:
    { c->r[31] = 0x0898dca4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000du;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0898dcbcu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0898dcc4u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898dcecu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898dd10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898dd10u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_0898dd10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dd24u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dd38u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dd4cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898dd68:
    { c->r[31] = 0x0898dd70u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898e08c; }
    { c->r[31] = 0x0898dd8cu; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898e08c; }
    { c->r[31] = 0x0898dda8u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898ddd0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898ddf4u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
    { goto L_0898e08c; }
L_0898ddfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898de20; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898de18u; c->r[5] = 0u + 0x00000020u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898de20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898e08c; }
L_0898de38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898df44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (c->r[3] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e08c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9c88u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898ced4u: goto L_0898ced4; case 0x0898cf70u: goto L_0898cf70; case 0x0898cfecu: goto L_0898cfec; case 0x0898d020u: goto L_0898d020; case 0x0898d3fcu: goto L_0898d3fc; case 0x0898d7c8u: goto L_0898d7c8; case 0x0898d924u: goto L_0898d924; case 0x0898da84u: goto L_0898da84; case 0x0898dbf0u: goto L_0898dbf0; case 0x0898ddfcu: goto L_0898ddfc; case 0x0898de38u: goto L_0898de38; case 0x0898de84u: goto L_0898de84; case 0x0898dec4u: goto L_0898dec4; case 0x0898df00u: goto L_0898df00; case 0x0898df14u: goto L_0898df14; case 0x0898df28u: goto L_0898df28; case 0x0898df5cu: goto L_0898df5c; case 0x0898df98u: goto L_0898df98; case 0x0898e08cu: goto L_0898e08c; case 0x0898e11cu: goto L_0898e11c; case 0x0898e138u: goto L_0898e138; case 0x0898e154u: goto L_0898e154; case 0x0898e170u: goto L_0898e170; case 0x0898e18cu: goto L_0898e18c; case 0x0898e1a8u: goto L_0898e1a8; case 0x0898e1ecu: goto L_0898e1ec; case 0x0898e208u: goto L_0898e208; case 0x0898e224u: goto L_0898e224; case 0x0898e240u: goto L_0898e240; case 0x0898e25cu: goto L_0898e25c; case 0x0898e280u: goto L_0898e280; case 0x0898e2acu: goto L_0898e2ac; case 0x0898e2c8u: goto L_0898e2c8; default: recomp_trap_unknown_indirect(c, ram, 0x0898de7cu, _t); return; } }
L_0898de84:
    { c->r[31] = 0x0898de8cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898deb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898dea8u; c->r[5] = 0u + 0x0000001au; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898deb0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898debcu; c->r[5] = 0u + 0x0000001cu; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898dec4:
    { c->r[31] = 0x0898deccu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898deec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898dee4u; c->r[5] = 0u + 0x00000018u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898deec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898def8u; c->r[5] = 0u + 0x00000016u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898df00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898df0cu; c->r[5] = 0u + 0x00000014u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898df14:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898df20u; c->r[5] = 0u + 0x00000012u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898df28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000004bu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000du;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0898e08c; }
L_0898df44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898e08c; }
L_0898df5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0898df80; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0898df78u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_0898e08c; }
L_0898df80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0898e08c; }
L_0898df98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0898dfacu; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898dfbc; }
    { goto L_0898e08c; }
L_0898dfbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898e084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898e028u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e044; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0898e044u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0898e044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898e060u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e07c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0898e07cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0898e07c:
    { c->r[31] = 0x0898e084u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
L_0898e084:
    { c->r[31] = 0x0898e08cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0898e08c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898e0a8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e2d4; }
    { c->r[31] = 0x0898e0c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0898b640(c, ram); }
    { goto L_0898e2d4; }
L_0898e0c8:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9bd4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0898e0e0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e2c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9c9cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898ced4u: goto L_0898ced4; case 0x0898cf70u: goto L_0898cf70; case 0x0898cfecu: goto L_0898cfec; case 0x0898d020u: goto L_0898d020; case 0x0898d3fcu: goto L_0898d3fc; case 0x0898d7c8u: goto L_0898d7c8; case 0x0898d924u: goto L_0898d924; case 0x0898da84u: goto L_0898da84; case 0x0898dbf0u: goto L_0898dbf0; case 0x0898ddfcu: goto L_0898ddfc; case 0x0898de38u: goto L_0898de38; case 0x0898de84u: goto L_0898de84; case 0x0898dec4u: goto L_0898dec4; case 0x0898df00u: goto L_0898df00; case 0x0898df14u: goto L_0898df14; case 0x0898df28u: goto L_0898df28; case 0x0898df5cu: goto L_0898df5c; case 0x0898df98u: goto L_0898df98; case 0x0898e08cu: goto L_0898e08c; case 0x0898e11cu: goto L_0898e11c; case 0x0898e138u: goto L_0898e138; case 0x0898e154u: goto L_0898e154; case 0x0898e170u: goto L_0898e170; case 0x0898e18cu: goto L_0898e18c; case 0x0898e1a8u: goto L_0898e1a8; case 0x0898e1ecu: goto L_0898e1ec; case 0x0898e208u: goto L_0898e208; case 0x0898e224u: goto L_0898e224; case 0x0898e240u: goto L_0898e240; case 0x0898e25cu: goto L_0898e25c; case 0x0898e280u: goto L_0898e280; case 0x0898e2acu: goto L_0898e2ac; case 0x0898e2c8u: goto L_0898e2c8; default: recomp_trap_unknown_indirect(c, ram, 0x0898e114u, _t); return; } }
L_0898e11c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001707u;
    { c->r[31] = 0x0898e130u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e2c8; }
L_0898e138:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001509u;
    { c->r[31] = 0x0898e14cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e2c8; }
L_0898e154:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001706u;
    { c->r[31] = 0x0898e168u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e2c8; }
L_0898e170:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001705u;
    { c->r[31] = 0x0898e184u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e2c8; }
L_0898e18c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001705u;
    { c->r[31] = 0x0898e1a0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e2c8; }
L_0898e1a8:
    { c->r[31] = 0x0898e1b0u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = (c->r[3] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898e270; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9d4cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0898ced4u: goto L_0898ced4; case 0x0898cf70u: goto L_0898cf70; case 0x0898cfecu: goto L_0898cfec; case 0x0898d020u: goto L_0898d020; case 0x0898d3fcu: goto L_0898d3fc; case 0x0898d7c8u: goto L_0898d7c8; case 0x0898d924u: goto L_0898d924; case 0x0898da84u: goto L_0898da84; case 0x0898dbf0u: goto L_0898dbf0; case 0x0898ddfcu: goto L_0898ddfc; case 0x0898de38u: goto L_0898de38; case 0x0898de84u: goto L_0898de84; case 0x0898dec4u: goto L_0898dec4; case 0x0898df00u: goto L_0898df00; case 0x0898df14u: goto L_0898df14; case 0x0898df28u: goto L_0898df28; case 0x0898df5cu: goto L_0898df5c; case 0x0898df98u: goto L_0898df98; case 0x0898e08cu: goto L_0898e08c; case 0x0898e11cu: goto L_0898e11c; case 0x0898e138u: goto L_0898e138; case 0x0898e154u: goto L_0898e154; case 0x0898e170u: goto L_0898e170; case 0x0898e18cu: goto L_0898e18c; case 0x0898e1a8u: goto L_0898e1a8; case 0x0898e1ecu: goto L_0898e1ec; case 0x0898e208u: goto L_0898e208; case 0x0898e224u: goto L_0898e224; case 0x0898e240u: goto L_0898e240; case 0x0898e25cu: goto L_0898e25c; case 0x0898e280u: goto L_0898e280; case 0x0898e2acu: goto L_0898e2ac; case 0x0898e2c8u: goto L_0898e2c8; default: recomp_trap_unknown_indirect(c, ram, 0x0898e1e4u, _t); return; } }
L_0898e1ec:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001527u;
    { c->r[31] = 0x0898e200u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e270; }
L_0898e208:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001526u;
    { c->r[31] = 0x0898e21cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e270; }
L_0898e224:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001525u;
    { c->r[31] = 0x0898e238u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e270; }
L_0898e240:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001417u;
    { c->r[31] = 0x0898e254u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0898e270; }
L_0898e25c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001558u;
    { c->r[31] = 0x0898e270u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
L_0898e270:
    { c->r[31] = 0x0898e278u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_0898e2c8; }
L_0898e280:
    { c->r[31] = 0x0898e288u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x00001539u;
    { c->r[31] = 0x0898e29cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x0898e2a4u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_0898e2c8; }
L_0898e2ac:
    { c->r[31] = 0x0898e2b4u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0898e2c8u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_0898e2c8:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0898e2d4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0898e2d4:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0898ced4 */
}

/* func_08996eac  0x08996eac..0x08998748  6300 bytes, source=fde */
void func_08996eac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08996eacu);
L_08996eac:
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
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996f1c; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089984b4; }
    { goto L_08998728; }
L_08996f1c:
    { c->r[31] = 0x08996f24u; func_0885d884(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa074u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08996eacu: goto L_08996eac; case 0x08996f60u: goto L_08996f60; case 0x0899703cu: goto L_0899703c; case 0x089972e8u: goto L_089972e8; case 0x08997370u: goto L_08997370; case 0x089973c4u: goto L_089973c4; case 0x089974e0u: goto L_089974e0; case 0x08997528u: goto L_08997528; case 0x08997888u: goto L_08997888; case 0x08997b44u: goto L_08997b44; case 0x08997cccu: goto L_08997ccc; case 0x08997f60u: goto L_08997f60; case 0x08997fb0u: goto L_08997fb0; case 0x089981f4u: goto L_089981f4; case 0x0899823cu: goto L_0899823c; case 0x089983dcu: goto L_089983dc; case 0x08998468u: goto L_08998468; case 0x089984a4u: goto L_089984a4; case 0x08998508u: goto L_08998508; case 0x08998578u: goto L_08998578; case 0x08998594u: goto L_08998594; case 0x089985b0u: goto L_089985b0; case 0x08998618u: goto L_08998618; case 0x08998634u: goto L_08998634; case 0x08998660u: goto L_08998660; case 0x0899867cu: goto L_0899867c; case 0x08998690u: goto L_08998690; default: recomp_trap_unknown_indirect(c, ram, 0x08996f58u, _t); return; } }
L_08996f60:
    { c->r[31] = 0x08996f68u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08996f74:
    { c->r[31] = 0x08996f7cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996f98; }
    { goto L_08996fd8; }
L_08996f98:
    { c->r[31] = 0x08996fa0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08996f74; }
L_08996fd8:
    { c->r[31] = 0x08996fe0u; func_0896a3c0(c, ram); }
    mem_w8(ram, c->r[2] + 0x00000025u, 0u);
    { c->r[31] = 0x08996fecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08992cb4(c, ram); }
    { c->r[31] = 0x08996ff4u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    { c->r[31] = 0x08996ffcu; func_0883b080(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899702c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08997020u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0899702c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_0899703c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08997054u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899706c; }
    { goto L_089984a4; }
L_0899706c:
    { c->r[31] = 0x08997074u; c->r[4] = 0u + 0x00000002u; func_0880b118(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e00u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000df8u;
    { c->r[31] = 0x08997090u; mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997098u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089970c8u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    { c->r[31] = 0x089970d0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x089970d8u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08997108u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    { c->r[31] = 0x08997110u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997118u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x0899713cu; c->r[16] = c->r[2] + 0x00000014u; func_0896a260(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08997148u; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    { c->r[31] = 0x08997150u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997158u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08997194:
    { c->r[31] = 0x0899719cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089971b8; }
    { goto L_08997228; }
L_089971b8:
    { c->r[31] = 0x089971c0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089971d8; }
    { goto L_08997218; }
L_089971d8:
    { c->r[31] = 0x089971e0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997218; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08997218:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08997194; }
L_08997228:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997248; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997248:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08997258:
    { c->r[31] = 0x08997260u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899727c; }
    { goto L_089984a4; }
L_0899727c:
    { c->r[31] = 0x08997284u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089972acu; c->r[4] = c->r[2] + 0u; func_08998748(c, ram); }
    { c->r[31] = 0x089972b4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    mem_w8(ram, c->r[2] + 0x0000000fu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08997258; }
L_089972e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08997358; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000007bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08997324u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08997348u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997358:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089984a4; }
L_08997370:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997384u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997394; }
    { goto L_089984a4; }
L_08997394:
    { c->r[31] = 0x0899739cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089973b4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_089973c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089973d8u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089984a4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089973f0u; c->r[5] = 0u + 0x0000007bu; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997418; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089974c8; }
    { goto L_089974d4; }
L_08997418:
    { c->r[31] = 0x08997420u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    { c->r[31] = 0x08997428u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997430u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08997454u; mem_w8(ram, c->r[2] + 0x00000005u, 0u); func_0896a284(c, ram); }
    { c->r[31] = 0x0899745cu; c->r[17] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997464u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000018u;
    { c->r[31] = 0x0899749cu; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x089974a4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089974b0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089974b8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089974d4; }
L_089974c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089974d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000010u, 0u); goto L_089984a4; }
L_089974e0:
    { c->r[31] = 0x089974e8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997508; }
    { c->r[31] = 0x089974f8u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997508:
    { c->r[31] = 0x08997510u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997528:
    { c->r[31] = 0x08997530u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x08997544u; c->r[7] = 0u + 0x00000008u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089975d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997588; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089975a0; }
    { goto L_089976fc; }
L_08997588:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089975a0; }
    { goto L_089976fc; }
L_089975a0:
    { c->r[31] = 0x089975a8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089975c0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_089975d0:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089975d4:
    { c->r[31] = 0x089975dcu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089975f8; }
    { goto L_08997608; }
L_089975f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089975d4; }
L_08997608:
    { c->r[31] = 0x08997610u; func_08996c64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089984a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08997640u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08997680; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08997664u; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997680; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08997680u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_08997680:
    { c->r[31] = 0x08997688u; func_0896a284(c, ram); }
    { c->r[31] = 0x08997690u; c->r[17] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997698u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0x00000018u;
    { c->r[31] = 0x089976d0u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089976e0u; mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089976ecu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_089976fc:
    { c->r[31] = 0x08997704u; mem_w32(ram, c->r[30] + 0x00000024u, 0u); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899787c; }
    { c->r[31] = 0x08997720u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089977f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08997750u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08997790; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08997774u; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997790; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08997790u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_08997790:
    { c->r[31] = 0x08997798u; func_08996c64(c, ram); }
    { c->r[31] = 0x089977a0u; func_0896a284(c, ram); }
    { c->r[31] = 0x089977a8u; c->r[17] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x089977b0u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000018u;
    { c->r[31] = 0x089977e8u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_0899787c; }
L_089977f4:
    { c->r[31] = 0x089977fcu; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997850; }
    { c->r[31] = 0x08997818u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997850; }
    { c->r[31] = 0x08997834u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997850; }
    { goto L_0899787c; }
L_08997850:
    { c->r[31] = 0x08997858u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08997870u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0899787c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000010u, 0u); goto L_089984a4; }
L_08997888:
    { c->r[31] = 0x08997890u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x089978a4u; c->r[7] = 0u + 0x00000008u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997930; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089978e8; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997900; }
    { goto L_089979ec; }
L_089978e8:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997900; }
    { goto L_089979ec; }
L_08997900:
    { c->r[31] = 0x08997908u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08997920u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997930:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08997934:
    { c->r[31] = 0x0899793cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08997958; }
    { goto L_08997968; }
L_08997958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08997934; }
L_08997968:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08997978u; mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); func_08996c64(c, ram); }
    { c->r[31] = 0x08997980u; func_0896a284(c, ram); }
    { c->r[31] = 0x08997988u; c->r[17] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997990u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0x00000018u;
    { c->r[31] = 0x089979c8u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x089979d0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089979dcu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_089979ec:
    { c->r[31] = 0x089979f4u; mem_w32(ram, c->r[30] + 0x00000024u, 0u); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997a90; }
    { c->r[31] = 0x08997a10u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997a90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08997a40u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08997a80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08997a64u; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997a80; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08997a80u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_08997a80:
    { c->r[31] = 0x08997a88u; func_08996c64(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08997a90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    { c->r[31] = 0x08997aa0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997b24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997ae4; }
    { c->r[31] = 0x08997abcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08997ad4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997ae4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997af8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997b0cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x08997b14u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997b24:
    { c->r[31] = 0x08997b2cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997b44:
    { c->r[31] = 0x08997b4cu; func_0896a284(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000028eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997b9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997b70u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997b84u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x08997b8cu; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997b9c:
    { c->r[31] = 0x08997ba4u; mem_w32(ram, c->r[30] + 0x00000028u, 0u); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997c80; }
    { c->r[31] = 0x08997bc0u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997bec; }
    { c->r[31] = 0x08997bdcu; func_08996c64(c, ram); }
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08997c80; }
L_08997bec:
    { c->r[31] = 0x08997bf4u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997c14; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08997c80; }
L_08997c14:
    { c->r[31] = 0x08997c1cu; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08997c80; }
    { c->r[31] = 0x08997c38u; func_08996c64(c, ram); }
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    { c->r[31] = 0x08997c48u; mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08997c60u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08997c68u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08997c74u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08997c80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997ca0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997cb4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x08997cbcu; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997ccc:
    { c->r[31] = 0x08997cd4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x08997ce8u; c->r[7] = 0u + 0x00000008u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997d74; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997d2c; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997d44; }
    { goto L_08997e48; }
L_08997d2c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997e18; }
    { goto L_08997e48; }
L_08997d44:
    { c->r[31] = 0x08997d4cu; func_0885d97c(c, ram); }
    { c->r[31] = 0x08997d54u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08997d6cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_089984a4; }
L_08997d74:
    { c->r[31] = 0x08997d7cu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08997d9cu; c->r[6] = 0u + 0x00000001u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08997da0:
    { c->r[31] = 0x08997da8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08997dc4; }
    { goto L_08997dd4; }
L_08997dc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08997da0; }
L_08997dd4:
    { c->r[31] = 0x08997ddcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000cu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08997df4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08997dfcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08997e08u; c->r[5] = 0u + 0x0000003cu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997e18:
    { c->r[31] = 0x08997e20u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08997e38u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997e48:
    { c->r[31] = 0x08997e50u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089984a4; }
    { c->r[31] = 0x08997e6cu; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997ea4; }
    { c->r[31] = 0x08997e88u; func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08997ea4; }
    { goto L_089984a4; }
L_08997ea4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08997ec0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08997f00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08997ee4u; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08997f00; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08997f00u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_08997f00:
    { c->r[31] = 0x08997f08u; func_08996c64(c, ram); }
    { c->r[31] = 0x08997f10u; func_0896a284(c, ram); }
    { c->r[31] = 0x08997f18u; c->r[17] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08997f20u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0x00000018u;
    { c->r[31] = 0x08997f58u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { goto L_089984a4; }
L_08997f60:
    { c->r[31] = 0x08997f68u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997f84u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08997f98u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x08997fa0u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08997fb0:
    { c->r[31] = 0x08997fb8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000009u;
    { c->r[31] = 0x08997fccu; c->r[7] = 0u + 0x00000008u; func_0896d22c(c, ram); }
    { c->r[31] = 0x08997fd4u; mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000284u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { c->r[31] = 0x08997fe4u; mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); func_0896a284(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899806c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998024; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899803c; }
    { goto L_089984a4; }
L_08998024:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089981c4; }
    { goto L_089984a4; }
L_0899803c:
    { c->r[31] = 0x08998044u; func_0885d97c(c, ram); }
    { c->r[31] = 0x0899804cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08998064u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_089984a4; }
L_0899806c:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08998070:
    { c->r[31] = 0x08998078u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08998094; }
    { goto L_089980a4; }
L_08998094:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08998070; }
L_089980a4:
    { c->r[31] = 0x089980acu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089980c0:
    { c->r[31] = 0x089980c8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089980e4; }
    { goto L_08998164; }
L_089980e4:
    { c->r[31] = 0x089980ecu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08998104; }
    { goto L_08998154; }
L_08998104:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998154; }
    { c->r[31] = 0x0899812cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
L_08998154:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089980c0; }
L_08998164:
    { c->r[31] = 0x0899816cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000du;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08998184u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08998198u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089981acu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x089981b4u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_089981c4:
    { c->r[31] = 0x089981ccu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089981e4u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_089981f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08998224; }
    { c->r[31] = 0x0899820cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089984a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089984a4; }
L_08998224:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089984a4; }
L_0899823c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08998258u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998270; }
    { goto L_089984a4; }
L_08998270:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899827cu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899828c; }
    { goto L_089984a4; }
L_0899828c:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08998290:
    { c->r[31] = 0x08998298u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089982b4; }
    { goto L_089982c4; }
L_089982b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08998290; }
L_089982c4:
    { c->r[31] = 0x089982ccu; func_0885d97c(c, ram); }
    { c->r[31] = 0x089982d4u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08998378; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08998304u; c->r[5] = 0u + 0x00000005u; func_089d7208(c, ram); }
    { c->r[31] = 0x0899830cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    { c->r[31] = 0x08998318u; c->r[4] = c->r[2] + 0u; func_0880b0d4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08998328u; c->r[5] = 0u + 0x00000006u; func_089d7194(c, ram); }
    { c->r[31] = 0x08998330u; func_089794c4(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08998344u; c->r[5] = c->r[2] + 0u; func_0896df68(c, ram); }
    { c->r[31] = 0x0899834cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa5c8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08998370u; c->r[5] = c->r[2] + 0u; func_0896a7b8(c, ram); }
    { goto L_089984a4; }
L_08998378:
    { c->r[31] = 0x08998380u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089750b4(c, ram); }
    { c->r[31] = 0x08998388u; c->r[4] = 0u + 0u; func_0880b118(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089983b8; }
    { c->r[31] = 0x089983a4u; func_08994730(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089983b0u; c->r[5] = 0u + 0x00000012u; func_0896a7b8(c, ram); }
    { goto L_089984a4; }
L_089983b8:
    { c->r[31] = 0x089983c0u; func_0896a284(c, ram); }
    { c->r[31] = 0x089983c8u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089983d4u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_089984a4; }
L_089983dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089983f8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998410; }
    { goto L_089984a4; }
L_08998410:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899841cu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899842c; }
    { goto L_089984a4; }
L_0899842c:
    { c->r[31] = 0x08998434u; func_0885d97c(c, ram); }
    { c->r[31] = 0x0899843cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    { c->r[31] = 0x08998444u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089750b4(c, ram); }
    { c->r[31] = 0x0899844cu; func_0896a284(c, ram); }
    { c->r[31] = 0x08998454u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08998460u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_089984a4; }
L_08998468:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08998484u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899849c; }
    { goto L_089984a4; }
L_0899849c:
    { c->r[31] = 0x089984a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_089984a4:
    { c->r[31] = 0x089984acu; func_08972d0c(c, ram); }
    { goto L_08998728; }
L_089984b4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa06cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089984ccu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998690; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa124u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08996eacu: goto L_08996eac; case 0x08996f60u: goto L_08996f60; case 0x0899703cu: goto L_0899703c; case 0x089972e8u: goto L_089972e8; case 0x08997370u: goto L_08997370; case 0x089973c4u: goto L_089973c4; case 0x089974e0u: goto L_089974e0; case 0x08997528u: goto L_08997528; case 0x08997888u: goto L_08997888; case 0x08997b44u: goto L_08997b44; case 0x08997cccu: goto L_08997ccc; case 0x08997f60u: goto L_08997f60; case 0x08997fb0u: goto L_08997fb0; case 0x089981f4u: goto L_089981f4; case 0x0899823cu: goto L_0899823c; case 0x089983dcu: goto L_089983dc; case 0x08998468u: goto L_08998468; case 0x089984a4u: goto L_089984a4; case 0x08998508u: goto L_08998508; case 0x08998578u: goto L_08998578; case 0x08998594u: goto L_08998594; case 0x089985b0u: goto L_089985b0; case 0x08998618u: goto L_08998618; case 0x08998634u: goto L_08998634; case 0x08998660u: goto L_08998660; case 0x0899867cu: goto L_0899867c; case 0x08998690u: goto L_08998690; default: recomp_trap_unknown_indirect(c, ram, 0x08998500u, _t); return; } }
L_08998508:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08998518u; c->r[5] = 0u + 0x0000007bu; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998540; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899855c; }
    { goto L_08998690; }
L_08998540:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001557u;
    { c->r[31] = 0x08998554u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_0899855c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001558u;
    { c->r[31] = 0x08998570u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_08998578:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001539u;
    { c->r[31] = 0x0899858cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_08998594:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001539u;
    { c->r[31] = 0x089985a8u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_089985b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089985e0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089985fc; }
    { goto L_08998690; }
L_089985e0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000161au;
    { c->r[31] = 0x089985f4u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_089985fc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001706u;
    { c->r[31] = 0x08998610u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_08998618:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000154fu;
    { c->r[31] = 0x0899862cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_08998634:
    { c->r[31] = 0x0899863cu; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001507u;
    { c->r[31] = 0x08998650u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x08998658u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_08998690; }
L_08998660:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001529u;
    { c->r[31] = 0x08998674u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08998690; }
L_0899867c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08998690u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_08998690:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0899869cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089986b8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998728; }
    { c->r[31] = 0x089986d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08998728; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998728; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa070u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0899870cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08998714u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e48c(c, ram); }
    { c->r[31] = 0x0899871cu; c->r[4] = c->r[2] + 0u; func_089734b4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08998728u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08998728:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08996eac */
}

/* func_08998f18  0x08998f18..0x08998f58  64 bytes, source=fde */
void func_08998f18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998f18u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002b88u, 0u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002b84u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08998f44u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998f18 */
}

/* func_0899a280  0x0899a280..0x0899b088  3592 bytes, source=fde */
void func_0899a280(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899a280u);
    c->r[29] = c->r[29] + 0xfffff730u;
    mem_w32(ram, c->r[29] + 0x000008c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000008c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000008c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x0899a2b0u; c->r[4] = c->r[4] + 0xffffa52cu; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002ebcu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x0899a2d0u; mem_w32(ram, c->r[1] + 0x00002eb4u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002eb8u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002eb4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a2f4u; c->r[5] = c->r[2] + 0u; func_0880d34c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002eb8u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a30cu; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002ebcu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a324u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a334u; c->r[5] = 0u + 0x00000002u; func_0880d2bc(c, ram); }
    { c->r[31] = 0x0899a33cu; func_089794c4(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a350u; c->r[5] = c->r[2] + 0u; func_0896df68(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002eb8u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a368u; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002ebcu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a380u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899a38cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4fc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899a39cu; c->r[5] = 0u + 0x00000001u; func_0880d524(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0899a3a8u; c->r[5] = 0u + 0x00000002u; func_0896e344(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa53cu;
    c->r[6] = 0x08a80000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002eb4u);
    c->r[7] = 0x08a80000u;
    { c->r[31] = 0x0899a3ccu; c->r[7] = mem_r32(ram, c->r[7] + 0x00002eb8u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa54cu;
    c->r[6] = 0x08a80000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002eb4u);
    c->r[7] = 0x08a80000u;
    { c->r[31] = 0x0899a3f0u; c->r[7] = mem_r32(ram, c->r[7] + 0x00002eb8u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000210u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa558u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0899a40cu; c->r[6] = mem_r32(ram, c->r[6] + 0x00002eb4u); func_08a1ad34(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899a41cu; c->r[5] = 0u + 0x00000002u; func_089d7208(c, ram); }
    c->r[2] = c->r[30] + 0x00000210u;
    { c->r[31] = 0x0899a428u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899a438u; c->r[5] = 0u + 0x00000003u; func_089d7194(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899a448u; c->r[5] = 0u + 0x00000003u; func_089d7208(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0899a454u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x0899a460u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    { c->r[31] = 0x0899a468u; func_0895c14c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x0899a474u; mem_w32(ram, c->r[30] + 0x00000310u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899a4c0; }
    { c->r[31] = 0x0899a48cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a4b8; }
    { c->r[31] = 0x0899a4a4u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000310u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000310u, c->r[2]); goto L_0899a4c0; }
L_0899a4b8:
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000310u, c->r[2]);
L_0899a4c0:
    c->r[2] = c->r[30] + 0x00000320u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899a4d4u; c->r[6] = 0u + 0x00000030u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000350u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899a4e8u; c->r[6] = 0u + 0x000000c0u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000410u, 0u);
L_0899a4ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000310u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a508; }
    { goto L_0899a5f0; }
L_0899a508:
    { c->r[31] = 0x0899a510u; func_08980edc(c, ram); }
    { c->r[31] = 0x0899a518u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[16];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0899a548u; mem_w32(ram, c->r[30] + 0x00000414u, c->r[2]); func_08980edc(c, ram); }
    { c->r[31] = 0x0899a550u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[16];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000418u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000410u, c->r[2]); goto L_0899a4ec; }
L_0899a5f0:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9974u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0899a604u; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000418u, 0u);
    mem_w32(ram, c->r[30] + 0x00000414u, 0u);
L_0899a60c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a624; }
    { goto L_0899a798; }
L_0899a624:
    c->r[3] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899a788; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9974u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000414u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9975u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000410u, 0u);
L_0899a68c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a6a4; }
    { goto L_0899a77c; }
L_0899a6a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899a76c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9975u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9976u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000410u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9975u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9975u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0899a76c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000410u, c->r[2]); goto L_0899a68c; }
L_0899a77c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000418u, c->r[2]);
L_0899a788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000414u, c->r[2]); goto L_0899a60c; }
L_0899a798:
    mem_w32(ram, c->r[30] + 0x0000041cu, 0u);
L_0899a79c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000418u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a7b8; }
    { goto L_0899a8cc; }
L_0899a7b8:
    c->r[4] = c->r[30] + 0x00000420u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9974u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa560u;
    { c->r[31] = 0x0899a7f0u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000420u;
    { c->r[31] = 0x0899a7fcu; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000414u, 0u);
L_0899a800:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9975u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a83c; }
    { goto L_0899a8bc; }
L_0899a83c:
    c->r[4] = c->r[30] + 0x00000520u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9974u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9976u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa568u;
    { c->r[31] = 0x0899a8a0u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000520u;
    { c->r[31] = 0x0899a8acu; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000414u, c->r[2]); goto L_0899a800; }
L_0899a8bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]); goto L_0899a79c; }
L_0899a8cc:
    c->r[2] = c->r[30] + 0x00000320u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899a8e0u; c->r[6] = 0u + 0x00000030u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000350u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899a8f4u; c->r[6] = 0u + 0x000000c0u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000041cu, 0u);
L_0899a8f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a910; }
    { goto L_0899aad0; }
L_0899a910:
    { c->r[31] = 0x0899a918u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0899a930; }
    { goto L_0899aac0; }
L_0899a930:
    { c->r[31] = 0x0899a938u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = 0u + 0xffffffc0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x00000620u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000620u);
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899a97c; }
    { c->r[31] = 0x0899a974u; func_0896a3c0(c, ram); }
    { goto L_0899aac0; }
L_0899a97c:
    { c->r[31] = 0x0899a984u; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899a9c0; }
    { c->r[31] = 0x0899a9b8u; func_0896a3c0(c, ram); }
    { goto L_0899aac0; }
L_0899a9c0:
    mem_w32(ram, c->r[30] + 0x00000414u, 0u);
L_0899a9c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000310u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a9e0; }
    { goto L_0899aac0; }
L_0899a9e0:
    { c->r[31] = 0x0899a9e8u; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0899aa1cu; mem_w32(ram, c->r[30] + 0x00000410u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000624u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000414u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000414u, c->r[2]); goto L_0899a9c4; }
L_0899aac0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]); goto L_0899a8f8; }
L_0899aad0:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff998cu;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0899aae4u; c->r[6] = 0u + 0x000000a8u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000624u, 0u);
    mem_w32(ram, c->r[30] + 0x0000041cu, 0u);
L_0899aaec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ab04; }
    { goto L_0899ac7c; }
L_0899ab04:
    c->r[3] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899ac6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000041cu);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998du;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000414u, 0u);
    mem_w32(ram, c->r[30] + 0x00000410u, 0u);
L_0899ab70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ab88; }
    { goto L_0899ac60; }
L_0899ab88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[30];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000350u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899ac50; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998du;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000628u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998eu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000410u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998du;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998du;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0899ac50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000410u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000410u, c->r[2]); goto L_0899ab70; }
L_0899ac60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000624u, c->r[2]);
L_0899ac6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]); goto L_0899aaec; }
L_0899ac7c:
    mem_w32(ram, c->r[30] + 0x00000628u, 0u);
L_0899ac80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000624u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ac9c; }
    { goto L_0899adb0; }
L_0899ac9c:
    c->r[4] = c->r[30] + 0x00000630u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa570u;
    { c->r[31] = 0x0899acd4u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000630u;
    { c->r[31] = 0x0899ace0u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000041cu, 0u);
L_0899ace4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998du;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ad20; }
    { goto L_0899ada0; }
L_0899ad20:
    c->r[4] = c->r[30] + 0x00000730u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff998eu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa57cu;
    { c->r[31] = 0x0899ad84u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000730u;
    { c->r[31] = 0x0899ad90u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]); goto L_0899ace4; }
L_0899ada0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000628u, c->r[2]); goto L_0899ac80; }
L_0899adb0:
    c->r[2] = c->r[30] + 0x00000830u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899adc4u; c->r[6] = 0u + 0x00000064u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000628u, 0u);
L_0899adc8:
    { c->r[31] = 0x0899add0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899adec; }
    { goto L_0899af18; }
L_0899adec:
    mem_w32(ram, c->r[30] + 0x0000041cu, 0u);
L_0899adf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000310u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ae0c; }
    { goto L_0899af08; }
L_0899ae0c:
    { c->r[31] = 0x0899ae14u; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000414u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000414u);
    { c->r[31] = 0x0899ae50u; c->r[4] = c->r[2] + 0u; func_088bf688(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000620u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000620u);
    c->r[2] = c->r[30] + 0x00000830u;
    c->r[4] = c->r[2] + c->r[3];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000620u);
    c->r[2] = c->r[30] + 0x00000830u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0899ae88u; mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[30] + 0x000008a0u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000414u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000008a0u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899aed0u; c->r[5] = c->r[3] + 0u; func_088bf6ec(c, ram); }
    mem_w8(ram, c->r[30] + 0x000008a1u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000008a1u);
    c->r[2] = c->r[30] + 0x00000830u;
    c->r[4] = c->r[2] + c->r[3];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000008a1u);
    c->r[2] = c->r[30] + 0x00000830u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]); goto L_0899adf0; }
L_0899af08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000628u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000628u, c->r[2]); goto L_0899adc8; }
L_0899af18:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0899af2cu; c->r[6] = 0u + 0x00000020u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000628u, 0u);
    mem_w32(ram, c->r[30] + 0x0000041cu, 0u);
L_0899af34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899af4c; }
    { goto L_0899af9c; }
L_0899af4c:
    c->r[3] = c->r[30] + 0x00000830u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899af8c; }
    c->r[5] = c->r[30] + 0x00000628u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[3] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a34u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000041cu);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
L_0899af8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000041cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000041cu, c->r[2]); goto L_0899af34; }
L_0899af9c:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9a34u;
    { c->r[31] = 0x0899afacu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000628u); func_088bf8b0(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899afbcu; c->r[5] = 0u + 0x00000004u; func_089d7194(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899afccu; c->r[5] = 0u + 0x00000004u; func_089d7208(c, ram); }
    { c->r[31] = 0x0899afd4u; func_0895c21c(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x0899afe0u; c->r[4] = c->r[4] + 0xffffa588u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899afecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x000008b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa590u;
    { c->r[31] = 0x0899b014u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x000008b0u;
    { c->r[31] = 0x0899b020u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899b030u; c->r[5] = 0u + 0x00000005u; func_089d7194(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0899b03cu; c->r[5] = 0u + 0x00000002u; func_0896e344(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899b04cu; c->r[5] = 0u + 0x00000005u; func_089d7208(c, ram); }
    { c->r[31] = 0x0899b054u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    { c->r[31] = 0x0899b060u; c->r[4] = c->r[2] + 0u; func_0880b0d4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0899b070u; c->r[5] = 0u + 0x00000006u; func_089d7194(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000008c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000008c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000008c0u);
    { c->r[29] = c->r[29] + 0x000008d0u; return; }
    return; /* fell out of func_0899a280 */
}

/* func_0899ffac  0x0899ffac..0x089a02b8  780 bytes, source=fde */
void func_0899ffac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899ffacu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899fff0u; c->r[5] = 0u + 0u; func_0880d524(c, ram); }
    { c->r[31] = 0x0899fff8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x089a0000u; c->r[4] = 0u + 0u; func_089991b0(c, ram); }
    { c->r[31] = 0x089a0008u; func_08870748(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0080; }
    { c->r[31] = 0x089a0018u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0054; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a0034u; c->r[4] = c->r[4] + 0x00000af4u; func_089a1b30(c, ram); }
    { c->r[31] = 0x089a003cu; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0054; }
    { goto L_089a0064; }
L_089a0054:
    { c->r[31] = 0x089a005cu; c->r[4] = 0u + 0u; func_08870774(c, ram); }
    { goto L_089a0080; }
L_089a0064:
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffb9fcu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a0080; }
    { c->r[31] = 0x089a0080u; func_0884dfd8(c, ram); }
L_089a0080:
    { c->r[31] = 0x089a0088u; func_0899cf1c(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089a0098u; c->r[4] = c->r[2] + 0u; func_0899fc08(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089a00a8u; c->r[4] = c->r[2] + 0u; func_089992ac(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x089a00c0u; c->r[4] = c->r[2] + 0u; recomp_call_indirect(c, ram, 0x089a00b8u, _t); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089a00d0u; c->r[4] = c->r[2] + 0u; func_08999204(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089a00dcu; c->r[4] = c->r[2] + 0u; func_08998df0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a013c; }
    { c->r[31] = 0x089a00f0u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    { c->r[31] = 0x089a00f8u; c->r[4] = 0u + 0x000000ffu; func_08999204(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a0114u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a012c; }
    { c->r[31] = 0x089a012cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f550(c, ram); }
L_089a012c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a0294; }
L_089a013c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0180; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089a0154u; c->r[4] = c->r[2] + 0u; func_0899f744(c, ram); }
    { c->r[31] = 0x089a015cu; c->r[4] = 0u + 0x00000080u; func_089991b0(c, ram); }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a0168u; mem_w32(ram, c->r[1] + 0x00002aa4u, 0u); func_08903e40(c, ram); }
    { c->r[31] = 0x089a0170u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f550(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a0294; }
L_089a0180:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089a0188:
    { c->r[31] = 0x089a0190u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a01ac; }
    { goto L_089a0260; }
L_089a01ac:
    { c->r[31] = 0x089a01b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x000000abu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a0250; }
    { c->r[31] = 0x089a01d0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089a01fcu; mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089a0228u; mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_089a0250:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089a0188; }
L_089a0260:
    { c->r[31] = 0x089a0268u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a0294; }
    { c->r[31] = 0x089a0280u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    { c->r[31] = 0x089a0288u; c->r[4] = 0u + 0u; func_08999204(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a0294u; c->r[5] = 0u + 0x00000021u; func_0896a7b8(c, ram); }
L_089a0294:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089a02a0u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b96c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0899ffac */
}

/* func_089a3f5c  0x089a3f5c..0x089a430c  944 bytes, source=fde */
void func_089a3f5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a3f5cu);
L_089a3f5c:
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a4294; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a3fcc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a3fe4; }
    { goto L_089a42f0; }
L_089a3fcc:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a42e8; }
    { goto L_089a42f0; }
L_089a3fe4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a4284; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa8e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089a3f5cu: goto L_089a3f5c; case 0x089a4020u: goto L_089a4020; case 0x089a4118u: goto L_089a4118; case 0x089a41fcu: goto L_089a41fc; case 0x089a4240u: goto L_089a4240; case 0x089a426cu: goto L_089a426c; case 0x089a4284u: goto L_089a4284; default: recomp_trap_unknown_indirect(c, ram, 0x089a4018u, _t); return; } }
L_089a4020:
    { c->r[31] = 0x089a4028u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f8d0(c, ram); }
    { c->r[31] = 0x089a4030u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899b088(c, ram); }
    { c->r[31] = 0x089a4038u; func_089a39fc(c, ram); }
    { c->r[31] = 0x089a4040u; func_0897de00(c, ram); }
    { c->r[31] = 0x089a4048u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x00c0u;
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089a4068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a4080; }
    { goto L_089a40cc; }
L_089a4080:
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
    { c->r[31] = 0x089a40bcu; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089a4068; }
L_089a40cc:
    { c->r[31] = 0x089a40d4u; func_0899c07c(c, ram); }
    { c->r[31] = 0x089a40dcu; func_0899d820(c, ram); }
    { c->r[31] = 0x089a40e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x089a40ecu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a40f8u; c->r[5] = 0u + 0x00000384u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089a4100u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a4108u; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a42f0; }
L_089a4118:
    { c->r[31] = 0x089a4120u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a4128u; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    { c->r[31] = 0x089a4130u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x089a4144u; c->r[7] = 0u + 0x000000feu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a4178; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a41b4; }
    { goto L_089a42f0; }
L_089a4178:
    { c->r[31] = 0x089a4180u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a4198u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a41acu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089a42f0; }
L_089a41b4:
    { c->r[31] = 0x089a41bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a41d0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa8e4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089a41ecu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a42f0; }
L_089a41fc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a4208u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a4218; }
    { goto L_089a42f0; }
L_089a4218:
    { c->r[31] = 0x089a4220u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089a4228u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f9e0(c, ram); }
    { c->r[31] = 0x089a4230u; func_08998f18(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a42f0; }
L_089a4240:
    { c->r[31] = 0x089a4248u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x089a4250u; c->r[4] = c->r[2] + 0u; func_08999048(c, ram); }
    c->r[2] = c->r[2] & 0x00ffu;
    { c->r[31] = 0x089a425cu; c->r[4] = c->r[2] + 0u; func_08999258(c, ram); }
    { c->r[31] = 0x089a4264u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a02b8(c, ram); }
    { goto L_089a42f0; }
L_089a426c:
    { c->r[31] = 0x089a4274u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x089a427cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089a42f0; }
L_089a4284:
    { c->r[31] = 0x089a428cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a09a0(c, ram); }
    { goto L_089a42f0; }
L_089a4294:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a42d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a42d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a42d8; }
    { goto L_089a42f0; }
L_089a42d8:
    { c->r[31] = 0x089a42e0u; func_0899dcf4(c, ram); }
    { goto L_089a42f0; }
L_089a42e8:
    { c->r[31] = 0x089a42f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0e68(c, ram); }
L_089a42f0:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089a3f5c */
}

/* func_089a99f4  0x089a99f4..0x089a9b94  416 bytes, source=sweep */
void func_089a99f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a99f4u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a9a2c; }
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_089a9b78; }
L_089a9a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad4cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a9a54; }
    { goto L_089a9a5c; }
L_089a9a54:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_089a9b78; }
L_089a9a5c:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089a9a68u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[16] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad50u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffad50u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a9ac4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089a9adcu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a9af4u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[13] = u2f(0u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a9b14u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089a9b20u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad54u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffad58u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a9b68; }
    { goto L_089a9b74; }
L_089a9b68:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_089a9b78; }
L_089a9b74:
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_089a9b78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089a99f4 */
}

/* func_089aec24  0x089aec24..0x089af264  1600 bytes, source=fde */
void func_089aec24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089aec24u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000033u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { c->r[31] = 0x089aec94u; mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); func_0896a3e4(c, ram); }
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
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { c->r[31] = 0x089aecfcu; c->r[4] = c->r[2] + 0u; func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089aed24u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089af184; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aedc4; }
    c->r[2] = 0u + 0x00000005u;
    { c->r[31] = 0x089aed5cu; mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aed78u; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000032u);
    mem_w8(ram, c->r[30] + 0x00000013u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000003cu;
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_089af12c; }
L_089aedc4:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffffb9d1u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089aee48; }
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x089aede0u; mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aedfcu; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000032u);
    mem_w8(ram, c->r[30] + 0x00000013u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000003cu;
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_089af12c; }
L_089aee48:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aeec0; }
    c->r[2] = 0u + 0x00000007u;
    { c->r[31] = 0x089aee68u; mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[30] + 0x00000013u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000003cu;
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_089af12c; }
L_089aeec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aef40u; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000032u);
    mem_w8(ram, c->r[30] + 0x00000013u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089aef74u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c07c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089aef84u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aefa4u; c->r[5] = c->r[2] + 0u; func_089b3464(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aefd0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb098u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089aefd0; }
    { goto L_089af010; }
L_089aefd0:
    c->r[2] = 0u + 0x00000008u;
    { c->r[31] = 0x089aefdcu; mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000001eu;
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[30] + 0x00000013u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_089af010:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb09cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089af054; }
    { goto L_089af080; }
L_089af054:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb09cu);
    c->f[0] = c->f[1] - c->f[0];
    { c->r[31] = 0x089af074u; mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]); func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089af080u; c->r[5] = 0u + 0x00000002u; func_0896fc10(c, ram); }
L_089af080:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x04000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089af0b0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x04000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbdcu, c->r[2]);
L_089af0b0:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089af0f0; }
    { goto L_089af12c; }
L_089af0f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0a0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089af114; }
    { goto L_089af12c; }
L_089af114:
    { c->r[31] = 0x089af11cu; c->r[4] = 0u + 0x0000208cu; func_089346e8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0a4u);
    mem_wf32(ram, c->r[2] + 0x0000002cu, c->f[0]);
L_089af12c:
    { c->r[31] = 0x089af134u; func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); goto L_089af228; }
L_089af184:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089af228; }
    { c->r[31] = 0x089af198u; func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_089af228:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0a8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089aec24 */
}

/* func_089b2f90  0x089b2f90..0x089b2fe0  80 bytes, source=sweep */
void func_089b2f90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2f90u);
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
    { c->r[31] = 0x089b2fccu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2f90 */
}

/* func_089b43b8  0x089b43b8..0x089b4450  152 bytes, source=fde */
void func_089b43b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b43b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b43ec; }
    { goto L_089b4438; }
L_089b43ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b441cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b3fd0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b4438u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089b49d4(c, ram); }
L_089b4438:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b43b8 */
}

/* func_089b731c  0x089b731c..0x089b7348  44 bytes, source=residue */
void func_089b731c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b731cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b731c */
}

/* func_089b8830  0x089b8830..0x089b88ec  188 bytes, source=fde */
void func_089b8830(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8830u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b8864; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089b88d4; }
L_089b8864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b887c; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089b88d4; }
L_089b887c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089b88a4u; c->r[4] = c->r[2] + 0u; func_08820d48(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb260u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b88d0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_089b88ec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089b88d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b8830 */
}

/* func_089c1bf4  0x089c1bf4..0x089c1dd8  484 bytes, source=fde */
void func_089c1bf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c1bf4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1c20; }
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_089c1dc0; }
L_089c1c20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1c34; }
    { c->r[31] = 0x089c1c34u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089bb69c(c, ram); }
L_089c1c34:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089c1c38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000071u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1c58; }
    { goto L_089c1d60; }
L_089c1c58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] << 8;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[5] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089c1d50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u | 0xffffu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1d50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1ce4; }
    { goto L_089c1d50; }
L_089c1ce4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089c1cec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1d00; }
    { goto L_089c1d50; }
L_089c1d00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c1d38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c1d38; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089c1d38u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_088984dc(c, ram); }
L_089c1d38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000098u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089c1cec; }
L_089c1d50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089c1c38; }
L_089c1d60:
    c->r[2] = 0x08b40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff124u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1db0; }
    c->r[2] = 0x08b40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff124u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c1da0; }
    c->r[4] = 0x08b40000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff124u);
    { c->r[31] = 0x089c1d98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_088984dc(c, ram); }
    { goto L_089c1db0; }
L_089c1da0:
    c->r[4] = 0x08b40000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff124u);
    { c->r[31] = 0x089c1db0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c1e30(c, ram); }
L_089c1db0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000070u);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089c1dc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c1bf4 */
}

/* func_089c61b8  0x089c61b8..0x089c625c  164 bytes, source=fde */
void func_089c61b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c61b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089c61cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08b80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffff1b8u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c61ec; }
    { goto L_089c6248; }
L_089c61ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff1bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089c6214u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6238; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0x00000006u;
    { c->r[31] = 0x089c6238u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_089c6238:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089c61cc; }
L_089c6248:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c61b8 */
}

/* func_089c8928  0x089c8928..0x089c898c  100 bytes, source=fde */
void func_089c8928(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8928u);
    c->r[29] = c->r[29] + 0xfffffde0u;
    mem_w32(ram, c->r[29] + 0x00000214u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000210u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000071u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c8960u; c->r[5] = 0u + 0u; func_08885c0c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089c8970u; c->r[6] = 0u + 0x00000001u; func_089c1990(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000070u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000214u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000210u);
    { c->r[29] = c->r[29] + 0x00000220u; return; }
    return; /* fell out of func_089c8928 */
}

/* func_089caa44  0x089caa44..0x089caa6c  40 bytes, source=sweep */
void func_089caa44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089caa44u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000122u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089caa44 */
}

/* func_089cd410  0x089cd410..0x089cd440  48 bytes, source=fde */
void func_089cd410(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cd410u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089cd428u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_089cbe9c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cd410 */
}

/* func_089d220c  0x089d220c..0x089d2264  88 bytes, source=sweep */
void func_089d220c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d220cu);
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
    { c->r[31] = 0x089d2250u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089d2530(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d220c */
}

/* func_089d30c4  0x089d30c4..0x089d3108  68 bytes, source=sweep */
void func_089d30c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d30c4u);
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
    { c->r[31] = 0x089d30f4u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d30c4 */
}

/* func_089d4720  0x089d4720..0x089d4778  88 bytes, source=fde */
void func_089d4720(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4720u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089d4764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089d4754u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24b6cu); /* sceNetAdhocPdpDelete */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089d4764:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d4720 */
}

/* func_089d5bbc  0x089d5bbc..0x089d5c0c  80 bytes, source=fde */
void func_089d5bbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5bbcu);
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
    { c->r[31] = 0x089d5bf8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08976140(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5bbc */
}

/* func_089d7b60  0x089d7b60..0x089d7c4c  236 bytes, source=fde */
void func_089d7b60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7b60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000650u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000694u, c->r[2]);
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000654u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d7ba8u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000654u;
    { c->r[31] = 0x089d7bb8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1af70(c, ram); }
    { c->r[31] = 0x089d7bc0u; hle_dispatch_stub(c, ram, 0x08a248a4u); /* sceKernelGetThreadCurrentPriority */ }
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbb3cu;
    c->r[5] = 0x089d0000u;
    c->r[5] = c->r[5] + 0x00007a68u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0x00001000u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089d7be8u; c->r[9] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x0000064cu, c->r[2]);
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x0000064cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d7c04u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7c38; }
L_089d7c10:
    { c->r[31] = 0x089d7c18u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7c28; }
    { goto L_089d7c38; }
L_089d7c28:
    { c->r[31] = 0x089d7c30u; func_089d7cac(c, ram); }
    { goto L_089d7c10; }
L_089d7c38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7b60 */
}

/* func_089d8ed4  0x089d8ed4..0x089d8f30  92 bytes, source=fde */
void func_089d8ed4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8ed4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x00000015u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = 0x08a50000u;
    { c->r[31] = 0x089d8f14u; c->r[8] = c->r[8] + 0xffffbb54u; func_089d9034(c, ram); }
    { c->r[31] = 0x089d8f1cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d8ed4 */
}

/* func_089da1f0  0x089da1f0..0x089da230  64 bytes, source=fde */
void func_089da1f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da1f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x089da214u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24dccu); /* sceUtilityOskInitStart */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da1f0 */
}

/* func_089db894  0x089db894..0x089db8b8  36 bytes, source=sweep */
void func_089db894(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db894u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006acu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089db894 */
}

/* func_089dc524  0x089dc524..0x089dc588  100 bytes, source=sweep */
void func_089dc524(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc524u);
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
    { c->r[31] = 0x089dc574u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc524 */
}

/* func_089de5c0  0x089de5c0..0x089de5f8  56 bytes, source=fde */
void func_089de5c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de5c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x089de5e4u; c->r[5] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a247ecu); /* sceKernelSetEventFlag */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de5c0 */
}

/* func_089e199c  0x089e199c..0x089e1a10  116 bytes, source=sweep */
void func_089e199c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e199cu);
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
    { c->r[31] = 0x089e19d8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e19fcu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e199c */
}

/* func_089e2448  0x089e2448..0x089e2478  48 bytes, source=sweep */
void func_089e2448(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2448u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2448 */
}

/* func_089e36e8  0x089e36e8..0x089e373c  84 bytes, source=sweep */
void func_089e36e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e36e8u);
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
    c->r[2] = 0xc0000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3728u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e36e8 */
}

/* func_089e4910  0x089e4910..0x089e4954  68 bytes, source=sweep */
void func_089e4910(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4910u);
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
    { c->r[31] = 0x089e4940u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4910 */
}

/* func_089e97e0  0x089e97e0..0x089e9a54  628 bytes, source=sweep */
void func_089e97e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e97e0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089e983c; }
    c->r[2] = 0u + 0x0000001cu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089e983c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e9860; }
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089e9860:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089e9864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e9880; }
    { goto L_089e9a40; }
L_089e9880:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc380u);
    c->f[3] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000009u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc380u);
    c->f[2] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc380u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089e9900u; func_0880d140(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e9954; }
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_089e9914:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000007fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e9938; }
    { goto L_089e9954; }
L_089e9938:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089e9914; }
L_089e9954:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e99b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006330u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006310u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    vfpu_exec(c, ram, 0xd8800000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8810010u); /* lv.q */
    vfpu_exec(c, ram, 0xd8820020u); /* lv.q */
    vfpu_exec(c, ram, 0xd8830030u); /* lv.q */
    vfpu_exec(c, ram, 0xd8440000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8450010u); /* lv.q */
    vfpu_exec(c, ram, 0xd8460020u); /* lv.q */
    vfpu_exec(c, ram, 0xd8470030u); /* lv.q */
L_089e99b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    vfpu_exec(c, ram, 0xc848000cu); /* lv.s */
    vfpu_exec(c, ram, 0xc8480011u); /* lv.s */
    vfpu_exec(c, ram, 0xc8480016u); /* lv.s */
    vfpu_exec(c, ram, 0xd0070068u); /* vone.s */
    vfpu_exec(c, ram, 0xf188a089u); /* vtfm4.q */
    vfpu_exec(c, ram, 0xd0106969u); /* vrcp.s */
    vfpu_exec(c, ram, 0x65690989u); /* vscl.p */
    vfpu_exec(c, ram, 0xd0022929u); /* vneg.s */
    vfpu_exec(c, ram, 0x641c0989u); /* vmul.p */
    vfpu_exec(c, ram, 0x601c0989u); /* vadd.p */
    vfpu_exec(c, ram, 0x641d0989u); /* vmul.p */
    vfpu_exec(c, ram, 0xdbca0030u); /* lv.q */
    vfpu_exec(c, ram, 0xf18aa48bu); /* vtfm4.q */
    vfpu_exec(c, ram, 0x641e0b8bu); /* vmul.p */
    vfpu_exec(c, ram, 0x600b0989u); /* vadd.p */
    vfpu_exec(c, ram, 0xd0060088u); /* vzero.p */
    vfpu_exec(c, ram, 0x6d880989u); /* vmax.p */
    vfpu_exec(c, ram, 0x6d1d0989u); /* vmin.p */
    vfpu_exec(c, ram, 0xe8690000u); /* sv.s */
    vfpu_exec(c, ram, 0xe8690005u); /* sv.s */
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089e9864; }
L_089e9a40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089e97e0 */
}

/* func_089eaea8  0x089eaea8..0x089eaeec  68 bytes, source=sweep */
void func_089eaea8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eaea8u);
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
    { c->r[31] = 0x089eaed8u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eaea8 */
}

/* func_089ee6f4  0x089ee6f4..0x089ee8e0  492 bytes, source=sweep */
void func_089ee6f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ee6f4u);
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
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000052c0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee768u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089ee7c8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089ee814u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_089ef088(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc460u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x48000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee874u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x4a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee8ccu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ee6f4 */
}

/* func_089f0af4  0x089f0af4..0x089f0b38  68 bytes, source=sweep */
void func_089f0af4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0af4u);
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
    { c->r[31] = 0x089f0b24u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0af4 */
}

/* func_089f1ba4  0x089f1ba4..0x089f1d70  460 bytes, source=sweep */
void func_089f1ba4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f1ba4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089f1be0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc510u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089f1c30u; func_0880d140(c, ram); }
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
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc510u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089f1c80u; func_0880d140(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc510u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089f1cd0u; func_0880d140(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc514u);
    mem_wf32(ram, c->r[2] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc518u);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc510u);
    mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc51cu);
    mem_wf32(ram, c->r[2] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc520u);
    mem_wf32(ram, c->r[2] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000054u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc51cu);
    mem_wf32(ram, c->r[2] + 0x00000058u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f1ba4 */
}

/* func_089f55b8  0x089f55b8..0x089f55ec  52 bytes, source=residue */
void func_089f55b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f55b8u);
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
    return; /* fell out of func_089f55b8 */
}

/* func_089f7894  0x089f7894..0x089f7a08  372 bytes, source=fde */
void func_089f7894(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f7894u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089f78b4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ca0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f78dc; }
    { c->r[31] = 0x089f78ccu; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f78dc; }
    { goto L_089f79ec; }
L_089f78dc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000049c9u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f79ec; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089f78f8u; c->r[4] = c->r[4] + 0x00003c30u; func_089b3824(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f79ec; }
    { c->r[31] = 0x089f7910u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f7938; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f7970; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x0000000cu, 0u); goto L_089f7970; }
L_089f7938:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089f7944u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ca0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f7970; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f7970; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000000cu, 0u);
L_089f7970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f7998; }
    { c->r[31] = 0x089f7988u; func_088b7bb0(c, ram); }
    { c->r[31] = 0x089f7990u; func_088ba7f8(c, ram); }
    { goto L_089f79f4; }
L_089f7998:
    { c->r[31] = 0x089f79a0u; func_088b7470(c, ram); }
    { c->r[31] = 0x089f79a8u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f79c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_089f79f4; }
L_089f79c0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089f79ccu; c->r[4] = c->r[4] + 0x00000af4u; func_08826ca0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f79f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_089f79f4; }
L_089f79ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000000cu, 0u);
L_089f79f4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f7894 */
}

/* func_089f914c  0x089f914c..0x089f9188  60 bytes, source=sweep */
void func_089f914c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f914cu);
    c->r[2] = c->r[4] + 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = alx_seh(c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[3] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_089f9170; }
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); c->r[2] = 0x80000000u; if (_c) goto L_089f917c; }
L_089f9170:
    { c->r[31] = 0x089f9178u; func_089fda84(c, ram); }
    c->r[2] = 0u + 0u;
L_089f917c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f914c */
}

/* func_089f9f6c  0x089f9f6c..0x089f9f94  40 bytes, source=sweep */
void func_089f9f6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9f6cu);
    c->r[2] = 0u + 0x0000004cu;
    alx_mult(c, c->r[6], c->r[2]);
    c->r[2] = c->lo;
    { int _c = (c->r[5] == 0u); c->r[2] = c->r[4] + c->r[2]; if (_c) goto L_089f9f8c; }
    c->r[2] = c->lo;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000980u;
L_089f9f8c:
    { return; }
    return; /* fell out of func_089f9f6c */
}

/* func_089fa640  0x089fa640..0x089fa684  68 bytes, source=sweep */
void func_089fa640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa640u);
    c->r[4] = c->r[4] & 0xffffu;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80000000u;
    c->r[2] = (c->r[4] < 0x00000040u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x001fu; if (_c) goto L_089fa674; }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[5] == 0u); c->r[3] = c->r[3] | 0x0023u; if (_c) goto L_089fa674; }
    { c->r[31] = 0x089fa670u; func_089fac74(c, ram); }
    c->r[3] = 0u + 0u;
L_089fa674:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa640 */
}

/* func_089fb0b0  0x089fb0b0..0x089fb10c  92 bytes, source=fde */
void func_089fb0b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb0b0u);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = 0x08b90000u;
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[3] = c->r[3] + 0x00006594u;
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] << 5;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[2] + c->r[3];
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fb0e0u; c->f[20] = c->f[12]; func_089fb3b8(c, ram); }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0007u; if (_c) goto L_089fb0f4; }
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[20]);
    c->r[3] = 0u + 0u;
L_089fb0f4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fb0b0 */
}

/* func_089fbf1c  0x089fbf1c..0x089fbf40  36 bytes, source=sweep */
void func_089fbf1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbf1cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    { c->r[31] = 0x089fbf34u; c->r[4] = mem_r32(ram, c->r[2] + 0x00007eacu); func_089fbb30(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fbf1c */
}

/* func_089fcce4  0x089fcce4..0x089fcd8c  168 bytes, source=sweep */
void func_089fcce4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fcce4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[4] + 0u;
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    c->r[5] = c->r[19] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[17] = alx_seh(c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000024u, c->f[21]);
    c->f[21] = c->f[12];
    { c->r[31] = 0x089fcd24u; mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]); func_089fa398(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[4] = mem_r16(ram, c->r[16] + 0x0000002au);
    mem_wf32(ram, c->r[16] + 0x00000034u, c->f[21]);
    c->f[0] = u2f(c->r[2]);
    mem_w16(ram, c->r[16] + 0x00000038u, c->r[17]);
    c->r[4] = c->r[18] + c->r[4];
    c->f[20] = (f32)(s32)f2u(c->f[0]);
    mem_w16(ram, c->r[16] + 0x0000003au, c->r[18]);
    { c->r[31] = 0x089fcd50u; c->r[4] = alx_seh(c->r[4]); func_089fcc88(c, ram); }
    c->f[20] = c->f[20] * c->f[0];
    c->r[4] = c->r[19] + 0u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[20]));
    c->r[2] = f2u(c->f[0]);
    { c->r[31] = 0x089fcd68u; mem_w16(ram, c->r[16] + 0x00000048u, c->r[2]); func_089fa460(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000024u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089fcce4 */
}

/* func_089fe098  0x089fe098..0x089fe0c0  40 bytes, source=fde */
void func_089fe098(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe098u);
    c->r[2] = 0x08ba0000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff92dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fe0b4u; func_089fdc24(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fe098 */
}

/* func_089fef60  0x089fef60..0x089fef7c  28 bytes, source=residue */
void func_089fef60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fef60u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fef70u; func_089fe2b0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fef60 */
}

/* func_08a016dc  0x08a016dc..0x08a01700  36 bytes, source=residue */
void func_08a016dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a016dcu);
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = 0x08ba0000u;
    c->r[3] = c->r[3] + 0x00000184u;
    c->r[2] = 0u + 0u;
    c->r[4] = c->lo;
    c->r[4] = c->r[4] + c->r[3];
    { mem_w32(ram, c->r[4] + 0x0000003cu, c->r[5]); return; }
    return; /* fell out of func_08a016dc */
}

/* func_08a02b58  0x08a02b58..0x08a02b84  44 bytes, source=sweep */
void func_08a02b58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02b58u);
    c->r[4] = c->r[4] + 0x000000fcu;
    c->r[3] = 0u + 0x0000003fu;
L_08a02b60:
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] + 0xffffffffu; if (_c) goto L_08a02b7c; }
    { int _c = ((s32)c->r[3] >= 0); c->r[4] = c->r[4] + 0xfffffffcu; if (_c) goto L_08a02b60; }
L_08a02b74:
    { c->r[2] = 0u + 0u; return; }
L_08a02b7c:
    { mem_w32(ram, c->r[4] + 0x00000000u, 0u); goto L_08a02b74; }
    return; /* fell out of func_08a02b58 */
}

/* func_08a036c8  0x08a036c8..0x08a03718  80 bytes, source=sweep */
void func_08a036c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a036c8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0x00ffu;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a036dcu; mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); func_089fb34c(c, ram); }
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x08a036ecu; c->r[4] = c->r[4] + 0xffffffffu; func_08a06010(c, ram); }
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08a036f8u; c->r[5] = 0u + 0x00000001u; func_08a05f78(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000008u);
    { c->r[31] = 0x08a03704u; c->r[4] = mem_r32(ram, c->r[16] + 0x00000004u); func_08a05fc4(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a036c8 */
}

/* func_08a04818  0x08a04818..0x08a0485c  68 bytes, source=residue */
void func_08a04818(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04818u);
    c->r[2] = 0x80440000u;
    c->r[3] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[5] = c->r[2] | 0x0005u; if (_c) goto L_08a04854; }
    c->r[3] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[3]);
    c->r[8] = 0x08ba0000u;
    c->r[4] = c->r[8] + 0xffffaa78u;
    c->r[7] = c->lo;
    c->r[3] = c->r[7] + c->r[4];
    c->r[6] = mem_r32(ram, c->r[3] + 0x0000001cu);
    { int _c = (c->r[6] != 0u); c->r[5] = 0u + 0u; if (_c) goto L_08a04854; }
    c->r[9] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[9]);
L_08a04854:
    { c->r[2] = c->r[5] + 0u; return; }
    return; /* fell out of func_08a04818 */
}

/* func_08a0604c  0x08a0604c..0x08a06098  76 bytes, source=residue */
void func_08a0604c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0604cu);
    c->r[6] = 0x08ba0000u;
    c->r[8] = mem_r32(ram, c->r[6] + 0xffffaf80u);
    c->r[7] = c->r[4] + 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    c->r[2] = 0x08ba0000u;
    c->r[6] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[5] = c->r[7] + 0u;
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[3] | 0x0100u; if (_c) goto L_08a06088; }
    { c->r[31] = 0x08a06084u; hle_dispatch_stub(c, ram, 0x08a24c7cu); /* __sceSasRevParam */ }
    c->r[7] = c->r[2] + 0u;
L_08a06088:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[7] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0604c */
}

/* func_08a06f90  0x08a06f90..0x08a07180  496 bytes, source=sweep */
void func_08a06f90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06f90u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a06fe8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000031u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a06fe8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000038u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a06fe8; }
    { goto L_08a06ff4; }
L_08a06fe8:
    c->r[2] = 0u + 0xfffffffau;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a07168; }
L_08a06ff4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0700c; }
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a07168; }
L_08a0700c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0703c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08a10000u;
    c->r[3] = c->r[3] + 0xffffb188u;
    mem_w32(ram, c->r[2] + 0x00000020u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
L_08a0703c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0705c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a10000u;
    c->r[2] = c->r[2] + 0xffffb1d0u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
L_08a0705c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000028u);
    c->r[5] = 0u + 0x00000001u;
    { u32 _t = c->r[2]; c->r[31] = 0x08a07078u; c->r[6] = 0u + 0x00001ba8u; recomp_call_indirect(c, ram, 0x08a07070u, _t); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07094; }
    c->r[2] = 0u + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a07168; }
L_08a07094:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x0000001cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08a070c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u - c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08a070f4; }
L_08a070c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a070f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08a070f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0711c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0711c; }
    { goto L_08a07148; }
L_08a0711c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000028u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a07134u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); recomp_call_indirect(c, ram, 0x08a0712cu, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a07168; }
L_08a07148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    { c->r[31] = 0x08a07164u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a06ebc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08a07168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a06f90 */
}

/* func_08a0d70c  0x08a0d70c..0x08a0d79c  144 bytes, source=fde */
void func_08a0d70c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0d70cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[6]);
    c->r[2] = c->r[2] - c->r[7];
    c->r[16] = c->r[2] + 0xffffffffu;
    c->r[4] = c->r[16] + 0u;
L_08a0d73c:
    { c->r[31] = 0x08a0d744u; c->r[5] = c->r[29] + 0u; func_08a0d34c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[4] = c->r[18] + 0u;
    c->r[3] = 0u + 0u;
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a0d780; }
    { c->r[31] = 0x08a0d764u; func_08a0d61c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x08a0d774u; c->r[6] = c->r[29] + 0x00000004u; func_08a0d674(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a0d73c; }
    c->r[3] = 0u + 0x00000001u;
L_08a0d780:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0d70c */
}

/* func_08a0e4d4  0x08a0e4d4..0x08a0e4fc  40 bytes, source=residue */
void func_08a0e4d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e4d4u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000568u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e4f0u; func_08a0e308(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e4d4 */
}

/* func_08a0ebb0  0x08a0ebb0..0x08a0f07c  1228 bytes, source=fde */
void func_08a0ebb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0ebb0u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[23]);
    c->r[23] = c->r[10] + 0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[22]);
    c->r[22] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[17]);
    c->r[17] = c->r[11] + 0u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[2] = mem_r32(ram, c->r[11] + 0x00000010u);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[4]);
    c->r[2] = c->r[2] & 0x0010u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[7]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x0000002cu, c->r[9]); if (_c) goto L_08a0ec10; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    mem_w32(ram, c->r[11] + 0x00000010u, c->r[2]);
L_08a0ec10:
    { int _c = (c->r[30] == c->r[23]); c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u); if (_c) goto L_08a0f058; }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u);
L_08a0ec20:
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u); if (_c) goto L_08a0eca4; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000024u);
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[30]);
    { int _c = ((s32)c->r[22] < 0); mem_w32(ram, c->r[17] + 0x00000004u, c->r[5]); if (_c) goto L_08a0ec8c; }
    c->r[2] = c->r[30] + c->r[22];
    c->r[2] = c->r[2] ^ c->r[23];
    c->r[3] = 0u + 0x00000006u;
    c->r[4] = 0u + 0x00000001u;
    if (c->r[2] != 0u) c->r[3] = c->r[4];
    mem_w32(ram, c->r[17] + 0x0000000cu, c->r[3]);
    c->r[4] = 0u + 0u;
L_08a0ec58:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
L_08a0ec5c:
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000070u; return; }
L_08a0ec8c:
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[22] != c->r[2]); c->r[4] = 0u + 0u; if (_c) goto L_08a0ec58; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[17] + 0x0000000cu, c->r[2]); goto L_08a0ec58; }
L_08a0eca4:
    mem_w32(ram, c->r[29] + 0x00000030u, 0u);
    c->r[20] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    c->r[20] = c->r[20] + 0xffffffffu;
    { int _c = (c->r[20] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u); if (_c) goto L_08a0ede0; }
    c->r[2] = c->r[20] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[21] = c->r[2] + 0x00000010u;
L_08a0ecc8:
    c->r[3] = mem_r32(ram, c->r[21] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[2] = c->r[3] & 0x0001u;
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    c->r[6] = c->r[5] | c->r[2];
    c->r[8] = (u32)((s32)c->r[3] >> 8);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    mem_w32(ram, c->r[29] + 0x00000008u, 0u);
    mem_w32(ram, c->r[29] + 0x0000000cu, 0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[4]); if (_c) goto L_08a0ed04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[8];
    c->r[8] = mem_r32(ram, c->r[2] + 0x00000000u);
L_08a0ed04:
    c->r[2] = alx_ext(c->r[3], 1u, 0u);
    { int _c = (c->r[2] != 0u); c->r[8] = c->r[30] + c->r[8]; if (_c) goto L_08a0ed20; }
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[22] == c->r[2]); c->r[2] = c->r[4] & 0x0003u; if (_c) goto L_08a0f048; }
    c->r[6] = alx_ins(c->r[6], 0u, 1u, 1u);
L_08a0ed20:
    c->r[4] = mem_r32(ram, c->r[21] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[9] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = c->r[22] + 0u;
    c->r[10] = c->r[23] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000001cu);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0ed44u; c->r[11] = c->r[29] + 0u; recomp_call_indirect(c, ram, 0x08a0ed3cu, _t); }
    c->r[16] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[4] = c->r[16] ^ 0x0006u;
    c->r[3] = c->r[16] ^ 0x0002u;
    c->r[4] = (c->r[4] < 0x00000001u) ? 1u : 0u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[5] = c->r[5] | c->r[2];
    c->r[4] = c->r[4] | c->r[3];
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[17] + 0x00000008u, c->r[5]); if (_c) goto L_08a0f02c; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000030u);
    { int _c = (c->r[3] != 0u); c->r[6] = mem_r32(ram, c->r[17] + 0x00000000u); if (_c) goto L_08a0f01c; }
    if (c->r[6] != 0u) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a0ede8; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[7]);
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[3]);
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]); if (_c) goto L_08a0edc0; }
    if (c->r[5] == 0u) { c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u); goto L_08a0edc4; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[7] + 0u; if (_c) goto L_08a0ec58; }
L_08a0edc0:
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u);
L_08a0edc4:
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); c->r[4] = mem_r32(ram, c->r[29] + 0x00000030u); if (_c) goto L_08a0ec58; }
    c->r[20] = c->r[20] + 0xffffffffu;
L_08a0edd4:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[20] != c->r[2]); c->r[21] = c->r[21] + 0xfffffff8u; if (_c) goto L_08a0ecc8; }
L_08a0ede0:
    { c->r[4] = mem_r32(ram, c->r[29] + 0x00000030u); goto L_08a0ec58; }
L_08a0ede8:
    if (c->r[6] == c->r[4]) { c->r[2] = mem_r32(ram, c->r[17] + 0x00000004u); goto L_08a0f00c; }
    c->r[2] = (0u < c->r[6]) ? 1u : 0u;
L_08a0edf4:
    c->r[3] = (0u < c->r[4]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u); goto L_08a0ee2c; }
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[7] & 0x0001u; if (_c) goto L_08a0ee14; }
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u); goto L_08a0ee2c; }
L_08a0ee14:
    { int _c = (c->r[4] == 0u); c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u); if (_c) goto L_08a0edc4; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[2] = c->r[5] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0edc4; }
L_08a0ee2c:
    c->r[19] = c->r[16] + 0u;
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[18] = mem_r32(ram, c->r[17] + 0x0000000cu); if (_c) goto L_08a0eefc; }
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0ee5c; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0eefc; }
L_08a0ee5c:
    { int _c = (c->r[19] != 0u); if (c->r[18] == 0u) c->r[18] = c->r[2]; if (_c) goto L_08a0ee68; }
    c->r[19] = 0u + 0x00000001u;
L_08a0ee68:
    c->r[2] = c->r[19] ^ c->r[18];
L_08a0ee6c:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[19] & c->r[18]; if (_c) goto L_08a0eec8; }
    c->r[2] = ((s32)c->r[19] < (s32)0x00000004u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = alx_ext(c->r[18], 1u, 0u); if (_c) goto L_08a0eea8; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000030u, 0u);
    c->r[18] = c->r[19] + 0u;
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]);
    c->r[2] = alx_ext(c->r[18], 1u, 0u);
L_08a0eea8:
    mem_w32(ram, c->r[17] + 0x0000000cu, c->r[18]);
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a0ec58; }
    c->r[2] = c->r[18] & 0x0001u;
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[17] + 0x00000008u); goto L_08a0edc4; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u); goto L_08a0ec5c; }
L_08a0eec8:
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0eee8; }
    mem_w32(ram, c->r[17] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[2]);
    { mem_w32(ram, c->r[17] + 0x00000000u, 0u); goto L_08a0edc0; }
L_08a0eee8:
    c->r[2] = 0u + 0x00000002u;
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[17] + 0x0000000cu, c->r[2]);
    { mem_w32(ram, c->r[17] + 0x00000000u, 0u); goto L_08a0ec58; }
L_08a0eefc:
    { int _c = ((s32)c->r[18] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000004u) ? 1u : 0u; if (_c) goto L_08a0ef90; }
L_08a0ef04:
    { int _c = ((s32)c->r[16] > 0); c->r[2] = c->r[19] ^ c->r[18]; if (_c) goto L_08a0ee6c; }
    c->r[2] = ((s32)c->r[18] < (s32)0x00000004u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[18] & 0x0001u; if (_c) goto L_08a0ef38; }
    if (c->r[2] == 0u) { c->r[19] = 0u + 0x00000001u; goto L_08a0ee68; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0002u;
    if (c->r[2] == 0u) { c->r[19] = 0u + 0x00000001u; goto L_08a0ee68; }
L_08a0ef38:
    { int _c = ((s32)c->r[22] < 0); c->r[6] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0ef5c; }
    c->r[2] = c->r[6] + c->r[22];
    c->r[2] = c->r[2] ^ c->r[23];
    c->r[4] = 0u + 0x00000006u;
    c->r[3] = 0u + 0x00000001u;
    if (c->r[2] != 0u) c->r[4] = c->r[3];
L_08a0ef54:
    { c->r[19] = c->r[4] + 0u; goto L_08a0ee68; }
L_08a0ef5c:
    c->r[5] = 0u + 0xfffffffeu;
    { int _c = (c->r[22] == c->r[5]); c->r[4] = 0u + 0x00000001u; if (_c) goto L_08a0ef54; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[5] = c->r[22] + 0u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0ef88u; c->r[8] = c->r[23] + 0u; recomp_call_indirect(c, ram, 0x08a0ef80u, _t); }
    { c->r[4] = c->r[2] + 0u; goto L_08a0ef54; }
L_08a0ef90:
    c->r[2] = c->r[2] ^ 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[16] & 0x0001u; if (_c) goto L_08a0efb8; }
    { int _c = (c->r[2] == 0u); c->r[18] = 0u + 0x00000001u; if (_c) goto L_08a0ef04; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0ef04; }
L_08a0efb8:
    { int _c = ((s32)c->r[22] < 0); c->r[2] = c->r[6] + c->r[22]; if (_c) goto L_08a0efd8; }
    c->r[2] = c->r[2] ^ c->r[23];
    c->r[4] = 0u + 0x00000006u;
    c->r[3] = 0u + 0x00000001u;
    if (c->r[2] != 0u) c->r[4] = c->r[3];
L_08a0efd0:
    { c->r[18] = c->r[4] + 0u; goto L_08a0ef04; }
L_08a0efd8:
    c->r[5] = 0u + 0xfffffffeu;
    { int _c = (c->r[22] == c->r[5]); c->r[4] = 0u + 0x00000001u; if (_c) goto L_08a0efd0; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[5] = c->r[22] + 0u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0f004u; c->r[8] = c->r[23] + 0u; recomp_call_indirect(c, ram, 0x08a0effcu, _t); }
    { c->r[4] = c->r[2] + 0u; goto L_08a0efd0; }
L_08a0f00c:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[17] + 0x00000004u, c->r[2]); goto L_08a0edc0; }
L_08a0f01c:
    { int _c = (c->r[6] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0ede8; }
    { c->r[2] = (0u < c->r[6]) ? 1u : 0u; goto L_08a0edf4; }
L_08a0f02c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[4] = c->r[7] + 0u;
    mem_w32(ram, c->r[17] + 0x0000000cu, c->r[16]);
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    { mem_w32(ram, c->r[17] + 0x00000004u, c->r[3]); goto L_08a0ec58; }
L_08a0f048:
    if (c->r[2] == 0u) { c->r[20] = c->r[20] + 0xffffffffu; goto L_08a0edd4; }
    { c->r[6] = alx_ins(c->r[6], 0u, 1u, 1u); goto L_08a0ed20; }
L_08a0f058:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    if (c->r[3] != c->r[2]) { c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u); goto L_08a0ec20; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[4] = 0u + 0u;
    { mem_w32(ram, c->r[17] + 0x00000008u, c->r[5]); goto L_08a0ec58; }
    return; /* fell out of func_08a0ebb0 */
}

/* func_08a12d6c  0x08a12d6c..0x08a13008  668 bytes, source=sweep */
void func_08a12d6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a12d6cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = f2u(c->f[12]);
    c->r[2] = 0x507f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[16] = alx_ins(c->r[16], 0u, 31u, 31u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->f[5] = c->f[12];
    c->r[17] = f2u(c->f[12]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]); if (_c) goto L_08a12df8; }
    c->r[2] = 0x7f800000u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a12dc4; }
    c->f[0] = c->f[12] + c->f[12];
L_08a12db0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a12dc4:
    { int _c = ((s32)c->r[17] <= 0); c->r[2] = 0x08a50000u; if (_c) goto L_08a12de0; }
    c->r[3] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00001014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00001018u);
    { c->f[0] = c->f[1] + c->f[0]; goto L_08a12db0; }
L_08a12de0:
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001014u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00001018u);
    c->f[0] = -c->f[0];
    { c->f[0] = c->f[0] - c->f[1]; goto L_08a12db0; }
L_08a12df8:
    c->r[2] = 0x3edf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0x30ff0000u; if (_c) goto L_08a12f50; }
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a12e48; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000101cu);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00001020u);
    c->f[0] = c->f[12] + c->f[0];
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    if ((c->fcr31 & FCR31_C) == 0u) { c->f[4] = c->f[5] * c->f[5]; goto L_08a12e4c; }
    { c->f[0] = c->f[12]; goto L_08a12db0; }
L_08a12e48:
    c->f[4] = c->f[5] * c->f[5];
L_08a12e4c:
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001030u);
    c->r[2] = 0x08a50000u;
    c->f[3] = c->f[4] * c->f[4];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00001048u);
    c->r[2] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001034u);
    c->f[0] = c->f[3] * c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[3] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000104cu);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[3] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001038u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[3] * c->f[1];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001050u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[3] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000103cu);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[3] * c->f[1];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001054u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[3] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001040u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[3] * c->f[1];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001058u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[3] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00001044u);
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[3] * c->f[1];
    { int _c = ((s32)c->r[3] < 0); c->f[0] = c->f[4] * c->f[0]; if (_c) goto L_08a12f40; }
    c->f[1] = c->f[0] + c->f[1];
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[3] << 2;
    c->r[2] = c->r[2] + 0x00000fd0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = c->f[5] * c->f[1];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000fc0u;
    c->f[1] = c->f[1] - c->f[0];
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[5];
    { int _c = ((s32)c->r[17] >= 0); c->f[0] = c->f[0] - c->f[1]; if (_c) goto L_08a12db0; }
    { c->f[0] = -c->f[0]; goto L_08a12db0; }
L_08a12f40:
    c->f[0] = c->f[0] + c->f[1];
    c->f[0] = c->f[5] * c->f[0];
    { c->f[0] = c->f[5] - c->f[0]; goto L_08a12db0; }
L_08a12f50:
    { c->r[31] = 0x08a12f58u; func_08a13008(c, ram); }
    c->r[2] = 0x3f970000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->f[5] = c->f[0]; if (_c) goto L_08a12fbc; }
    c->r[2] = 0x3f2f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a12fa4; }
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001020u);
    c->r[2] = 0x08a50000u;
    c->r[3] = 0u + 0u;
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001024u);
    c->f[0] = c->f[5] + c->f[0];
    { c->f[5] = c->f[1] / c->f[0]; goto L_08a12e48; }
L_08a12fa4:
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001020u);
    c->r[3] = 0u + 0x00000001u;
    c->f[1] = c->f[5] + c->f[0];
    c->f[0] = c->f[5] - c->f[0];
    { c->f[5] = c->f[0] / c->f[1]; goto L_08a12e48; }
L_08a12fbc:
    c->r[2] = 0x401b0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a12ff8; }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00001028u);
    c->r[2] = 0x08a50000u;
    c->r[3] = 0u + 0x00000002u;
    c->f[2] = c->f[0] * c->f[1];
    c->f[1] = c->f[0] - c->f[1];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001020u);
    c->f[2] = c->f[2] + c->f[0];
    { c->f[5] = c->f[1] / c->f[2]; goto L_08a12e48; }
L_08a12ff8:
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000102cu);
    c->r[3] = 0u + 0x00000003u;
    { c->f[5] = c->f[0] / c->f[5]; goto L_08a12e48; }
    return; /* fell out of func_08a12d6c */
}

/* func_08a14934  0x08a14934..0x08a1493c  8 bytes, source=sweep */
void func_08a14934(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14934u);
    { c->r[2] = mem_r32(ram, c->r[4] + 0x00000358u); return; }
    return; /* fell out of func_08a14934 */
}

/* func_08a16f6c  0x08a16f6c..0x08a16fa0  52 bytes, source=fde */
void func_08a16f6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16f6cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a16f84u; c->r[4] = 0u + 0x00000018u; func_08a19564(c, ram); }
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a16f90u; c->r[4] = c->r[16] + 0u; func_08a16f4c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a16f6c */
}

/* func_08a18f70  0x08a18f70..0x08a18f8c  28 bytes, source=residue */
void func_08a18f70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18f70u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a18f80u; hle_dispatch_stub(c, ram, 0x08a246e4u); /* sceIoRename */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a18f70 */
}

/* func_08a197ec  0x08a197ec..0x08a19d34  1352 bytes, source=sweep */
void func_08a197ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a197ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = c->r[5] + 0x00000013u;
    c->r[3] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 3u);
    c->r[17] = 0u + 0x00000010u;
    if (c->r[3] == 0u) c->r[17] = c->r[2];
    c->r[5] = (c->r[17] < c->r[5]) ? 1u : 0u;
    c->r[2] = c->r[17] >> 31;
    c->r[2] = c->r[2] | c->r[5];
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[3] = 0u + 0u;
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a19894; }
    { c->r[31] = 0x08a19838u; func_08a19f7c(c, ram); }
    c->r[2] = (c->r[17] < 0x000001f8u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[17] >> 9; if (_c) goto L_08a19c8c; }
    c->r[19] = 0x08a60000u;
    c->r[2] = c->r[19] + 0x00004de0u;
    c->r[4] = c->r[17] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[4] + 0x0000000cu);
    { int _c = (c->r[16] == c->r[4]); c->r[9] = c->r[17] >> 3; if (_c) goto L_08a198b4; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[10] = mem_r32(ram, c->r[16] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[3] = alx_ins(c->r[3], 0u, 0u, 1u);
    c->r[3] = c->r[16] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[4] = c->r[18] + 0u;
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[8]);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08a19884:
    mem_w32(ram, c->r[8] + 0x0000000cu, c->r[10]);
L_08a19888:
    { c->r[31] = 0x08a19890u; func_08a19fb8(c, ram); }
    c->r[3] = c->r[16] + 0x00000008u;
L_08a19894:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a198b4:
    c->r[9] = c->r[9] + 0x00000002u;
L_08a198b8:
    c->r[11] = 0x08a60000u;
    c->r[6] = c->r[11] + 0x00004de8u;
    c->r[16] = mem_r32(ram, c->r[6] + 0x00000008u);
    { int _c = (c->r[16] == c->r[6]); c->r[2] = (u32)((s32)c->r[9] >> 31); if (_c) goto L_08a19954; }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[5] = alx_ins(c->r[5], 0u, 0u, 1u);
    c->r[7] = c->r[5] - c->r[17];
    c->r[2] = ((s32)c->r[7] < (s32)0x00000010u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[9] = c->r[16] + c->r[17]; goto L_08a19c5c; }
    mem_w32(ram, c->r[6] + 0x0000000cu, c->r[6]);
    { int _c = ((s32)c->r[7] < 0); mem_w32(ram, c->r[6] + 0x00000008u, c->r[6]); if (_c) goto L_08a19908; }
    c->r[3] = c->r[16] + c->r[5];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[4] = c->r[18] + 0u;
    c->r[2] = c->r[2] | 0x0001u;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08a19888; }
L_08a19908:
    c->r[2] = (c->r[5] < 0x00000200u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[6] = c->r[5] >> 9; goto L_08a19b98; }
    c->r[4] = c->r[5] >> 3;
    c->r[2] = c->r[4] << 3;
    c->r[5] = c->r[6] + 0xfffffff8u;
    c->r[10] = c->r[2] + c->r[5];
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[4] = c->r[4] >> 2;
    c->r[2] = 0u + 0x00000001u;
    c->r[8] = mem_r32(ram, c->r[10] + 0x00000008u);
    c->r[2] = c->r[2] << (c->r[4] & 31u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[3]);
L_08a19940:
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[10]);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[8]);
    mem_w32(ram, c->r[8] + 0x0000000cu, c->r[16]);
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[16]);
    c->r[2] = (u32)((s32)c->r[9] >> 31);
L_08a19954:
    c->r[19] = 0x08a60000u;
    c->r[3] = c->r[19] + 0x00004de0u;
    c->r[2] = c->r[2] >> 30;
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[9] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    c->r[3] = 0u + 0x00000001u;
    c->r[6] = c->r[3] << (c->r[2] & 31u);
    c->r[4] = (c->r[5] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[4] != 0u); c->r[16] = c->r[19] + 0x00004de0u; if (_c) goto L_08a19a98; }
    c->r[2] = c->r[6] & c->r[5];
    { int _c = (c->r[2] != 0u); c->r[2] = 0x08a60000u; if (_c) goto L_08a199bc; }
    c->r[2] = c->r[9] + 0u;
    c->r[6] = c->r[6] << 1;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[3] = c->r[6] & c->r[5];
    { int _c = (c->r[3] != 0u); c->r[9] = c->r[2] + 0x00000004u; if (_c) goto L_08a199b8; }
    c->r[4] = c->r[5] + 0u;
L_08a199a8:
    c->r[6] = c->r[6] << 1;
    c->r[2] = c->r[6] & c->r[4];
    { int _c = (c->r[2] == 0u); c->r[9] = c->r[9] + 0x00000004u; if (_c) goto L_08a199a8; }
L_08a199b8:
    c->r[2] = 0x08a60000u;
L_08a199bc:
    c->r[10] = c->r[2] + 0x00004de0u;
    c->r[12] = c->r[10] + 0u;
    c->r[2] = c->r[9] << 3;
L_08a199c8:
    c->r[4] = c->r[2] + c->r[10];
    c->r[8] = c->r[9] + 0u;
    c->r[3] = c->r[4] + 0u;
    c->r[16] = mem_r32(ram, c->r[3] + 0x0000000cu);
L_08a199d8:
    { int _c = (c->r[16] == c->r[3]); c->r[2] = ((s32)c->r[9] < (s32)0x0000003fu) ? 1u : 0u; if (_c) goto L_08a19a10; }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000004u);
L_08a199e4:
    c->r[5] = alx_ins(c->r[5], 0u, 0u, 1u);
    c->r[7] = c->r[5] - c->r[17];
    c->r[2] = ((s32)c->r[7] < (s32)0x00000010u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[10] = mem_r32(ram, c->r[16] + 0x0000000cu); goto L_08a19b54; }
    if ((s32)c->r[7] >= 0) { c->r[3] = c->r[16] + c->r[5]; goto L_08a19b34; }
    c->r[16] = mem_r32(ram, c->r[16] + 0x0000000cu);
    if (c->r[16] != c->r[3]) { c->r[5] = mem_r32(ram, c->r[16] + 0x00000004u); goto L_08a199e4; }
    c->r[2] = ((s32)c->r[9] < (s32)0x0000003fu) ? 1u : 0u;
L_08a19a10:
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] + 0x00000008u; if (_c) goto L_08a19a20; }
    c->r[3] = c->r[3] + 0x00000008u;
    c->r[9] = c->r[9] + 0x00000001u;
L_08a19a20:
    c->r[9] = c->r[9] + 0x00000001u;
    c->r[2] = c->r[9] & 0x0003u;
    if (c->r[2] != 0u) { c->r[16] = mem_r32(ram, c->r[3] + 0x0000000cu); goto L_08a199d8; }
    c->r[2] = c->r[8] & 0x0003u;
L_08a19a34:
    c->r[4] = c->r[4] + 0xfffffff8u;
    { int _c = (c->r[2] == 0u); c->r[8] = c->r[8] + 0xffffffffu; if (_c) goto L_08a19b20; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    { int _c = (c->r[2] == c->r[4]); c->r[2] = c->r[8] & 0x0003u; if (_c) goto L_08a19a34; }
L_08a19a4c:
    c->r[19] = 0x08a60000u;
    c->r[2] = c->r[19] + 0x00004de0u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[6] = c->r[6] << 1;
    c->r[2] = (c->r[3] < c->r[6]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[16] = c->r[19] + 0x00004de0u; goto L_08a19a98; }
    { int _c = (c->r[6] == 0u); c->r[2] = c->r[6] & c->r[3]; if (_c) goto L_08a19a94; }
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[9] << 3; if (_c) goto L_08a199c8; }
    c->r[3] = mem_r32(ram, c->r[12] + 0x00000004u);
L_08a19a7c:
    c->r[6] = c->r[6] << 1;
    c->r[2] = c->r[6] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[9] = c->r[9] + 0x00000004u; if (_c) goto L_08a19a7c; }
    { c->r[2] = c->r[9] << 3; goto L_08a199c8; }
L_08a19a94:
    c->r[16] = c->r[19] + 0x00004de0u;
L_08a19a98:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = alx_ins(c->r[3], 0u, 0u, 1u);
    c->r[7] = c->r[3] - c->r[17];
    c->r[2] = ((s32)c->r[7] < (s32)0x00000010u) ? 1u : 0u;
    c->r[3] = (c->r[3] < c->r[17]) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[19] + 0x00004de0u; if (_c) goto L_08a19aec; }
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a19ac8u; c->r[5] = c->r[17] + 0u; func_08a195c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = alx_ins(c->r[3], 0u, 0u, 1u);
    c->r[7] = c->r[3] - c->r[17];
    c->r[2] = ((s32)c->r[7] < (s32)0x00000010u) ? 1u : 0u;
    c->r[3] = (c->r[3] < c->r[17]) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    { int _c = (c->r[3] != 0u); c->r[6] = c->r[19] + 0x00004de0u; if (_c) goto L_08a19b10; }
L_08a19aec:
    c->r[16] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = c->r[7] | 0x0001u;
    c->r[2] = c->r[17] | 0x0001u;
    c->r[3] = c->r[16] + c->r[17];
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[4] = c->r[18] + 0u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[5]);
    { mem_w32(ram, c->r[6] + 0x00000008u, c->r[3]); goto L_08a19888; }
L_08a19b10:
    { c->r[31] = 0x08a19b18u; c->r[4] = c->r[18] + 0u; func_08a19fb8(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a19894; }
L_08a19b20:
    c->r[2] = mem_r32(ram, c->r[10] + 0x00000004u);
    c->r[3] = ~(0u | c->r[6]);
    c->r[2] = c->r[2] & c->r[3];
    { mem_w32(ram, c->r[10] + 0x00000004u, c->r[2]); goto L_08a19a4c; }
L_08a19b34:
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[10] = mem_r32(ram, c->r[16] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = c->r[18] + 0u;
    { mem_w32(ram, c->r[10] + 0x00000008u, c->r[8]); goto L_08a19884; }
L_08a19b54:
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[9] = c->r[16] + c->r[17];
    c->r[2] = c->r[11] + 0x00004de8u;
    c->r[3] = c->r[9] + c->r[7];
    c->r[5] = c->r[17] | 0x0001u;
    c->r[6] = c->r[7] | 0x0001u;
    c->r[4] = c->r[18] + 0u;
    mem_w32(ram, c->r[10] + 0x00000008u, c->r[8]);
    mem_w32(ram, c->r[8] + 0x0000000cu, c->r[10]);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[2] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[2] + 0x0000000cu, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[7]);
    mem_w32(ram, c->r[9] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[9] + 0x00000008u, c->r[2]);
    { mem_w32(ram, c->r[9] + 0x0000000cu, c->r[2]); goto L_08a19888; }
L_08a19b98:
    { int _c = (c->r[6] == 0u); c->r[4] = c->r[5] >> 3; if (_c) goto L_08a19bf0; }
    c->r[3] = c->r[5] >> 6;
    c->r[2] = (c->r[6] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[3] + 0x00000038u; if (_c) goto L_08a19bf0; }
    c->r[2] = (c->r[6] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[6] + 0x0000005bu; if (_c) goto L_08a19bf0; }
    c->r[3] = c->r[5] >> 12;
    c->r[2] = (c->r[6] < 0x00000055u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[3] + 0x0000006eu; if (_c) goto L_08a19bf0; }
    c->r[2] = c->r[5] >> 15;
    c->r[3] = (c->r[6] < 0x00000155u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[2] + 0x00000077u; if (_c) goto L_08a19bf0; }
    c->r[2] = c->r[5] >> 18;
    c->r[3] = (c->r[6] < 0x00000555u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[2] + 0x0000007cu; if (_c) goto L_08a19bf0; }
    c->r[4] = 0u + 0x0000007eu;
L_08a19bf0:
    c->r[6] = c->r[19] + 0x00004de0u;
    c->r[2] = c->r[4] << 3;
    c->r[10] = c->r[2] + c->r[6];
    c->r[8] = mem_r32(ram, c->r[10] + 0x00000008u);
    if (c->r[8] == c->r[10]) { c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u); goto L_08a19c44; }
    c->r[2] = mem_r32(ram, c->r[8] + 0x00000004u);
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[2] = (c->r[5] < c->r[2]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[10] = mem_r32(ram, c->r[8] + 0x0000000cu); goto L_08a19940; }
    c->r[8] = mem_r32(ram, c->r[8] + 0x00000008u);
L_08a19c20:
    if (c->r[8] == c->r[10]) { c->r[10] = mem_r32(ram, c->r[8] + 0x0000000cu); goto L_08a19940; }
    c->r[2] = mem_r32(ram, c->r[8] + 0x00000004u);
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 1u);
    c->r[2] = (c->r[5] < c->r[2]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[8] = mem_r32(ram, c->r[8] + 0x00000008u); goto L_08a19c20; }
    { c->r[10] = mem_r32(ram, c->r[8] + 0x0000000cu); goto L_08a19940; }
L_08a19c44:
    c->r[4] = c->r[4] >> 2;
    c->r[3] = 0u + 0x00000001u;
    c->r[3] = c->r[3] << (c->r[4] & 31u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[6] + 0x00000004u, c->r[2]); goto L_08a19940; }
L_08a19c5c:
    c->r[2] = c->r[9] + c->r[7];
    c->r[3] = c->r[17] | 0x0001u;
    c->r[5] = c->r[7] | 0x0001u;
    c->r[4] = c->r[18] + 0u;
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[3]);
    mem_w32(ram, c->r[6] + 0x0000000cu, c->r[9]);
    mem_w32(ram, c->r[6] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[7]);
    mem_w32(ram, c->r[9] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[9] + 0x00000008u, c->r[6]);
    { mem_w32(ram, c->r[9] + 0x0000000cu, c->r[6]); goto L_08a19888; }
L_08a19c8c:
    { int _c = (c->r[4] == 0u); c->r[9] = c->r[17] >> 3; if (_c) goto L_08a19ce4; }
    c->r[3] = c->r[17] >> 6;
    c->r[2] = (c->r[4] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[9] = c->r[3] + 0x00000038u; if (_c) goto L_08a19ce4; }
    c->r[2] = (c->r[4] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[9] = c->r[4] + 0x0000005bu; if (_c) goto L_08a19ce4; }
    c->r[3] = c->r[17] >> 12;
    c->r[2] = (c->r[4] < 0x00000055u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[9] = c->r[3] + 0x0000006eu; if (_c) goto L_08a19ce4; }
    c->r[3] = c->r[17] >> 15;
    c->r[2] = (c->r[4] < 0x00000155u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[9] = c->r[3] + 0x00000077u; if (_c) goto L_08a19ce4; }
    c->r[2] = c->r[17] >> 18;
    c->r[3] = (c->r[4] < 0x00000555u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[9] = c->r[2] + 0x0000007cu; if (_c) goto L_08a19ce4; }
    c->r[9] = 0u + 0x0000007eu;
L_08a19ce4:
    c->r[19] = 0x08a60000u;
    c->r[3] = c->r[9] << 3;
    c->r[2] = c->r[19] + 0x00004de0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[3] + 0x0000000cu);
    if (c->r[16] == c->r[3]) { c->r[9] = c->r[9] + 0x00000001u; goto L_08a198b8; }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000004u);
L_08a19d04:
    c->r[5] = alx_ins(c->r[5], 0u, 0u, 1u);
    c->r[7] = c->r[5] - c->r[17];
    c->r[2] = ((s32)c->r[7] < (s32)0x00000010u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[9] = c->r[9] + 0xffffffffu; goto L_08a19d2c; }
    if ((s32)c->r[7] >= 0) { c->r[3] = c->r[16] + c->r[5]; goto L_08a19b34; }
    c->r[16] = mem_r32(ram, c->r[16] + 0x0000000cu);
    if (c->r[16] != c->r[3]) { c->r[5] = mem_r32(ram, c->r[16] + 0x00000004u); goto L_08a19d04; }
L_08a19d2c:
    { c->r[9] = c->r[9] + 0x00000001u; goto L_08a198b8; }
    return; /* fell out of func_08a197ec */
}

/* func_08a1ae50  0x08a1ae50..0x08a1aefc  172 bytes, source=sweep */
void func_08a1ae50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1ae50u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = c->r[4] & 0x0003u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]); if (_c) goto L_08a1aec4; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0xfefe0000u;
    c->r[3] = c->r[3] | 0xfeffu;
    c->r[3] = c->r[2] + c->r[3];
    c->r[4] = 0x80800000u;
    c->r[2] = ~(0u | c->r[2]);
    c->r[4] = c->r[4] | 0x8080u;
    c->r[3] = c->r[3] & c->r[2];
    c->r[3] = c->r[3] & c->r[4];
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1aec4; }
    c->r[7] = 0xfefe0000u;
    c->r[6] = 0x80800000u;
    c->r[7] = c->r[7] | 0xfeffu;
    c->r[6] = c->r[6] | 0x8080u;
    c->r[4] = c->r[4] + 0x00000004u;
L_08a1aea8:
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = c->r[2] + c->r[7];
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] & c->r[6];
    if (c->r[2] == 0u) { c->r[4] = c->r[4] + 0x00000004u; goto L_08a1aea8; }
L_08a1aec4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1aee0; }
    c->r[4] = c->r[4] + 0x00000001u;
L_08a1aed4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    if (c->r[2] != 0u) { c->r[4] = c->r[4] + 0x00000001u; goto L_08a1aed4; }
L_08a1aee0:
    { c->r[31] = 0x08a1aee8u; func_08a1af70(c, ram); }
    c->r[2] = c->r[16] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1ae50 */
}

/* func_08a1fed0  0x08a1fed0..0x08a2131c  5196 bytes, source=sweep */
void func_08a1fed0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1fed0u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[21]);
    c->r[21] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[20]);
    c->r[20] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[16] = c->r[11] + 0u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000008cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[17]);
    c->r[12] = mem_r32(ram, c->r[4] + 0x00000040u);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[10]);
    { int _c = (c->r[12] != 0u); mem_w32(ram, c->r[29] + 0x00000050u, 0u); if (_c) goto L_08a212f4; }
L_08a1ff24:
    { int _c = ((s32)c->r[21] < 0); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a212e8; }
    mem_w32(ram, c->r[16] + 0x00000000u, 0u);
L_08a1ff30:
    c->r[3] = 0x7ff00000u;
    c->r[2] = c->r[21] & c->r[3];
    { int _c = (c->r[2] == c->r[3]); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a21288; }
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1ff50u; c->r[5] = c->r[21] + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a1ffb0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x00001c80u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]); if (_c) goto L_08a1ff7c; }
    c->r[2] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08a1ff7c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a1ff80:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000008cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000080u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000007cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
L_08a1ffb0:
    c->r[4] = c->r[30] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    c->r[8] = c->r[29] + 0u;
    { c->r[31] = 0x08a1ffc8u; c->r[9] = c->r[29] + 0x00000004u; func_08a23228(c, ram); }
    c->r[19] = alx_ext(c->r[21], 20u, 10u);
    { int _c = (c->r[19] == 0u); mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]); if (_c) goto L_08a211fc; }
    c->r[2] = c->r[20] + 0u;
    c->r[3] = c->r[21] + 0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[3]);
    c->r[2] = 0x3ff00000u;
    c->r[19] = c->r[19] + 0xfffffc01u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000004u);
    mem_w32(ram, c->r[29] + 0x00000048u, 0u);
    c->r[3] = alx_ext(c->r[3], 0u, 19u);
    c->r[4] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[4]);
L_08a20004:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001ca0u);
    c->r[7] = 0x08a50000u;
    { c->r[31] = 0x08a20020u; c->r[7] = mem_r32(ram, c->r[7] + 0x00001ca4u); func_08a13af4(c, ram); }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001ca8u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cacu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a2003cu; c->r[5] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001cb0u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cb4u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a20058u; c->r[4] = c->r[2] + 0u; func_08a13a8c(c, ram); }
    c->r[4] = c->r[19] + 0u;
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08a20068u; c->r[17] = c->r[3] + 0u; func_08a14434(c, ram); }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001cb8u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cbcu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a20084u; c->r[5] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a20098u; c->r[5] = c->r[17] + 0u; func_08a13a8c(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[23] = c->r[3] + 0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a200acu; c->r[5] = c->r[3] + 0u; func_08a24564(c, ram); }
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a200c4u; mem_w32(ram, c->r[29] + 0x00000028u, c->r[2]); func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08a211cc; }
L_08a200cc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[5] = 0u + 0x00000001u;
    c->r[2] = (c->r[4] < 0x00000017u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000030u, c->r[5]); if (_c) goto L_08a20118; }
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[4] << 3;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    { c->r[31] = 0x08a20108u; mem_w32(ram, c->r[29] + 0x00000030u, 0u); func_08a14214(c, ram); }
    c->r[2] = ((s32)0u < (s32)c->r[2]) ? 1u : 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[3] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[3]);
L_08a20118:
    c->r[2] = c->r[18] - c->r[19];
    c->r[16] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000014u, 0u);
    { int _c = ((s32)c->r[16] < 0); mem_w32(ram, c->r[29] + 0x00000038u, c->r[16]); if (_c) goto L_08a211bc; }
L_08a2012c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u);
    { int _c = ((s32)c->r[4] < 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000038u); if (_c) goto L_08a2119c; }
    mem_w32(ram, c->r[29] + 0x00000018u, 0u);
    c->r[5] = c->r[5] + c->r[4];
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[5]);
L_08a20148:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = 0u + 0x00000001u;
    c->r[2] = (c->r[5] < 0x0000000au) ? 1u : 0u;
    if (c->r[2] == 0u) c->r[5] = 0u;
    c->r[3] = ((s32)c->r[5] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x00000008u, c->r[5]); if (_c) goto L_08a20170; }
    c->r[5] = c->r[5] + 0xfffffffcu;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[5]);
    c->r[17] = 0u + 0u;
L_08a20170:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[5] = 0u + 0xffffffffu;
    c->r[4] = 0u + 0x00000001u;
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[5]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x0000001cu, c->r[5]); if (_c) goto L_08a201b4; }
    c->r[2] = c->r[3] << 2;
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x00001ce8u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a201acu: goto L_08a201ac; case 0x08a21154u: goto L_08a21154; case 0x08a21158u: goto L_08a21158; case 0x08a21174u: goto L_08a21174; case 0x08a21178u: goto L_08a21178; default: recomp_trap_unknown_indirect(c, ram, 0x08a201a4u, _t); return; } }
L_08a201ac:
    c->r[19] = 0u + 0x00000012u;
    mem_w32(ram, c->r[29] + 0x0000000cu, 0u);
L_08a201b4:
    c->r[2] = (c->r[19] < 0x00000018u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    { int _c = (c->r[2] != 0u); c->r[16] = 0u + 0x00000004u; if (_c) goto L_08a201e0; }
    c->r[3] = 0u + 0u;
L_08a201c8:
    c->r[16] = c->r[16] << 1;
    c->r[2] = c->r[16] + 0x00000014u;
    c->r[2] = (c->r[19] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a201c8; }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
L_08a201e0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x08a201ecu; c->r[4] = c->r[30] + 0u; func_08a225c0(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[2] = (c->r[3] < 0x0000000fu) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[17];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[4]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]); if (_c) goto L_08a204fc; }
    c->r[3] = c->r[21] + 0u;
    c->r[2] = c->r[20] + 0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[3]);
    c->r[19] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[3]);
    { int _c = ((s32)c->r[3] <= 0); mem_w32(ram, c->r[29] + 0x00000020u, c->r[4]); if (_c) goto L_08a210c4; }
    c->r[2] = c->r[3] & 0x000fu;
    c->r[16] = (u32)((s32)c->r[3] >> 4);
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[3] + 0x00001d58u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[16] & 0x0010u;
    c->r[22] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[23] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[4] == 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a20288; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001e40u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001e44u);
    { c->r[31] = 0x08a20278u; c->r[5] = c->r[21] + 0u; func_08a13ee0(c, ram); }
    c->r[16] = c->r[16] & 0x000fu;
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
    c->r[19] = 0u + 0x00000003u;
L_08a20288:
    { int _c = (c->r[16] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a202cc; }
    c->r[17] = c->r[2] + 0x00001e20u;
L_08a20294:
    c->r[2] = c->r[16] & 0x0001u;
    if (c->r[2] == 0u) { c->r[16] = (u32)((s32)c->r[16] >> 1); goto L_08a202c4; }
    c->r[6] = mem_r32(ram, c->r[17] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[4] = c->r[22] + 0u;
    { c->r[31] = 0x08a202b4u; c->r[5] = c->r[23] + 0u; func_08a13b68(c, ram); }
    c->r[19] = c->r[19] + 0x00000001u;
    c->r[22] = c->r[2] + 0u;
    c->r[23] = c->r[3] + 0u;
    c->r[16] = (u32)((s32)c->r[16] >> 1);
L_08a202c4:
    { int _c = (c->r[16] != 0u); c->r[17] = c->r[17] + 0x00000008u; if (_c) goto L_08a20294; }
L_08a202cc:
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[21] + 0u;
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a202e0u; c->r[7] = c->r[23] + 0u; func_08a13ee0(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
L_08a202e8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u);
L_08a202ec:
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a20364; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001cc0u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cc4u);
    { c->r[31] = 0x08a2030cu; c->r[5] = c->r[21] + 0u; func_08a14324(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    c->r[3] = ((s32)0u < (s32)c->r[4]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a20364; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000024u);
    { int _c = ((s32)c->r[5] <= 0); c->r[6] = c->r[20] + 0u; if (_c) goto L_08a204d4; }
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[5]);
    c->r[7] = c->r[21] + 0u;
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001cc8u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001cccu);
    { c->r[31] = 0x08a20350u; c->r[19] = c->r[19] + 0x00000001u; func_08a13b68(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = c->r[3] + 0u;
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[2]);
L_08a20364:
    { c->r[31] = 0x08a2036cu; c->r[4] = c->r[19] + 0u; func_08a14434(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a20380u; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001cd0u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cd4u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a2039cu; c->r[5] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[2] = 0xfcc00000u;
    c->r[23] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000001cu);
    { int _c = (c->r[3] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000034u); if (_c) goto L_08a20e3c; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001cd8u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cdcu);
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a203d4u; mem_w32(ram, c->r[29] + 0x00000054u, 0u); func_08a13af4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08a203f0u; c->r[17] = c->r[3] + 0u; func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); mem_w32(ram, c->r[29] + 0x00000058u, 0u); if (_c) goto L_08a2049c; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u);
L_08a203fc:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = 0u + 0x00000031u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[4]);
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
L_08a2041c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    { c->r[31] = 0x08a20428u; c->r[4] = c->r[30] + 0u; func_08a22678(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u);
    { int _c = (c->r[5] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000050u); if (_c) goto L_08a20454; }
    c->r[3] = c->r[2] ^ c->r[5];
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    if (c->r[2] != 0u) { c->r[5] = mem_r32(ram, c->r[29] + 0x00000050u); goto L_08a2048c; }
L_08a2044c:
    { c->r[31] = 0x08a20454u; c->r[4] = c->r[30] + 0u; func_08a22678(c, ram); }
L_08a20454:
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu);
L_08a20458:
    { c->r[31] = 0x08a20460u; c->r[4] = c->r[30] + 0u; func_08a22678(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000028u);
    mem_w8(ram, c->r[4] + 0x00000000u, 0u);
    c->r[2] = c->r[3] + 0x00000001u;
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000010u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000a0u);
    if (c->r[2] != 0u) { mem_w32(ram, c->r[2] + 0x00000000u, c->r[4]); goto L_08a20484; }
L_08a20484:
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000060u); goto L_08a1ff80; }
L_08a2048c:
    { c->r[31] = 0x08a20494u; c->r[4] = c->r[30] + 0u; func_08a22678(c, ram); }
    { c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u); goto L_08a2044c; }
L_08a2049c:
    c->r[4] = c->r[22] + 0u;
    { c->r[31] = 0x08a204a8u; c->r[5] = c->r[23] + 0u; func_08a14510(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a204bcu; c->r[7] = c->r[17] + 0u; func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08a204d4; }
L_08a204c4:
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu);
L_08a204c8:
    c->r[2] = ~(0u | c->r[2]);
    { mem_w32(ram, c->r[29] + 0x00000028u, c->r[2]); goto L_08a2041c; }
L_08a204d4:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[21] = c->r[3] + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000002cu);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[4]);
    c->r[20] = c->r[2] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[5]);
L_08a204fc:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    c->r[2] = ~(0u | c->r[4]);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a20738; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[3] = c->r[4] << 3;
    c->r[4] = c->r[5] >> 31;
    c->r[5] = ((s32)c->r[2] < (s32)0x00000001u) ? 1u : 0u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = c->r[4] & c->r[5];
    c->r[22] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[23] = mem_r32(ram, c->r[3] + 0x00000004u);
    { int _c = (c->r[4] == 0u); c->r[19] = 0u + 0x00000001u; if (_c) goto L_08a205a4; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x00000054u, 0u);
    { int _c = ((s32)c->r[3] < 0); mem_w32(ram, c->r[29] + 0x00000058u, 0u); if (_c) goto L_08a204c4; }
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001cd8u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001cdcu);
    c->r[4] = c->r[22] + 0u;
    { c->r[31] = 0x08a20580u; c->r[5] = c->r[23] + 0u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a20594u; c->r[7] = c->r[21] + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu); if (_c) goto L_08a204c8; }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u); goto L_08a203fc; }
L_08a205a4:
    c->r[6] = c->r[22] + 0u;
L_08a205a8:
    c->r[7] = c->r[23] + 0u;
    c->r[4] = c->r[20] + 0u;
    { c->r[31] = 0x08a205b8u; c->r[5] = c->r[21] + 0u; func_08a13ee0(c, ram); }
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a205c4u; c->r[4] = c->r[2] + 0u; func_08a24564(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a205d0u; c->r[18] = c->r[2] + 0u; func_08a14434(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a205e4u; c->r[7] = c->r[23] + 0u; func_08a13b68(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a205f8u; c->r[7] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[5] = c->r[3] + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[18] + 0x00000030u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000001cu);
    { int _c = (c->r[19] == c->r[2]); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]); if (_c) goto L_08a20668; }
    c->r[6] = c->r[4] + 0u;
    c->r[7] = c->r[5] + 0u;
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001cc8u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001cccu);
    { c->r[31] = 0x08a2063cu; c->r[19] = c->r[19] + 0x00000001u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[20] = c->r[2] + 0u;
    { c->r[31] = 0x08a20658u; c->r[21] = c->r[3] + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[22] + 0u; if (_c) goto L_08a205a8; }
    { c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu); goto L_08a20458; }
L_08a20668:
    c->r[6] = c->r[4] + 0u;
    { c->r[31] = 0x08a20674u; c->r[7] = c->r[5] + 0u; func_08a13a8c(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x08a20690u; c->r[17] = c->r[3] + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[4] = c->r[22] + 0u; if (_c) goto L_08a206bc; }
    c->r[5] = c->r[23] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a206a8u; c->r[7] = c->r[17] + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20458; }
    c->r[2] = c->r[18] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a20458; }
L_08a206bc:
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[2] = 0u + 0x00000039u;
    c->r[3] = c->r[3] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); c->r[3] = 0u + 0x00000039u; if (_c) goto L_08a206f4; }
L_08a206d8:
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a206dc:
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a20454; }
L_08a206f4:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a206f8:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000060u);
    { int _c = (c->r[4] == c->r[5]); c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a20720; }
    c->r[4] = c->r[4] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    if (c->r[2] == c->r[3]) { c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu); goto L_08a206f8; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu); goto L_08a206dc; }
L_08a20720:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[2] = 0u + 0x00000030u;
    c->r[5] = c->r[5] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[5]);
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a206d8; }
L_08a20738:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000050u, 0u);
    c->r[22] = ((s32)c->r[5] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000054u, 0u); if (_c) goto L_08a207c0; }
    { int _c = (c->r[22] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a20e20; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[16] = c->r[4] + 0xffffffffu;
    c->r[2] = ((s32)c->r[5] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[5] - c->r[16]; if (_c) goto L_08a2078c; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[16] = c->r[16] - c->r[5];
    c->r[5] = c->r[5] + c->r[16];
    c->r[2] = c->r[2] + c->r[16];
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[5]);
    c->r[17] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[2]);
L_08a2078c:
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    { int _c = ((s32)c->r[19] < 0); c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u); if (_c) goto L_08a20e14; }
L_08a20798:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + c->r[19];
    { c->r[31] = 0x08a207b0u; mem_w32(ram, c->r[29] + 0x00000038u, c->r[2]); func_08a22a14(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]);
    c->r[3] = c->r[3] + c->r[19];
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
L_08a207c0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[2] = ((s32)0u < (s32)c->r[18]) ? 1u : 0u;
    c->r[3] = ((s32)0u < (s32)c->r[4]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u); if (_c) goto L_08a207f8; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[19] = alx_min(c->r[4], c->r[18]);
    c->r[4] = c->r[4] - c->r[19];
    c->r[5] = c->r[5] - c->r[19];
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[4]);
    c->r[18] = c->r[18] - c->r[19];
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
L_08a207f8:
    { int _c = ((s32)c->r[2] <= 0); c->r[3] = mem_r32(ram, c->r[29] + 0x00000034u); if (_c) goto L_08a20854; }
    { int _c = (c->r[3] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20e0c; }
    { int _c = ((s32)c->r[17] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u); if (_c) goto L_08a20844; }
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a2081cu; c->r[6] = c->r[17] + 0u; func_08a22c60(c, ram); }
    c->r[6] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[4] = c->r[30] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a20830u; mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]); func_08a22a48(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu);
    { c->r[31] = 0x08a20840u; c->r[4] = c->r[30] + 0u; func_08a22678(c, ram); }
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[16]);
L_08a20844:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[16] = c->r[4] - c->r[17];
    { int _c = (c->r[16] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20df8; }
L_08a20854:
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08a20860u; c->r[4] = c->r[30] + 0u; func_08a22a14(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000003cu);
    { int _c = ((s32)c->r[5] <= 0); mem_w32(ram, c->r[29] + 0x00000058u, c->r[2]); if (_c) goto L_08a20880; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a2087cu; c->r[4] = c->r[30] + 0u; func_08a22c60(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[2]);
L_08a20880:
    { int _c = (c->r[22] == 0u); c->r[16] = 0u + 0u; if (_c) goto L_08a208c8; }
    { int _c = (c->r[20] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000038u); if (_c) goto L_08a208cc; }
    c->r[2] = c->r[21] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 20u, 31u);
    { int _c = (c->r[2] != 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x0000003cu); if (_c) goto L_08a208d0; }
    c->r[2] = alx_ext(c->r[21], 20u, 10u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a208d0; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[16] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
L_08a208c8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000038u);
L_08a208cc:
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000003cu);
L_08a208d0:
    c->r[2] = c->r[4] + 0x00000001u;
    { int _c = (c->r[5] != 0u); c->r[19] = c->r[2] & 0x001fu; if (_c) goto L_08a20dd0; }
L_08a208dc:
    { int _c = (c->r[19] == 0u); c->r[2] = ((s32)c->r[19] < (s32)0x00000005u) ? 1u : 0u; if (_c) goto L_08a208f0; }
    c->r[2] = 0u + 0x00000020u;
    c->r[19] = c->r[2] - c->r[19];
    c->r[2] = ((s32)c->r[19] < (s32)0x00000005u) ? 1u : 0u;
L_08a208f0:
    { int _c = (c->r[2] != 0u); c->r[2] = ((s32)c->r[19] < (s32)0x00000004u) ? 1u : 0u; if (_c) goto L_08a20da8; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[19] = c->r[19] + 0xfffffffcu;
    c->r[5] = c->r[5] + c->r[19];
    c->r[2] = c->r[2] + c->r[19];
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]);
L_08a20914:
    c->r[18] = c->r[18] + c->r[19];
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000014u);
L_08a2091c:
    { int _c = ((s32)c->r[5] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20934; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000014u);
    { c->r[31] = 0x08a20930u; c->r[4] = c->r[30] + 0u; func_08a22d78(c, ram); }
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]);
L_08a20934:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000038u);
    { int _c = ((s32)c->r[2] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u); if (_c) goto L_08a20950; }
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08a2094cu; c->r[4] = c->r[30] + 0u; func_08a22d78(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[2]);
L_08a20950:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000030u);
    { int _c = (c->r[3] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20d44; }
L_08a2095c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a20960:
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[3] = ((s32)c->r[4] < (s32)0x00000003u) ? 1u : 0u;
    c->r[3] = c->r[3] ^ 0x0001u;
    c->r[2] = ((s32)c->r[5] < (s32)0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000034u); if (_c) goto L_08a209b4; }
    { int _c = ((s32)c->r[5] < 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u); if (_c) goto L_08a204c4; }
    c->r[4] = c->r[30] + 0u;
    c->r[6] = 0u + 0x00000005u;
    { c->r[31] = 0x08a20994u; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a209a4u; mem_w32(ram, c->r[29] + 0x00000058u, c->r[2]); func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] > 0); c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u); if (_c) goto L_08a203fc; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu); goto L_08a204c8; }
L_08a209b4:
    { int _c = (c->r[2] == 0u); c->r[19] = 0u + 0x00000001u; if (_c) goto L_08a20cf4; }
    { int _c = ((s32)c->r[18] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u); if (_c) goto L_08a209d4; }
    c->r[6] = c->r[18] + 0u;
    { c->r[31] = 0x08a209d0u; c->r[4] = c->r[30] + 0u; func_08a22d78(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]);
L_08a209d4:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000054u);
    { int _c = (c->r[16] != 0u); mem_w32(ram, c->r[29] + 0x00000050u, c->r[3]); if (_c) goto L_08a20cac; }
L_08a209e0:
    c->r[21] = c->r[20] & 0x0001u;
    c->r[19] = 0u + 0x00000001u;
    c->r[22] = 0u + 0x00000039u;
L_08a209ec:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    { c->r[31] = 0x08a209fcu; c->r[18] = 0u + 0x00000001u; func_08a1fc88(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[31] = 0x08a20a0cu; c->r[20] = c->r[2] + 0x00000030u; func_08a22eb0(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a20a20u; c->r[16] = c->r[2] + 0u; func_08a22f18(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20c9c; }
L_08a20a30:
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x08a20a3cu; c->r[4] = c->r[30] + 0u; func_08a22678(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[2] = c->r[18] | c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a20a54; }
    { int _c = (c->r[21] == 0u); if (_c) goto L_08a20c84; }
L_08a20a54:
    { int _c = ((s32)c->r[16] < 0); c->r[5] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a20c18; }
    c->r[2] = c->r[16] | c->r[5];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a20a70; }
    { int _c = (c->r[21] == 0u); if (_c) goto L_08a20c18; }
L_08a20a70:
    { int _c = ((s32)c->r[18] > 0); c->r[5] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20bf0; }
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[20]);
    c->r[5] = c->r[5] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000001cu);
    { int _c = (c->r[19] == c->r[2]); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[5]); if (_c) goto L_08a20b08; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[4] = c->r[30] + 0u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a20aa0u; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000054u);
    { int _c = (c->r[3] == c->r[4]); mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]); if (_c) goto L_08a20ae8; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[6] = 0u + 0x0000000au;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a20ac4u; c->r[4] = c->r[30] + 0u; func_08a226a4(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[4] = c->r[30] + 0u;
    c->r[6] = 0u + 0x0000000au;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a20adcu; mem_w32(ram, c->r[29] + 0x00000050u, c->r[2]); func_08a226a4(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]);
L_08a20ae0:
    { c->r[19] = c->r[19] + 0x00000001u; goto L_08a209ec; }
L_08a20ae8:
    c->r[5] = c->r[4] + 0u;
    c->r[6] = 0u + 0x0000000au;
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a20afcu; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]);
    { mem_w32(ram, c->r[29] + 0x00000050u, c->r[2]); goto L_08a20ae0; }
L_08a20b08:
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a20b18u; c->r[6] = 0u + 0x00000001u; func_08a22d78(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a20b28u; mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]); func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08a20bb4; }
L_08a20b30:
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a20b34:
    c->r[2] = 0u + 0x00000039u;
    c->r[3] = c->r[3] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20b64; }
L_08a20b4c:
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]);
    c->r[2] = c->r[2] + 0x00000001u;
L_08a20b5c:
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a2041c; }
L_08a20b64:
    c->r[3] = 0u + 0x00000039u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a20b6c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000060u);
    { int _c = (c->r[4] == c->r[5]); c->r[4] = c->r[4] + 0xffffffffu; if (_c) goto L_08a20b90; }
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    if (c->r[2] == c->r[3]) { c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu); goto L_08a20b6c; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu); goto L_08a20b4c; }
L_08a20b90:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[5] = c->r[5] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[5]);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[2]);
    { c->r[2] = 0u + 0x00000031u; goto L_08a20b5c; }
L_08a20bb4:
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x00000030u; if (_c) goto L_08a20bcc; }
    c->r[2] = c->r[20] & 0x0001u;
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20b34; }
    c->r[3] = 0u + 0x00000030u;
L_08a20bcc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a20bd0:
    c->r[4] = c->r[4] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    if (c->r[2] == c->r[3]) { c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu); goto L_08a20bd0; }
L_08a20be4:
    c->r[4] = c->r[4] + 0x00000001u;
    { mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]); goto L_08a2041c; }
L_08a20bf0:
    { int _c = (c->r[20] == c->r[22]); c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20c04; }
    c->r[2] = c->r[20] + 0x00000001u;
    { mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08a20be4; }
L_08a20c04:
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a20c08:
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[22]);
    c->r[3] = c->r[3] + 0x00000001u;
    { mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]); goto L_08a20b30; }
L_08a20c18:
    { int _c = ((s32)c->r[18] <= 0); c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu); if (_c) goto L_08a20c54; }
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a20c2cu; c->r[6] = 0u + 0x00000001u; func_08a22d78(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a20c3cu; mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]); func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08a20c68; }
    c->r[20] = c->r[20] + 0x00000001u;
L_08a20c48:
    c->r[2] = 0u + 0x0000003au;
    { int _c = (c->r[20] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20c08; }
L_08a20c54:
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a20c58:
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[20]);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[29] + 0x0000005cu, c->r[2]); goto L_08a2041c; }
L_08a20c68:
    { int _c = (c->r[2] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20c58; }
    c->r[2] = c->r[20] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20c58; }
    { c->r[20] = c->r[20] + 0x00000001u; goto L_08a20c48; }
L_08a20c84:
    { int _c = (c->r[20] == c->r[22]); c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a20c04; }
    c->r[2] = ((s32)0u < (s32)c->r[16]) ? 1u : 0u;
    c->r[20] = c->r[20] + c->r[2];
    { mem_w8(ram, c->r[4] + 0x00000000u, c->r[20]); goto L_08a20be4; }
L_08a20c9c:
    { c->r[31] = 0x08a20ca4u; c->r[5] = c->r[17] + 0u; func_08a22eb0(c, ram); }
    { c->r[18] = c->r[2] + 0u; goto L_08a20a30; }
L_08a20cac:
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    { c->r[31] = 0x08a20cb8u; c->r[4] = c->r[30] + 0u; func_08a225c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000050u);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]);
    c->r[6] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[6] = c->r[6] << 2;
    c->r[6] = c->r[6] + 0x00000008u;
    { c->r[31] = 0x08a20cdcu; c->r[5] = c->r[2] + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[4] = c->r[30] + 0u;
    { c->r[31] = 0x08a20cecu; c->r[6] = 0u + 0x00000001u; func_08a22d78(c, ram); }
    { mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]); goto L_08a209e0; }
L_08a20cf4:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u);
    { c->r[31] = 0x08a20d00u; c->r[4] = mem_r32(ram, c->r[29] + 0x0000004cu); func_08a1fc88(c, ram); }
    c->r[20] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[20]);
    c->r[3] = ((s32)c->r[19] < (s32)c->r[5]) ? 1u : 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[2]); if (_c) goto L_08a20b08; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[4] = c->r[30] + 0u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a20d38u; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    c->r[19] = c->r[19] + 0x00000001u;
    { mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]); goto L_08a20cf4; }
L_08a20d44:
    { c->r[31] = 0x08a20d4cu; c->r[5] = mem_r32(ram, c->r[29] + 0x00000058u); func_08a22eb0(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); c->r[4] = mem_r32(ram, c->r[29] + 0x00000008u); if (_c) goto L_08a20960; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[4] = c->r[30] + 0u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a20d68u; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]);
    c->r[4] = c->r[4] + 0xffffffffu;
    { int _c = (c->r[5] != 0u); mem_w32(ram, c->r[29] + 0x00000028u, c->r[4]); if (_c) goto L_08a20d8c; }
L_08a20d80:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000024u);
    { mem_w32(ram, c->r[29] + 0x0000001cu, c->r[2]); goto L_08a2095c; }
L_08a20d8c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[4] = c->r[30] + 0u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a20da0u; c->r[7] = 0u + 0u; func_08a226a4(c, ram); }
    { mem_w32(ram, c->r[29] + 0x00000054u, c->r[2]); goto L_08a20d80; }
L_08a20da8:
    { int _c = (c->r[2] == 0u); c->r[5] = mem_r32(ram, c->r[29] + 0x00000014u); if (_c) goto L_08a2091c; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[19] = c->r[19] + 0x0000001cu;
    c->r[3] = c->r[3] + c->r[19];
    c->r[4] = c->r[4] + c->r[19];
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[3]);
    { mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]); goto L_08a20914; }
L_08a20dd0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08a20de8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u); func_08a228d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[2] = c->r[4] - c->r[2];
    { c->r[19] = c->r[2] & 0x001fu; goto L_08a208dc; }
L_08a20df8:
    c->r[6] = c->r[16] + 0u;
L_08a20dfc:
    { c->r[31] = 0x08a20e04u; c->r[4] = c->r[30] + 0u; func_08a22c60(c, ram); }
    { mem_w32(ram, c->r[29] + 0x0000004cu, c->r[2]); goto L_08a20854; }
L_08a20e0c:
    { c->r[6] = mem_r32(ram, c->r[29] + 0x00000018u); goto L_08a20dfc; }
L_08a20e14:
    c->r[18] = c->r[3] - c->r[19];
    { c->r[19] = 0u + 0u; goto L_08a20798; }
L_08a20e20:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000048u);
    { int _c = (c->r[3] != 0u); c->r[19] = c->r[4] + 0x00000433u; if (_c) goto L_08a20798; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[3] = 0u + 0x00000036u;
    { c->r[19] = c->r[3] - c->r[2]; goto L_08a20798; }
L_08a20e3c:
    { int _c = (c->r[4] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x0000001cu); if (_c) goto L_08a20f88; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[5] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[3] + 0xfffffff8u);
    c->r[7] = mem_r32(ram, c->r[3] + 0xfffffffcu);
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001ce0u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001ce4u);
    { c->r[31] = 0x08a20e78u; c->r[19] = 0u + 0u; func_08a13ee0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    { c->r[31] = 0x08a20e8cu; c->r[5] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[23] = c->r[3] + 0u;
L_08a20e94:
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a20ea0u; c->r[4] = c->r[20] + 0u; func_08a24564(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a20eacu; c->r[18] = c->r[2] + 0u; func_08a14434(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a20ec0u; c->r[7] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[17] = c->r[3] + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[18] + 0x00000030u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a20ee8u; c->r[7] = c->r[23] + 0u; func_08a14324(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[4] = c->r[4] + 0x00000001u;
    { int _c = ((s32)c->r[2] < 0); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[4]); if (_c) goto L_08a20454; }
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001cc0u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001cc4u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a20f14u; c->r[7] = c->r[17] + 0u; func_08a13af4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a20f28u; c->r[7] = c->r[23] + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu); if (_c) goto L_08a206bc; }
    c->r[19] = c->r[19] + 0x00000001u;
    c->r[2] = ((s32)c->r[19] < (s32)c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[22] + 0u; if (_c) goto L_08a204d4; }
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001cc8u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001cccu);
    { c->r[31] = 0x08a20f58u; c->r[7] = c->r[23] + 0u; func_08a13b68(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001cc8u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001cccu);
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[22] = c->r[2] + 0u;
    { c->r[31] = 0x08a20f7cu; c->r[23] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[20] = c->r[2] + 0u;
    { c->r[21] = c->r[3] + 0u; goto L_08a20e94; }
L_08a20f88:
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[3] + 0xfffffff8u);
    c->r[5] = mem_r32(ram, c->r[3] + 0xfffffffcu);
    { c->r[31] = 0x08a20fb0u; c->r[19] = 0u + 0x00000001u; func_08a13b68(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[23] = c->r[3] + 0u;
L_08a20fb8:
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a20fc4u; c->r[4] = c->r[20] + 0u; func_08a24564(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a20fd0u; c->r[18] = c->r[2] + 0u; func_08a14434(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[4] = c->r[20] + 0u;
    c->r[5] = c->r[21] + 0u;
    { c->r[31] = 0x08a20fe4u; c->r[7] = c->r[3] + 0u; func_08a13af4(c, ram); }
    c->r[17] = c->r[3] + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[18] + 0x00000030u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000001cu);
    { int _c = (c->r[19] == c->r[4]); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[3]); if (_c) goto L_08a21034; }
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001cc8u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001cccu);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a21024u; c->r[7] = c->r[17] + 0u; func_08a13b68(c, ram); }
    c->r[19] = c->r[19] + 0x00000001u;
    c->r[20] = c->r[2] + 0u;
    { c->r[21] = c->r[3] + 0u; goto L_08a20fb8; }
L_08a21034:
    c->r[18] = 0x08a50000u;
    c->r[18] = mem_r32(ram, c->r[18] + 0x00001ce0u);
    c->r[19] = 0x08a50000u;
    c->r[19] = mem_r32(ram, c->r[19] + 0x00001ce4u);
    c->r[6] = c->r[22] + 0u;
    c->r[7] = c->r[23] + 0u;
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a21058u; c->r[5] = c->r[19] + 0u; func_08a13a8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a2106cu; c->r[7] = c->r[17] + 0u; func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); c->r[4] = c->r[18] + 0u; if (_c) goto L_08a206bc; }
    c->r[5] = c->r[19] + 0u;
    c->r[6] = c->r[22] + 0u;
    { c->r[31] = 0x08a21084u; c->r[7] = c->r[23] + 0u; func_08a13af4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a21098u; c->r[7] = c->r[17] + 0u; func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); c->r[3] = 0u + 0x00000030u; if (_c) goto L_08a204d4; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000005cu);
L_08a210a4:
    c->r[5] = c->r[5] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[5]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[5] + 0x00000000u);
    if (c->r[2] == c->r[3]) { c->r[5] = mem_r32(ram, c->r[29] + 0x0000005cu); goto L_08a210a4; }
    c->r[5] = c->r[5] + 0x00000001u;
    { mem_w32(ram, c->r[29] + 0x0000005cu, c->r[5]); goto L_08a20454; }
L_08a210c4:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[18] = 0u - c->r[5];
    { int _c = (c->r[18] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u); if (_c) goto L_08a202ec; }
    c->r[3] = c->r[18] & 0x000fu;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[3] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a210fcu; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[16] = (u32)((s32)c->r[18] >> 4);
    c->r[20] = c->r[2] + 0u;
    { int _c = (c->r[16] == 0u); c->r[21] = c->r[3] + 0u; if (_c) goto L_08a202e8; }
    c->r[2] = 0x08a50000u;
    c->r[17] = c->r[2] + 0x00001e20u;
L_08a21114:
    c->r[2] = c->r[16] & 0x0001u;
    if (c->r[2] == 0u) { c->r[16] = (u32)((s32)c->r[16] >> 1); goto L_08a21144; }
    c->r[4] = mem_r32(ram, c->r[17] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000004u);
    c->r[6] = c->r[20] + 0u;
    { c->r[31] = 0x08a21134u; c->r[7] = c->r[21] + 0u; func_08a13b68(c, ram); }
    c->r[19] = c->r[19] + 0x00000001u;
    c->r[20] = c->r[2] + 0u;
    c->r[21] = c->r[3] + 0u;
    c->r[16] = (u32)((s32)c->r[16] >> 1);
L_08a21144:
    { int _c = (c->r[16] != 0u); c->r[17] = c->r[17] + 0x00000008u; if (_c) goto L_08a21114; }
    { c->r[2] = mem_r32(ram, c->r[29] + 0x00000030u); goto L_08a202ec; }
L_08a21154:
    mem_w32(ram, c->r[29] + 0x00000034u, 0u);
L_08a21158:
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    c->r[19] = alx_max(c->r[3], c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[19]);
    { mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]); goto L_08a201b4; }
L_08a21174:
    mem_w32(ram, c->r[29] + 0x00000034u, 0u);
L_08a21178:
    c->r[4] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[2] = c->r[4] + c->r[5];
    c->r[19] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    { c->r[19] = alx_max(c->r[19], c->r[2]); goto L_08a201b4; }
L_08a2119c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000028u);
    mem_w32(ram, c->r[29] + 0x0000003cu, 0u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[4] = 0u - c->r[3];
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]);
    { mem_w32(ram, c->r[29] + 0x00000018u, c->r[4]); goto L_08a20148; }
L_08a211bc:
    c->r[16] = 0u - c->r[16];
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[16]);
    { mem_w32(ram, c->r[29] + 0x00000038u, 0u); goto L_08a2012c; }
L_08a211cc:
    { c->r[31] = 0x08a211d4u; c->r[4] = mem_r32(ram, c->r[29] + 0x00000028u); func_08a14434(c, ram); }
    c->r[7] = c->r[3] + 0u;
    c->r[4] = c->r[22] + 0u;
    c->r[5] = c->r[23] + 0u;
    { c->r[31] = 0x08a211e8u; c->r[6] = c->r[2] + 0u; func_08a1418c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = c->r[3] - c->r[2];
    { mem_w32(ram, c->r[29] + 0x00000028u, c->r[3]); goto L_08a200cc; }
L_08a211fc:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[4] = c->r[18] + c->r[2];
    c->r[19] = c->r[4] + 0x00000432u;
    c->r[3] = 0u - c->r[19];
    c->r[2] = ((s32)c->r[19] < (s32)0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[20] << (c->r[3] & 31u); if (_c) goto L_08a21230; }
    c->r[3] = c->r[4] + 0x00000412u;
    c->r[2] = 0u - c->r[19];
    c->r[2] = c->r[21] << (c->r[2] & 31u);
    c->r[3] = c->r[20] >> (c->r[3] & 31u);
    c->r[16] = c->r[2] | c->r[3];
L_08a21230:
    { c->r[31] = 0x08a21238u; c->r[4] = c->r[16] + 0u; func_08a14434(c, ram); }
    if ((s32)c->r[16] < 0) { c->r[4] = c->r[2] + 0u; goto L_08a21268; }
L_08a21240:
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[3]);
    c->r[2] = 0xfe100000u;
    c->r[19] = c->r[19] + 0xfffffbcdu;
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[5] = c->r[2] + c->r[5];
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[5]);
    { mem_w32(ram, c->r[29] + 0x00000048u, c->r[2]); goto L_08a20004; }
L_08a21268:
    c->r[6] = 0x08a50000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00001c98u);
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00001c9cu);
    { c->r[31] = 0x08a21280u; c->r[5] = c->r[3] + 0u; func_08a13a8c(c, ram); }
    { goto L_08a21240; }
L_08a21288:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = 0u + 0x0000270fu;
    { int _c = (c->r[20] != 0u); mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); if (_c) goto L_08a212b0; }
    c->r[3] = c->r[21] + 0u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001c84u;
    c->r[3] = alx_ins(c->r[3], 0u, 20u, 31u);
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x0000005cu, c->r[2]); if (_c) goto L_08a212bc; }
L_08a212b0:
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001c90u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[2]);
L_08a212bc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { int _c = (c->r[4] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x0000005cu); if (_c) goto L_08a1ff80; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[5] + 0x00000003u);
    c->r[3] = c->r[5] + 0x00000008u;
    c->r[4] = c->r[5] + 0x00000003u;
    if (c->r[2] == 0u) c->r[3] = c->r[4];
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a1ff7c; }
L_08a212e8:
    c->r[21] = alx_ext(c->r[21], 0u, 30u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_08a1ff30; }
L_08a212f4:
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[5] = c->r[12] + 0u;
    mem_w32(ram, c->r[12] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    { c->r[31] = 0x08a21314u; mem_w32(ram, c->r[12] + 0x00000008u, c->r[2]); func_08a22678(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000040u, 0u); goto L_08a1ff24; }
    return; /* fell out of func_08a1fed0 */
}

/* func_08a23094  0x08a23094..0x08a23104  112 bytes, source=sweep */
void func_08a23094(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23094u);
    c->r[2] = 0x7ff00000u;
    c->r[2] = c->r[5] & c->r[2];
    c->r[3] = 0xfcc00000u;
    c->r[4] = c->r[2] + c->r[3];
    c->r[2] = 0u - c->r[4];
    { int _c = ((s32)c->r[4] <= 0); c->r[7] = c->r[4] + 0u; if (_c) goto L_08a230c0; }
L_08a230b0:
    c->r[6] = 0u + 0u;
L_08a230b4:
    c->r[2] = c->r[6] + 0u;
    { c->r[3] = c->r[7] + 0u; return; }
L_08a230c0:
    c->r[4] = (u32)((s32)c->r[2] >> 20);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a230dc; }
    c->r[2] = 0x00080000u;
    { c->r[7] = (u32)((s32)c->r[2] >> (c->r[4] & 31u)); goto L_08a230b0; }
L_08a230dc:
    c->r[4] = c->r[4] + 0xffffffecu;
    c->r[3] = ((s32)c->r[4] < (s32)0x0000001fu) ? 1u : 0u;
    c->r[2] = 0u + 0x0000001fu;
    c->r[4] = c->r[2] - c->r[4];
    { int _c = (c->r[3] == 0u); c->r[7] = 0u + 0u; if (_c) goto L_08a230fc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[5] = c->r[2] << (c->r[4] & 31u);
L_08a230fc:
    { c->r[6] = c->r[5] + 0u; goto L_08a230b4; }
    return; /* fell out of func_08a23094 */
}
