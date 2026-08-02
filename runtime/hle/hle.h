/* runtime/hle/hle.h -- the HLE contract. Handlers bind to imports by NID,
 * not by stub address, so the same implementations serve any title.
 * Calling convention is o32: arguments in $a0..$a3, result in $v0 (and $v1
 * for 64-bit) -- but see hle_arg() for arguments beyond the fourth. */

#ifndef PSPRECO_HLE_H
#define PSPRECO_HLE_H

#include "pspreco.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*HleFn)(CpuCtx *c, u8 *ram);

typedef struct HleEntry {
    u32         nid;
    const char *name;
    HleFn       fn;
} HleEntry;

/* The single registration table, in runtime/hle/hle_table.c. */
extern const HleEntry g_hle_impl[];
extern const unsigned g_hle_impl_count;

void hle_init(void);
void hle_set_trace(int on);
int  hle_trace_enabled(void);

/* The 4 MB volatile block, as on hardware: sceKernelVolatileMemLock hands the
 * whole of it to the game, which stages multi-megabyte archives across it. So
 * nothing the runtime owns may live inside it -- see threadman.c's interrupt
 * stack, which used to and silently ate 4 KB out of the middle of any archive
 * bigger than 3 MB. */
#define PSP_VOLATILE_BASE 0x08400000u
#define PSP_VOLATILE_SIZE 0x00400000u

/* o32 argument access */
#define HLE_A0 (c->r[R_A0])
#define HLE_A1 (c->r[R_A1])
#define HLE_A2 (c->r[R_A2])
#define HLE_A3 (c->r[R_A3])

/* Arguments 5+ arrive in $t0..$t3, NOT on the stack: imports go through
 * syscall thunks and the kernel reads caller registers directly. */
static inline u32 hle_arg(CpuCtx *c, u8 *ram, unsigned index)
{
    (void)ram;
    return c->r[R_T0 + index];
}

#define HLE_RET(v)   do { c->r[R_V0] = (u32)(v); c->r[R_V1] = 0u; } while (0)
#define HLE_RET64(v) do { u64 _v = (u64)(v);                         \
                          c->r[R_V0] = (u32)_v;                      \
                          c->r[R_V1] = (u32)(_v >> 32); } while (0)

/* Read/write guest structures. */
static inline u32 hle_r32(u8 *ram, u32 a) { return mem_r32(ram, a); }
static inline void hle_w32(u8 *ram, u32 a, u32 v) { mem_w32(ram, a, v); }
const char *hle_cstr(u8 *ram, u32 addr);

/* Logging; every HLE call is traceable. */
void hle_log(const char *fmt, ...);

/* Non-zero if the PRX at `path` is one whose exports pspreco provides itself,
 * in which case the value is the module id sceKernelLoadModule reports.
 * Defined in runtime/hle/modulemgr.c. */
int hle_module_id_for_path(const char *path);

#ifdef __cplusplus
}
#endif
#endif /* PSPRECO_HLE_H */
