/* runtime/hle/intrman.c -- InterruptManager HLE plus vblank dispatch.
 *
 * The SubIntr calls have no prototype in the 6.6.0 firmware headers (only the
 * stub archive exports them) and no header names the vblank interrupt
 * number. Vblank handlers are called (int idx, void *cookie) at the start
 * of each vertical blank, per sceDisplaySetVblankCallback's contract.
 */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"

/* The interrupt the game registers its frame handler on; the number is
 * observed from the game, not documented anywhere. */
#define PSPRECO_VBLANK_INTR 30

#define MAX_SUBINTR 16

typedef struct {
    int used;
    int enabled;
    u32 intr;
    u32 sub;
    u32 handler;   /* guest address */
    u32 arg;
} SubIntr;

static SubIntr g_subintr[MAX_SUBINTR];

static SubIntr *find_subintr(u32 intr, u32 sub)
{
    int i;
    for (i = 0; i < MAX_SUBINTR; i++)
        if (g_subintr[i].used && g_subintr[i].intr == intr
            && g_subintr[i].sub == sub)
            return &g_subintr[i];
    return NULL;
}

/* int sceKernelRegisterSubIntrHandler(int intr, int sub, void *handler,
 *                                     void *arg) */
void hle_sceKernelRegisterSubIntrHandler(CpuCtx *c, u8 *ram)
{
    u32 intr = HLE_A0, sub = HLE_A1, handler = HLE_A2, arg = HLE_A3;
    SubIntr *s = find_subintr(intr, sub);
    int i;
    (void)ram;

    if (!s) {
        for (i = 0; i < MAX_SUBINTR; i++)
            if (!g_subintr[i].used) { s = &g_subintr[i]; break; }
    }
    if (!s) {
        hle_log("[hle] sceKernelRegisterSubIntrHandler(intr=%u, sub=%u): "
                "no free slot (MAX_SUBINTR=%d)", intr, sub, MAX_SUBINTR);
        HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY);
        return;
    }
    s->used = 1;
    s->intr = intr;
    s->sub = sub;
    s->handler = handler;
    s->arg = arg;
    /* Registration does not enable: sceKernelEnableSubIntr does. */
    hle_log("[hle] sceKernelRegisterSubIntrHandler(intr=%u, sub=%u, "
            "handler=%08x, arg=%08x)%s", intr, sub, handler, arg,
            intr == PSPRECO_VBLANK_INTR ? "  [vblank]" : "");
    HLE_RET(0);
}

void hle_sceKernelReleaseSubIntrHandler(CpuCtx *c, u8 *ram)
{
    SubIntr *s = find_subintr(HLE_A0, HLE_A1);
    (void)ram;
    if (!s) {
        hle_log("[hle] sceKernelReleaseSubIntrHandler(intr=%u, sub=%u): "
                "not registered", HLE_A0, HLE_A1);
        HLE_RET(SCE_KERNEL_ERROR_ERROR);
        return;
    }
    s->used = 0;
    s->enabled = 0;
    hle_log("[hle] sceKernelReleaseSubIntrHandler(intr=%u, sub=%u)",
            HLE_A0, HLE_A1);
    HLE_RET(0);
}

void hle_sceKernelEnableSubIntr(CpuCtx *c, u8 *ram)
{
    SubIntr *s = find_subintr(HLE_A0, HLE_A1);
    (void)ram;
    if (!s) {
        hle_log("[hle] sceKernelEnableSubIntr(intr=%u, sub=%u): not "
                "registered", HLE_A0, HLE_A1);
        HLE_RET(SCE_KERNEL_ERROR_ERROR);
        return;
    }
    s->enabled = 1;
    hle_log("[hle] sceKernelEnableSubIntr(intr=%u, sub=%u)", HLE_A0, HLE_A1);
    HLE_RET(0);
}

/* Run every enabled handler for `intr` on the current fiber, saving and
 * restoring the caller's context around each; args are (sub, cookie).
 * Handlers run when the frame heartbeat advances rather than preemptively
 * -- equivalent for handlers that only touch their own state. */
int intrman_dispatch(CpuCtx *c, u8 *ram, u32 intr)
{
    int i, ran = 0;
    for (i = 0; i < MAX_SUBINTR; i++) {
        SubIntr *s = &g_subintr[i];
        RecompFn fn;
        CpuCtx saved;
        if (!s->used || !s->enabled || s->intr != intr) continue;
        fn = recomp_lookup(s->handler);
        if (!fn) {
            recomp_trap_unknown_indirect(c, ram, c->r[R_RA], s->handler);
            continue;
        }
        saved = *c;
        c->r[R_A0] = s->sub;
        c->r[R_A1] = s->arg;
        c->r[R_RA] = 0;
        fn(c, ram);
        *c = saved;
        ran++;
    }
    return ran;
}

int intrman_vblank_intr(void) { return PSPRECO_VBLANK_INTR; }
